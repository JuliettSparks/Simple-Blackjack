#include <iostream>
#include <time.h>
#include <stdio.h>
#include <stdlib.h>
using namespace std;
int main(){
	int cartas19[9];
	int cartasf[3];
	int opjugador[10];
	int crupier[10];
	int sumaj,sumac=0;
	int op,salir;
	srand(time(NULL));
	for(int i=0; i<2; i++){
		opjugador[i]=1+rand()%12;
		crupier[i]=1+rand()%12;
	}
	cout<<"Estas son vuestras cartas\n";
	for(int i=0; i<2; i++){
		cout<<"["<<opjugador[i]<<"]\n";
		sumaj+=opjugador[i];
		sumac+=crupier[i];
	}
		cout<<"La suma de sus cartas actuales es de "<<sumaj<<endl;
		cout<<char(168)<<"Desea otra carta?\n";
		cout<<"Presione 1 para si o 0 para no\n";
		cin>>op;
		do{
			switch(op){
				case 1: 
							opjugador[2]=1+rand()%12;
							sumaj+=opjugador[2];
							cout<<"Su Nueva Carta es\n";
							cout<<"["<<opjugador[2]<<"]\n";
							if(sumaj>21){
								cout<<"Ha perdido lo siento\n";
								cout<<"Es un Noob\n";
								break;
								salir=1;
							}else{
								cout<<"La Suma actual de sus cartas es de "<<sumaj<<endl;
								break;
							}
				
					case 0:
							salir=2;
							continue;
				}
		}
		while(op!=0);
		if(salir==1){
			return EXIT_SUCCESS;
		}
	if(salir!=2){
	cout<<"Desea otra carta\n";
	cin>>op;
	switch(op){
		case 1: opjugador[3]=rand()%12;
				cout<<"["<<opjugador[3]<<"]\n";
				sumaj+=opjugador[3];
				break;
		case 0: break;
	}
}
else{
	cout<<"La Suma Total de sus Cartas es de "<<sumaj<<endl;
	crupier[2]=1+rand()%12;
	sumac+=crupier[2];
	cout<<"La Suma del Crupier es de "<<sumac<<endl;
	if(sumac==21){
		cout<<"Ha perdido por Noob"<<endl;
	}else{
		cout<<"Ha ganado Baia Baia"<<endl;
	}
}
}
