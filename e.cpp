#include <iostream>
#include <iomanip>
using namespace std;

float nfactorial(int n){
  float fact;
if(n==0){
return 1;
}
else {return n*nfactorial(n-1);}
}

float calculae(float decimales){
  float e=1,x;
  for(int i=1; i<= decimales; i++){
    e= e + 1/nfactorial(i);
  }
  cout<< fixed << setprecision(decimales);
  return e;
}
main(){
  int dec;
  cout<<"¿Con cuantos decimales deseas caclcular e?"<<endl;
  cin>>dec;
  cout<<"e= "<<calculae(dec);
}
