import gradio as gr
import pandas as pd
import pickle
import numpy as np

# Load the Model
with open("diabetes_prediction_lr_pipeline.pkl", "rb") as f:
    best_model = pickle.load(f)

def predict_diabetes(
    pregnancies,
    glucose,
    blood_pressure,
    skin_thickness,
    insulin,
    bmi,
    diabetes_pedigree,
    age
):
    input_value = pd.DataFrame([{
    "Pregnancies": pregnancies,
    "Glucose": glucose,
    "BloodPressure": blood_pressure,
    "SkinThickness": skin_thickness,
    "Insulin": insulin,
    "BMI": bmi,
    "DiabetesPedigreeFunction": diabetes_pedigree,
    "Age": age
}])
    prediction = best_model.predict(input_value)[0]

    if prediction == 1:
        return "Diabetic: Yes"
    else:
        return "Diabetic: No"


inputs=[
    gr.Number(label="Pregnancies(0–17)"),
    gr.Number(label="Glucose(70–200)"),
    gr.Number(label="Blood Pressure(40–122)"),
    gr.Number(label="Skin Thickness(0–99)"),
    gr.Number(label="Insulin(0–846)"),
    gr.Number(label="BMI(15–67)"),
    gr.Number(label="Function value(0.05–2.5)"),
    gr.Number(label="Age(18–90)")
]

app = gr.Interface(
    fn=predict_diabetes,
    inputs=inputs,
    outputs=gr.Textbox(label="Prediction Result"),
    title="Diabetes Prediction System",
    description="Enter patient medical values."
)

app.launch(share=True)