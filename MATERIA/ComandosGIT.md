# Tutorial Básico de GIT

Para pegar um repositório usa-se:

```sh
git clone <link do repositório>
```

Vale lembrar que isso salvará o repositório na pasta na qual vc se encontra no GITBash.

Use comandos de linux para navegar pelas pastas:

```sh
cd //mudar diretorio

ls //listar conteudo da pasta

pwd //mostrar diretório atual
```

## A partir disso já haverá o repositório salvo em sua máquina

Em seguida vamos aos comandos de GIT

Assumindo que já se tenha os arquivos desejados em sua pasta local(no seu computador)
Voce irá navegar até ele via Terminal e

Adicionará este arquivo a intenção de upar com:

```sh
git add <nomedoarquivo>
```

Em seguida setaremos o commit com:

```sh
git commit -m "o -m representa inserção de mensagem"
```

Para de fato Enviar o commit usamos:

```sh
git push
```
