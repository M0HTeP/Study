# -*- coding: utf-8 -*-
"""
Created on Mon Feb 15 13:13:41 2021

@author: MoHTeP
"""



# Задание 1

import matplotlib.pyplot as plt
# % matplotlib  inline
 
plt.plot([1, 2, 3, 4, 5], [1, 2, 3, 4, 5])
 
plt.show()
 



# Задание 2
 
import matplotlib.pyplot as plt
import numpy as np
 
x = np.linspace(0, 10, 50)
y = x
 
plt.title("Линейная зависимость y = x")
plt.xlabel("x")
plt.ylabel("y")
plt.grid()
plt.plot(x, y, 'r--')
plt.show()
 




# Задание 3

import matplotlib.pyplot as plt
import numpy as np
 
x = np.linspace(0, 10, 50)
y1 = x
y2 = [i**2 for i in x]
plt.title("Зависимости: y1 = x, y2 = x^2")
plt.xlabel("x")
plt.ylabel("y1, y2")
plt.grid()
plt.plot(x, y1, x, y2)
plt.show()
 




# Задание 4

import matplotlib.pyplot as plt
import numpy as np
 
x = np.linspace(0, 10, 50)
y1 = x
y2 = [i**2 for i in x]
plt.figure(figsize = (9,9))
plt.subplot(2, 1, 1)
plt.plot(x, y1)
plt.title("Зависимости: у1 = х, у2 = х^2")
plt.ylabel("y1", fontsize = 14)
plt.grid(True)
plt.subplot(2, 1, 2)
plt.plot(x, y2)
plt.xlabel("x", fontsize = 14)
plt.ylabel("y2", fontsize = 14)
plt.grid(True)
plt.show()
 
 
 
 
 
# Задание 5
 
import matplotlib.pyplot as plt
import numpy as np
 
fruits = ["аппле", "пеач", "оранге", "бананаа!1", "милонов"]
counts = [34, 25, 43, 31, 17]
plt.bar(fruits, counts)
plt.title("Фруитс!!")
plt.xlabel('Фруит')
plt.ylabel("Каунт")
plt.show()
 





# Задание 6
 
import matplotlib.pyplot as plt
import numpy as np
from matplotlib.ticker import (MultipleLocator, FormatStrFormatter, AutoMinorLocator)
 
x = np.linspace(0, 10, 10)
y1 = 4*x
y2 = [i**2 for i in x]
fig, ax = plt.subplots(figsize = (8, 6))
ax.set_title("Графики зависимостей: y1 = 4*x, y2 = x^2", fontsize = 16)
ax.set_xlabel('x', fontsize = 14)
ax.set_ylabel('y1, y2', fontsize = 14)
ax.grid(which = 'major', linewidth = 1.2)
ax.grid(which = 'minor', linestyle = '--', color = 'gray', linewidth = 0.5)
ax.scatter(x, y1, c = 'red', label = 'y1 = 4*x')
ax.plot(x, y2, label = 'y2 = x^2')
ax.legend()
ax.xaxis.set_minor_locator(AutoMinorLocator())
ax.yaxis.set_minor_locator(AutoMinorLocator())
ax.tick_params(which = 'major', length = 10, width = 2)
ax.tick_params(which = 'minor', length = 5, width = 1)
plt.show()