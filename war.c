#include <stdio.h>
#include <string.h>

typedef struct {
    char nomeTerritorio[50];
    char corExercito[20];
    int numeroTropas;
} Territorio;

void cadastrarTerritorio(Territorio *territorio){
    printf("Nome do territorio: \n");
    scanf("%s", territorio->nomeTerritorio);

    printf("Cor do exercito: \n");
    scanf("%s", territorio->corExercito);

    printf("Numero de tropas: \n");
    scanf("%d", &territorio->numeroTropas);
}

int main(){
    Territorio territorios[5];

    printf("Vamos cadastrar os 5 territorios do jogo:\n");

    for(int i = 0; i < 5; i++){
        printf("\n--- Cadastrar territorio %d ---\n", i+1);
        cadastrarTerritorio(&territorios[i]);
    }

    printf("\nTerritorios cadastrados:\n");

    for(int i = 0; i < 5; i++){
        printf("\nTerritorio %d:\n", i+1);
        printf("Nome: %s\n", territorios[i].nomeTerritorio);
        printf("Cor do exercito: %s\n", territorios[i].corExercito);
        printf("Numero de tropas: %d\n", territorios[i].numeroTropas);
    }

    return 0;
}