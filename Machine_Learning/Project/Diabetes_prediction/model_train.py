# Import libraries
import pandas as pd
import numpy as np
import pickle

#sklearn preprocessing
from sklearn.model_selection import train_test_split
from sklearn.pipeline import Pipeline
from sklearn.compose import ColumnTransformer
from sklearn.preprocessing import StandardScaler
from sklearn.impute import SimpleImputer
from sklearn.linear_model import LogisticRegression
from sklearn.model_selection import cross_val_score
from sklearn.model_selection import GridSearchCV
from sklearn.metrics import accuracy_score, classification_report, confusion_matrix, precision_score, recall_score, f1_score
from sklearn.svm import SVC
from sklearn.ensemble import RandomForestClassifier

# dataset loading
df = pd.read_csv("diabetes.csv")
print(df.head(10))

print("Shape of dataset:",df.shape)
print("Column names:",df.columns)

# Data Preprocessing
# missing values
missing_values = ['Glucose','BloodPressure','SkinThickness','Insulin','BMI']

df[missing_values] = (df[missing_values].replace(0, np.nan))
for feature in missing_values:
    df[feature] = df[feature].fillna(df[feature].median())

print(df.isnull().sum())
print(df.dtypes)
numerical_cols = df.select_dtypes(include=['int64', 'float64']).columns
categorical_cols = df.select_dtypes(include=['object', 'category']).columns

print("Numerical columns:", numerical_cols)
print("Categorical columns:", categorical_cols)

print(df.head(10))
print(df.max())
print(df.min())
print(len(df.columns))
print(len(df))
print(df.shape)

# Encoding
feature = df.drop("Outcome", axis=1)
target = df["Outcome"]

df['Outcome']=df['Outcome'].astype(int)
print(df['Outcome'].value_counts())

# Scaling
feature = df.drop("Outcome", axis=1)
target = df["Outcome"]
scaler = StandardScaler()
features_array = scaler.fit_transform(feature)
scaled_features = pd.DataFrame(features_array,columns=feature.columns)
print(scaled_features.head())

# outlier detection
features_after_outlier = feature.copy()

for feature_name in features_after_outlier.columns:
    q1 = features_after_outlier[feature_name].quantile(0.25)
    q3 = features_after_outlier[feature_name].quantile(0.75)
    interquartile = q3-q1

    lower_limit = q1-1.5*interquartile
    upper_limit = q3+ 1.5*interquartile
    features_after_outlier[feature_name] = (features_after_outlier[feature_name].clip(lower=lower_limit, upper=upper_limit))

print(features_after_outlier.head())

# feature engineering
engineered_features = feature.copy()
engineered_features["BMI_Age_Interaction"] = (engineered_features["BMI"] * engineered_features["Age"])
print(engineered_features.head())

# Train–test split
X_train, X_test, y_train, y_test = train_test_split(feature, target, test_size=0.2, random_state=42, stratify=target)

# feature classification
numeric_features = feature.columns
print(numeric_features)

# for numerical
numeric_transformer = Pipeline(steps=[
    ("imputer", SimpleImputer(strategy="median")),
    ("scaler", StandardScaler())
])

preprocessor = ColumnTransformer(
    transformers=[
        ("num", numeric_transformer, numeric_features)
    ]
)

# logistic regression pipeline
pipeline_lr = Pipeline(steps=[
    ("preprocessor", preprocessor),
    ("classifier", LogisticRegression(max_iter=1000))
])

# support vector machine pipeline
pipeline_svm = Pipeline(steps=[
    ("preprocessor", preprocessor),
    ("classifier", SVC(kernel="rbf"))
])

# random forest pipeline
pipeline_rf = Pipeline(steps=[
    ("preprocessor", preprocessor),
    ("classifier", RandomForestClassifier(random_state=42))
])

pipeline_lr.fit(X_train, y_train)
pipeline_svm.fit(X_train, y_train)
pipeline_rf.fit(X_train, y_train)

models = {
    "Logistic Regression": pipeline_lr,
    "SVM": pipeline_svm,
    "Random Forest": pipeline_rf
}

for name, model in models.items():
    scores = cross_val_score(model, X_train, y_train, cv=5, scoring="accuracy")
    print(f"{name}: Mean Accuracy = {scores.mean():.4f}, Standard deviation = {scores.std():.4f}")

final_model = pipeline_lr

param_grid = {
    "classifier__C": [0.001, 0.01, 0.1, 1, 10, 100],
    "classifier__penalty": ["l2"],
    "classifier__solver": ["lbfgs"]
}
grid_search = GridSearchCV(estimator=final_model,param_grid=param_grid,cv=5,scoring="accuracy",n_jobs=-1)
grid_search.fit(X_train, y_train)

print("Parameters:",param_grid)
print("Best Parameters:",grid_search.best_params_)
print("Best Accuracy:",grid_search.best_score_)

best_model = grid_search.best_estimator_
print("Best Model:",best_model)

print(grid_search.best_params_)
print(grid_search.best_score_)
print(best_model.named_steps)

# performance evaluation
y_pred = best_model.predict(X_test)
test_accuracy = accuracy_score(y_test, y_pred)
test_precision = precision_score(y_test, y_pred)
test_recall = recall_score(y_test, y_pred)
test_f1 = f1_score(y_test, y_pred)
print("Test Set Performance Metrics")
print("Accuracy :", test_accuracy)
print("Precision:", test_precision)
print("Recall   :", test_recall)
print("F1 Score :", test_f1)

print("Confusion Matrix:", confusion_matrix(y_test, y_pred))
print("Classification Report:", classification_report(y_test, y_pred))


# save model
with open("diabetes_prediction_lr_pipeline.pkl", "wb") as f:
    pickle.dump(pipeline_lr,f)

print("Best model pipeline saved as diabetes_prediction_lr_pipeline.pkl")