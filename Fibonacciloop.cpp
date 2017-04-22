#include <iostream>
#include <cmath>
using namespace std;
unsigned long long fibonacci(unsigned int n){
  int x1=0, x2=1, resultado=1;
  for (int i = 1; i <n; i++) {
      resultado = x1+x2;
      x1=x2;
      x2=resultado;
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
