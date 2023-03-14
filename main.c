#include <stdio.h>
#define RIGHE 6
#define COLONNE 7
int mat[RIGHE][COLONNE];

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

void turnP1(){
    printf("giocata P1");
    if(checkWin()==1) //TODO
}
void turnP2(){
    printf("giocata P2");
    if(checkWin()==1) //TODO
}

void play(int win){
    while(win==0) {
        void turnP1();
        void turnP2();{

        }
    }
}


void turn(char giocatore[]){
    printf("%s digitare il numero della colonna desiderata (1,...,7)\n", giocatore);
}

int checkWin(){
    int vittoria = 0;
    //TODO
    return vittoria;
}

int main() {
    int win = 0;
    printTable();
    printf("BENVENUTI IN FORZA4\n\n");

    char g1[20], g2[20];
    printf("Giocatore 1 :");
    scanf("%s", &g1);

    printf("Giocatore 2 :");
    scanf("%s", &g2);

    play(win);


    return 0;
}
