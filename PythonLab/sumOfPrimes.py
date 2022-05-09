#Write a python program to find the sum of all the primes below two million
#Answer : here we  have taken 201  instead of two milllion

l=[]

for i in range(1,201):

    for j in range(1,i):

        if i%j==0 and i!=j:

            l.append(i)

print("sum : ",sum(l))

total=0

for i in range(0,len(l)):

    total=total+l[i]

print("sum = ",total)