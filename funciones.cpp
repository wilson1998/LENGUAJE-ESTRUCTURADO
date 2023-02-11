#include <iostream>
#include <windows.h>
#include <time.h>

using namespace std;



int suma (int n1, int n2){
	return n1+n2;	
}

int resta (int n1, int n2){
	return n1-n2;	
}
int multiplicacion (int n1, int n2){
	return n1*n2;	
}
float division (float n1, float n2){
	return n1/n2;	
}
float definitivas (float n1, float n2){
	
	float def=((3-(n1*0.3+n2*0.3))/0.4);	
	return def;	
}

bool primo (int num){
	int cont=0;
	for(int i=1;i<=num;i++){
		
		if(num % i==0 ){
			
			cont++;
		}
		
	}	
	
	if(cont==2){
		return true;
	}else{
		return false;
	}
	
}

bool numeroperfecto(int num){
	
	int cont=0;
	for(int i=1;i<num;i++){
		
		if(num % i ==0 ){
			
			cont=cont+i;
		}
	}
	
	if(cont==num)
		return true;
	else 
	    return false;
	
	
	
}

void menu(){	
	cout<<"\t\t MENU "<<endl;
	cout<<"1. SUMA"<<endl;
	cout<<"2. RESTA"<<endl;
	cout<<"3. MULTIPLICACION"<<endl;
	cout<<"4. DIVISION"<<endl;
	cout<<"5. PROM"<<endl;
	cout<<"6. PRIMOS"<<endl;
	cout<<"7. NUMEROS  PERFECTOS"<<endl;
	cout<<"8. SALIR"<<endl;
	cout<<"seleccionar....."<<endl;	
}

main(){
	srand(time(NULL));
	int opc; 
	
	float num1,num2;
    for(int i=0; i<=1;i++){
		menu();
		cin>> opc;
		
		if(opc>=1 and opc<=5){
							cout<<"INGRESE EL PRIMER NOTA"<<endl;
							cin>> num1;
							cout<<"INGRESE EL SEGUNDA NOTA"<<endl;
							cin>> num2;
		}else if(opc==6 or opc==7){
			
						    
						 num1=rand()% 10+1;
		}

		switch(opc){
			
						case 1:
							cout<<"LA SUMA DE "<< num1 <<" + "<<num2<<" = "<<suma(num1,num2)<<endl;
							system("pause"); system("cls");
							i=0;
			break;
						case 2:
							cout<<"LA RESTA DE "<< num1 <<" - "<<num2<<" = "<<resta(num1,num2)<<endl;
							system("pause"); system("cls");
							i=0;
			break;
						case 3:
							cout<<"LA MULTIPLICACION DE "<< num1 <<" * "<<num2<<" = "<<multiplicacion(num1,num2)<<endl;
							system("pause"); system("cls");
							i=0;
			break;
						case 4:
							cout<<"LA DIVISION DE "<< num1 <<" / "<<num2<<" = "<<division(num1,num2)<<endl;
							system("pause"); system("cls");
							i=0;
			break;
						case 5:
							cout<< "nota para sacar 3 es "<<	definitivas(num1,num2)<<endl;
		             }  		 system("pause"); system("cls");
							i=0;
			break;
				     	case 6:
				     	   if(primo(num1)==true){
				     	   	
				     	   	cout <<"EL NUMERO "<<num1<<" ES UN NUMERO PRIMO"<<endl;
				     	   	
							}else{
								cout <<"EL NUMERO "<<num1<<" NO ES UN NUMERO PRIMO"<<endl;
							}
							system("pause"); system("cls");
							i=0;
			break;
						case 7:
							if(numeroperfecto(num1)==true){								
								cout <<"EL NUMERO "<<num1<<" ES UN NUMERO PERFECTO"<<endl;								
							}else{
								cout <<"EL NUMERO "<<num1<<" NO ES UN NUMERO PERFECTO"<<endl;
							}
							system("pause"); system("cls");
							i=0;
			break;
						case 8:
							system("pause"); system("cls");
							i=2;
			break;
			default: cout<< "opcion invalida"<<endl; i=0; system("pause"); system("cls");
		}
	}

}

