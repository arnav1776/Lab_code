#Write a Program to compute the number of characters,words and lines in a file 

file__IO ="D:\\python.txt"

with open(file__IO, 'r') as f:

    data = f.read()

    line = data.splitlines()

    words = data.split()

    spaces = data.split(" ")

    charc = (len(data) - len(spaces))

print('\n Line number ::', len(line), '\n Words number ::', len(words), '\n Spaces ::', len(spaces), '\n Characters ::', (len(data)-len(spaces)))