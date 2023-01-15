// Nome: Augusto Soares Porto
// Matricula: 12121ECP016
// Exerc. dificil1:

#include <stdio.h>
#include <stdlib.h>

int golomb(int * listaGolomb, int intervalo);

int main() {
    int a=0,b=0, aux=0, intervalo=0;
    int * listaGolomb;
    printf("Informe os valores de a e b:\n");
    scanf("%d %d", &a,&b);
    if(b < a) { aux = a; a = b; b = a; }
    intervalo = b-a+1;

    listaGolomb = (int *) malloc(sizeof(int)*(intervalo));

    golomb(listaGolomb, intervalo);
    
    for(int i=0; i!=intervalo; i++) {
        printf("%d ", listaGolomb[i]);
    }

}

int golomb(int * listaGolomb, int intervalo) {
    for (int i=0; i!=intervalo; i++){
        if (i=0)
            listaGolomb[i] = 1;
        else {
            listaGolomb[i] = 1+(golomb(listaGolomb, (i -golomb(listaGolomb, (golomb(listaGolomb,(i-1))-1)))));
        }
    }
}