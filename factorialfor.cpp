#include <iostream>
using namespace std;
int factorial(int n){
  int resultado=1,contador=1;
  if(n<0)
  return 0;
  if(n==0)
  return 1;
  else {for (contador; n <= count; contador++){
    resultado=resultado*contador;
  }
  return resultado;
}
}
main(){
int num, res;
char op;
do{
cout<<"Escribe el número que desea convertir en factorial"<<endl;
cin>>num;
res = factorial(num);
if(res==0)
cout<<"No se puede sacar el factorial a numeros negativos "<<endl;
else{
  cout<< "El número factorial es "<<res<<endl;
}
cout<<"¿Quieres calcular otro número factorial?(S/N)";
cin>>op;
if(op=='N'||op=='n')
cout<<"Ten un lindo día"<<endl;
}while(op=='S'||op=='s');
return 0;
}
