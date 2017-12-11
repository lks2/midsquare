#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){

int num;
int tamanho;
char text[50],meio[50];
char preD1[50]="0",preD2[50]="00",preD3[50]="000";
char temp1;
char primeiro ;
char ultimo ;
int contador=1,cont1=0,numAlet=1,contNum=0;
int x=0, cond=0;


// valor da quantidade de numeros que o usuário vai querer joga na variavel x


printf("\nVOCE DESEJA ESCOLHER UM VALOR DE SEMENTE:\n\n");
printf("[1] SIM\n");
printf("[2] NAO\n");
printf("\nOP%c%cO:  ",128,142);
scanf("%d", &cond);

system("cls");



if (cond==1){
	
// valor da semente que o usuário informar joga na variavel num
printf("Informe um valor para iniciar: ");
scanf("%d",&num);
	
}else if(cond==2){
	
	num=76;
}else{
	
	printf("\nNUMERO INVALIDO\n\n");
	return main();
	}

fflush(stdin);


printf ("\n\nInforme a quantidade de numeros aleatorios que deseja gerar: ");
scanf ("%d",&x);
int vetNum[x];




//for (contNum=0 ; contNum < x ; contNum++){
while((contNum<x)&&(numAlet!=00)){

num = num*num;

for(int contMeio=0 ; contMeio<50 ; contMeio++){
    meio[contMeio] = ' ';
    text[contMeio] = ' ';
}

sprintf(text, "%i", num);
tamanho = strlen(text);

//para numeros com apenas 2 digitos adiciona o prefixo 00 e tranforma em 4 digitos
if (tamanho == 1){
    strcat(preD3,text);
    strcpy(text,preD3);
    tamanho = strlen(text);

}

//para numeros com apenas 2 digitos adiciona o prefixo 00 e tranforma em 4 digitos
if (tamanho == 2){
    strcat(preD2,text);
    strcpy(text,preD2);
    tamanho = strlen(text);
}

//para numeros com apenas 3 digitos adiciona o prefixo 0 e tranforma em 4 digitos
if(tamanho==3){
    strcat(preD1,text);
    strcpy(text,preD1);
    tamanho = strlen(text);
}


//para numeros com 4 digitos ou mais
if (tamanho>= 4){

    // extrair o meio do numero, desconsiderando o primeiro e o ultimo digito
    for(contador =1 ; contador<tamanho-1 ; contador++){
        temp1 = text[contador];
        meio[cont1]=temp1;
        temp1=' ';
        cont1++;
    }

/*
    printf("inteiro - %d\n",num);
    printf("string - %s\n",text);
    printf("tamanho string - %d\n",tamanho);
    printf("meio - %s\n",meio);
    numAlet = atoi(meio);
    printf("meio em numero para o vetor - %d\n",numAlet);
    printf("\n\n\n");
*/

    numAlet = atoi(meio);
    vetNum[contNum] = numAlet;


    num = numAlet;
    tamanho=0;
    for(int contMeio=0 ; contMeio<50 ; contMeio++){
        meio[contMeio] = ' ';
        text[contMeio] = ' ';
        preD1[contMeio] = ' ';
        preD2[contMeio] = ' ';
        preD3[contMeio] = ' ';
    }

    strcpy(preD1,"0");
    strcpy(preD2,"00");
    strcpy(preD3,"000");

cont1=0;
}

cont1=0;
fflush(stdin);

printf("\npos %d - valor %d \n",contNum+1,vetNum[contNum]);
contNum++;
}//for para preencher o vetor de numeros aleatorios

if(numAlet==0){
    printf("\n\n\nCONDI%c%cO DE PARADA!!! NUMERO GERADO 00!\n\n\n",128,142);
}

/*
for (int impr=0 ; impr<8;impr++){
    printf("pos %d - valor %d \n",impr+1,vetNum[impr]);
}
*/


system("PAUSE");


}
