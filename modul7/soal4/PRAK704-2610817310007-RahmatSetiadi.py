texts = input()

if len(texts) > 20:
    print(texts[:20] + "...")
else:
    print(texts)
