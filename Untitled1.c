#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>
struct bancoPalavras {
    char A[15];
};
int main(){
    struct bancoPalavras B[15];
    strcpy(B[0].A, "casa");
    strcpy(B[1].A, "carro");
    strcpy(B[2].A, "caramelo");
    strcpy(B[3].A, "luneta");
    strcpy(B[4].A, "dvd");
    strcpy(B[5].A, "participar");
    strcpy(B[6].A, "programacao");
    strcpy(B[7].A, "cerveja");
    strcpy(B[8].A, "computador");
    strcpy(B[9].A, "lua");
    strcpy(B[10].A, "celular");
    strcpy(B[11].A, "agua");
    strcpy(B[12].A, "ventilador");
    strcpy(B[13].A, "helicoptero");
    strcpy(B[14].A, "supernatural");
    srand(time(NULL));
    int opc;
    do {
        printf("\tJOGO DA FORCA\n\n");
        printf("1-Novo Jogo.\n2-Mostrar Banco de Palavras.\n3-Sobre.\n4-Ajuda.\nPara sair digite qualquer numero.\n\n");
        scanf("%d", &opc);
        system("cls");
        switch (opc) {
        case 1:{
        	int v, erros = 0, k, r = rand()%15, tam = strlen(B[r].A);
        	float x;
			char aux[tam], aux2[tam],letra;
			for (k=0;k<tam;k++){
				aux[k]= '_';
			}
			aux[tam] = '\0';
			strcpy (aux2, aux);
			do {
                printf ("Erros: %d\n", erros-1);
                for (k=0; k<tam; k++){
                    printf ("%c ", aux[k]);
                }
                printf("\n\nDigite Uma letra\n");
                scanf("%c", &letra);
                fflush(stdin);
                for (k=0; k<tam; k++) {
                    if (letra!= aux[k] && letra == B[r].A[k]){
                        aux[k]=letra;
                    }
                }
                v = (strcmp(aux,aux2));
                if (v==0){
                    erros++;
                }
                strcpy (aux2, aux);
                system("cls");
                x = strcmp (aux, B[r].A);
			} while (x!=0);
			erros--;
			printf("\n\nParabens, completou nosso jogo com o total de %d erros\n\n\n", erros);
			break;
		}
        case 2:{
            int i;
            printf("Este o nosso banco de palavras.\n\n");
            for (i=0; i<15; i++) {
                printf("%s\n", B[i].A);
            }
            printf ("\n");
            system ("pause");
            system ("cls");
            break;
        }
        case 3:
            printf("Este programa foi feito para o 5 credito da diciplina de lp.\n\n");
			system ("pause");
			system ("cls");
            break;
        case 4:
            printf("Digite uma letra, Se a letra existir em alguma palavra");
            printf("a letra sera exibida, Caso contrario, o contador de erros aumentara ");
            printf("ao fim do programa, mostraremos a quantidade de erros.\n\n");
			system ("pause");
			system ("cls");
            break;
        default:
        	printf("Finalizando programa.\n");
            break;
        }
    }while (opc>=2 && opc <=4);
    return 0;
}
