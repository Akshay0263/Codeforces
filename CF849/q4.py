t = int(input())

def letter_count(stri):
    alph = []
    for i in stri:
        if i not in alph:
            alph.append(i)
            stri= stri[1:]
    return len(alph)



for i in range(t):
    n = int(input())
    s = input()
    max = 0
    for j in range(len(s)):
        a= s[:j]
        b = s[j:]
        max = letter_count(a)+letter_count(b) if letter_count(a)+letter_count(b) > max else max

    print(max)
#        print(max)

#print(letter_count('abcedqwqwrwerertrtyuyu'))

