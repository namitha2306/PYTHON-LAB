# -*- coding: utf-8 -*-
"""LAB2Q2

Automatically generated by Colaboratory.

Original file is located at
    https://colab.research.google.com/drive/1Hdvl6hDXVU6XMipSw4y3LVA3mrHu_z77

## ***PYTHON LAB CYCLE 2 QUESTION 2***

2.Write a program to read a string containing numbers separated by a 
space and convert it as a list of integers. Perform the following 
operations on it.
1. Rotate elements in a list by 'k' position to the right
2. Convert the list into a tuple using list comprehension
3. Remove all duplicates from the tuple and convert them 
into a list again.
4. Create another list by putting the results of the evaluation 
of the function 𝑓(𝑥) = 𝑥
2 – 𝑥 with each element in the 
final list
5. After sorting them individually, merge the two lists to 
create a single sorted list.
"""

numbers = input("Enter the numbers : ")


numbersList = list(numbers.split(" "))



numList = []
for i in numbersList:
  numList.append(int(i))
print("List of numbers = ",numList)


n = int(input("Enter the number,n to rotate elements in a list n position to the right: "))
print("Rotated list ",end = " = ")
print(numList[-n:]+numList[:-n])


TupleList = tuple(numList)
print("Tuple = ",TupleList)


TupleList = tuple(set(TupleList))
numList = list(TupleList)
print("New list after removing duplicates  :  ",end = " = ")
print(numList)

values = []
for x in numList:
  values.append((x**2)-x)
print("Results of evalution the function ",end = " = ")
print(values)


finalList = numList + values
finalList.sort()
print("Merged list ",end = " = ")
print(finalList)