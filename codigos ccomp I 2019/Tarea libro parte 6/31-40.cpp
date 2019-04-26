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
    srand(time(NULL));

    return rand()%2;
}

void libro_33_2(int repeticion){
    int cara=0,sella=0;
    for(int i=0;i<repeticion;i++){
        int aux=libro_33_1();

        if(aux==0){cara++;}

        if(aux==1){sella++;}

    }
    cout<<"cara: "<<cara<<" sella: "<<sella<<endl;
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




    return 0;
}
