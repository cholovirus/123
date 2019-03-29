#include <iostream>

using namespace std;

bool perfecto(int numero){
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

void coutperf(int cantidad){

    for(int i=2;;i++){
        if(perfecto(i)){
            cout<<i<<" es perfecto"<<endl;
            cantidad--;
        }
        if(!(cantidad)){
            break;
        }
    }
}

void menperf(int cantidad){
    for(int i=cantidad;i>1;i--){
        if(perfecto(i)){
            cout<<i<<" es perfecto"<<endl;
        }
    }
}


int main()
{
    cout<<perfecto(28)<<endl;
    coutperf(4);
    menperf(100);
    return 0;
}
