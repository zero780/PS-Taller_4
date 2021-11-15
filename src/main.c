#include <stdio.h>
#include "bytes.h"
#define T_LINEA 100

int main(void){
	char entrada[T_LINEA]="";
	char tipoEntrada[T_LINEA]="";
	char valor[T_LINEA]="";
	fgets(tipoEntrada,T_LINEA,stdin);
	while(entrada[0]!='x' && tipoEntrada[0]!='x'){	
		fgets(entrada,T_LINEA,stdin);
		if(esTipodeDato(entrada)){
			copiarArray(entrada, tipoEntrada); //es lo mismo que decir tipoEntrada = entrada
		}
		else if(entrada[0]!='x' && tipoEntrada[0]!='x' && esTipodeDato(tipoEntrada)){
			copiarArray(entrada, valor); //es lo mismo que decir valor = entrada
			printBytes(tipoEntrada, valor);
		}
	}
	return 0;
}
