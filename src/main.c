/**
 * Algorítmos e Estruturas de Dados II - Turma CB01
 * Trabalho 2 - Árvores Binárias de Pesquisa
 *
 * Aluno: Paulo Victor Fernandes de Melo
 * Aluno: João Luiz Rodrigues da Silva
 * Aluna: Rebecca Aimée Lima de Lima
 * Aluna: Beatriz Jacaúna Martins
 **/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

extern void questao1(unsigned int seed);
extern void questao2(unsigned int seed);
extern void questao3(unsigned int seed);
extern void questao4(unsigned int seed);

int main(int argc, char **argv) {
    unsigned int seed = time(NULL);

    questao4(seed);
}
