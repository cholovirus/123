#include <iostream>

using namespace std;

int main()
{
    int a,b,c;
    cin>>a; cin>>b; cin>>c;

   /* cout<<"el mayor es: ";

    if((a>=b)&&(b>=c))
        cout<<a<<endl;
    else if (b>c)
        cout<<b<<endl;
    else
        cout<<c<<endl;

// par o impar
    if(!(a%2))
        cout<<"es par "<<endl;
    else
        cout<<"es impar ☠"<<endl;

// multiplo o no multiplo
    if(!(b%a))
        cout<< "si es multiplo"<<endl;
    else
        cout<<"no es multiplo ☠"<<endl;*/

// suma, promedio, producto, mayor y menor
    cout<<a+b+c<<endl;
    cout<<(a+b+c)/3<<endl;
    cout<<a*b*c<<endl;

    if((a>=b)&&(b>=c)){
        cout<<"el mayor es: "<<a<<endl;
        cout<<"el menor es: "<<c<<endl;}
    else if (b>c){
        cout<<"el mayor es: "<<b<<endl;
        cout<<"el menor es: "<<c<<endl;}
    else{
        cout<<"el mayor es: "<<c<<endl;
        if(a>b)
            cout<<"el menor es: "<<b<<endl;
        else
            cout<<"el menor es: "<<a<<endl;}


    return 0;
}
