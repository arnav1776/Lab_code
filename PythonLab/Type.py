#WAP to count frequency of characters in a given file.Can u use character frequency to test whether the given file is Python program file, C program file or a text file

f="C:\\Users\\HP\\Desktop\\g.txt"

file = open ( f, "r" )

a=[]

b={}

for i in file:

    for j in range(0,len(i)):

        a.append(i[j])

for i in a:

    if i in b:

        b[i]+=1

    else:

        b[i]=1

print(b)

c=f.split(".")

if c[1]=="txt":

    print("\n\nit is a text file")

elif c[1]=="cpp":

    print("\n\nit is a c++ file")

else:

    print("\n\nit is a c file")


##

import collections

import pprint

file_input = "D:\\Komal\\n1\\goeduhub\\python.txt"

with open(file_input, 'r') as info:

  count = collections.Counter(info.read().upper())

  value = pprint.pformat(count)

print(value)

a=file_input.split(".")

if a[1]=="txt":

    print("it is a text file")

elif a[1]=="cpp":

    print("it is a c++ file")

else:

    print("it is a c file")