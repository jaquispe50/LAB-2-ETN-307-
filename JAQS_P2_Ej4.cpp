/*4 Resolver un sistema de 2 ecuaciones y 2 incógnitas*/

#include<iostream>
#include<cmath>
using namespace std;
float a,b,c,d,e,f,x,y,q,p,l,m,n,r,o,t;
int main(){
	cout <<"SISTEMA DE ECUACIONES A RESOLVER:"<<endl;
	cout<<"ax+by=c"<<endl;
	cout<<"dx+ey=f"<<endl;
	cout<<"INGRESAR LOS VALORES QUE DESEAS QUE TENGA EL SISTEMA DE ECUACIONES"<<":"<<endl;
	cout<<"INGRESAR EL VALOR QUE DEAS QUE TENGA a"<<":";
	cin >>a;
	cout<<"INGRESAR EL VALOR QUE DEAS QUE TENGA b"<<":";
	cin >>b;
	cout<<"INGRESAR EL VALOR QUE DEAS QUE TENGA c"<<":";
	cin >>c;
	cout<<"INGRESAR EL VALOR QUE DEAS QUE TENGA d"<<":";
	cin >>d;
	cout<<"INGRESAR EL VALOR QUE DEAS QUE TENGA e"<<":";
	cin >>e;
	cout<<"INGRESAR EL VALOR QUE DEAS QUE TENGA f"<<":";
	cin >>f;
	y=((a*f)-(d*c))/((a*e)-(b*d));
	cout<<"valor de y="<<y<<endl;
	x=(c-b*y)/a;
	cout<<"valor de x="<<y<<endl;
	cout<<"valor de X y Y cuando se incrementa el valor de a,b,c y se decrementa el valor de d,e y f"<<endl;
	
	/*LAS SIGUIENTES OPERACIONES SON LOS INCREMENTOS 
	DE LAS VARIABLES a,b,c DE LA PRIMERA ECUACION Y 
	EL DECREMENTO DE LAS VARIABLES d,e,f DE LA SEGUNDA ECUACION*/
	
	l=++a;
	m=++b;
	n=++c;
	o=--d;
	r=--e;
	t=--f;
	p=((n*o)-(t*l))/((o*m)-(l*r));
	cout<<"valor de y="<<p<<endl;
	q=(n-(m*p))/l;
	cout<<"valor de x="<<q;
	system("PAUSE");
	return 0 ;
}
