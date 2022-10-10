#include <iostream>//libreria de intup output stream
#include <math.h>;//libreria de matemática

using namespace std;//permite que no sea necesario escribir std antes de instrucciones de input, output

//TIPOS DE DATOS
/*int main() { TIPOS DE DATOS

	int entero = 15;//tipo de dato entero
	float flotante = 10.45;//tipo de dato decimal de menor tamaño
	double decimal = 16.3456;//tipo de dato decimal de mayor tamaño
	char letra = 'a';//tipo de dato caracter

	cout <<entero<<endl;
	cout << flotante << endl;
	cout << decimal <<endl;

	system("pause");

	return 0;
}*/

//ENTRADA Y SALIDA
/*int main() {

	int numero;

	cout << "Digite un numero" << endl;
	cin >> numero;

	cout << "El numero digitado es:" << numero;

	system("pause");
}
*/

//PROBLEMA 1A: INGRESO DE DOS NUMEROS Y MOSTRAR SUMA, RESTA, MULTIPLICACION Y DIVISION
/*int main() {

	int n1, n2,suma=0,resta=0,multi=0,divi=0;

	cout << "Ingrese un numero: ";
	cin >> n1;
	cout << "Ingrese otro numero:";
	cin >> n2;

	suma = n1 + n2;
	resta = n1 - n2;
	multi = n1 * n2;
	divi = n1 / n2;

	cout << "Resultado de suma: " << suma << "\nResultado de la resta: " << resta << "\nResultado de la multiplicacion: " << multi << "\nResultado de la division: " <<divi<<endl;

	system("pause");
}
*/

//PROBLEMA 2A: RECIBIR EL PRECIO DE UN PRODUCTO Y SE LE APLIQUE EL IVA
/*int main() {

	float producto, piva=0;

	cout << "Ingrese el valor del producto: ";
	cin >> producto;

	piva = producto*1.12;

	cout << "El precio del producto con iva es de: " << piva;

	system("pause"); 

	return 0;
}*/

//PUNTEROS
/*
int main() {
	int num, * ubic_num;
	num = 20;
	ubic_num = &num;
	cout<<"direccion de la variable: "<<ubic_num;
	cout << "\nvalor de la dirección de memoria: " << *ubic_num<<"\n";

	system("pause");
}
*/

//SABER SI UN NÚMERO ES PAR CON PUNTEROS
/*
int main() {
	int num, * pos_numero;
	cout << "Ingrese un número para ser evaluado: ";
	cin >> num;
	pos_numero = &num;
	if (*pos_numero%2==0)
	{
		cout << "El numero "<<*pos_numero<< " es par";
	}
	else
	{
		cout << "El numero "<<*pos_numero<<" es impar";
	}
	system("pause");
}
*/

//CORRESPONDENCIA ENTRE ARRAY 

int main() {

	int numeros[] = { 1,2,3,4,5 };
	int* dir_numeros;
	dir_numeros = numeros;

	for (int i = 0; i < 5; i++)
	{
		cout << "Posicion de memoria de [" << numeros[i] << "] es: " << dir_numeros++ << endl;
	}

	system("pause");
}