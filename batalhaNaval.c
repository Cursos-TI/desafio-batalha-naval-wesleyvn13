#include <stdio.h>

int main() {
//declarando matriz 10x10 para o tabuleiro.
 int tabuleiro[10][10];

// criando arrays para o navio horizontal e variaveis para posicionamento.
 int navioHorizontal[3] = {3, 3, 3};
 int inicioNavioHorizontal = 3;
 int colunaNavioHorizontal =3;

 // criando arrays para o navio vertical e variaveis para posicionamento.

 int navioVertical[3] = {3, 3, 3};
 int inicioNavioVertical = 7;
 int colunaNavioVertical =6;

 // criando primeiro navio diagonal.

 int navioDiagonal[3] = {3, 3, 3};
 int navioDiagonalInicio = 7 ;
 int navioDiagonalFinal = 0;


 // criando o "mar" do tabuleiro.
 for (int i = 0; i < 10; i++) {
    for (int j = 0; j < 10; j++) {
       tabuleiro[i][j] = 0;
    }
 }


// posicionando o navio horizontal
 for (int i = 0; i < 3; i++){
    tabuleiro[inicioNavioHorizontal][colunaNavioHorizontal + i] = navioHorizontal[i];
 }

 // posicionando o navio vertical
 for (int i = 0; i < 3; i++){
    tabuleiro[inicioNavioVertical + i][colunaNavioVertical] = navioVertical[i];
 }

 // posicionando o navio diagonal
 for (int i = 0; i < 3; i++) {
    tabuleiro[navioDiagonalInicio + i][navioDiagonalFinal + i] = navioDiagonal[i];
 }

 // posicionando o outro navio diagonal. Aqui usei apenas numeros para diferenciar.
 for (int i = 0; i < 3; i++) {
    tabuleiro[5 - i ][7 + i] = navioDiagonal[i];
 }

 // imprimindo o tabuleiro com o navios posicionados
 for (int i = 0; i < 10; i++) {
    for (int j = 0; j < 10; j++) {
        printf("%d  ", tabuleiro[i][j]);
    }
    printf("\n");
 }

    return 0;
}
