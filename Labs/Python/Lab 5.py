# -*- coding: utf-8 -*-
"""
Created on Fri Jun  4 09:27:40 2021

@author: MoHTeP
"""



from IPython import get_ipython
get_ipython().run_line_magic('matplotlib', 'inline') # Без магии это чудо не работает =)

import numpy as np
import matplotlib.pyplot as plt
import pandas as pd

def read_data(input_file):
   input_data = np.loadtxt(input_file, delimiter = None)
    
   dates = pd.date_range('1950-01', periods = input_data.shape[0], freq = 'M')

   index = dates
   output = pd.Series(input_data[:index])	
   return output
	
   if __name__=='__main__':
    
       input_file = "/Users/MoHTeP/Desktop/GitHUB/Study/Labs/Python/Lab5.txt"
    
timeseries = read_data("/Users/MoHTeP/Desktop/GitHUB/Study/Labs/Python/Lab5.txt")

plt.figure()
timeseries.plot()
plt.show()
   
   
   
timeseries['1980':'1990'].plot() 

# Визуализация
plt.show()

timeseries_mm = timeseries.resample("A").mean() 
timeseries_mm.plot(style = 'g--') 
plt.show()

timeseries_mm = timeseries.resample("A").median() 
timeseries_mm.plot() 
plt.show()

timeseries.rolling(window = 12, center = False).mean().plot(style = '-g') 
plt.show()
