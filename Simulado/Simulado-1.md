# Simulado — Programação em C (Codeforces)

Simulado para preparação da prova, com foco em:
- estruturas básicas (entrada/saída, condicionais, laços)
- arrays e strings
- structs
- ponteiros e alocação dinâmica de memória

## Instruções

1. Resolva todos os problemas em C (GNU GCC C11/C17).
2. Para vetores/listas de tamanho variável, prefira `malloc`/`free`.
3. Quando fizer sentido (ex.: pares de valores), modele com `struct`.
4. Teste localmente com casos de borda antes de submeter.

## Lista de Questões

| # | Problema | Link | Nível | Foco sugerido em C |
|---|----------|------|-------|---------------------|
| 1 | Wrong Subtraction | [977A](https://codeforces.com/problemset/problem/977/A) | ⭐ Fácil | Condicionais e laços |
| 2 | String Task | [118A](https://codeforces.com/problemset/problem/118/A) | ⭐ Fácil | Manipulação de string com array de `char` |
| 3 | Boy or Girl | [236A](https://codeforces.com/problemset/problem/236/A) | ⭐ Fácil | Contagem com array de frequência |
| 4 | Dragons | [230A](https://codeforces.com/problemset/problem/230/A) | ⭐⭐ Médio | Uso de `struct` + ordenação de array |
| 5 | Woodcutters | [545C](https://codeforces.com/problemset/problem/545/C) | ⭐⭐⭐ Difícil | Estratégia gulosa, arrays grandes, gerenciamento de memória |

## Observações didáticas

- Mesmo quando o problema permite vetor estático, vale praticar alocação dinâmica (`int *v = malloc(n * sizeof(int));`).
- Para o problema 230A, uma boa prática é criar:
  - `typedef struct { int x; int y; } Dragon;`
- Lembre de liberar memória alocada com `free`.
