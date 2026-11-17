n = int(input())

A = []
B = []

print("Matriks A")
for i in range(n):
    A.append(list(map(int, input().split())))

print("Matriks B")
for i in range(n):
    B.append(list(map(int, input().split())))

result = []

for i in range(n):
    rows = []
    for j in range(n):
        total = 0
        for k in range(n):
            total += A[i][k] * B[k][j]
        rows.append(total)
    result.append(rows)

print("Matriks AXB")

for i in range(n):
    for j in range(n):
        print(result[i][j], end=" ")
    print()
