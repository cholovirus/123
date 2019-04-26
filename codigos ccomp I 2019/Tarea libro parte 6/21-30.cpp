#include <iostream>
#include<stdlib.h>
#include<time.h>

using namespace std;

int libro_21(int var){
    return (var%2)?0:1;
}

void libro_22(int var){
    for(int i=0;i<var;i++){
        cout<<endl;
        for(int j=0;j<var;j++){
            cout<<"*";
        }
    }
}

void libro_23(int var, char caracter){
        for(int i=0;i<var;i++){
        cout<<endl;
        for(int j=0;j<var;j++){
            cout<<caracter;
        }
    }
}


void libro_24(){                                    ///falta terminar
    srand(time(NULL));
    int var=1+rand()%32767;


}

int libro_25(int horas, int minutos=0, int segundos=0){
    minutos += (horas%12)*60;
    return segundos + minutos*60;
}

float libro_27(float val1 ,float val2 , float val3){
    if(val1<val2 && val1<val3){
        return val1;
    }else if(val2<val1 && val2<val3){
        return val2;
    }else{return val3;}
}

bool libro_28_1(int numero){
    int aux=0;
    for (int i = 1; i < numero; i++) {
            if (!(numero%i)) {
                aux += i;
            }
        }
    if(aux==numero){
        return true;
    }else{
        return false;
    }

}

void libro_28_2(int cantidad){

     for(int i=cantidad;i>1;i--){
        if(libro_28_1(i)){
            cout<<i<<" es perfecto"<<endl;
        }
    }
}

bool libro_29_1(int var){
    bool prim=true;
        int div=2;
        while(prim && div<var/2){
            if(var%div==0){
                prim=false;

            }
            else{ div++;}

        }
         return prim;
}

void libro_29_2(int cantidad){

    for(int i=2;;i++){
        if(libro_29_1(i)){
            cout<<i<<" es primo"<<endl;
            cantidad--;
            }
        if(!(cantidad)){
                break;

            }
 }
}
int libro_30(int var){
    int aux,inverso=0;
    while(0<var){
        aux=var%10;
        var/=10;
        inverso=(inverso*10)+aux;

    }return inverso;
}

int main()
{
    cout<<libro_21(3)<<endl;
    cout<<endl;

    libro_22(4);
    cout<<endl;

    libro_23(5,'#');
    cout<<endl;cout<<endl;

    cout<<libro_25(2)<<endl;
    cout<<endl;

    cout<<libro_27(3.5,3.5,0.5)<<endl;
    cout<<endl;

    cout<<libro_28_1(28)<<endl;
    libro_28_2(1000);
    cout<<endl;

    cout<<libro_29_1(17)<<endl;
    libro_29_2(1000);
    cout<<endl;

    cout<<libro_30(7631);
    cout<<endl;
    return 0;
}
