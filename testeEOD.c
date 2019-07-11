#include <stdio.h>
#include <stdlib.h>

struct byte{
    int feq;
};

int main(){
int i;
char texto[20], c, texto2[20] = "Hello World!";
FILE *pont_arq;

    pont_arq = fopen("teste.txt", "rb");

// Testa abertura do arquivo
    if(pont_arq == NULL){
         printf("ERRO na abertura do arquivo.\n");
        } else {
            printf("Arquivo criado com sucesso \n");
        }

// Lê bytes do arquivo
    while (c != EOF){
        c = getc(pont_arq);
        printf("%c", c);
        texto[i] = c;
        i++;
    }
// Escreve no arquivo
    fprintf(pont_arq, "%s", texto2);

fclose(pont_arq);

return 0;
}
