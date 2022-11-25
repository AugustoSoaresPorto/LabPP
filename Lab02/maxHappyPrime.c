/*Aluno: Augusto Soares Porto
Matrícula: 12121ECP016
Ex.difícil 1:.
*/

#include <stdio.h>
#include <math.h>

int verificarFeliz(int num);
double quantDigi(double num), somaQuadrados(double digitos, double num);

int main() {
    double i, digitos, num;
    printf("Informe o numero:\n");
    scanf("%lf", &num);

    digitos = quantDigi(num);
    printf("%lf", digitos);
    printf("%lf", somaQuadrados(digitos,num));
    //for (i=num; i!=1; i--) {
        
    //}
}



double quantDigi(double num) {
    double i=0, soma=0;
    for (i=0; num>= 1; i++) {
        num = num/10;
        soma += 1;
    }
    return soma;
}

double somaQuadrados(double digitos, double num) {
    double soma, val = 0, i;
    for (i = digitos-1; i >= 0; i--) {
        val = trunc(num/(pow(10,i)));
        soma += (pow(val,2));
    }
    return soma;
}