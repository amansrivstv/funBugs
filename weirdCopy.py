import pickle


#Everyone at BugBreakers Inc. is due a raise. 
#The data is stored in a text file called "data.txt". It contains the name of the employee along with their salary. 
#We need to update the data to give everyone a raise. 
#For record-keeping purposes, the old data has to be preserved as well. 
#The function custom_copy creates a copy of the given list.
#The function update_values updates the values.
# 
#However, we seem to be running into an error! Find it and fix it.  

def pretty_print(lst, n = 5):
    print(f'Name \t \t Salary')
    for i in lst[:n]:
        print(f'{i[0]} \t \t {i[1]}')

def custom_copy(lst):
    cpy = []
    for i in lst:
        cpy.append(i)
    for i in cpy:
        i[1] = i[1]
    return cpy

def update_values(lst):
    for i in lst:
        i[1] = i[1]*(1.25)
    return lst

old_data_file = open('data.txt', 'rb')
old_data = pickle.load(old_data_file)

new_data_file = open('new_data.txt', 'wb')
new_data = custom_copy(old_data)
new_data = update_values(new_data)
pickle.dump(new_data, new_data_file)
new_data_file.close()
old_data_file.close()
