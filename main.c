#include <stdio.h> 
#include <stdlib.h>

int main(){
    int operation = 1;
    float temperatura;


  

   while ( operation != 0 ){

        printf("\n\n\t\t >>>>>Qual escala você quer?<<<<<\n\n");
        printf("(1) Celsiu para fahrenheit\n");
        printf("(2) Celsiu para Kelvin\n");
        printf("(0) Sair do converssor\n\n");
        printf("\t\t >>>>>>");
        scanf("%i", &operation);
        printf("\n\n");

        if (operation !=0){

        printf("Digite a temperatura em °C: ");
        scanf("%f", &temperatura);
        printf("\n\n");

        switch (operation){

            case 1:
                  printf("O valor em F é: %.2f\n\n", (temperatura*9/5)+32 );
                  break;
            
            case 2:
                printf("O valor em Kelvin é: %.2f", temperatura + 273);
                break;


           } 
        }

 }


    return 0;
}