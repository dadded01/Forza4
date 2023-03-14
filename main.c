#include <stdio.h>
#include "stdlib.h"
#define RIGHE 6
#define COLONNE 7
int mat[RIGHE][COLONNE];

void initMatrix(){
    for (int i = 0; i < RIGHE; ++i) {
        for (int j = 0; j < COLONNE; ++j) {
            mat[i][j] = 0;
        }
    }
}

void printMatrix(){
    for (int i = 0; i < RIGHE; ++i) {
        for (int j = 0; j < COLONNE; ++j) {
            printf("%d", mat[i][j]);
        }
        printf("\n");
    }
}

//crea tabella di 7 di base e 6 di altezza
void printTable(){
    for (int i = 0; i < RIGHE; ++i) {
        for (int j = 0; j < COLONNE; ++j) {
            if(mat[i][j]==0) printf("|   ");
            if(mat[i][j]==1) printf("| X ");
            if(mat[i][j]==2) printf("| O ");

            if(j == 6 ) printf("|");
        }
        printf("\n");
    }
    printf("-----------------------------\n");
    for (int i = 0; i < COLONNE; ++i) {
        printf("  %d ", i+1);
    }
    printf("\n");
}

int checkWin(){
    int vittoria = 0;

    //controlli orizzontali per giocatore 1
    for (int i = 0; i < 4; ++i) {
        if(mat[5][i]==1 && mat[5][i+1]==1 && mat[5][i+2]==1 && mat[5][i+3]==1) vittoria = 1;
    }
    for (int i = 0; i < 4; ++i) {
        if(mat[4][i]==1 && mat[4][i+1]==1 && mat[4][i+2]==1 && mat[4][i+3]==1) vittoria = 1;
    }
    for (int i = 0; i < 4; ++i) {
        if(mat[3][i]==1 && mat[3][i+1]==1 && mat[3][i+2]==1 && mat[3][i+3]==1) vittoria = 1;
    }
    for (int i = 0; i < 4; ++i) {
        if(mat[2][i]==1 && mat[2][i+1]==1 && mat[2][i+2]==1 && mat[2][i+3]==1) vittoria = 1;
    }
    for (int i = 0; i < 4; ++i) {
        if(mat[1][i]==1 && mat[1][i+1]==1 && mat[1][i+2]==1 && mat[1][i+3]==1) vittoria = 1;
    }
    for (int i = 0; i < 4; ++i) {
        if(mat[0][i]==1 && mat[0][i+1]==1 && mat[0][i+2]==1 && mat[0][i+3]==1) vittoria = 1;
    }
    //controlli orizzontali per giocatore 2
    for (int i = 0; i < 4; ++i) {
        if(mat[5][i]==2 && mat[5][i+1]==2 && mat[5][i+2]==2 && mat[5][i+3]==2) vittoria = 2;
    }
    for (int i = 0; i < 4; ++i) {
        if(mat[4][i]==2 && mat[4][i+1]==2 && mat[4][i+2]==2 && mat[4][i+3]==2) vittoria = 2;
    }
    for (int i = 0; i < 4; ++i) {
        if(mat[3][i]==2 && mat[3][i+1]==2 && mat[3][i+2]==2 && mat[3][i+3]==2) vittoria = 2;
    }
    for (int i = 0; i < 4; ++i) {
        if(mat[2][i]==2 && mat[2][i+1]==2 && mat[2][i+2]==2 && mat[2][i+3]==2) vittoria = 2;
    }
    for (int i = 0; i < 4; ++i) {
        if(mat[1][i]==2 && mat[1][i+1]==2 && mat[1][i+2]==2 && mat[1][i+3]==2) vittoria = 2;
    }
    for (int i = 0; i < 4; ++i) {
        if(mat[0][i]==2 && mat[0][i+1]==2 && mat[0][i+2]==2 && mat[0][i+3]==2) vittoria = 2;
    }


    return vittoria;
}

void turnP1(char *giocatore){
    int scelta;
    printf("%s digitare il numero della colonna desiderata (1,...,7)\n", giocatore);
    scanf("%d", &scelta);
    scelta--;
    if(mat[5][scelta]==0) mat[5][scelta] = 1;
    else if(mat[4][scelta]==0) mat[4][scelta] = 1;
    else if(mat[3][scelta]==0) mat[3][scelta] = 1;
    else if(mat[2][scelta]==0) mat[2][scelta] = 1;
    else if(mat[1][scelta]==0) mat[1][scelta] = 1;
    else if(mat[0][scelta]==0) mat[0][scelta] = 1;

    if(checkWin()==1){
        printTable();
        printf("%s HAI VINTO\n", giocatore);
        exit(0);
    }
}

void turnP2(char *giocatore){
    int scelta;
    printf("%s digitare il numero della colonna desiderata (1,...,7)\n", giocatore);
    scanf("%d", &scelta);
    scelta--;
    if(mat[5][scelta]==0) mat[5][scelta] = 2;
    else if(mat[4][scelta]==0) mat[4][scelta] = 2;
    else if(mat[3][scelta]==0) mat[3][scelta] = 2;
    else if(mat[2][scelta]==0) mat[2][scelta] = 2;
    else if(mat[1][scelta]==0) mat[1][scelta] = 2;
    else if(mat[0][scelta]==0) mat[0][scelta] = 2;

    if(checkWin()==2){
        printTable();
        printf("%s HAI VINTO\n", giocatore);
        exit(0);
    }
}
void play(int win, char *g1, char *g2){
    turnP1(g1);
    printTable();
    turnP2(g2);
    printTable();

}



int main() {
    int win = 0;
    initMatrix();

    printf("\nBENVENUTI IN FORZA4\n\n");

    char g1[20], g2[20];
    printf("Giocatore 1 :");
    scanf("%s", &g1);

    printf("Giocatore 2 :");
    scanf("%s", &g2);
    printTable();

    while(1){play(win, g1, g2);}

    return 0;
}
