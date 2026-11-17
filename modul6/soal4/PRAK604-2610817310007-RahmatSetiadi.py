code = input()
message = input()

if len(code) != len(message):
    print("Panjang kalimat berbeda, pesan palsu")
else:
    star = 0
    hash = 0

    for i in range(len(code)):
        if code[i] == " " and message[i] == " ":
            print(" ", end="")
        elif code[i] == message[i]:
            print("*", end="")
            star += 1
        else:
            print("#", end="")
            hash += 1

    print()
    print("* =", star)
    print("# =", hash)

    if star >= hash:
        print("Pesan Asli")
    else:
        print("Pesan Palsu")
