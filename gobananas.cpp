#include <iostream>
#include <string>
#include <ctype.h>
#include <fstream>
#include <algorithm>

using namespace std;

int gobanana(string filename){
    string linea;
    int contador=0,a=0, i=0;
    ifstream file(filename.c_str());
    if(file.is_open()){
      while(getline(file,linea)){
        cout << "checking " << linea << endl;
        transform(linea.begin(), linea.end(), linea.begin(), ::tolower);
        cout << "lower case: " << linea << endl;
        a=0;
        a = linea.find("banana",a);
        while(a !=string::npos){
          cout << "found banana" << endl;
          contador++;
          a = linea.find("banana",a+6);
        }
      }
    }else{
      cout<<"No se pudo abrir el archivo"<<endl;
    }
    return contador;
}
main(){
  string programa;
  int bananas;
  cout<<"Escribe el nombre del programa"<<endl;
  cin>>programa;
  bananas=gobanana(programa);
  cout<<"El número de bananas es "<<bananas<<endl;
}
