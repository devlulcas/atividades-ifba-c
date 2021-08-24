# 1:
Será impresso "0", pois o estamos utilizando o operador de negação no número 104 e atribuindo o resultado disso à variável x. Como sabemos, todo número diferente de zero equivale a true (verdadeiro) então ao invertemos o valor de true conseguimos false (falso) e por estarmos formatando falso como inteiro conseguimos como resultado o zero.

# 2:
Será impresso na tela que o valor de x é zero e o de y também. 

O operador AND (&&) resulta em verdadeiro caso todas as suas entradas sejam verdadeiras e resulta em falso caso tenha alguma falsa.

Veja a tabela verdade:

```
A | B | S 
0 | 0 | 0
0 | 1 | 0
1 | 0 | 0
1 | 1 | 1
```

```c
#define FALSO 0 //0 é interpretado como falso
#define VERDADEIRO 1 //1, por ser diferente de zero é interpretado como verdadeiro

1 && 0 = 0
0 && 0 = 0
```

Assim como já vimos na tabela.

# 3:
Para que ambas resultem em verdadeiro precisamos realizar as seguintes mudanças:

1 - Trocar o valor da constante FALSO para 1 ou qualquer outro número.

2 - Adicionar um NOT nas duas operações para inverter seus resultados como seria o funcionamento de uma porta NAND.

EX:

```c
!(VERDADEIRO && FALSO) = 1
(VERDADEIRO && !FALSO) = 1
```

3 - Trocar o operador de && para || (OR) no caso do X onde há pelo menos um verdadeiro.

# 4:
a = true
b = true
c = false
d = false
e = true
f = false

# 5:
Duas variáveis inteiras (x e y) são criadas;
X recebe entrada do úsuario na forma de um inteiro;
Se x for maior ou igual a quatro e também for menor ou igual a nove então é somado um à x, y recebe a soma de x e nove e então é impresso no console o valor de y e x;
Caso x não satisfaça as regras anteriores então é retirado um do valor de x e o valor de x é mostrado no console. 

# 6:
I = Não. Tanto na matemática quanto na programação a multiplicação e a divisão tem precedência.

II = Não. A linguagem C é case sensitive o que quer dizer que o compilador difencia caixa alta de caixa baixa. 

III = Não. O programa em sí pode acessar apenas variáveis dentro de seu adress space (área na memória alocada pelo sistema operacional no momento do carregamento do executavel*), dentro do adress space temos diferentes escopos e as váriaveis que existem dentro desses escopos só podem ser acessadas dentro deles. Um escopo pode ser delimitado por uma função, por exemplo.

```
adress space
------------------------------------
| --------------------------------  |
| |             ---------------  |  |
| | void função | int variavel|  |  |
| |             ---------------  |  |
| --------------------------------  |
| ----------------------            |
| |int variavel_global |            |
| ----------------------            |
-------------------------------------
```

*Há exceções relacionadas ao uso de alocamento dinâmico.

# 7:

```
-------------------------------------
| A | B | !A | !B | A || B | A && B |
-------------------------------------
| F | F | V  | V  |   F    |   F    |
-------------------------------------
| F | V | V  | F  |   V    |   F    |
-------------------------------------
| V | V | F  | F  |   V    |   V    |
-------------------------------------
| V | V | F  | F  |   V    |   V    |
-------------------------------------
```