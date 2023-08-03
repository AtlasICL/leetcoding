def check(n: int) -> bool:
    return n % 3 == 1 and n > 0

def divide(n: int) -> int:
    return (n-1)/3 * 2

results = []

def iterate(n: int):
    if check(n) and check(divide(n)) and check(divide(divide(n))):
        results.append(n)

for index in range(1, 1000, 3):
    iterate(index)

print(results)