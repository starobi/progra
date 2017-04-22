#include <iostream>
#include <cmath>
using namespace std;
float ve (float[] ar){}

main(){
  float array[10],prom=0,var=0,stdv;

  cout<<"Escribe 10 números"<<endl;

  for(int i=0;i<10;i++){
    cout<<"Escribe tu valor "<<i+1<<endl;
    cin>>array[i];
  }
  cout<<"Números";
  for (int i = 1; i <= 10; i++) {
    cout<<"\t"<<i;
  }
  cout<<endl;
  for(int i=0;i<10;i++){
    cout<<"\t"<<array[i];
  }
  cout<<endl;
  for(int i=0;i<10;i++){
    prom=prom+array[i];
  }
  prom=prom/10;
  for (int i = 0; i<10; i++) {
      var=var+(pow((array[i]-prom),2))/10;
  }
  stdv=sqrt(var);
  cout<<"El promedio es "<<prom<<endl<<"La variacón estandar es "<<stdv<<endl;
  return 0;
}
