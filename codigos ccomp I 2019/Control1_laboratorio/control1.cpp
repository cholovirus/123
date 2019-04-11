#include <iostream>

using namespace std;

int problem1(int x){
    int aux=0;
    for(int i=0;i<x;i++){
        if(!(i%3)) {
            aux=aux+i;
        }if(!(i%5)){aux+=i;}


    }return aux;

}

void problem2(int x){
    if(x%2){x--;}
    for(int i=1;i<x;i++){
        if(i%2){
            cout<<i;
        }if(!(i%2)){cout<<",";}
    }
}


bool problem3_1(int x){
    int cont=0;
    for(int i=1;i<=x;i++){
        if(!(x%i)){cont++;}
    }if(cont==2){return true;}
    else{return false;}
}

void problem3_2(int x){
    for(int i=0;i<x;i++){
        if(problem3_1(i)){
            cout<<i<<" es primo"<<endl;
        }
    }

}




void problem5(long long x){

    for(long long i=x;i>0;i--){
      if(problem3_1(i)){
        if(x%i==0){
            cout<<i<<endl;
            break;
        }
      }
}
}


int main()
{
    cout << problem1(1000)<< endl;

    problem2(10);
    cout<<endl;

    /*problem3_2(1000);
    cout<<endl;*/

    problem5(13195);

    return 0;
}
