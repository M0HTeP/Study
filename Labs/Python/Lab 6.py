# -*- coding: utf-8 -*-
"""
Created on Mon Jun  7 09:35:59 2021

@author: MoHTeP
"""
# Практическая работа № 6. Нейронные сети
import matplotlib.pyplot as plt 
import neurolab as nl


# Вводим данные и целевые значения
input = [[0, 0], [0, 1], [1, 0], [1, 1]]
target = [[0], [0], [0], [1]]

net = nl.net.newp([[0, 1],[0, 1]], 1)

error_progress = net.train(input, target, epochs=100, show=10, lr=0.1)

plt.figure() 
plt.plot(error_progress) 
plt.xlabel('Number of epochs') 
plt.ylabel('Training error') 
plt.grid() 
plt.show()


# Одноуровневая нейронная сеть

import numpy as np 
import matplotlib.pyplot as plt 
import neurolab as nl

input_data = np.loadtxt('C:/Users/MoHTeP/Desktop/GitHUB/Study/Labs/Python/Lab6.txt')

data = input_data[:, 0:2] 
labels = input_data[:, 2:]

# Визуализация
plt.figure() 
plt.scatter(data[:,0], data[:,1])
plt.xlabel('Dimension 1') 
plt.ylabel('Dimension 2') 
plt.title('Input data')


dim1_min, dim1_max = data[:,0].min(), data[:,0].max() 
dim2_min, dim2_max = data[:,1].min(), data[:,1].max()

# Определяем количество нейронов 
nn_output_layer = labels.shape[1]


dim1 = [dim1_min, dim1_max] 
dim2 = [dim2_min, dim2_max] 
neural_net = nl.net.newp([dim1, dim2], nn_output_layer)

error = neural_net.train(data, labels, epochs = 200, show = 20, lr = 0.01)

#Визуализация
plt.figure() 
plt.plot(error) 
plt.xlabel('Number of epochs') 
plt.ylabel('Training error') 
plt.title('Training error progress') 
plt.grid() 
plt.show()

print('\nTest Results:') 

data_test = [[1.5, 3.2], [3.6, 1.7], [3.6, 5.7], [1.6, 3.9]] 
for item in data_test: 
    print(item, '-->', neural_net.sim([item])[0])



# Многоуровневая нейронная сеть



import numpy as np 
import matplotlib.pyplot as plt 
import neurolab as nl


# Создаем точку данных на основе уравнения
min_val = -30 
max_val = 30 
num_points = 160 
x = np.linspace(min_val, max_val, num_points) 
y = 2 * np.square(x) + 8 # Уравнение
y /= np.linalg.norm(y)


data = x.reshape(num_points, 1) 
labels = y.reshape(num_points, 1)

plt.figure() 
plt.scatter(data, labels) 
plt.xlabel('Dimension 1') 
plt.ylabel('Dimension 2') 
plt.title('Data-points')


# Создаем нейронную сети с 2мя скрытыми слоями
neural_net = nl.net.newff([[min_val, max_val]], [10, 6, 1])

# Алгоритм обучкения градиенту
neural_net.trainf = nl.train.train_gd


# Лбучение сети
error = neural_net.train(data, labels, epochs = 1000, show = 100, goal = 0.01)

output = neural_net.sim(data) 
y_pred = output.reshape(num_points)

# Визуализация
plt.figure() 
plt.plot(error) 
plt.xlabel('Number of epochs') 
plt.ylabel('Error') 
plt.title('Training error progress')


# Сравнение результатов
x_dense = np.linspace(min_val, max_val, num_points * 2) 
y_dense_pred = neural_net.sim(x_dense.reshape(x_dense.size,1)).reshape(x_dense.size) 
plt.figure() 
plt.plot(x_dense, y_dense_pred, '-', x, y, '.', x, y_pred, 'p') 
plt.title('Actual vs predicted') 
plt.show()

