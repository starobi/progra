#include <iostream>
#include <cmath>
#include <algorithm>
using namespace std;
double menor(double n1,double n2, double n3, double n4){
  return min(min(min(n1,n2),n3),n4);
}
main(){
  double num1,num2,num3,num4;
  cout<<"Escribe el valor del primer número"<<endl;
  cin>>num1;
  cout<<"Escribe el valor del segundo número"<<endl;
  cin>>num2;
  cout<<"Escribe el valor del tercer número"<<endl;
  cin>>num3;
  cout<<"Escribe el valor del cuarto número"<<endl;
  cin>>num4;
  cout<<"El menor número es "<<menor(num1,num2,num3,num4)<<endl;
}
