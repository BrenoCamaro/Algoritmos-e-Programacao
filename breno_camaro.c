#include <stdio.h>
#include <stdlib.h>

int main() {
system("color 7c");

char nome[40];
int idade;
char sexo [10];
float altura;
char endereco [50];
int numero_endereco;
char data_nascimento [15];
char cpf [50];


printf("Digite seu nome:");
scanf("%[^\n]s",nome);
fflush(stdin);

printf("Digite sua idade:");
scanf("%d", &idade);
fflush(stdin);

printf("Digite seu sexo:");
scanf(" %s", sexo);
fflush(stdin);

printf("Digite sua altura:");
scanf("%f", &altura);
fflush(stdin);

printf("Digite seu endereco:");
scanf ("%[^\n]s", endereco);
fflush(stdin);

printf("Digite o numero do seu endereco:");
scanf("%d", &numero_endereco);
fflush(stdin);

printf("Digite sua data de nascimento:");
scanf("%s", data_nascimento);
fflush(stdin);

printf("Digite seu cpf:");
scanf("%s", cpf);
fflush(stdin);

printf("+ - - - - - - - - - - - - - - - - - - - - - - - +\n\n");
printf("|              DADOS INFORMADOS\n\n");
printf("+ - - - - - - - - - - - - - - - - - - - - - - - +\n\n");
printf("\nNome: %s\n\nIdade: %d\n\nSexo: %s\n\nAltura: %.2f\n\nEndereco: %s\n\nNumero do endereco: %d\n\nData de nascimento: %s\n\nCPF: %s", nome,idade,sexo,altura,endereco,numero_endereco,data_nascimento,cpf);




     
  

	return 0;

}
