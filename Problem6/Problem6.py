def difference(numbers):
    sumSquares = 0
    squareSum = 0

    for i in range(numbers):
        sumSquares += (i+1)**2
    for j in range(numbers):
        squareSum += j+1
    squareSum = squareSum**2

    return squareSum - sumSquares
    
print(difference(100))


  
