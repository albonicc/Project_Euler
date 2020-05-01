def isNumPrime(num):
    isPrime = True
    for i in range(2, num):
        if num % i == 0:
            isPrime = False
            break
    return isPrime

def primeNumber(n):
    countPrimes = 0
    numbers = 1
    while countPrimes < n + 1:
        for i in range(numbers):
            isNumPrime(i)
            if isNumPrime(i):
                countPrimes += 1
        numbers += 1
    return countPrimes
     


print(primeNumber(6))


