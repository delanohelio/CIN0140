**Questão: Termômetro do Show**

Durante o show de João Gomes, a equipe registra em tempo real a nota do público para cada música (inteiros de 0 a 10).  
A quantidade de músicas tocadas não é informada antes: os valores chegam até aparecer `-1`, que indica fim da entrada.

Escreva um programa que:

1. Leia todas as notas até `-1` (sem contar o `-1`).
2. Imprima as notas na ordem inversa em que foram lidas.
3. Informe:
   1. a quantidade total de notas válidas;
   2. a média das notas (com 2 casas decimais);
   3. a maior sequência consecutiva de notas iguais.

**Entrada**
- Uma sequência de inteiros, um por linha, no intervalo `0..10`.
- O valor `-1` encerra a entrada.

**Saída**
- Linha 1: notas em ordem inversa, separadas por espaço.
- Linha 2: `quantidade: X`
- Linha 3: `media: Y.YY`
- Linha 4: `maior_sequencia_igual: Z`

**Exemplo de entrada**
```txt
8
8
10
7
7
7
9
-1
```

**Exemplo de saída**
```txt
9 7 7 7 10 8 8
quantidade: 7
media: 8.00
maior_sequencia_igual: 3
```
