#include <stdio.h>
#include <stdlib.h>

int main(){

    int ca;
    int i = 1;

    printf("digite um numero inteiro positivo: ");
    scanf("%d", &ca);

    while(i <= ca) {
      if(i%2 == 0 && i%3 == 0){
        printf(" pim pam");
      } else if (i%2 == 0){
        printf("pim");
        }   else if (i%3 == 0){
            printf("pam");
            }   else {
                printf("%d",i);
               }printf(" ");
               i++;

    }
    printf("\n");
    return 0;
    }


