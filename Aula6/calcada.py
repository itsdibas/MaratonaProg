import math

def max_interseccoes(A, B, C, D):
    return math.gcd(abs(C - A), abs(D - B)) + 1

T = int(input())
for _ in range(T):
    A, B, C, D = map(int, input().split())
    print(max_interseccoes(A, B, C, D))