/*3 Realizar la division de polinomios con el método Horner*/

#include <iostream>
#include <conio.h>
#include <math.h>

using namespace std; 

int main ( )
 {
 	int n, i, t, k, m;
   

    cout << " DIVISION DE POLINOMIOS POR HORNER " << endl;
    cout << "Ingresar el grado del polinomio  n" << endl;
    cin >> n;
    int a[n], b[n];
    cout << "\n\n Ingresar los coeficientes \n";
    for(i=0; i<=n; i++)
    {
           m = n-i;
           cout << "\n a("<< m <<") : > ";
           cin >> a[n-i];
     }

     cout << "\n\n ingrese el polinomio: \n\n P(x) = ";
     for(i=0; i<=n; i++)
     {
           m=n-i;
           if(i!=n)
           {
                cout << " " << a[m] << " x' " << m << " + ";
            }
           else
            {
               cout << " " << a[m] << " ";
             }
      }

cout << "\n\n\n Coloque el valor para evaluar el P(x): ";
cin >> t;

b[n] = a[n];
for(k=(n-1); k>=0; k--)
{
     b[k] = t*b[k+1]+a[k];
}

cout << "La raiz es:  " << b[0];
cout << endl << endl;
system("PAUSE");
return 0;
}

