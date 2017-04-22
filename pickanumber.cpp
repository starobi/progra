# include <iostream>
# include <cmath>
# include <cstdlib>
using namespace std;
int randomnumber (){
  int random;
  random = rand()%100+1;
  return random;
}
void pistas (int numus, int random){
    if (numus==random){
      cout <<"¡ADIVINASTE EL NÚMERO, FELICIDADES!"<<endl;
    }else{
      if(numus<random){
        cout<< "El número es menor"<<endl;
      } else if (numus> random){
        cout<< "El número es mayor"<<endl;
      } else if(numus<0 && numus>100){
        cout << "El número esta fuera del rango"<<endl;
      }
    }
}
int main (){
int num, secret, contador=0;
char op;
cout<<"El chiste de este juego es adivinar el número dentro del rango del 1 al 100"<<endl;
do{
  secret=randomnumber();
  contador = 0;
  do{
    if (contador==0) {
      cout<<"Escribe un número"<<endl;
    } else {
      cout<<"Intenta de nuevo"<<endl;
    }
    cin>> num;
    pistas(num,secret);
    contador++;
  } while (num!= secret);
  cout<<"Adivinaste el número en "<<contador<<" intentos"<<endl;
  cout<<"¿Quieres seguir jugando?(s/n)";
  cin>>op;
}while(op=='s'||op=='S');
}
