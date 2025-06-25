#include <iostream>

using namespace std;

int main(){
	

	int matriz[3][3];
    int n = 0;
    
    for(int fila = 0; fila<3; fila++){
	for(int col =0; col<3; col++){
		matriz[fila][col] = ++n;
	}
}

   
   for(int fila = 0; fila<3; fila++){
		for(int col =0; col<3; col++){
		cout << matriz[fila][col] << "  ";
		
		}
		cout<< endl;
	}
	
	int diagonal1=0;
	int diagonal2=0;
	int TotalDiagonal=0;
	int sumaEsquina=0;
	
	for (int i = 0; i < 3; i++) {
        diagonal1 += matriz[i][i];
        diagonal2 += matriz[i][2 - i];
    }

	 sumaEsquina = matriz[0][0] + matriz[0][2] + matriz[2][0] + matriz[2][2];
	
	cout << "Suma de primer diagonal " << diagonal1 << endl;
	cout << "Suma de segunda diagonal " << diagonal2 << endl;
	cout << "Total de ambas diagonales "  << diagonal1 + diagonal2 << endl;
	cout << "Suma de esquinas: " << sumaEsquina << endl;	
	
	return 0;
}
