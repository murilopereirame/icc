#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <math.h>

int main(void){

    setlocale(LC_ALL,"");
 	
 	int aux=0, num2, numCopy, pot;
    long long unsigned int num=0;
 	
	printf("Insira um n�mero bin�rio: ");
	scanf("%lld", &num);
	
	num2 = num;

    pot = 0;

    while(num2 > 0){
        numCopy = num2%10;        
        aux += numCopy * pow(2, pot);				
        num2 = num2/10;	
        pot += 1;        
    }

    printf("\nO numero %lld em decimal � %d\n", num, aux);

    system("pause");
}
