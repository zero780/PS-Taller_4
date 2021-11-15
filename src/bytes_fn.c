#include <stdio.h>
#include <stdlib.h>
#include "bytes.h"

void bytesChar(char valor){
	unsigned char *p = (unsigned char *)&valor;
	printf("%d char\n",valor);
	for(int i =0; i<sizeof(valor);i++){
		printf("Byte %d:\t\t%.2x\n",i,*(p+i));
	}

}

void bytesShort(short valor){
	unsigned char *p = (unsigned char *)&valor;
	printf("%d short\n",valor);
	for(int i =0; i<sizeof(valor);i++){
		printf("Byte %d:\t\t%.2x\n",i,*(p+i));
	}
}

void bytesInt(int valor){
	unsigned char *p = (unsigned char *)&valor;
	printf("%d int\n",valor);
	for(int i =0; i<sizeof(valor);i++){
		printf("Byte %d:\t\t%.2x\n",i,*(p+i));
	}
}
void bytesLong(long valor){
	unsigned char *p = (unsigned char *)&valor;
	printf("%ld long\n",valor);
	for(int i =0; i<sizeof(valor);i++){
		printf("Byte %d:\t\t%.2x\n",i,*(p+i));
	}
}
void bytesFloat(float valor){
	unsigned char *p = (unsigned char *)&valor;
	printf("%.2f float\n",valor);
	for(int i =0; i<sizeof(valor);i++){
		printf("Byte %d:\t\t%.2x\n",i,*(p+i));
	}
}
void bytesDouble(double valor){
	unsigned char *p = (unsigned char *)&valor;
	printf("%.2f double\n",valor);
	for(int i =0; i<sizeof(valor);i++){
		printf("Byte %d:\t\t%.2x\n",i,*(p+i));
	}
}

int esTipodeDato(char *entrada){
	int validacion=0;
	if(entrada[0]=='c'&& entrada[1]=='h'&& entrada[2]=='a'&& entrada[3]=='r'){
		validacion=1;
	}
	else if(entrada[0]=='s'&& entrada[1]=='h'&& entrada[2]=='o'&& entrada[3]=='r'&& entrada[4]=='t'){
		validacion=1;
	}
	else if(entrada[0]=='i'&& entrada[1]=='n'&& entrada[2]=='t'){
		validacion=1;
	}
	else if(entrada[0]=='l'&& entrada[1]=='o'&& entrada[2]=='n' && entrada[3]=='g'){
		validacion=1;
	}
	else if(entrada[0]=='f'&& entrada[1]=='l'&& entrada[2]=='o' && entrada[3]=='a' && entrada[4]=='t'){
		validacion=1;
	}
	else if(entrada[0]=='d'&& entrada[1]=='o'&& entrada[2]=='u' && entrada[3]=='b' && entrada[4]=='l'&& entrada[5]=='e'){
		validacion=1;
	}

	return validacion;
}

// Al usar atoi() se debe importar la libreria stdlib.h sino aparece un warning
void printBytes(char *tipoEntrada, char *valor){
	if(tipoEntrada[0]=='c')
		bytesChar(atoi(valor));
	else if(tipoEntrada[0]=='s')
		bytesShort(atoi(valor));
	else if(tipoEntrada[0]=='i')
		bytesInt(atoi(valor));
	else if(tipoEntrada[0]=='l')
		bytesLong(atof(valor));
	else if(tipoEntrada[0]=='f')
		bytesFloat(atof(valor));
	else if(tipoEntrada[0]=='d')
		bytesDouble(atof(valor));
}

void copiarArray(char *entrada, char *salida){
	for(int i =0; i< 100; i++){
		salida[i]=entrada[i];
	}
}
