/*1 Resolución de triángulos  dados 3 datos  tres lados , tres ángulos, 
2 lados  1 ángulo ,2 ángulos 1 lado  resolver los otros tres valores  
y calcular  el area y superficie del triangulo y medianas*/

#include<iostream>
#include<cmath>
#include<stdlib.h>

using namespace std;
const double pi = std::acos(-1);
int main() {
	int n;
	int i=1;
	float a, b, c, a1, b1, c1, A, M, S;
	cout << "Que dato ingresara?" << endl;
		cout << "\t1. 3 LADOS" << endl;
		cout << "\t2. 1 LADO y sus 2 ANGULOS adyacentes" << endl;
		cout << "\t3. 1 LADO, su ANGULO opuesto y 1 ANGULO adyacente" << endl;
		cout << "\t4. 2 LADOS y 1 ANGULO que forman" << endl;
		cin>>n;
		if(n==1){
			cout<<"Ingrese el valor de los 3 LADOS en [m]"<<endl;
			cin>>a; cin>>b; cin>>c;
			S=(a+b+c)/2;
			A=sqrt(S*(S-a)*(S-b)*(S-c));
			cout<<"El AREA del triangulo sera:  "<<A<<" [m^2]";
		}
		if(n==2){
			cout<<"Ingrese el valor de 1 LADO [m]"<<endl;
			cin>>a;
			cout<<"Ingrese el valor del sus 2 ANGULOS adyacentes [gradianes]"<<endl;
			cin>>b1; cin>>c1;
			A=(a*a*std::sin(pi*b1/180)*std::sin(pi*c1/180))/(2*std::sin(pi*(180-b1-c1)/180));
			cout<<"El AREA del triangulo sera:  "<<A<<" [m^2]"<<endl;	
		}
		if(n==3){
			cout<<"Ingrese el valor de 1 LADO [m]"<<endl;
			cin>>a;
			cout<<"Ingrese el valor del su ANGULO adyacente [gradianes]"<<endl;
			cin>>b1;
			cout<<"Ingrese el valor del su ANGULO opuesto [gradianes]"<<endl;
			cin>>a1;
			A=(a*a*std::sin(pi*b1/180)*std::sin(pi*(180-a1-b1)/180))/(2*std::sin(pi*a1/180));
			cout<<"El AREA del triangulo sera:  "<<A<<" [m^2]"<<endl;	
		}
		if(n==4){
			cout<<"Ingrese el valor de los 2 LADOS [m]"<<endl;
			cin>>a; cin>>b;
			cout<<"Ingrese el valor del ANGULO que forman [gradianes]"<<endl;
			cin>>c1;
			A=(a*b*std::sin(pi*c1/180)/2);
			cout<<"El AREA del triangulo sera:  "<<A<<" [m^2]"<<endl;	
		}
	return 0;
}

