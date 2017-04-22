#include <iostream>
#include <cmath>
using namespace std;
unsigned long long fibonacci(unsigned int n){
  int resultado=0;
  if(n==0){
    resultado=0;
  }
  if(n==1){
    resultado = 1;
  }
  if(n==2){
    resultado= 1;
  }
  if(n>2){
    resultado =fibonacci(n-1)+fibonacci(n-2);
  }
  return resultado;
}
int main() {
  int num;
  char op;
  do{
  cout << "Ingresa la seria del número fibonacci que desea sacar"<<endl;
  cin>>num;
  if (num<0) {
    cout<<"La serie fibonacci no puede ser negativa"<<endl;
  } else {
      cout<<fibonacci(num)<<endl;
  }
  cout<<"Desea calcular otra serie?(S/N)"<<endl;
  cin>>op;
}while (op=='S'||op=='s');
  return 0;
}
