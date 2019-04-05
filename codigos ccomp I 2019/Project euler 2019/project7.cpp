#include <iostream>

using namespace std;



void coutprimo(int cantidad){
    int i=2;
    for(i;;i++){
        if(primo(i)){
           // cout<<i<<" es primo"<<endl;
            cantidad--;
            }
        if(!(cantidad)){
                break;

            }
}cout<<i<<" es primo"<<endl;
}

int main()
{
    coutprimo(10001);
   return 0;
}
