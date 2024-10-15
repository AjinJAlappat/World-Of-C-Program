import random

l = input("Enter the people names\n")
splitted = l.split(",")
print(splitted)

length = len(splitted)

r = random.randint(0,length-1)
print(splitted[r],"will pay the bill")