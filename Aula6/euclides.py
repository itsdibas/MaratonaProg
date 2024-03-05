def can_arrange_stamps(n):
    for i in range(2, int(n**0.5) + 1):
        if n % i == 0:
            return 'S'
    return 'N'

n = int(input())
print(can_arrange_stamps(n))