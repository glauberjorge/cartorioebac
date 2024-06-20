#include <stdio.h> //bliblioteca de comunicação com o usuário
#include <stdlib.h> //biblioteca de alocação de espaço em memoria
#include <locale.h> //biblioteca de alocações de texto por região
#include <string.h>// biblioteca responsavel por cuidar das string
int registro()// Função responsavel por cadastrar
{
	// Inicia da criação de variaveis 
	char arquivo[40];
	char cpf[40];
	char nome[40];
	char sobrenome[40];
	char cargo[40];
	
	printf("Digite o CPF a ser cadastrado:"); // coletar informações do usuário
	scanf("%s", cpf); //%s refere-se a string
		
	strcpy(arquivo, cpf); //Responsavel por copiar os valores das string
	
	FILE *file; // Cria o arquivo 
	
	file = fopen(arquivo,"a");
	fprintf(file, "\n CPF:");
	fclose(file);
	
	file = fopen(arquivo, " a"); // cria o arquivo e o "w" significa escrever
	fprintf(file,cpf);// salvo o valor da variavel
	fclose(file); // fecha o arquivo
	

	
	printf("Digite o nome a ser cadastrado:");
	scanf("%s",nome);
	
	file = fopen(arquivo,"a");
	fprintf(file,"\n NOME:");
	fclose(file);
	
	file = fopen(arquivo," a");
	fprintf(file,nome);
	fclose(file);
	
	
	
	printf("Digite o sobrenome a ser cadastrado:");
	scanf("%s",sobrenome);
	
	file = fopen(arquivo,"a");
	fprintf(file,"\n SOBRENOME:");
	fclose(file);
	
	file = fopen(arquivo,"a");
	fprintf(file,sobrenome);
	fclose(file);
	

	printf("Digite o cargo a ser cadastrado:");
	scanf("%s",cargo);
	
	file = fopen(arquivo,"a");
	fprintf(file,"\n C							ARGO:");
	fclose(file);
	
	file = fopen(arquivo," a");
	fprintf(file,cargo);
	fclose(file);
	
	
	
	
	
	system("pause");
	
}

int consultar()// Função responsavel por consdultar
{
	setlocale(LC_ALL, "Portuguese"); // Definindo linguagem
	
	char cpf[40];
	char conteudo[200];
	
	printf("Digite o CPF a ser consultado:");
	scanf("%s",cpf);
	
	FILE *file;
	file = fopen(cpf,"r");
	
	if(file == NULL)
	{
		printf("Não foi possivel abrir o arquivo, não localizado!. \n");
	}
	
	while(fgets(conteudo, 200, file) != NULL)
	{
		printf(" ");
		printf("%s", conteudo);
		
	}
	printf("\n");
	printf("\n");
	system("pause");
	
	fclose(file);
}

int deletar()// Função responsasel por deletar
{
	char cpf[40];
	
	printf(" Digite o CPF do usuário a ser deletado:");
	scanf("%s",cpf);
	
	remove(cpf);
	
	FILE *file;
	file = fopen(cpf,"r");
	
	if(file == NULL)
	
	
	{
		printf("O usuário foi deletado do sistema!\n");
		system("pause");	
	}

	

	if(file != NULL )

	{	
		printf("O usuário não se encontra no sistema!.\n");
		system("pause");
	}
	
	
	
		
}

int main ()
{
	int opcao=0; //variavel inicial 
	
	int laco=1;
	
	for(laco=1;laco=1;)
	{
		
		system("cls"); // responsavel por limpar a tela
		
		setlocale(LC_ALL, "Portuguese"); //selecionar a linguaguem
	
		printf("     Cartório da EBAC    \n\n"); // inicio do menu
		printf("Escolha a opção desejada do menu:\n\n"); 
		printf("\t1 - Resgistrar nomes\n"); 
		printf("\t2 - Consultar nomes\n");
		printf("\t3 - Deletar nomes\n\n");
		printf(" Opção:");// final do menu
	
		scanf("%d", &opcao);// armazenando as informações 
	
		system("cls");
		
		switch(opcao)// inicio da seleção
		{
			case 1: 
			registro(); // chamada de função 
		   	break;
			
			case 2:
			consultar();
			break;
			
			case 3:
			deletar();
			break;
			
		
			
			default:
			printf("Essa opção não esta disponivel!\n");
			system("pause");
			break;
				
		}// fim da seleção 
	
    
    	}
}
