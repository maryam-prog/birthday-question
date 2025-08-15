#step one
import pandas as pd
import seaborn as sns
import matplotlib.pyplot as plt
df = pd.read_csv(r"C:\Users\Shift-Tech\Downloads\Iris (1).csv")
print(df)

#step two
print("\nfirst 5 rows:")
print(df.head())

print("\ndataset shape (rows, columns):", df.shape)

print("\nmissing values per column:")
print(df.isnull().sum())

print("\nsummary statistics:")
print(df.describe())

print("\nunique species:")
print(df['Species'].value_counts())

#step three