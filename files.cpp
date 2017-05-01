#include <iostream>
#include <string>
#include <fstream>
using namespace std;

struct lector {
  int contlineas;
  int caracteres;
  int acumulador;
};

lector lectordoc(string nombre){
  lector contador={0,0,0};
  string linea;
  ifstream file(nombre);
  if(file.is_open()){
    while(getline(file,linea)){
      contador.caracteres= linea.length();
      contador.acumulador= contador.acumulador + contador.caracteres;
      contador.contlineas ++;
    }
    return contador;
  }else{
    cout<<"No se pudo abrir el archivo intentalo de nuevo"<<endl;
  }
}
main(){
string archivo;
lector informacion;
cout<<"Escribe el nombre del archivo"<<endl;
cin>>archivo;
informacion=lectordoc(archivo);
cout<<"El archivo tiene "<<informacion.contlineas<<" lineas y "<<informacion.acumulador<< " caracteres"<<endl;
return 0;
}
