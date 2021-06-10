# -*- coding: utf-8 -*-
"""
Created on Mon Feb 15 13:34:22 2021

@author: MoHTeP
"""


# Практическая работа № 2. Подготовка данных. Регрессия.



import imp
import numpy as np
from sklearn import preprocessing
 
# Входные данные
input_data = np.array([[2.1, -1.9, 5.5],
[-1.5, 2.4, 3.5],
[0.5, -7.9, 5.6],
[5.9, 2.3, -5.8]])
 
# Преобразуем данные в логические значения
data_binarized = preprocessing.Binarizer(threshold = 0.5).transform(input_data)
print('\nBinarized data:\n', data_binarized)
print('Mean = ', input_data.mean(axis = 0)) # Среднее отклонение
print("std deviation = ", input_data.std(axis = 0)) # Стандартное отклонение
 
# Удаляем среднее и стандартное отклонение
data_scaled = preprocessing.scale(input_data)
print('Mean =', data_scaled.mean(axis = 0))
print("Std deviation =", data_scaled.std(axis = 0))
 
# Используем метод масштабирования
data_scaler_minmax = preprocessing.MinMaxScaler(feature_range = (0,1))
data_scaled_minmax = data_scaler_minmax.fit_transform(input_data)
print("\nMin max scaled data:\n", data_scaled_minmax)
 
# Метод наименьших абсолютныз отклонений
data_normalized_l1 = preprocessing.normalize(input_data, norm = 'l1')
print('\nL1 normalized data:\n', data_normalized_l1)
 
# Метод наименьших квадратов
data_normalized_l2 = preprocessing.normalize(input_data, norm= 'l2')
print("\nL2 normalized data:\n", data_normalized_l2)
 

# Маркировка данных
# Определение образцов меток
input_labels = ['red', 'black', 'red', 'green', 'black', 'yellow', 'white']
 
# Создание и обучение объекта кодировщика меток
encoder = preprocessing.LabelEncoder()
encoder.fit(input_labels)
 
# Проверка производительности путем кодирования
test_labels = ['green', 'red', 'black']
encoded_values = encoder.transform(test_labels)
print("\nLabels =", test_labels)
print("Encoded values =", list(encoded_values))
 
# Проверка производительности путем декодирования
encoded_values = [3,  0, 4, 1]
decoded_list = encoder.inverse_transform(encoded_values)
print("\nEncoded values =", encoded_values)
print("\nDecoded labels =", list(decoded_list))
 
 
# Линейный регрессор
import numpy as np
from sklearn import linear_model
import sklearn.metrics as sm
import matplotlib.pyplot as plt

# Выбираем файл с данными
input = 'C:/Users/MoHTeP/Desktop/GitHUB/Study/Labs/Python/linear.txt' 

input_data = np.loadtxt(input, delimiter=',')
X, y = input_data[:, :-1], input_data[:, -1]


# Обучаем модель
num_training = 5
training_samples = int(0.6 * len(X)) 
testing_samples = len(X) - num_training
X_train, y_train = X[:training_samples], y[:training_samples]
X_test, y_test = X[training_samples:], y[training_samples:]

# Создаем объект линейного регрессора
reg_linear = linear_model.LinearRegression() 

reg_linear.fit(X_train, y_train)

# Создаем прогноз
y_test_pred = reg_linear.predict(X_test)  

plt.scatter(X_test, y_test, color = 'red')
plt.plot(X_test, y_test_pred, color = 'black', linewidth = 2)
plt.xticks(())
plt.yticks(())
plt.show()

print("Performance of Linear regressor:")
print("Mean absolute error =", round(sm.mean_absolute_error(y_test, y_test_pred), 2))
print("Mean squared error =", round(sm.mean_squared_error(y_test, y_test_pred), 2))
print("Median abs error =", round(sm.median_absolute_error(y_test, y_test_pred), 2))
print("Explain var scr =", round(sm.explained_variance_score(y_test, y_test_pred),2))
print("R2 score =", round(sm.r2_score(y_test, y_test_pred), 2))


import numpy as np 
from sklearn import linear_model
import sklearn.metrics as sm
import matplotlib.pyplot as plt 
from sklearn.preprocessing import PolynomialFeatures 


# Выбираем файл с данными
input = 'C:/Users/MoHTeP/Desktop/GitHUB/Study/Labs/Python/Mul_linear.txt' 

input_data = np.loadtxt(input, delimiter=',')
X, y = input_data[:, :-1], input_data[:, -1]


# Обучаем модель
training_samples = int(0.6 * len(X))  
testing_samples = len(X) - num_training
X_train, y_train = X[:training_samples], y[:training_samples] 
X_test, y_test = X[training_samples:], y[training_samples:]


# Создаем объект линейного регрессора
reg_linear_mul = linear_model.LinearRegression()

reg_linear_mul.fit(X_train, y_train) 


# Создаем прогноз
y_test_pred = reg_linear_mul.predict(X_test) 
print("Performance of Linear regressor:") 
print("Mean absolute error =", round(sm.mean_absolute_error(y_test, y_test_pred), 2)) 
print("Mean squared error =", round(sm.mean_squared_error(y_test, y_test_pred), 2)) 
print("Median abs error =", round(sm.median_absolute_error(y_test, y_test_pred), 2)) 
print("Explain var scr=", round(sm.explained_variance_score(y_test, y_test_pred), 2)) 
print("R2 score =", round(sm.r2_score(y_test, y_test_pred), 2))

# Создаем полином и обучаем регрессор
polynomial = PolynomialFeatures(degree = 10) 
X_train_transformed = polynomial.fit_transform(X_train)
datapoint = [[2.23, 1.35, 1.12]]
poly_datapoint = polynomial.fit_transform(datapoint)
poly_linear_model = linear_model.LinearRegression()
poly_linear_model.fit(X_train_transformed, y_train)
print("\nLinear regression:\n", reg_linear_mul.predict(datapoint))
print("\nPolynomial regression:\n", poly_linear_model.predict(poly_datapoint))