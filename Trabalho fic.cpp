#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <windows.h>
	
	int main(){
	
	char nome1[100];
	char nome2[100];
	int valor, press, consulta, codigo, data, saida;

	
	printf("________________________\n \n");
	printf("\nBEM-VINDO AO BANCO FIC!\n\n");
	printf("________________________\n \n");
	Sleep(1000);
	
	printf("Pressione ENTER para iniciar.\n \n");
	Sleep(2000);
	
	printf("Verificamos que esse e o seu primeiro acesso. \nVamos seguir entao com seu cadastro. Ok? \n \n");
	Sleep(4000);
	
	printf("Para iniciarmos digite seu nome completo: \n");
	scanf("%s",nome1);//o próximo código só funciona se digitar o primeiro  o primeiro nome.
	Sleep(1000);
	
	printf("\n\nAgora digite sua data de nascimento completa: \n");
	scanf("%d", &data);//queria por o formato de data
	Sleep(2000);
	
	printf("\nPerfeito! Agora para finalizarmos digite um valor para deposito.\n");
	Sleep(1500);
	printf("Lembrando que o deposito inicial precisar ser a partir de R$ 100,00:\n \n");// Queria por um limite mínimo e máximo
	scanf("%i", &valor);
	
	if(valor < 100){
		
		do{
			printf("\nO valor digitado e invalido! Digite um valor a partir de R$ 100,00:\n");
			scanf("%i", &valor);
		
		}
		while(valor < 100);
		Sleep(3000);
		
		printf("\n \n__________________________________________________\n \n");
		printf("Parabens! Seu cadastro foi realizado com sucesso!\n \n");
		printf("__________________________________________________");
		//criar um codigo de acesso
	}
	
	else{
		
		printf("\n \n__________________________________________________\n \n");
		printf("Parabens! Seu cadastro foi realizado com sucesso!\n \n");
		printf("__________________________________________________");
	}
	
	Sleep(5000);
	system("cls");
	
	
	printf("________________________\n \n");
	printf("\nBEM-VINDO AO BANCO FIC!\n\n");
	printf("________________________\n \n");
	Sleep(1000);
	
	printf("Pressione ENTER para iniciar.\n \n");
	Sleep(2000);
	
	printf("Para realizar uma consulta aos seus dados e saldo pressione 1: \n \n");
	printf("Se voce e novo por aqui e quer realizar um cadastro pressione 2: \n \n");
	/*printf("Caso voce queira realizar alguma operacao pressione 3: \n \n");*/	
	scanf("%i", &press);
	
	if(press == 1){
		
		printf("PROCESSANDO... \n \n");
		Sleep(5000);
		system("cls");
		
		printf("Digite seu codigo de acesso para realizarmos a consulta: \n");//codigo relacionado a um vetor que estará com as informações cadastradas
		scanf("%i", &codigo);
		Sleep(1000);
		
		printf("PROCESSANDO... \n \n");
		Sleep(5000);
		
		printf("\n \n__________________________________________________\n \n");
		printf("Ola, %s! Tudo bem? \n", nome1);
		printf("Sua data de nascimento e %i \n",data);
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

