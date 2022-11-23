#include <stdio.h>
#include <stdlib.h>

int main()
{
    char player[256], player2[256];

    printf("Vez do Player um... \n");
    scanf("%s", player);

    printf("Vez do player dois... \n");
    scanf("%s", player2);

    //printf("Player um escolheu: %s. Player dois escolheu: %s \n", player, player2);

    printf("Aguarde, estamos calculando os resultados... \n");

    if(strcmp(player, "papel") == 0){

        if(strcmp(player2, "papel") == 0){
            printf("Empate!! \n");
        }

        else if(strcmp(player2, "tesoura") == 0){
            printf("Player dois ganhou, porque tesoura corta o papel! \n");
        }

        else if(strcmp(player2, "pedra") == 0){
            printf("Player um ganhou, porque papel embrulha a pedra! \n");
        }else{
            printf("Player dois jogou uma informacao invalida! \n");
        }
    }

    if(strcmp(player, "tesoura")  == 0){
        if(strcmp(player2, "papel") == 0){
            printf("Player um ganhou, porque tesoura corta o papel!");
        }else if(strcmp(player2, "tesoura") == 0){
            printf("Empate!! \n");
        }else if(strcmp(player2, "pedra") == 0){
            printf("Player dois ganhou, porque pedra quebra a tesoura!");
        }else{
            printf("Player dois jogou uma informacao invalida...");
        }
    }


    if(strcmp(player, "pedra") == 0){
        if(strcmp(player2, "papel") == 0){
            printf("Player dois ganhou, porque o papel embrulha a pedra! \n");
        }else if(strcmp(player2, "tesoura") == 0){
            printf("player um ganhou, porque a pedra quebra a tesoura! \n");
        }else if(strcmp(player2, "pedra") == 0){
            printf("Empate!! \n");
        }else{
            printf("Player dois jogou uma informacao invalida!");
        }
    }

    else{
        printf("Player um escolheu uma infomracao invalida!");
    }



    return 0;
}
