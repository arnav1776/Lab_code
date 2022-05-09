#By considering the terms in Fabonacci seq. whose value does not exceed 4 mil. WAP to find the sum of even valued terms
#Answer : Here i have just given a example upto 50=n you can take 4,000,000


def fib(n):

    a=0

    b=1

    a1=[]

    a1.append(a)

    a1.append(b)

    s=0

    for i in range(1,n+1):

        c=a+b

        a1.append(c)

        a=b

        b=c

    print(a1)

    for j in a1:

        if j%2==0:

            s=s+j

    print("sum of even terms upto",n,"are : ",s)

fib(50)