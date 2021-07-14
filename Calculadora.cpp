#include<iostream>
#include<stdlib.h>
using namespace std;
float suma(float a, float b);
float resta(float a,float b);
float multiplicacion(float a, float b);
float division(float a, float b);

int main(){
	int i;
	float a;
	float b;
	do{
		system("CLS");
		cout<<"	"<<"|||||||||||||||||||||||||||||||||"<<endl;
		cout<<"	"<<"|||||||||||||||||||||||||||||||||"<<endl;
		cout<<"	"<<"|||||||||||||||||||||||||||||||||"<<endl;
		cout<<"	"<<"||| Seleccione una operacion: |||"<<endl;
		cout<<"	"<<"|||||||||||||||||||||||||||||||||"<<endl;
		cout<<"	"<<"||||1.Suma	|||||||||||||||||"<<endl;
		cout<<"	"<<"||||2.Resta	|||||||||||||||||"<<endl;
		cout<<"	"<<"||||3.Multiplicacion	|||||||||"<<endl;
		cout<<"	"<<"||||4 Division	|||||||||||||||||"<<endl;
		cout<<"	"<<"||||0.Salir	|||||||||||||||||"<<endl;
		cout<<"	"<<"|||||||||||||||||||||||||||||||||"<<endl;
		cout<<"	"<<"|||||||||||||||||||||||||||||||||"<<endl;
		cout<<"	"<<"|||||||||||||||||||||||||||||||||"<<endl;
		cin>>i;
		switch(i){
			system("CLS");
			case 1:{
				cin>>a;
				cin>>b;	
				float r = suma(a,b);
				cout<<""<<r<<endl;
				system("PAUSE");
				break;
			}
			case 2:{
				cin>>a;
				cin>>b;	
				float r = resta(a,b);
				cout<<""<<r<<endl;
				system("PAUSE");
				break;
			}
			
			case 3:{
				cin>>a;
				cin>>b;
				float r = multiplicacion(a,b);
				cout<<""<<r<<endl;
				system("PAUSE");
				break;
			}
			case 4:{
				cin>>a;
				cin>>b;	
				float r = division(a,b);
				cout<<""<<r<<endl;
				system("PAUSE");
				break;
			}
		}
	}while(i!=0);
	
	return 0;
}

float suma(float a, float b){
	float r = a+b;
	return r;
}
float resta(float a,float b){
	float r=a-b;
	return r;
}
float multiplicacion(float a, float b){
	float r = a*b;
	return r;
}

float division(float a, float b){
	float r = a/b;
	return r;
}
