# variaveis: float(num, soma, mult, soma_mult), int(code,i)


def menu():
    print("")
    print("Insira o cod de OP desejsada: ")
    print(" 1 - Soma")
    print(" 2 - Mult")
    print(" 0 - Sair")
    i = int(input(" . . .:"))
    return i


code = menu()
print(code)
if code == 0:
    print("Tchau")
    menu()

elif code == 1:
    print("Insira numeros para somar")
    num = input()
    menu()

elif code == 2:
    print("Numero para multiplicar:")

else:
    print("Cod Invalido")
    menu()
