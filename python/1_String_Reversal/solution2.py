# Reverse a string using recursion
def reverse2(s):
    if len(s) == 0:
        return s
    else:
        print(s[1:])
        print(s[0])
        return reverse2(s[1:])+s[0]


s = "APPLE"
print(reverse2(s))
