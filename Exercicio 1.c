#include <stdio.h>

int main(){

    int a, b=1, c=0;

    printf("Verificador de numeros perfeitos.\n\n");

    printf("Digite um numero:");
    scanf("%d", &a);

    while(a>b){
        if(a % b == 0){
        c += b;
        }
      b++;
    }

    if(c == a){
    printf("O numero %d eh perfeito.",a);
    }else{
    printf("O numero %d nao eh perfeito.",a);
    }

    return 0;
}
