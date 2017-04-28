#include <iostream>
#include <math.h>
#include <string.h>

#define TAMa 2
#define TAMb 3

using namespace std;
//1 Transformar de millas a kilometros
float trans(int milla){
	float kilo;
	kilo = milla * 1.60934;
	return kilo;
}
//***************************************
//2 Convertir de farenheit a celsius
void conver(int f){
	float c;
	for(int i= 0; i< f; i+=20){
		c = (i - 32) * 5/9;
		cout << "Farenheit: "<< i << "Celsius: "<< c << endl;
	}
}
//**********************************************
//3 Comprobar de si el numero es par o impar
int comprobar( int a){
	while ( a > 0){
		if ( a % 2 == 0){
			cout << " Es par";
			return 0;
		}
		else{		
			cout << " Es impar";
			return 0;
	}
	return 0;
}
}
//*******************************************
//4 Un numero y elevado a un x
long long exponente(int a , int b){
	long long c= 1l;
	if (b == 0)
		return 1l;
	for ( int i = 0; i<b ;i++){
		c = c * a;
	}
	return c;
}
//*********************************************
//5 Ingresas un numero y te bota el texto del numero
int numero(int a){
	switch (a){
		case -1:
			return 0;
		case 1:
			cout << "Uno";
			return 0;
		case 2:
			cout << "Dos";
			return 0;
		case 3:
			cout << "Tres";
			return 0;
		case 4:
			cout << "Cuatro";
			return 0;
		case 5:
			cout << "Cinco";
			return 0;
		case 6:
			cout << "Seis";
			return 0;
		case 7:
			cout << "Siete";
			return 0;
		case 8:
			cout << "Ocho";
			return 0;
		case 9:
			cout << "Nueve";
			return 0;
		default:
			cout << "Numero no permitido";
			return 0;
}
}
//*****************************************************
//6 Operar ingresando un string con numeros y el signo
float operar(int a, int b, string c){
	if(c == "+"){
		cout << a + b;
		return 0;
	}
	else if(c == "-"){
		cout << a - b;
		return 0;
	}
	else if(c == "*"){
		cout << a * b;
		return 0;
	}
	else if(c == "/"){
		cout << a / b;
		return 0;
	}
	else if(c == "%"){
		cout << a % b;
		return 0; 
	}
	else if(c == "**"){
	
		cout << pow(a,b);
		return 0;
	}
	else		
		return 0;
}
//****************************************************
//7 Intercambiando valores ingresados por referencia
void inter(int &a, int &b){
	int temp;
	temp = a;
	a = b;
	b = temp;
}
//******************************************************
//8 Intercambiando valores ingresados utilizando punteros
void interc(int *a, int *b){
	int temp;
	temp = *a;
	*a = *b;
	*b = temp;
}
//********************************************************
//9 Multiplicacion de matrices
void producto(int matriz[TAMa][TAMb], int matrizb[TAMb][TAMa], int matrizc[TAMa][TAMa]){
	for (int i = 0; i < TAMa;i++){
		for (int r = 0; r < TAMa; r++){
			matrizc[i][r] = 0;
			for (int t =0; t < TAMb; t++){
				matrizc[i][r] += matriz[r][t] * matrizb[t][r];	
			}
		}
	}
}
//Imprimir matriz opcional
void impri(int matriz[TAMa][TAMa]){
	cout << "Los valores de la matriz son: "<<endl;
	for (int i = 0; i < TAMa; i++){
		for (int j = 0 ;j < TAMa ;j++){
			cout << matriz[i][j];
		}
		cout <<endl;
	}
}
//********************************************************
//10 Ordenar por insercion-sort
void insertion(int arr[],int numero_de_array){
    int temp,j;
    for(int i=0;i<numero_de_array;i++){
        j=i;
        while(j>0 && arr[j]<arr[j-1]){
            temp=arr[j];
            arr[j]=arr[j-1];
            arr[j-1]=temp;
            j--;
        }
    }
}
//**************************************
//11 Ordenacion por merge-sort
//Imprimir array opcional
void impri_arr(int arr[], int tam){
	for( int i = 0; i < tam; i++){
		cout << arr[i] << endl;
	}
}
//Formar un array opcional
void formar(int arr[],int tam){
	cout << "Ingrese los valores de tu array: "<< endl;
	for(int i = 0; i < tam; i++)
	cin >> arr[i];
}
//*************************************************
//12 Voltear un array 
void voltear(int arr[], int tam){
	for(int i = 0; i < tam/2; i++){
		int temp;
		temp = arr[i];
		arr[i] = arr[tam -1 -i];
		arr[tam-i-1] = temp;
	}
}
//***********************************
//13 Voltear un array usando punteros
void voltear_p(int arr[], int tam){
	int cont;
	int *p, *q;
	p = arr;
	q = arr;
	for(cont = 0; cont < tam/2; cont++, p++){
		int temp;
		temp = *p;
		*p = *(q + tam-1 -cont);
		*(q + tam-1- cont)= temp;
	}
}
//***********************************************
//14 Sumando los valores de un array recursivamente
int sum(int arr[], int cont, int suma, int tam){
	if( cont == tam)
		return suma;
	else{
		suma += arr[cont];
		cont+= 1;
		return sum(arr, cont, suma, tam);
	}
}
//**************************************************
//15 Verificar un string si es palidrome 
int verificar(string arr[], int tam){
	int cont = 0;
	int i = 0;
	while( i < tam/2){
		if(arr[i] == arr[tam-i]){
			i++;
			cont ++;
		}
		else{
			i++;
			break;
		}
	}
	if ( cont == tam/2 ){
		cout<< cont << endl;
		cout <<"Es palindrome";
		return 0;
	}
	else{
		cout << "No es palindrome";
		return 1;
	}
}
//**********************************************************************
int main() 
{
	//int a;
	//cin >> a;
	//cout << trans(a);
	//conver(a);
	//comprobar(a);
	//numero(a);
	//int b;
	//cin >> b;
	//cout << exponente(a,b);
	//cout<< "Paso por referencia"<<endl;
	//cout << "Antes del intercambio, valor de a: "<< a <<" " <<"valor de b: "<< b<< endl;
	//inter(a,b);
	//cout <<"Despues del intercambio, valor de a: "<< a<<" "<<"valor de b: "<< b <<endl;
	//cout << "Por punteros"<<endl;
	//cout << "Antes del intercambio, valor de a: "<< a <<" " <<"valor de b: "<< b<< endl;
	//interc(&a,&b);
	//cout <<"Despues del intercambio, valor de a: "<< a<<" "<<"valor de b: "<< b <<endl;
	//int matriz[TAMa][TAMb] = {{1,1,1},{1,1,1}};
	//int matrizb[TAMb][TAMa] = {{1,1},{1,1},{1,1}};
	//int matrizc[TAMa][TAMa];
	//producto(matriz, matrizb,matrizc);
	//impri(matrizc);
	//int tama;
	//int ararb[tama];
	//cout << "Ingrese el tamanio de su array: "<< endl;
	//cin >> tama;
	//int suma = 0, d = 0;
	//formar(ararb, tama);
	//cout << "Su array desordenada: "<<endl;
	//impri_arr(ararb, tama);	
	//insertion(ararb, tama);
	//cout << "Su array ordenada: "<<endl;
	//impri_arr(ararb, tama);
	//cout << "Su array antes del volteo es: " << endl; 
	//impri_arr(ararb, tama);
	//voltear(ararb,tama);
	//cout << " Su array despues del volteo es: "<< endl;
	//impri_arr(ararb, tama);
	//cout << "Su array antes del volteo es: " << endl; 
	//impri_arr(ararb, tama);
	//cout << " Su array despues del volteo con punteros es: "<< endl;
	//voltear_p(ararb, tama);
	//impri_arr(ararb, tama);
	//int arar[] = {1,2,3,4,5};
	//int tam = 5;
	//suma = sum(ararb,d,suma, tama);
	//cout <<"La suma del array es: "<< suma<< endl;
	//string c;
	//cin >> c;	
	//operar(a,b,c);
	
	//string arr[] = "tomate";
	//int tam = 6;
	//verificar(arr, tam);
	return 0;
}
