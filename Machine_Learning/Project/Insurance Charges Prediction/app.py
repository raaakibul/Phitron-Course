# web interface
import gradio as gr
import pandas as pd
import pickle

# Load the Model
with open("insurance_charges_prediction_rf_pipeline.pkl", "rb") as f:
    best_model = pickle.load(f)

def predict_insurance(age, sex, bmi, children, smoker, region):
    input_data = pd.DataFrame([{
        "age": age,
        "sex": sex,
        "bmi": bmi,
        "children": children,
        "smoker": smoker,
        "region": region,
        "age_squared": age ** 2
    }])
    
    prediction = best_model.predict(input_data)[0]
    return f"Estimated Insurance Charges: ${prediction:.2f}"

interface = gr.Interface(
    fn=predict_insurance,
    inputs=[
        gr.Number(label="Age"),
        gr.Dropdown(["male", "female"], label="Sex"),
        gr.Number(label="BMI"),
        gr.Number(label="Number of Children"),
        gr.Dropdown(["yes", "no"], label="Smoker"),
        gr.Dropdown(
            ["northeast", "northwest", "southeast", "southwest"],
            label="Region"
        )
    ],
    outputs="text",
    title="Insurance Charges Prediction App",
    description="Predict insurance costs using a trained Random Forest model"
)

interface.launch()
