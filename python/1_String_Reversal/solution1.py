def reverse1(s):
    str = ""
    for i in s:
        str = i+str
    return str


s = "Apple"
print(s)
print(reverse1(s))
