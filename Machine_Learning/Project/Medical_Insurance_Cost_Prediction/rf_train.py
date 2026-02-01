# Data Loading
import pandas as pd
import pickle
from sklearn.pipeline import Pipeline
from sklearn.compose import ColumnTransformer
from sklearn.preprocessing import OneHotEncoder, StandardScaler
from sklearn.impute import SimpleImputer
from sklearn.ensemble import RandomForestRegressor

from sklearn.linear_model import LinearRegression
from sklearn.tree import DecisionTreeRegressor
from sklearn.ensemble import RandomForestRegressor
from sklearn.model_selection import cross_val_score

from sklearn.pipeline import Pipeline
from sklearn.ensemble import RandomForestRegressor


df = pd.read_csv("insurance.csv")
df.head(10)

# Target and features
X = df.drop("charges", axis=1)
y = df["charges"]

print("Feature columns:", list(X.columns))
print("Target column:", y.name)

# Identify column types
numeric_features = X.select_dtypes(include=['int64', 'float64']).columns
categorical_features = X.select_dtypes(include=['object']).columns

print("Numerical Features:", list(numeric_features))
print("Categorical Features:", list(categorical_features))

#  Train–test split
from sklearn.model_selection import train_test_split
X_train, X_test, y_train, y_test = train_test_split(
    X,
    y,
    test_size=0.2,
    random_state=42
)

print("Training set size:", X_train.shape)
print("Test set size:", X_test.shape)

numeric_pipeline = Pipeline(steps=[
    ('imputer', SimpleImputer(strategy='median')),
    ('scaler', StandardScaler())
])

print("\nNumerical preprocessing pipeline:")
print(numeric_pipeline)

categorical_pipeline = Pipeline(steps=[
    ('imputer', SimpleImputer(strategy='most_frequent')),
    ('encoder', OneHotEncoder(handle_unknown='ignore'))
])

print("\nCategorical preprocessing pipeline:")
print(categorical_pipeline)

preprocessor = ColumnTransformer(transformers=[
    ('num', numeric_pipeline, numeric_features),
    ('cat', categorical_pipeline, categorical_features)
])

print("\nCombined Preprocessor:")
print(preprocessor)

pipeline = Pipeline(steps=[
    ('preprocessing', preprocessor),
    ('model', RandomForestRegressor(
        n_estimators=100,
        random_state=42
    ))
])

pipeline.fit(X, y)
models = {
    "Linear Regression": LinearRegression(),
    "Decision Tree Regressor": DecisionTreeRegressor(random_state=42),
    "Random Forest Regressor": RandomForestRegressor(
        n_estimators=100,
        random_state=42
    )
}

# model comparison

model_scores = {}

for name, model in models.items():
    pipeline = Pipeline(steps=[
        ('preprocessing', preprocessor),
        ('model', model)
    ])
    
    scores = cross_val_score(
        pipeline,
        X_train,
        y_train,
        cv=5,
        scoring='r2'
    )
    
    model_scores[name] = scores.mean()
    
    print(f"{name}")
    print(f"R² Scores: {scores}")
    print(f"Mean R² Score: {scores.mean():.4f}")
    print("-" * 55)
    
for model_name, score in model_scores.items():
    print(f"{model_name}: Mean R² = {score:.4f}")
    
best_model_name = max(model_scores, key=model_scores.get)
print("\nSelected Primary Model:", best_model_name)


final_pipeline = Pipeline(steps=[
    ('preprocessing', preprocessor),
    ('model', RandomForestRegressor(
        n_estimators=100,
        random_state=42
    ))
])

print("Final Training Pipeline:",final_pipeline)

final_pipeline.fit(X_train, y_train)

# Check training score
train_score = final_pipeline.score(X_train, y_train)
print("Training R² Score:", train_score)

from sklearn.model_selection import cross_val_score
import numpy as np

cv_scores = cross_val_score(
    final_pipeline,
    X_train,
    y_train,
    cv=5,
    scoring='r2'
)

print("Cross-Validation R² scores:", cv_scores)
print("Average R² score:", np.mean(cv_scores))
print("Standard Deviation:", np.std(cv_scores))

from sklearn.model_selection import GridSearchCV

param_grid = {
    'model__n_estimators': [100, 200],
    'model__max_depth': [None, 10, 20],
    'model__min_samples_split': [2, 5]
}

grid_search = GridSearchCV(
    final_pipeline,
    param_grid=param_grid,
    cv=5,
    scoring='r2',
    n_jobs=-1
)

grid_search.fit(X_train, y_train)

print("Parameters tested:")
print(param_grid)

print("\nBest Parameters Found:")
print(grid_search.best_params_)

print("Best Cross-Validation R² Score:")
print(grid_search.best_score_)

best_model = grid_search.best_estimator_

print("Best Model Selected:")
print(best_model)
from sklearn.metrics import mean_absolute_error, mean_squared_error, r2_score
# MODEL PERFORMANCE EVALUATION
y_pred = best_model.predict(X_test)

mae = mean_absolute_error(y_test, y_pred)
rmse = np.sqrt(mean_squared_error(y_test, y_pred))
r2 = r2_score(y_test, y_pred)

print("Mean Absolute Error (MAE):", mae)
print("Root Mean Squared Error (RMSE):", rmse)
print("R² Score:", r2)

# Save model

with open("insurance_charges_prediction_rf_pipeline.pkl", "wb") as f:
    pickle.dump(final_pipeline, f)

print("Random Forest pipeline saved as insurance_charges_prediction_rf_pipeline.pkl")