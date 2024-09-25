import math

def isOddEven(n):
    if n % 2 == 0:
        return 0
    else:
        return 1
    
def isPrime(n):
    if n <= 1:
        return 0
    elif n == 2:
        return 1
    elif n % 2 == 0:
        return 1
    
    for i in range(3, int(math.sqrt(n)), 2):
        if n % (i * i) == 0:
            return 0
        
    return 1
    
def minSumSeq(n):   # kx = n - (k * (k - 1)) / 2  # n: sum, k: count, x: first term
    for k in range(2, n):
        kx = n - (k * (k - 1)) // 2
        if kx % k == 0:
            x = kx // k
            if x > 0:
                result = [str(x + i) for i in range(k)]
                return', '.join(result)

n = int(input('number\n'))
print(isPrime(n))