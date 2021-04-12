# alfabet = "zabcdefghijklmnopqrstuvwxy"
# text1 = []

class enigma:
  
   def enigmacript(prima_cheie_de_criptare, a_doua_cheie_de_criptare, message):
    alfabet = "zabcdefghijklmnopqrstuvwxy"  
    text1 = []

    for character in message:
      valoarea_initiala = alfabet.find(str(character))
      prima_cheie_de_criptare = prima_cheie_de_criptare + a_doua_cheie_de_criptare
      a_doua_valoare = (prima_cheie_de_criptare + valoarea_initiala) % 25
      if (character != "*"):
          text1.append(alfabet[a_doua_valoare])    #(str(alfabet.find(a_doua_valoare)))
      else:
          text1.append("*")
    text = "".join(text1)
    del(text1)
    return text
    del(text)
  
   def enigmadecript(prima_cheie_de_criptare, a_doua_cheie_de_criptare, message):
    alfabet = "zabcdefghijklmnopqrstuvwxy"
    text1 = []

    for character in message:
      prima_cheie_de_criptare = prima_cheie_de_criptare + a_doua_cheie_de_criptare
      valoarea_initiala = alfabet.find(str(character))
      c = (25 + valoarea_initiala - prima_cheie_de_criptare)

      if (c < 0):
        while (c < 0):
                c = 25 + c
        a_doua_valoare = c % 25
      else:
        a_doua_valoare = c % 25
      if (character != "*"): text1.append(alfabet[a_doua_valoare])
      else: text1.append("*")
    
    text = ''.join(text1)
    del(text1)
    return text
    del(text)

   def enigmacript2(prima_cheie_de_criptare, a_doua_cheie_de_criptare, message):
        a_doua_cheie_de_criptare = len(message) + a_doua_cheie_de_criptare * (len(message)%2*12)
        alfabet = "zabcdefghijklmnopqrstuvwxy"
        text1 = []

        for character in message:
          valoarea_initiala = alfabet.find(str(character))
          prima_cheie_de_criptare = prima_cheie_de_criptare + a_doua_cheie_de_criptare
          a_doua_valoare = (prima_cheie_de_criptare + valoarea_initiala) % 25
          if (character != "*"):
              text1.append(alfabet[a_doua_valoare])    #(str(alfabet.find(a_doua_valoare)))
          else:
              text1.append("*")
        text = "".join(text1)
        del(text1)
        return text
        del(text)

   def enigmadecript2(prima_cheie_de_criptare, a_doua_cheie_de_criptare, message):
        alfabet = "zabcdefghijklmnopqrstuvwxy"
        text1 = []

        for character in message:
          a_doua_cheie_de_criptare = len(message) + a_doua_cheie_de_criptare * (len(message)%2*12)
          prima_cheie_de_criptare = prima_cheie_de_criptare + a_doua_cheie_de_criptare
          valoarea_initiala = alfabet.find(str(character))
          c = (25 + valoarea_initiala - prima_cheie_de_criptare)

          if (c < 0):
            while (c < 0):
                    c = 25 + c
            a_doua_valoare = c % 25
          else:
            a_doua_valoare = c % 25
          if (character != "*"): text1.append(alfabet[a_doua_valoare])
          else: text1.append("*")

        text = ''.join(text1)
        del(text1)
        return text
        del(text)

###############################################################33

class converter:

  def list_to_sublist(listy, number):
    return [listy[i:i+number] for i  in range(0, len(listy), number)]

  def string_to_vector(message):
    message = []
    for caracter in message:
      message.append(caracter)
    return message

  def string_to_int(prima_cheie_de_criptare, a_doua_cheie_de_criptare, message):
    alfabet = "zabcdefghijklmnopqrstuvwxy"
    text1 = []

    message = enigma.enigmacript(prima_cheie_de_criptare, a_doua_cheie_de_criptare, message)

    for caracter in message:
      a_doua_valoare = alfabet.find(caracter)
      text1.append(str(a_doua_valoare % 10))
      text1.append(str(a_doua_valoare // 10))
      

    text = ''.join(text1)
    del(text1[:])
    return (text)
    del(text)
  
  def int_to_string(prima_cheie_de_criptare, a_doua_cheie_de_criptare, message):
    alfabet = "zabcdefghijklmnopqrstuvwxy"
    text1 = []

    message = str(message)
    message = list(message)
    message = converter.list_to_sublist(message, 2)

    for matrice1 in message:
      s = 0
      for element in matrice1:
        if s == 0:
          a = int(element)
        else:
          b = int(element)
        s += 1
      s=0
      a_doua_valoare = a + b * 10
      text1.append(alfabet[a_doua_valoare])
      print(text1)
    text = ''.join(text1)
    del(text1[:])
    return  enigma.enigmadecript(prima_cheie_de_criptare, a_doua_cheie_de_criptare, text) # rezultat
    del(text)


a = enigma.enigmacript2(7, 14, "ana*are*mere*iar*tata*are*pere*de*mancat")
b = enigma.enigmacript2(7, 14, "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa")
print(b)
print(enigma.enigmadecript2(7, 14, b))