#include <iostream>
using namespace std;
void factorial(int n){
  int resultado;
  if(n<0)
   cout<<"No se puede sacar el factorial a numeros negativos"<<endl;
  return;
  if(n>0)
    resultado=n*factorial(n-1);
  else if(n==0)
    resultado=1;
  cout<<"El número factorial es "<<resultado<<endl;
  return ;
}
main(){
  int num, res;
  char op;
  do{
    cout<<"Escribe el número que desea convertir en factorial"<<endl;
    cin>>num;
    factorial(num);
    cout<<"¿Quieres calcular otro número factorial?(S/N)";
    cin>>op;
    if(op=='N'||op=='n')
      cout<<"Ten un lindo día"<<endl;
    }while(op=='S'||op=='s');
  return 0;
  }
