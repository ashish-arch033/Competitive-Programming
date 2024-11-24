L1 = []
L2 = []
n = int(input())

if n == 1 or n == 2:
    print("NO")

else:

    if n % 4 == 0:
        for i in range(1, n // 2 + 1):
            if i % 2 == 1:
                L1.append(i)
                L2.append(i + n // 2)
            else:
                L2.append(i)
                L1.append(i + n // 2)

    elif (n - 3) % 4 == 0:
        L1.extend([1, 2])
        L2.append(3)
        for i in range(1, (n - 3) // 2 + 1):
            if i % 2 == 1:
                L1.append(i + 3)
                L2.append(i + 3 + (n - 3) // 2)
            else:
                L2.append(i + 3)
                L1.append(i + 3 + (n - 3) // 2)

    else:
        print("NO")
        exit()

    print("YES")
    print(len(L1))
    print(*L1)
    print(len(L2))
    print(*L2)