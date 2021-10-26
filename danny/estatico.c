#include <stdio.h>
#include <string.h>

// Estruturas
typedef struct {
    char Nome[30];
    int Idade;
} Pessoa;

int main(int argc, char **argv){
    int TamanhoArrayEstatico = 5;

    // Array estático
    Pessoa ArrayEstaticoDePessoas[TamanhoArrayEstatico];

    for (int i=0; i < TamanhoArrayEstatico; i++){
        ArrayEstaticoDePessoas[i].Nome[i] = '\0';
        printf("{ Nome: %s, Idade: %i }\n", ArrayEstaticoDePessoas[i].Nome, ArrayEstaticoDePessoas[i].Idade);
    }
}
