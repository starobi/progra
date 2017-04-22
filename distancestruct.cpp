    #include <iostream>
    #include <cmath>
    using namespace std;

    struct smurf{
      double x;
      double y;
    };

    double distance(smurf p1,smurf p2){
      double dx, dy;
      dx=p2.x - p1.x;
      dy=p2.y - p1.y;
      return sqrt(pow(dx,2)+pow(dy,2));
    return 0.0;
    }

    int main() {
      double resultado;
      smurf punto1,punto2;
      cout<<"Escribe la cordenada x del punto 1 "<<endl;
      cin >>punto1.x;
      cout<<"Escribe la coordenada y del punto 1"<<endl;
      cin>>punto1.y;
      cout<<"Escribe la coordenada x del punto 2"<<endl;
      cin>>punto2.x;
      cout<<"Escribe la coordenada y del punto 2"<<endl;
      cin>> punto2.y;
      resultado=distance(punto1,punto2);
      cout<<"La distancia entre los dos puntos es "<<resultado<<endl;
      return 0;
    }
