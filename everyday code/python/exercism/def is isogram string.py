def is_isogram(string):
    string = string.lower()

    for ch in string:
        if ch.isalpha() and string.count(ch)>1:
                return False

    return True
