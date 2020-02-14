# Romans had a rather peculiar number system. Turns out, translating their numbers directly to the arabic numeric system  doesn't quite work. 
# Find out what the bug in this program is and fix it. 


def roman_to_int(s):
    rom_val = {'I': 1, 'V': 5, 'X': 10, 'L': 50, 'C': 100, 'D': 500, 'M': 1000}
    int_val = 0
    for i in range(len(s)):
        int_val += rom_val[s[i]]
    return int_val

ROMAN = input("Enter the roman number: ")
print(roman_to_int(ROMAN.upper()))