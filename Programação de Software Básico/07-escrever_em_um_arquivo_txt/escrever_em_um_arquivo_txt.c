#include <stdio.h>
#include <string.h>

int main() {
	FILE *fp;
	char data[50];
	
	printf("Abrindo o arquivo.txt\n");
	
	fp = fopen("arquivo.txt", "w");
	
	if (fp == NULL) {
		printf("Falha ao tentar abrir o arquivo.txt\n");
		return 1;
	}
	
	printf("### Digite o que voce deseja salvar no arquivo.txt ###\n");
	
	while(fgets(data, sizeof(data), stdin) != NULL) {
		if (data[0] == '\n') {
			break;
		}
		fputs(data, fp);
		fputs("\n", fp);
	}
	
	printf("Fechando o arquivo.txt\n");
	fclose(fp);
	return 0;
}
