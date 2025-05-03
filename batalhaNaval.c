#include <stdio.h>

int main() {

    int cone[5][5] = {{0, 0, 0, 0, 0}, {0, 0, 1, 0, 0}, {0, 1, 1, 1, 0}, {1, 1, 1, 1, 1}, {0, 0, 0, 0, 0} };
    int cruz[5][5] = {{0, 0, 1, 0, 0}, {0, 0, 1, 0, 0}, {0, 1, 1, 1, 0}, {0, 0, 1, 0, 0}, {0, 0, 1, 0, 0}};
    int octa[5][5] = {{0, 0, 0, 0, 0}, {0, 0, 1, 0, 0}, {0, 1, 1, 1, 0}, {0, 0, 1, 0, 0}, {0, 0, 0, 0, 0}};
    int tabuleiro [10][10] = {};

//montando ataque cone
    for (int i = 0; i < 5; i++) {
        for (int j = 0; j < 5; j++) {
            printf("%d ", cone[i][j]); //aqui imprime o cone para mostrar no termial como é o desenho.
        }
        printf("\n");
    }

    int Inicio = 5;
    int Final = 5;

printf("\n");

//montando ateque cruz

    for (int i = 0; i < 5; i++) {
        for (int j = 0; j < 5; j++) {
            printf("%d ", cruz[i][j]); //aqui imprime a cruz para mostrar no termial como é o desenho.
        }
        printf("\n");
    }

printf("\n");

//montando ataque octaedro

    for (int i = 0; i < 5; i++) {
        for (int j = 0; j < 5; j++) {
        printf("%d ", octa[i][j]); //aqui imprime o octaedro para mostrar no termial como é o desenho.
        }
        printf("\n");
    }


//montando "mar" do tabuleiro

    for(int i = 0; i < 10; i++) {
        for(int j = 0; j < 10; j++) {
            tabuleiro[i][j] = 0;
        }
    }

printf("\n");


//colocando ataques no tabuleiro.

//colocando o cone no tabuleiro.

for (int i = 0; i < 5; i++) {
    for (int j = 0; j < 5; j++) {
        tabuleiro[Inicio + i][Final + j] = cone[i][j]; // aqui define onde vai ser localizado o cone.
    }
   
}

//colocando a cruz no tabuleiro

for (int i = 0; i < 5; i++) {
    for (int j = 0; j < 5; j++) {
        tabuleiro[(Inicio-5) + i][(Final - 5)+ j] = cruz[i][j]; // aqui define onde vai ser localizado a cruz
    }
   
}

//colocando o octaedro no tabuleiro

for (int i = 0; i < 5; i++) {
    for (int j = 0; j < 5; j++) {
        tabuleiro[(Inicio-5) + i][Final + j] = octa[i][j];   // aqui define onde vai ser localizado o octaendro
    }
   
}

//imprimindo tabuleiro
    
for (int i = 0; i < 10; i++) {
    for (int j = 0; j < 10; j++) {
        if (tabuleiro[i][j] == 1) {
            printf("5  ");
        } else {
            printf("%d  ", tabuleiro[i][j]);
        }
        
        
        
    }
    printf("\n");
}



    

    return 0;
}
