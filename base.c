/*
* Arquivo: base.c
* Data de criação: 27/out/2022
* Autor: Augusto Soares
* Meu primeiro programa em C
*/

#include <stdio.h>

int main(int argc, char** argv) {
	for(int i=0; i < argc; i++)
		printf("%s\n", argv[i]);
	printf("BOM DIA NOIA\n");
	return 0;
}