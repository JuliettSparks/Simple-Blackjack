#include <iostream>
#include <time.h>
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
		opjugador[i]=2+rand()%10;
		crupier[i]=2+rand()%10;
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
			switch(op){
				case 1: 
							opjugador[2]=2+rand()%10;
							sumaj+=opjugador[2];
							cout<<"Su Nueva Carta es\n";
							cout<<"["<<opjugador[2]<<"]\n";
							if(sumaj>21){
								cout<<"Ha perdido lo siento\n";
								cout<<"Es un Noob\n";
								salir=1;
								return EXIT_SUCCESS;
								break;
							}else{
								cout<<"La Suma actual de sus cartas es de "<<sumaj<<endl;
								break;
							}
				
					case 0:
							crupier[2]=2+rand()%10;
							sumac+=crupier[2];
								cout<<"La Suma del Crupier es de "<<sumac<<endl;
	if(sumac==21){
		cout<<"Ha perdido por Noob"<<endl;
		return EXIT_SUCCESS;
	}else{
		cout<<"Ha ganado Baia Baia"<<endl;
		return EXIT_SUCCESS;
	}
	if(sumac>sumaj && sumac<21){
		cout<<"Ha perdido por Noob"<<endl;
		return EXIT_SUCCESS;
	}else{
		cout<<"Ha ganado Baia Baia"<<endl;
		return EXIT_SUCCESS;
	}
		}
			if(salir==1){
				return EXIT_SUCCESS;
			}	
	if(salir!=2 && salir!=1){
	cout<<"Desea otra carta\n";
	cin>>op;
	if(op==1){
		opjugador[3]=2+rand()%10;
				cout<<"["<<opjugador[3]<<"]\n";
				sumaj+=opjugador[3];
				cout<<"La Suma actual de sus cartas es de "<<sumaj<<endl;
				//op=2;
					crupier[2]=2+rand()%10;
	sumac+=crupier[2];
	cout<<"La Suma del Crupier es de "<<sumac<<endl;
	if(sumac==21){
		cout<<"Ha perdido por Noob"<<endl;
	}else{
		cout<<"Ha ganado Baia Baia"<<endl;
	}
	if(sumac>sumaj && sumac<21)
	cout<<"Ha perdido por Noob"<<endl;
	}
	else{
	cout<<"La Suma Total de sus Cartas es de "<<sumaj<<endl;
	crupier[2]=2+rand()%10;
	sumac+=crupier[2];
	cout<<"La Suma del Crupier es de "<<sumac<<endl;
	if(sumac==21){
		cout<<"Ha perdido por Noob"<<endl;
		return EXIT_SUCCESS;
	}else{
		cout<<"Ha ganado Baia Baia"<<endl;
		return EXIT_SUCCESS;
	}
	if(sumac>sumaj && sumac<21){
		cout<<"Ha perdido por Noob"<<endl;
		return EXIT_SUCCESS;
	}else{
		cout<<"Ha ganado Baia Baia"<<endl;
		return EXIT_SUCCESS;
	}
}
}
}
