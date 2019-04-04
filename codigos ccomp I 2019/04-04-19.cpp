#include <iostream>
#include <string>
using namespace std;

int esPotencia(int x){
    return !(x&x-1);
}


int fibo(int x){
    int a=0,b=1,aux=0;
    if((x==1) || (x==0)){return 1;}
    while(x--){
        aux=a+b;
        a=b;
        b=aux;
    }
    return aux;
}

int fibore(int x){
    if(x==1||x==0){
        return 1;}
     else{return fibore(x-1)+ fibore(x-2);}

}

int factorial(int x){
    if(x==1 || x==0){
        return 1;
    }else{return x*factorial(x-1);}
}


int factit(int x){
    int aux=1;
    if(x==1||x==0){return 1;}
    while(x){
        aux*=x;
        x--;
    }
    return aux;
}

void swith(int &x,int &y){
    int aux=x;
    x=y;
    y=aux;

}

long long projecteuler(int tamano,int digitos,char num[]){
    long long mayor=1;
    for(int i=0;i<tamano;i++){
        long long aux=1;

        for(int j=0;j<13;j++){
            int t=num[i+j]-48;
            aux=aux*t;


        }

        if(aux>mayor){mayor=aux;}

    }return mayor;
}



int main()
{
    /*cout << esPotencia(9) << endl;
    cout<< fibore(5)<<endl;
    cout<<fibo(5)<<endl;
    cout<<factorial(17)<<endl;
    cout <<factit(5)<<endl;
    int a=2,b=43;
    swith(a,b);
    cout<<a<<" "<<b<<endl;*/

    return 0;
}
