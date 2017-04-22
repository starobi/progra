#include <iostream>
#include <cmath>
using namespace std;
int minimumThree(int x, int y, int z){
  if(x<y and x<z){
  cout << "El número menor es= ";
  return x;
  } else if(y<x and y<z){
  cout << "El número menor es= ";
  return y;
  } else if(z<x and z<y){
  cout << "El número menor es= ";
  return z;
} else if(z==y and z<x || z==x and x<y || x==y and x<z) {
  std::cout << "Hay dos números menores " << endl;
  }
}
int sumSquares(int x, int y, int z) {
  int suma;
  suma = pow(x,2)+ pow(y,2)+ pow(y,2);
  cout <<"La suma de los números al cuadrado= ";
  return suma;
}
int main(){
  int num1,num2,num3;
  cout<< "Escribe número 1"<<endl;
  cin >> num1;
  cout<< "Escribe número 2"<<endl;
  cin >> num2;
  cout<< "Escribe número 1"<<endl;
  cin >> num3;
  cout <<minimumThree(num1,num2,num3)<<endl;
  cout <<sumSquares(num1,num2,num3)<<endl;
}
