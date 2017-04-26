#include <string>
#include <iostream>
#include "BigIntegerLibrary.hh"

using namespace std;


 string cambio(string n){
   string a="";
   for(int i=n.length()-1;i>=0;i--){
     a = a+n[i];
   }
   return a;
 }

 bool palindromo(string n){
   if(n==cambio(n)){
      return true;
   }else{
     return false;
   }
 }

 bool verpalindromo(string n){
   BigInteger c,d,e;
   string f;
   string m = n;
   for(int b=0;b<=30;b++){
     c=stringToBigInteger(n);
     f=cambio(n);
     d=stringToBigInteger(f);
     e=c+d;
     n=bigIntegerToString(e);
     if(palindromo(n)){
       return true;
     }
   }
   return false;
 }

int main() {
  string nummax, nummin,prueba;
  BigInteger min,max;
  int contpalin=0, nolychrel=0, lychrel=0;
  cout<<"Escribe el valor mínimo"<<endl;
  cin>> nummin;
  cout<<"Escribe el valor máximo"<<endl;
  cin>>nummax;
  min=stringToBigInteger(nummin);
  max=stringToBigInteger(nummax);
  for (min; min<=max; min++) {
    prueba=bigIntegerToString(min);
    if(palindromo(prueba)){
      contpalin++;
    }else if(verpalindromo(prueba)){
      nolychrel++;
    }else{
      lychrel++;
    }
  }
  cout<<"Valor mínimo: "<<nummin<<endl<<"Valor máximo: "<< nummax<<endl;
  cout<<endl<<"Palindomos naturales: "<<contpalin<<endl;
  cout<<"Números no Lychrel: "<<nolychrel<<endl;
  cout<<"Números Lychrel: "<<lychrel<<endl;
  return 0;

}
