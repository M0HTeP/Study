# -*- coding: utf-8 -*-
"""
Created on Mon Jun  7 09:51:12 2021

@author: MoHTeP
"""

# Практическая работа № 7. Генетический алгоритм
import random
from deap import base, creator, tools

# Функция оценки
def eval_func(individual): 
    target_sum = 15 
    return len(individual) - abs(sum(individual) - target_sum),

# Набор инструментов
def create_toolbox(num_bits): 
    creator.create("FitnessMax", base.Fitness, weights=(1.0,)) 
    creator.create("Individual", list, fitness=creator.FitnessMax)
    
    
    # Инициализация панели инструментов
    toolbox = base.Toolbox() 
    toolbox.register("attr_bool", random.randint, 0, 1) 
    toolbox.register("individual", tools.initRepeat, creator.Individual, toolbox.attr_bool, num_bits) 
    toolbox.register("population", tools.initRepeat, list, toolbox.individual)
    
    
    # Оператор оценки
    toolbox.register("evaluate", eval_func)
    
    # Оператор кроссовера
    toolbox.register("mate", tools.cxTwoPoint)
    
    # Оператор мутации
    toolbox.register("mutate", tools.mutFlipBit, indpb = 0.05)

    # Оператор разведения
    toolbox.register("select", tools.selTournament, tournsize = 3) 
    return toolbox 
    if __name__ == "__main__": 
        num_bits = 45 
        toolbox = create_toolbox(num_bits) 
        random.seed(7) 
        population = toolbox.population(n = 500) 
        probab_crossing, probab_mutating = 0.5, 0.2 
        num_generations = 10 
    print('\nEvolution process starts')
    
    
    # Оценка всего населения
    fitnesses = list(map(toolbox.evaluate, population)) 
    for ind, fit in zip(population, fitnesses): 
        ind.fitness.values = fit 
    print('\nEvaluated', len(population), 'individuals')
    
    for g in range(num_generations): 
        print("\n- Generation", g)
        
        
    offspring = toolbox.select(population, len(population))
    
    offspring = list(map(toolbox.clone, offspring))
    
    for child1, child2 in zip(offspring[::2], offspring[1::2]): 
        if random.random() < probab_crossing: 
            toolbox.mate(child1, child2)
            
            
    del child1.fitness.values 
    del child2.fitness.values
    
    for mutant in offspring: 
        if random.random() < probab_mutating: 
            toolbox.mutate(mutant) 
            del mutant.fitness.values
            
            
    invalid_ind = [ind for ind in offspring if not ind.fitness.valid] 
    fitnesses = map(toolbox.evaluate, invalid_ind) 
    for ind, fit in zip(invalid_ind, fitnesses): 
        ind.fitness.values = fit 
        print('Evaluated', len(invalid_ind), 'individuals')        
        
    population[:] = offspring
    
    fits = [ind.fitness.values[0] for ind in population] 
    length = len(population) 
    mean = sum(fits) / length 
    sum2 = sum(x*x for x in fits) 
    std = abs(sum2 / length - mean**2)**0.5 
    print('Min =', min(fits), ', Max =', max(fits)) 
    print('Average =', round(mean, 2), ', Standard deviation =', round(std, 2)) 
    print("\n- Evolution ends")
    
    
    best_ind = tools.selBest(population, 1)[0] 
    print('\nBest individual:\n', best_ind) 
    print('\nNumber of ones:', sum(best_ind))
    
    