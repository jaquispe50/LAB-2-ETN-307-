/*2 Generar matrices enésimas de Vandermonde  y calcular el determinante*/

#include <bits/stdc++.h>
using namespace std;
int N = 0;
bool isFirst = true;


int pot(int n, int p) {
	int aux = 1;
	for (int i = 0; i < p; ++i){
		aux = aux * n;
	}
	return aux;
}
//f(x) = x + f(x - 1)
int determinant(vector<vector<int>> matrix, int n) {
   int det = 0;
  
   vector<vector<int>> submatrix;
   submatrix.assign(n,vector<int>());
   for (int i = 0; i < n; ++i){
   	for (int j = 0; j < n; ++j){
   		submatrix[i].push_back(0);
   	}
   }
   //caso base
   if (n == 2)
   return ((matrix[0][0] * matrix[1][1]) - (matrix[1][0] * matrix[0][1]));
   else {
      for (int x = 0; x < n; x++) {
         int subi = 0;
         for (int i = 1; i < n; i++) {
            int subj = 0;
            for (int j = 0; j < n; j++) {
               if (j == x)
               continue;
               submatrix[subi][subj] = matrix[i][j];
               subj++;
            }
            subi++;
         }
         det = det + (pow(-1, x) * matrix[0][x] * determinant(submatrix, n - 1));
      }
   }

   return det;
}

int main() {

	cout<<"inserte un N"<<endl;
	int n;
	cin>>n;
	int v[n]; //[2,3,5,6,3]
			  //[2 3 4 5 5]
	cout<<"inserte las variables"<<endl;
	for (int i = 0; i < n; ++i){
		cin>>v[i];
	}
	int vand[n][n];
	for (int i = 0; i < n; ++i){
		for (int j = 0; j < n; ++j){
			vand[j][i] = pot(v[j], i);	
		}
	}
	cout<<endl;
	for (int i = 0; i < n; ++i){
		for (int j = 0; j < n; ++j){
			cout<<vand[i][j]<<" ";	
		}
		cout<<endl;
	}

	
	vector<vector<int>> matrix;
	matrix.assign(n,vector<int>());
	for (int i = 0; i < n; ++i){
		for (int j = 0; j < n; ++j){
			matrix[i].push_back(vand[i][j]);
		}	
	}
	cout<<endl;
	cout<<"la determinante es:"<<endl;
	cout<<determinant(matrix, n)<<endl;
	return 0;
}
