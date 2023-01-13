import string

def encode(s : string, k : int) -> string:
    mp1 = {}
    i = 0
    for c in string.ascii_lowercase:
        mp1[i] = c
        i += 1
    for c in string.ascii_uppercase:
        mp1[i] = c
        i += 1
    mp2 = {val : key for key, val in mp1.items()}
    s1 = ""
    for c in s:
        if c.islower():
            s1 += mp1[(mp2[c] * k) % 26]
        else:
            s1 += mp1[(mp2[c] * k) % 26 + 26]
    return s1

print(encode("HappyBirthday", 15)) # BarrwPqvzbtaw
    