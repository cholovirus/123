#include <iostream>
#include<stdlib.h>
#include<time.h>
using namespace std;

int libro_31(int x,int y){
    if(x<y){
        int temp=x;
        x=y;
        y=temp;
    }
    if(y==0){return x;}

    else{libro_31(y,x%y);}
}

int libro_32(int nota){
    if(nota>=90 && nota<=100){return 4;}
    else if(nota>=80 && nota<=89){return 3;}
    else if(nota>=70 && nota<=79){return 2;}
    else if(nota>=60 && nota<=69){return 1;}
    else{return 0;}
}

int libro_33_1(void){
    return rand()%2;
}

void libro_33_2(int repeticion){
    int cara=0,sella=0;
    srand(time(NULL));
    for(int i=0;i<repeticion;i++){
        int aux=libro_33_1();

        if(aux==0){cara++;}

        if(aux==1){sella++;}

    }
    cout<<"cara: "<<cara<<" sella: "<<sella<<endl;
}

void libro_34(){
    srand(time(NULL));
    int aux=1+rand()%1000;
    int numeroUsuario;

    cout<<"Adivine el numero ¡¡"<<endl;
    cout<<"Escriba un numero del 1 al 1000: "<<endl;
    cin>>numeroUsuario;

    if(numeroUsuario==aux){
        cout<<"felicidades si es el numero"<<endl;
        cout<<"quiere intentar otra vez s o n"<<endl;
        char rejugar;
        cin>>rejugar;
        if (rejugar=='s'){libro_34();}
        else{cout<<"gracias por jugar"<<endl;}
    }else{
        cout<<"intente otra vez"<<endl;
        libro_34();}

}

int libro_36(int base, int exponente){
    if(exponente==0){return 1;}
    else{return base*libro_36(base,exponente-1);}

}

void libro_37(int x){
    int a=0,b=1,aux=0;
    if((x==1) || (x==0)){cout<<1<<endl;}
    while(x--){
        aux=a+b;
        a=b;
        b=aux;
        cout<<aux<<endl;
    }
    //return aux;
}

void libro_38(int pieza,int torre1=1,int torre2=2,int torre3=3){
    
}


int libro_40(int factorial){
    if(factorial==1 || factorial==0){cout<<"factorial "<<factorial<<endl;return 1;}
    else{
        cout<<"factorial "<<factorial<<" *"<<endl;
        return factorial*(libro_40(factorial-1));
    }
}
int main()
{
    cout<<libro_31(20,50);
    cout<<endl;

    cout<<libro_32(78);
    cout<<endl;

    cout<<libro_33_1()<<endl;
    libro_33_2(100);
    cout<<endl;

    //libro_34();
    cout<<endl;

    cout<<libro_36(3,0);
    cout<<endl;

    libro_37(10);
    cout<<endl;

    cout<<libro_40(4)<<endl;
    cout<<endl;


    return 0;
}
