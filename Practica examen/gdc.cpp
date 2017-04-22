#include <iostream>
#include <cmath>
using namespace std;
int gcd(int x,int y){
	int resultado=1;
	for(int i=1; (i<y)||(i<x); i++){
		if(x%i==0 && y%i==0){
			resultado=i;
		}
	}
	return resultado;
}
main(){
	int a, b, min;
	cout<< "Escribe el primer número"<<endl;
	cin>>a;
	cout<< "Escribe el segundo número"<<endl;
	cin>>b;
	min=gcd(a,b);
	cout<< min<<endl;
}
