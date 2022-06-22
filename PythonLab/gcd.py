#Write a program to compute gcd,lcm of two numbers

def gcd(x, y):

    while(y):

        x, y = y, x % y

    return x

# This function computes LCM

def lcm(x, y):

    lcm = (x*y)//gcd(x,y)

    return lcm

num1 = 60

num2 = 48 

print("The L.C.M. is", lcm(num1, num2))

print("GCD of two numbers is ",gcd(num1,num2))


##

#gcd solution

import math 

print ("The gcd of 60 and 48 is : ",math.gcd(60,48)) 

#lcm

import numpy as np

print("lcm of  10 and 15 is : ",np.lcm(60, 48) 
