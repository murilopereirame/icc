#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <math.h>

int main(void){

    setlocale(LC_ALL,"");

    int num, num2, aux[100000], count=0;

    printf("Insira um número inteiro positivo: ");
    scanf("%d", &num);

    num2 = num;

	for(int i=0; num2 > 0; i++){

        count++;

		aux[i] = num2%2;

        num2 = num2/2;
	}

    printf("\nO numero %d em binário é ", num);

    for(; count >= 0; count--)
    	printf("%d", aux[count]);

    system("pause");
}
