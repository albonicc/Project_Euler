def isNumPrime(num):
    isPrime = True
    for i in range(2, num):
        if num % i == 0:
            isPrime = False
            break
    return isPrime

def primeNumber(nPrime):
    n = 2
    while nPrime > 0:
        isNumPrime(n)
        if isNumPrime(n):
            nPrime -= 1
            n += 1
        else:
            n += 1
    return n
    
     
print(primeNumber(5))


