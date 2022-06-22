# Write a program to print each line of a file in reverse order.

for line in reversed(list(open("D:\\python.txt"))):

    print(line.rstrip())