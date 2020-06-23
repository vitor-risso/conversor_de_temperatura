#include <stdio.h> 
#include <stdlib.h>

int main(){
    int operation = 1;
    float temperatura;


  

   while ( operation != 0 ){

        printf("Qual escala vocÊ quer?\n");
        printf("(1) Celsiu para fareihent\n");
        printf("(2) Celsiu para Kelvin\n");
        printf("(0) Sair do converssor\n");
        scanf("%i", &operation);

        printf("Digite a temperatura em °C: );
        scanf("%f", &temperatura);

        switch (operation){

            case 1:
                  printf("O valor em F é: %.2f\n\n", (temperatura*9/5)+32 );
                  break;
            
            case 2:
                printf("O valor em Kelvin é: %.2f", temperatura + 273);
                break;


        }

 }




    return 0;
}