// só fiz as funções

// a. calcular área de um circulo.
    function areaCirculo(raio){
        let raio = raio;
        let area = (raio*raio)*3.14;
        return (area);
    }

// b. peso ideal de uma pessoa (IMC)
    function pesoIdeal(altura){
        let h = (altura - 100)*0.9;
        let m = (altura - 100)*0.85;
        return saida.innerHTML = `Para homem = ${h}; Para mulher = ${m}`;
    }
// c. raiz quadrada de um numero (
    //  var numero = 101;
    //  var divisor = 1, dividido = 0;
    //  for (var  i = 0; i < numero; i++) {
    //     dividido = numero / divisor;
    //     divisor = (dividido + divisor) / 2;
    //   }
//  console.log(divisor);

// )

    function raizQuadrada(numero) {
        let raiz = numero ** 0.5
        return raiz    
    }

// d. potência de um número( i = 0/    if i >num2: num1=num1 * num1; i++)
    function potencia(base,potencia){
        let i = 0
        while (i<potencia){
            base = base*base
            i++
        }
        return base
    }
// e. média ponderada 5 números ( (n1*1+n2*2+n3*3+n4*4+n5*5)/10=media)
    function mediaPonderada(n1,n2,n3,n4,n5){
        let n1,n2,n3,n4,n5
        let media = (n1*1+n2*2+n3*3+n4*4+n5*5)/15
        return media
}
// f. fahrenheit para celsius( celsius= (fahren-32)/1.8000)
    function grau(fahren){
        let celsius = (fahren - 32)/1.8;
        return celsius;
    }


// g. salário liquido de um trabalhador(

    function salario(salario){
        if (salario <= 1100) {
            inss = salario*.075
        }
        else if (salario <= 2203.48){
            inss = salario*0.09
        }
        else if (salario <= 3305.48){
            inss = salario*0.12
        }
        else if (salario <= 6433.57){
            inss = salario*0.14
        }
        else if (salario > 6433.57){
            inss = 751.99
        }
        return inss
    }
// h. area de um triangulo equilatero ( area = ((lado*lado)/4)*1.7)
    function areaTriangulo(lado){
        let area = ((lado*lado)/4)*1.7;
        return area;

    }
// i. valor da hipotenusa de triangulo (hipotenusa= catetoOposto/seno)
    function hipotenusa(catetoOposto,seno){
        let hipotenusa = catetoOposto/seno;
        return hipotenusa;
    }
// j. fim
