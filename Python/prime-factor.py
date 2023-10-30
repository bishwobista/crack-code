def primeFactors(n):
    factors = []
    # Find the number of 2s that divide n
    while n % 2 == 0:
        factors.append(2)
        n //= 2
    # n must be odd at this point, so a skip of 2 (i.e. i = i + 2) can be used
    for i in range(3, int(n**0.5) + 1, 2):
        # While i divides n, append i and divide n
        while n % i == 0:
            factors.append(i)
            n //= i
    # Condition if n is a prime
    if n > 2:
        factors.append(n)
    return factors

# Example usage
num = 84
print(f"The prime factors of {num} are {primeFactors(num)}")
