#os vetores
nome1 = []
idade1 = []
cpf1 = []

x=int(input("Digite o numero de cadastros: "))

#for
for i in range(x):
    print("cadastro",i+1,":")
    nome=str(input("Digite o seu nome: "))
    idade=int(input("Digite a sua idade: "))
    cpf=int(input("Digite o seu CPF: "))

    #abaixo o ngc de limpar tela
    import os
    os.system('cls')

    #append meio que associa a variavel dentro do parenteses com a outra sla
    nome1.append(nome)  
    idade1.append(idade)
    cpf1.append(cpf)

#limpando tela dnv, mas dessa vez n precisa chamar o import os (porque já chamou em cima)
os.system('cls')

print("\nO numero de pessoas cadastradas é: ",x)

#for dnv
for i in range(x):
    print("cadastro",i+1,":")
    print("O nome: ",nome1[i])
    print("A idade: ",idade1[i])
    print("O CPF: ",cpf1[i])
    print("------------------------------------------")


