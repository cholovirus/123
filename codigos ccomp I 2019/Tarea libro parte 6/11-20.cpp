#include <iostream>
#include <cmath>
#include<stdlib.h>
#include<time.h>
using namespace std;

void libro_11(){
    float x = fabs( 7.5 );
    x = floor( 7.5 );
    x = fabs( 0.0 );
    x = ceil( 0.0 );
    x = fabs( -6.4 );
    x = ceil( -6.4 );
    x = ceil( -fabs( -8 + floor( -5.5 ) ) );

    cout<<x<<endl;
}


void libro_12(int carro,double hora){
    double pago=2.0;

    if(hora>3 &&hora<24){
        for(int i=0;i<hora-3;i++){
            pago+=0.5;
        }
    }else if(hora==24){pago=10;}
    cout<<carro<<"          "<<hora<<"       "<<pago<<endl;
}


int libro_13(double var){
    //int aux=var;
    //if(var-aux>0.5 && var-aux<1){aux+=1;}
    return floor(var);

}

double libro_14(double var,int parametro=0 ){
    double aux;

    switch(parametro){

        case 10:
            cout<<"roundToTenths"<<endl;
            aux=(libro_13(var)*1.0)/10;
            return aux;
        case 100:
             cout<<"roundToHundredths"<<endl;
            aux=(libro_13(var)*1.0)/100;
            return aux;
        case 1000:
             cout<<"roundToThousandths"<<endl;
            aux=(libro_13(var)*1.0)/1000;
            return aux;
        default:
            cout<<"roundToInteger"<<endl;
            aux=libro_13(var);
            return aux;
    }

}
/// libro_15
/// ¿Qué significa elegir números "al azar"?
///
///¿Por qué es útil la función de rand para simular juegos de azar?
///
///¿Por qué aleatorizarías un programa usando srand? Bajo que circunstancias es deseable no aleatorizar?
///
///¿Por qué a menudo es necesario escalar o cambiar los valores producidos por rand?
///
/// ¿Por qué la simulación computarizada de situaciones del mundo real es una técnica útil?
///


void libro_16(){
    srand(time(NULL));

    float num=1+rand()%2;
    cout<<num<<endl;

    num=1+rand()%100;
    cout<<num<<endl;

    num=rand()%9;
    cout<<num<<endl;

    num=1000+rand()%1112;
    cout<<num<<endl;

    num=(-1)+rand()%1;
    cout<<num<<endl;

    num=(-3)+rand()%11;
    cout<<num<<endl;

}

int libro_17(int variacion){
    int var;
    srand(time(NULL));
    switch(variacion){
        default :
            var=3+rand()%10;

            if(var%2){return var;}
            else{return var-1;}

        case 2:
            var=1+rand()%11;

            if(var%2){return var+1;}
            else{return var;}
            }
    }

int libro_18(int *ptr,int *ptr1){
    int aux=1;
    if(*ptr1==0){return aux;}
    for(int i=0;i<*ptr1;i++){
        aux*=*ptr;
    }
    return aux;
}

double libro_19(double ca ,double co){
    double hipotenusa=(ca*ca)+(co*co);
    return hipotenusa;
}

bool libro_20(int mult1, int mult2){
    return (mult2%mult1)?false:true;
}

int main()
{
    libro_11();
    cout<<endl;

    cout<<"carro"<<"    "<<"hora"<<"    "<<"pago"<<endl;
    libro_12(1,1.5);
    libro_12(2,4);
    libro_12(3,24);
    cout<<endl;

    cout<<libro_13(3.8)<<endl;
    cout<<endl;

    cout<<libro_14(5)<<endl;
    cout<<libro_14(5,10)<<endl;
    cout<<libro_14(5,100)<<endl;
    cout<<libro_14(5,1000)<<endl;
    cout<<endl;

    libro_16();
    cout<<endl;

    cout<<libro_17(2)<<endl;
    cout<<endl;

    int a=2;
    int b=-1;
    cout<<libro_18(&a,&b)<<endl;
    cout<<endl;

    cout<<libro_19(4.8,2.4);
    cout<<endl;

    cout<<libro_20(2,3);
    cout<<endl;



    return 0;
}
