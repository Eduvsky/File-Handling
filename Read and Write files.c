#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include <string.h>

char opc,nomearq[50],writearq[1000];

main ()
{
	printf("Deseja abrir ou ler um arquivo ? r/w :");
	opc = getche();
	
	FILE *arqfile;
	
	switch(opc)
	{
		case ('r'):
			{
				system("cls");
				printf("\n Digite o nome do arquivo que deseja ler :");
				gets(nomearq);
				arqfile = fopen(nomearq,"r");
				
				if(!arqfile)
				{
					printf("erro!");
					system("pause");
					exit(1);
				}
				
				while(!feof(arqfile))
				{
					char st=fgetc(arqfile);
					printf("%c",st);
				}
				
				break;
			}
		
		case ('w'):
			{
				system("cls");
				printf("Digite o nome do arquivo : ");
				gets(nomearq);
				
				arqfile = fopen(nomearq,"a");
				
				printf("O que deseja escrever no arquivo :");
				gets(writearq);
				
				if(!arqfile)
				{
					printf("erro!");
					system("pause");
					exit(1);
				}
				
				fprintf(arqfile,"%s",writearq);
				
				break;
			}
	}
}
