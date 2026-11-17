a = input().split()
rows = int(a[0])
cols = int(a[1])
num = list(map(int, input().split()))

for i in range(rows):
    for j in range(cols):
        print(num[i * cols + j], end=" ")
    print()
