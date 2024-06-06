#include <stdio.h> //biblioteca de comunicacao com o usuário
#include <stdlib.h> //biblioteca de alocacao de espaco de memória
#include <locale.h> //biblioteca de alocacao de texto por região
#include <string.h> //biblioteca responsavel por cuidar das strings

int registro()
{
	char arquivo[40];
	char cpf[40];
	char nome[40];
	char sobrenome[40];
	char cargo[40];
	char yes[5];
	char no[5];
	
	printf("Digite o CPF a ser cadastrado: ");
	scanf("%s", cpf);
	
	strcpy(arquivo,cpf); //Responsavel por copiar os valores das strings
	
	FILE *file; //cria o arquivo
	file = fopen(arquivo, "w");
	fprintf(file,cpf); //salvo o valor da variavel
	fclose(file); //fecho o arquivo
	
	file = fopen(arquivo,"a");
	fprintf(file," ");
	fclose(file);
	
	printf("Digite o nome a ser cadastrado: ");
	scanf("%s",nome);
	
	file = fopen(arquivo, "a");
	fprintf(file,nome);
	fclose(file);
	
	file = fopen(arquivo,"a");
	fprintf(file," ");
	fclose(file);
	
	printf("Digite o sobrenome a ser cadastrado: ");
	scanf("%s",sobrenome);
	
	file = fopen(arquivo,"a");
	fprintf(file,sobrenome);
	fclose(file);
	
	file = fopen(arquivo,"a");
	fprintf(file," ");
	fclose(file);
	
	printf("Digite o cargo a ser cadastrado: ");
	scanf("%s",cargo);
	
	file = fopen(arquivo, "a");
	fprintf(file,cargo);
	fclose(file);
	
	system ("pause");
	
}

int consultar()
{
	setlocale(LC_ALL, "Portuguese");
	
	char cpf [40];
	char conteudo [200];
	
	printf("Digite o cpf a ser digitado: ");
	scanf("%s",cpf);
	
	FILE *file;
	file = fopen(cpf, "r");
	
	if(file == NULL)
	{
		printf("Não foi possível abrir o arquivo, não localizado!.\n");
	}
	
		
	while(fgets(conteudo, 200, file) != NULL);
	{
		printf("\nEssas são as informacões do usuário: ");
		printf("%s", conteudo);
		printf("\n\n");
	}
	
	system("pause");
	
}

int deletar()
{
	char cpf[40];
	
	printf("Digite o CPF do usuário a ser deletado: ");
	scanf("%s",cpf);
	
	remove(cpf);
	
	FILE *file;
	file = fopen(cpf,"r");
	fclose;
	
	if(cpf == NULL)
	{
		prinft("O usuário não se encontra cadastrado\n");
	}	
	else
	remove(cpf);
	printf("Usuário deletado com sucesso! \n\n");
	
	system("pause");	
}


int main ()
	{
	int opcao=0; 
	int laco=1;
	
	for(laco=1;laco=1;)
	{			
		setlocale(LC_ALL, "Portuguese"); 
		
		system("cls");
		
		printf("###Cartório da EBAC###\n\n"); 
		printf("Escolha opção desejada no menu: \n\n");
		printf("\t1 - Registrar nomes\n");
		printf("\t2 - Consultar nomes\n");
		printf("\t3 - Deletar nomes\n\n");
		printf("Opção: "); 

		scanf("%d", &opcao); 
		
		system("cls");
	
	switch (opcao)
	{
			case 1:
			registro();
			break;
			
			case 2:
			consultar();
			break;
		
			case 3:
			deletar();
			break;
			
			default:
			printf("Essa opção não existe\n");
			system("pause");
			break;		
	}

	}
		}
	





