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
    printf("-----------------------------");
}


int main() {
    printTable();
    return 0;
}
