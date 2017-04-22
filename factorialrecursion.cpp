#include <iostream>
using namespace std;
int factorial(int n){
  int resultado;
  if(n>0)
    resultado=n*factorial(n-1);
  else if(n==0)
    resultado=1;
  return resultado;
}
main(){
  int num, res;
  char op;
  do{
    cout<<"Escribe el número que desea convertir en factorial"<<endl;
    cin>>num;
    if(num<0)
      cout<<"No se puede sacar el factorial a numeros negativos "<<endl;
    else{
      res = factorial(num);
      cout<< "El número factorial es "<<res<<endl;
    }
    cout<<"¿Quieres calcular otro número factorial?(S/N)";
    cin>>op;
    if(op=='N'||op=='n')
      cout<<"Ten un lindo día"<<endl;
    }while(op=='S'||op=='s');
  return 0;
  }
