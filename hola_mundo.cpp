#include <iostream>

using namespace std;

int main() {
    int a,b,r,c,f;
    cout << "Hola Mundo" << endl;
    cout<< "ingresa un numero"<<endl;
    cin>> a;
    cout<< "ingrese otro numero"<<endl;
    cin>> b;
    r=a+b;
    cout<< " la suma es = "<< r<<endl;
      cout<< "numero a sacar factorial"<<endl;
   cin>>c;
    if(c<0) f =0;
   else if(c==0) f=1;
   else{
      for (int i = 1; i <= c; i++){
         f = f*i;
      }
   }
   cout<<"Factorial de "<<c<<" es "<<f;
    

    return 0;

}
