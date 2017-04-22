#include <iostream>
#include <cmath>
using namespace std;
double distance (double x1,double y1,double x2,double y2){
  double dx, dy;
  dx=x2-x1;
  dy=y2-y1;
  return sqrt(pow(dx,2)+pow(dy,2));
}
int main() {
  double resultado,px1,px2,py1,py2;
  cout<<"Escribe la cordenada x del punto 1 "<<endl;
  cin >>px1;
  cout<<"Escribe la coordenada y del punto 1"<<endl;
  cin>>py2;
  cout<<"Escribe la coordenada x del punto 2"<<endl;
  cin>>px2;
  cout<<"Escribe la coordenada y del punto 2"<<endl;
  cin>> py2;
  resultado=distance(px1,py1,px2,py2);
  cout<<"La distancia entre los dos puntos es "<<resultado<<endl;
  return 0;
}
