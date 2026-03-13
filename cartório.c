#include <stdio.h> //biblioteca de comunicação com usuario 
#include <stdlib.h> //bibliotaca de alocações de espaços em memoria
#include <locale.h> //biblioteca de alocações de texto por região
#include <string.h> //biblioteca responsavel por cuidar da string

// --- FUNÇÃO DE REGISTRO ---
int registro()
{
	//Inicio criação de varíavel/string
	char arquivo[40];
	char cpf[40];
	char nome[40];
	char sobrenome[40];
	char cargo[40];
	//final da criação de variavel
	
	printf("Digite o CPF a ser cadastrado: ");//coletando informações do usuario
	scanf("%s", cpf);// %s refere-se a string
	
	strcpy(arquivo, cpf); //Responsavel por copiar os valores das string
	
	FILE *file; // cria o arquivo
	file = fopen(arquivo, "w"); // cria o arquivo e o "w" escrever (Write)
	fprintf(file,cpf); // salvo o valor da variavel
	fclose(file); // fecha o arquivo
	
	file = fopen(arquivo, "a");//"a" sigmifica acrecentar (appende)
	fprintf(file,",");//adicionamos "," enbtre os dados
	fclose(file);//fechamos
	
	printf("Digite o nome a ser cadastrado: ");
	scanf("%s",nome);
	
	file = fopen(arquivo, "a");
	fprintf(file,nome);
	fclose(file);
	
	file = fopen(arquivo, "a");
	fprintf(file,",");
	fclose(file);
	
	printf("Digite o sobrenome a ser cadastrado: ");
	scanf("%s",sobrenome);
	
	file = fopen(arquivo, "a");
	fprintf(file,sobrenome);
	fclose(file);
	
	file = fopen(arquivo, "a");
	fprintf(file,",");
	fclose(file);
	
	printf("Digite o cargo a ser cadastrado: ");
	scanf("%s",cargo);
	
	file = fopen(arquivo, "a");
	fprintf(file,cargo);
	fclose(file);	
	
    system("pause");//aguardando comando

}

// --- FUNÇÃO DE CONSULTA ---
int consulta()
{
	setlocale(LC_ALL, "Portuguese"); //Definindo a linguagem 
	
	//Inicio criação de varíavel/string
	char cpf [40];
	char conteudo [200];
	//final da criação de variavel
	
	printf("Digite o CPF a ser consultado:\t");
	scanf("%s",cpf);
	
	FILE*file;// cria o arquivo
	file = fopen(cpf,"r"); //"r" significa ler (read)
	
	if(file== NULL)
	{
	   printf("Não foi possivel abrir o arquivo, não localizado.\n");
	} 
	while(fgets(conteudo,200,file)!=NULL)
	{
		printf("\nEssas são as informações  do usuário:");
		printf("%s",conteudo);
		printf("\n\n");
	}
	
	system("pause");
	
}
int delet()
{
	char cpf[40];
	
	printf ("Digite o CPF a ser deletado:");
	scanf ("%s",cpf);
	
	remove(cpf);
	
	FILE*file;
	file = fopen(cpf,"r");
	
	if(file== NULL)
	{
		printf ("O usuario não se encontra no sistema \n");
		system ("pause");	
	}
	
}

int main()
{
	int opcao=0;//definido as variaveis 
	int x=1;
	
	for(x=1;x=1;)
	{
		
		system("cls");//responsavel por limpar a tela 
	
		setlocale(LC_ALL, "Portuguese"); //Definindo a linguagem 
	
		printf("### Cartório da EBAC ###\n\n"); //inicio do menu
		printf("Escolha a opção desejada do menu:\n\n");
		printf("\t 1 - Registrar nomes\n");
		printf("\t 2 - Consultar os nomes\n");
		printf("\t 3 - Deletar os nomes\n"); 
		printf("\t 4 - Sair do sistema\n\n");
		printf("Opção:");// fim do menu
	
		scanf("%d",&opcao); //Armazenando escolhas
	
		system("cls"); //limpar a tela 
		
		switch(opcao)
		{
			case 1:
			registro();//chamada de função 
	 		break;
	 		
	 		case 2:
	 		consulta();//chamada de função
	 		break;
	 		
	 		case 3:
	 		delet();//chamada de função
      		break;//pause
      		
      		case 4:
      		printf("\t\n Obrigado por utilizar o sistema!\n");//chamada de função
            return 0; // Encerra o programa
      		
      		default:printf("\tOpção não disponivel\n");
			system("pause");
			break; //Fim da seleção de escolha
      			
		}
   }
}
