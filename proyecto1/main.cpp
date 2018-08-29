#include <iostream>

using namespace std;

int main()
{
    int a;
    int b;
    int c;
    cin >> a;
    cin >> b;
    cin >> c;
    cout <<a*b*c<< endl;
    cout <<a+b+c<< endl;
    cout <<(a+b+c)/3.0<< endl;

    if(a>b && a>c){
        cout <<"es:" <<a<< endl;}

    else if(a<b && a<c && b>c){
        cout <<"es:" <<b<< endl;}

    else{}
        cout <<"es:" <<c<< endl;


    if(a%2==0)
        cout <<a<< " es par"<< endl;
    else
        cout <<a<< " no es par"<< endl;

    return 0;
//escriba un programa que escriba un entero, si el valor ingresado es par e impar
}

// sirve para comentar
/*ee
rer
*/
