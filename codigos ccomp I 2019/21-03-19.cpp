#include <iostream>


using namespace std;

int main()
{
    // escribir un programa que reciba un caracter por teclado e indica si es un numero
  /* char var;
   cin>>var;
   int x=static_cast<int>(var);
   if((x<=57) && (x>=48))
    cout<<" es un numero"<<endl;
   else cout<<"no es un numero"<<endl;

   //escribir un programa que reciba un caracter por teclado e indica si es una letra,


    if((x<=90) && (x>=65))
        cout<<" es una letra mayuscula"<<endl;
    else if((x<=122) && (x>=97))
        cout<<" es una letra minuscula"<<endl;
    else cout<<" no es una letra";

 //luego en caso de ser mayuscula imprimir su correspondiente minuscula y viceversa

    if((x<=90) && (x>=65)){
        cout<<static_cast<char>(x+32);
        }

    else if((x<=122) && (x>=97)){
        cout<<static_cast<char>(x-32);
    }

    else cout<<" no es una letra";*/

    // implemente un programa que reciba por teclao un numero de 5 digitos e imprima la suma de sus digitos
    int a,suma,b,c,d,e,z ;
    cin>>a;
    b=a%10;
    c=(a%100)/10;
    d=(a%1000)/100;
    z=(a%10000)/1000;
    e=a/10000;
    suma=+b+c+d+e+z;

    cout<<suma;



    return 0;
}
