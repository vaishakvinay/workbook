def is_pangram(sentence):
    letters = set()

    for ch in sentence.lower():
        if "a"<= ch <="z":
            letters.add(ch)

    return len(letters) == 26

