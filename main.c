#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int  *vetor;
	char  *str;
	int NumCelulas = 5, TamanhoStr = 10;
	
	//alocando espa�o para vetor e para a string
	vetor = (int *)malloc(NumCelulas = sizeof(int));
	str = (char *)calloc(TamanhoStr,sizeof(char));
	
	//realocando espa�o para vetor - aumentando o vetor em 5 posi��es
	vetor = realloc(vetor,(NumCelulas+5)*sizeof(int));
	
	//liberando os espa�os previamente alocados
	free(vetor);
	free(str);
	
	return 0;
}
