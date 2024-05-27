nc = int(input())

while(nc > 0):
    n, k = [int(i) for i in input().split()]

    numbers = list()
    for i in range(1, n+1):
        numbers.append(i)
    
    x = 0
    res = 0
    while(x < n - 1):
        for i in range(0, n):
            if numbers[i] != 'x':
                index = i+(k-1) % n
                numbers[index] = 'x'
                x += 1
                res = i

    print(numbers[res])            
    nc = nc - 1
