a, b = input().split()
rows = int(a)
cols = int(b)
num = list(map(int, input().split()))

for i in range(rows):
    for j in range(cols):
        print(num[i * cols + j], end=" ")
    print()
