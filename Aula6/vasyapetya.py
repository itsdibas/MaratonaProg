def sieve(n):
    primes = [True for _ in range(n+1)]
    p = 2
    while p * p <= n:
        if primes[p] == True:
            for i in range(p * p, n+1, p):
                primes[i] = False
        p += 1
    return [p for p in range(2, n+1) if primes[p]]

def questions(n):
    primes = sieve(n)
    questions = []
    for p in primes:
        i = p
        while i <= n:
            questions.append(i)
            i *= p
    return questions

n = int(input())
questions = questions(n)
print(len(questions))
for q in questions:
    print(q, end=' ')