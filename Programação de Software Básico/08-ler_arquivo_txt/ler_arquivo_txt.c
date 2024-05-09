#include <stdio.h>

int main() {
	FILE *fp;
	char data[50];
	
	fputs("Abrindo o arquivo.txt\n", stdout);
	
	fp = fopen("/home/ruannarici/Documentos/AtividadesC/Programação de Software Básico/07-escrever_em_um_arquivo_txt/arquivo.txt", "r");
	
	if (fp == NULL) {
		fputs("Falha ao abrir arquivo.txt\n", stdout);
		return 1;
	}
	
	while(fgets(data, 50, fp) != NULL) {
		fputs("Texto lido: ", stdout);
		fputs(data, stdout);
	}
	
	fclose(fp);
	return 0;
}
