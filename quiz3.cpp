#include <iostream>
#include <cmath>
using namespace std;

double square_root(double x){
  return sqrt(x);
}
double square_cube(double x){
  return cbrt(x);
}

int main(){
  double num,r2,r3;
  cout<< "Ingrese el número al que quiere aplicar raíz cuadrada"<<endl;
  cin >> num;
  if (num<0) {
    cout << "No existe raíz negativa";
  } else {
   r2= square_root(num);
   std::cout << "La raíz cuadrada del número es " << r2 <<'\n';
   r3= square_cube(num);
   std::cout << "La raíz cúbica del número es " << r3 << '\n';
  }
}
