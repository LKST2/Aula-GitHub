#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <windows.h>
	
	int main(){
	
	char nome[100];
	char nome2[100];
	char space[2];
	char space2[2];
	int valor, press, consulta, codigo, saida;
	int data1, data2, data3;
	int i = 0;

	
	printf("________________________\n \n");
	printf("\nBEM-VINDO AO BANCO FIC!\n\n");
	printf("________________________\n \n");
	Sleep(1000);
	
	printf("Pressione ENTER para iniciar.\n \n");
	gets(space);
	Sleep(1500);
	
	printf("Verificamos que esse e o seu primeiro acesso. \nVamos seguir entao com seu cadastro. Ok? \n \n");
	Sleep(3000);
	
	printf("Para iniciarmos digite seu nome completo: \n");
	gets(nome);
	Sleep(1000);
	
	printf("\n\nAgora digite sua data de nascimento completa no formato DD/MM/AAAA: \n");
	scanf("%d / %d / %d", &data1, &data2, &data3);//queria por o formato de data
	Sleep(2000);
	
	printf("\nPerfeito! Agora para finalizarmos digite um valor para deposito.\n");
	Sleep(2000);
	printf("Lembrando que o deposito inicial precisar ser a partir de R$ 100,00:\n \n");// Queria por um limite mínimo e máximo
	scanf("%i", &valor);
	
	if(valor < 100){
		
		do{
			printf("\nO valor digitado e invalido! Digite um valor a partir de R$ 100,00:\n");
			scanf("%i", &valor);
		
		}
		while(valor < 100);
		Sleep(3000);
		
		printf("PROCESSANDO");
		for(i = 0; i <= 3 ; i++){
			printf(".");
			Sleep(1000);
			}
			
		printf("\n \n__________________________________________________\n \n");
		printf("Parabens! Seu cadastro foi realizado com sucesso!\n \n");
		printf("__________________________________________________");
		//criar um codigo de acesso
	}
	
	else{
		
			printf("PROCESSANDO");
		for(i = 0; i <= 3 ; i++){
			printf(".");
			Sleep(1000);
			}
		
		printf("\n \n__________________________________________________\n \n");
		printf("Parabens! Seu cadastro foi realizado com sucesso!\n \n");
		printf("__________________________________________________");
	}
	
	Sleep(3000);
	system("cls");
	
	//teste github
	
	
	printf("________________________\n \n");
	printf("\nBEM-VINDO AO BANCO FIC!\n\n");
	printf("________________________\n \n");
	Sleep(1000);
	
	printf("Pressione ENTER para iniciar. \n \n");
	gets(space2);
	Sleep(1500);
	
	printf("Para realizar uma consulta aos seus dados e saldo pressione 1: \n \n");
	printf("Se voce e novo por aqui e quer realizar um cadastro pressione 2: \n \n");
	/*printf("Caso voce queira realizar alguma operacao pressione 3: \n \n");*/	
	scanf("%i", &press);
	
	if(press == 1){
		
		printf("PROCESSANDO");
		for(i = 0; i <= 5 ; i++){
			printf(".");
			Sleep(1000);
			}
			
		Sleep(1500);
			
		system("cls");
		
		printf("Digite seu codigo de acesso para realizarmos a consulta: \n");//codigo relacionado a um vetor que estará com as informações cadastradas
		scanf("%i", &codigo);
		Sleep(1000);
		
		printf("PROCESSANDO");
		for(i = 0; i <= 5 ; i++){
			printf(".");
			Sleep(1000);
			}
		Sleep(2000);
		
		printf("\n \n__________________________________________________\n \n");
		printf("Ola, %s! Tudo bem? \n", nome);
		printf("Sua data de nascimento e %i / %i / %i \n",data1, data2, data3);
		printf("Voce possui R$ %i,00 em conta. \n",valor);
		printf("\n \n__________________________________________________\n \n");
	}
		
		//Seria legal de por aqui uma opção de confirmar as informações e caso elas não fossem corretas ou colocar o usuario para editá-las e salvá-las
		//Ou entrar em contato com o suporte para edição
	else{
			
		if(press == 2){
				
			Sleep(2000);
			system("cls");
			
			
				
			}
			
		
		}
	
	
	
	return 0;
}

