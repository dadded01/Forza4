#include <stdio.h>
#define RIGHE 6
#define COLONNE 7

//crea tabella di 7 di base e 6 di altezza
void printTable(){
    for (int i = 0; i < RIGHE; ++i) {
        for (int j = 0; j < COLONNE; ++j) {
            printf("|   ");
            if(j == 6 ) printf("|");
        }
        printf("\n");
    }
    printf("-----------------------------\n");
    for (int i = 0; i < COLONNE; ++i) {
        printf("  %d ", i+1);
    }
}

void turn(char giocatore[]){
    printf("%s digitare il numero della colonna desiderata (1,...,7)\n", giocatore);
}

int main() {
    printTable();
    printf("BENVENUTI IN FORZA4\n\n");

    char g1[20], g2[20];
    printf("Giocatore 1 :");
    scanf("%s", &g1);

    printf("Giocatore 2 :");
    scanf("%s", &g2);

    int mat[RIGHE][COLONNE];

    turn(g1);


    return 0;
}
