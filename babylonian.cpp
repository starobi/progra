#include <iostream>
#include <cmath>
using namespace std;

double babylonian(int raiz){
  double root,diferencia,x;
  root=raiz;
  x=raiz;
   do{
    x=(x+(raiz/x))/2;
    diferencia=abs(x-raiz/x);
  }while(diferencia>.0001);
  return x;
}
main(){
  int squareroot;
  double resultado;
  cout<< "Escribe la raíz que deseas sacar"<<endl;
  cin>>squareroot;
  resultado=babylonian(squareroot);
  cout<<"La raíz cuadrada es "<<resultado<<endl;
}
