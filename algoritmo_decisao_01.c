#include <stdio.h>

int main () {

int idade;

printf("Digite a idade: ");
scanf("%d", &idade);

 //Criaça < 12
//Adolecente 12 <= x < 18
//Adulto 18 <= x < 60
//idoso > 60 

if ( idade < 12) {
    printf(" voce é uma criança!\n");
} else if (idade >= 12 && idade <18) {
    printf("voce é um adolecente!\n");
} else if (idade >=18 && idade < 60) {
    printf(" voce é um adulto!\n"); 
} else {
    printf("voce é um idoso!\n");
}
}








