#include <iostream>
#include <stdlib.h>
using namespace std;
int suma(int numero1, int numero2){
  int resultado;
  resultado = numero1 +numero2;
  return resultado;
}
int resta(int numero1, int numero2){
  int resultado;
  resultado = numero1-numero2;
  return resultado;
}
int multiplicacion(int numero1, int numero2){
  int resultado;
  resultado = numero1*numero2;
  return resultado;
}
int division(int numero1, int numero2){
  int resultado;
  resultado=numero1/numero2;
  return resultado;
}
int residuo(int numero1,int numero2){
  int resultado;
  resultado=numero1%numero2;
  return resultado;
}
int main()
{
int num1, num2, res;
cout <<"Escribe número 1 " <<'\n' ;
cin >> num1;
cout <<"Escribe numero 2 " <<'\n';
cin >> num2;
res = suma(num1,num2);
cout <<"Suma = "<<res<< '\n';
res = resta(num1,num2);
cout <<"Resta = "<<res<< '\n';
res = multiplicacion(num1,num2);
cout <<"Producto = "<<res<<'\n';
res = division(num1,num2);
cout <<"Division = "<<res<<'\n';
res = residuo(num1,num2);
cout <<"Residuo = "<<res<<'\n';

}
