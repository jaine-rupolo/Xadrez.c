# ♟️ Projeto: Movimentação de Peças de Xadrez em C

**Autora:** Jaine  
**Curso:** Ciência da Computação (1º semestre)  
**Disciplina:** Lógica de Programação / Linguagem C  
**Tema:** Estruturas de repetição, loops aninhados e recursividade  
**Ano:** 2025  

---

## 💡 Descrição do Projeto

Este projeto foi desenvolvido como parte do aprendizado sobre **estruturas de repetição em C**  
(`for`, `while`, `do-while`), **loops aninhados** e **recursividade**.  

A proposta foi simular os **movimentos de peças de xadrez** usando programação, em três fases:
- 🐣 **Nível Novato** – uso dos três tipos de loops.
- 🦋 **Nível Aventureiro** – introdução dos loops aninhados.
- 👑 **Nível Mestre** – uso de recursividade e loops complexos.

O objetivo é praticar o raciocínio lógico e aprender como o computador repete ações  
e executa blocos de código de forma controlada.

---

## 🎮 Peças e Movimentos

| Peça        | Tipo de Estrutura | Movimento Simulado |
|--------------|------------------|--------------------|
| Torre 🏰     | `for`            | 5 casas para a direita |
| Bispo ⛪     | `while`          | 5 casas na diagonal (cima + direita) |
| Rainha 👑    | `do-while`       | 8 casas para a esquerda |
| Cavalo 🐴    | `for` + `while` (aninhados) | 2 casas para baixo + 1 para a esquerda |

Na fase avançada (**nível mestre**):
- A **Torre**, o **Bispo** e a **Rainha** foram refeitos com **recursividade**.  
- O **Cavalo** ganhou **loops complexos** com múltiplas condições e comandos `continue` e `break`.

---

## 🧠 O que aprendi com este projeto

- A diferença entre `for`, `while` e `do-while`.  
- Como criar repetições controladas em um programa.  
- O que são **loops aninhados** e por que precisamos deles.  
- Como a **recursividade** pode substituir loops.  
- A importância de comentar e organizar o código para ele ficar legível.  
- E que **a programação é como o xadrez**: é preciso lógica, paciência e estratégia 💗  

---

## 🧩 Como executar o código

1. Baixe o arquivo `xadrez.c`  
2. Compile no terminal com:
   ```bash
   gcc xadrez.c -o xadrez
