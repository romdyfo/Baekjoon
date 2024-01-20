import string
S = input()
letter = string.ascii_lowercase

for i in letter:
    index = S.find(i)
    print(index)