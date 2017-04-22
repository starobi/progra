#include <iostream>
#include <cmath>
using namespace std;
int sumanumeros(int bajo, int alto){
  int suma,contador;
  suma=0;
  contador=bajo;
  if(bajo>alto){
    cout<<"El número menor es más grande que el mayor"<<endl;
    return 0;
  } else{
    if(bajo==alto){
      cout<<"El número menor es igual al mayor"<<endl;
      return 0;
    } else{
        do{
          suma=suma+contador;
          contador++;
        }while(contador<=alto);
        return suma;
    }
  }


}
int main(){
  int min,max,resultado;
  char op;
  cout <<"Este programa sirve para hacer una suma de un rango de números"<<endl;
  cout <<"Necesitas dar el número menor y mayor del rango "<<endl;
  do{
    cout <<"Número menor:";
    cin >> min;
    cout<<endl<<"Número mayor:";
    cin>> max;
    cout<<endl;
    resultado= sumanumeros(min,max);
    if(resultado>0);{
      cout<<"Resultado: "<<resultado<<endl;
    }
    cout<<"¿Quiere hacer otra suma?(s/n)"<<endl;
    cin>>op;
  }while(op=='S'||op=='s');
return 0;
}
