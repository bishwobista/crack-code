ROMANS = {
    1000: "M",
    900: "CM",
    500: "D",
    400: "CD",
    100: "C",
    90: "XC",
    50: "L",
    40: "XL",
    10: "X",
    9: "IX",
    5: "V",
    4: "IV",
    1: "I"
}

def integer_to_roman(num: int):
    roman = ""

    # ROMANS dict must be sorted in descending order
    for key in ROMANS:
        while num >= key:
            roman += ROMANS[key]
            num -= key
    
    return roman


if __name__ == "__main__":
    print(1994, integer_to_roman(1994))
    print(3999, integer_to_roman(3999))
    print(1, integer_to_roman(1))
    print(4, integer_to_roman(4))
    print(9, integer_to_roman(9))
    