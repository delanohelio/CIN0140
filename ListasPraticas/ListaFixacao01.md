# Lista de Fixação 01 — Introdução à Linguagem C

Exercícios para fixar os conceitos iniciais de programação em C: entrada/saída, variáveis, operadores, condicionais, laços, arrays, structs e ponteiros.

---

## Questão 1 — Olá, Mundo!

Escreva um programa em C que imprima exatamente a mensagem abaixo na tela.

**Saída**
```
Ola, Mundo!
```

---

## Questão 2 — Soma de Dois Inteiros

Leia dois números inteiros e imprima a soma deles.

**Entrada**
```
3 7
```

**Saída**
```
10
```

---

## Questão 3 — Par ou Ímpar

Leia um número inteiro e informe se ele é par ou ímpar.

**Entrada**
```
4
```

**Saída**
```
Par
```

**Entrada**
```
7
```

**Saída**
```
Impar
```

---

## Questão 4 — Maior de Três

Leia três números inteiros e imprima o maior deles.

**Entrada**
```
5 12 8
```

**Saída**
```
12
```

---

## Questão 5 — Tabuada

Leia um número inteiro `n` (1 ≤ n ≤ 10) e imprima a tabuada de multiplicação de `n` de 1 a 10.

**Entrada**
```
3
```

**Saída**
```
3 x 1 = 3
3 x 2 = 6
3 x 3 = 9
3 x 4 = 12
3 x 5 = 15
3 x 6 = 18
3 x 7 = 21
3 x 8 = 24
3 x 9 = 27
3 x 10 = 30
```

---

## Questão 6 — Fatorial

Leia um número inteiro `n` (0 ≤ n ≤ 12) e imprima o fatorial de `n`.

**Entrada**
```
5
```

**Saída**
```
120
```

**Entrada**
```
0
```

**Saída**
```
1
```

---

## Questão 7 — Contagem Regressiva

Leia um número inteiro positivo `n` e imprima uma contagem regressiva de `n` até `0`, cada número em uma linha.

**Entrada**
```
5
```

**Saída**
```
5
4
3
2
1
0
```

---

## Questão 8 — Média de Notas

Leia a quantidade de alunos `n` seguido de `n` notas (números reais). Calcule e imprima a média da turma com 2 casas decimais.

**Entrada**
```
4
7.0 8.5 6.0 9.5
```

**Saída**
```
media: 7.75
```

---

## Questão 9 — Positivos, Negativos e Zeros

Leia uma sequência de inteiros até que o valor `0` seja inserido (não contando o zero). Informe quantos números positivos, negativos e zeros foram lidos antes do encerramento.

**Entrada**
```
3 -1 5 -2 -3 0
```

**Saída**
```
positivos: 2
negativos: 3
zeros: 0
```

---

## Questão 10 — Número Primo

Leia um número inteiro `n` (n > 1) e informe se ele é primo ou não.

**Entrada**
```
7
```

**Saída**
```
primo
```

**Entrada**
```
9
```

**Saída**
```
nao primo
```

---

## Arrays

---

## Questão 11 — Soma dos Elementos de um Array

Leia um inteiro `n` (1 ≤ n ≤ 100) seguido de `n` números inteiros. Imprima a soma de todos os elementos.

**Entrada**
```
5
2 4 6 8 10
```

**Saída**
```
30
```

---

## Questão 12 — Inversão de Array

Leia um inteiro `n` (1 ≤ n ≤ 100) seguido de `n` números inteiros. Imprima os elementos na ordem inversa, separados por espaço.

**Entrada**
```
4
1 2 3 4
```

**Saída**
```
4 3 2 1
```

---

## Questão 13 — Maior e Menor Elemento

Leia um inteiro `n` (1 ≤ n ≤ 100) seguido de `n` números inteiros. Imprima o maior e o menor elemento do array.

**Entrada**
```
6
3 7 1 9 4 2
```

**Saída**
```
maior: 9
menor: 1
```

---

## Questão 14 — Ocorrências em Array

Leia um inteiro `n` (1 ≤ n ≤ 100), depois `n` números inteiros e por fim um valor `x`. Imprima quantas vezes `x` aparece no array.

**Entrada**
```
7
5 3 5 1 5 2 4
5
```

**Saída**
```
3
```

---

## Questão 15 — Média de Notas com Array

Leia um inteiro `n` (1 ≤ n ≤ 100) seguido de `n` notas (números reais). Calcule e imprima a média da turma com 2 casas decimais.

**Entrada**
```
5
7.0 8.5 6.0 9.5 10.0
```

**Saída**
```
media: 8.20
```

---

## Structs

---

## Questão 16 — Cadastro de Aluno

Declare uma `struct Aluno` com os campos `nome` (string de até 50 caracteres), `matricula` (inteiro) e `nota` (float). Leia os dados de um aluno e imprima-os formatados.

**Entrada**
```
Ana Lima
20231001
8.75
```

**Saída**
```
Nome: Ana Lima
Matricula: 20231001
Nota: 8.75
```

---

## Questão 17 — Média da Turma com Struct

Declare uma `struct Aluno` com `nome` (string) e `nota` (float). Leia `n` alunos e imprima o nome do aluno com maior nota e a média da turma com 2 casas decimais.

**Entrada**
```
3
Carlos 7.0
Beatriz 9.5
Diego 8.0
```

**Saída**
```
melhor: Beatriz
media: 8.17
```

---

## Questão 18 — Struct de Ponto 2D e Distância

Declare uma `struct Ponto` com campos `x` e `y` (ambos `float`). Leia dois pontos e calcule a distância euclidiana entre eles com 2 casas decimais.

A distância entre dois pontos é dada por:

$$d = \sqrt{(x_2 - x_1)^2 + (y_2 - y_1)^2}$$

**Entrada**
```
0.0 0.0
3.0 4.0
```

**Saída**
```
distancia: 5.00
```

---

## Ponteiros

---

## Questão 19 — Endereço e Valor via Ponteiro

Declare uma variável inteira, atribua um valor a ela, declare um ponteiro para essa variável e imprima o valor acessado via ponteiro e o dobro desse valor também via ponteiro (sem usar a variável diretamente na impressão).

**Saída esperada (exemplo para valor 10)**
```
valor: 10
dobro: 20
```

---

## Questão 20 — Troca com Ponteiros

Escreva uma função `void trocar(int *a, int *b)` que troca os valores de duas variáveis inteiras usando ponteiros. Leia dois inteiros, chame a função e imprima os valores após a troca.

**Entrada**
```
3 8
```

**Saída**
```
a=8 b=3
```

---

## Questão 21 — Soma de Array via Ponteiro

Escreva uma função `int soma(int *v, int n)` que recebe um array e seu tamanho via ponteiro e retorna a soma dos elementos. Leia `n` (1 ≤ n ≤ 100) e os elementos, e imprima a soma.

**Entrada**
```
5
1 2 3 4 5
```

**Saída**
```
15
```

---

## Questão 22 — Ponteiro para Struct

Declare uma `struct Retangulo` com campos `base` e `altura` (ambos `float`). Escreva uma função `float area(struct Retangulo *r)` que recebe um ponteiro para a struct e retorna a área. Leia os valores, calcule e imprima a área com 2 casas decimais.

**Entrada**
```
5.0 3.0
```

**Saída**
```
area: 15.00
```

---

## Gerenciamento de Memória

---

## Questão 23 — Array Dinâmico com `malloc`

Aloque dinamicamente com `malloc` um array de `n` inteiros (1 ≤ n ≤ 100). Leia os `n` valores, imprima-os em ordem e libere a memória ao final.

**Entrada**
```
5
10 20 30 40 50
```

**Saída**
```
10 20 30 40 50
```

---

## Questão 24 — Inicialização com `calloc`

Aloque dinamicamente com `calloc` um array de `n` inteiros (1 ≤ n ≤ 10) e imprima todos os valores logo após a alocação, sem escrever nada neles. Em seguida, libere a memória.

> **Dica:** `calloc` inicializa todos os bytes com zero.

**Entrada**
```
4
```

**Saída**
```
0 0 0 0
```

---

## Questão 25 — Redimensionamento com `realloc`

Aloque dinamicamente um array de `n` inteiros com `malloc`, leia os valores e depois redimensione o array para `2*n` posições com `realloc`. Preencha as novas posições com `0` e imprima o array completo. Libere a memória ao final.

**Entrada**
```
3
7 14 21
```

**Saída**
```
7 14 21 0 0 0
```

---

## Questão 26 — Cópia de String Dinâmica

Leia uma string de até 200 caracteres. Aloque dinamicamente (com `malloc`) um buffer do tamanho exato necessário para armazená-la (incluindo o `'\0'`), copie a string para o buffer, imprima o conteúdo e libere a memória.

**Entrada**
```
algoritmos
```

**Saída**
```
algoritmos
```

---

## Questão 27 — Array de Structs Dinâmico

Declare uma `struct Produto` com campos `nome` (string de até 50 caracteres) e `preco` (float). Aloque dinamicamente com `malloc` um array de `n` produtos (1 ≤ n ≤ 50), leia os dados, imprima o produto mais caro e libere a memória.

**Entrada**
```
3
Teclado 150.00
Mouse 80.00
Monitor 900.00
```

**Saída**
```
mais caro: Monitor 900.00
```

---

## Questão 28 — Detecção de Falha de Alocação

Escreva um programa que tente alocar dinamicamente um array de `n` inteiros com `malloc`. Se a alocação falhar (retorno `NULL`), imprima `"erro: sem memoria"` e encerre com `exit(1)`. Caso contrário, preencha o array com os quadrados de `1` a `n`, imprima os valores e libere a memória.

**Entrada**
```
5
```

**Saída**
```
1 4 9 16 25
```
