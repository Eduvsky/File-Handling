#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include <string.h>

main()
{
	char arquivo[200];
	
	printf("Digite o nome do arquivo :");
	scanf("%s",&arquivo);
	
	FILE *a;
	a=fopen(arquivo,"r");
	
	if (!a)
	{
		printf("erro!");
		system("pause");
		exit(1);
	}
	
	while(!feof(a))
	{
		char ch=fgetc(a);
		printf("%c",ch);
				

	}
	fclose(a);
}
