Words = input("Kalimat: ").lower()

vowels = 0
consonants = 0

for letter in Words:
    if letter in "aiueo":
        vowels += 1
    elif letter.isalpha() and letter not in "aiueo":
        consonants += 1

print("Jumlah Vokal :", vowels)
print("Jumlah Konsonan :", consonants)
