a = input().split()
n1 = int(a[0])
n2 = int(a[1])

if n1 != n2:
    print("Jumlah tidak sama")
else:
    rows1 = list(map(int, input().split()))
    rows2 = list(map(int, input().split()))

    for i in range(n1):
        print(rows1[i] * rows2[i], end=" ")
