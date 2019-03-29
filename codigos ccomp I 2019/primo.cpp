#include <iostream>

using namespace std;

bool primo(int numero){
    bool prim=true;
    int div=2;
    while(prim && div<numero/2){
        if(numero%div==0){
            prim=false;

        }
        else{ div++;}

    }
     return prim;
}

void coutprimo(int cantidad){

    for(int i=2;;i++){
        if(primo(i)){
            cout<<i<<" es primo"<<endl;
            cantidad--;
            }
        if(!(cantidad)){
                break;

            }
}
}

void menprimo(int cantidad){
    for(int i=cantidad;i>1;i--){
        if(primo(i)){
            cout<<i<<" es primo"<<endl;
        }
    }
}

int main()
{
    cout<<primo(7)<<endl;
    coutprimo(20);
    menprimo(10);
    return 0;
}
