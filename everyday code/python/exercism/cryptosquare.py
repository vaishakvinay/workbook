import math

def cipher_text(plain_text):


    text = ''.join(
        ch.lower()
        for ch in plain_text
        if ch.isalnum()
    )


    if not text:
        return ""


    cols = math.ceil(math.sqrt(len(text)))
    rows = math.ceil(len(text) / cols)


    rows_list = []

    for i in range(0, len(text), cols):
        rows_list.append(text[i:i + cols])


    encoded_chunks = []

    for col in range(cols):

        chunk = ""

        for row in rows_list:

            if col < len(row):
                chunk += row[col]
            else:
                chunk += " "

        encoded_chunks.append(chunk)

    
    return " ".join(encoded_chunks)

    

