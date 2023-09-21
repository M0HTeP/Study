import os

my_cwd = os.getcwd()
result = os.walk(my_cwd)
# i - directory, j - ?, k - file
for i, j, k in result:
    # print(f"i = {i} \nj = {j} \nk = {k}")
    for file in k:
        print(file)

