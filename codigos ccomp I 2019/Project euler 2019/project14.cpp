#include <iostream>

using namespace std;

int problem14(long long var){
    long long cont=1;
    for(int i=0;;i++){

        if(!(var%2)){
            var/=2;
        }else if(var%2==1){
            var=(3*var)+1;

        }  cont++;

        if (var==1){
            return cont;
        }
    }
}

void bucle(){
    long long aux=0;
    long long aux2=0;
    for(int i=113382;i<1000000 ;i++){
            
        if(problem14(i)>aux){
            aux=problem14(i);
            aux2=i;
        }
    }
    cout<<aux2 <<endl;
}


int main()
{
    //cout<<problem14(837799);

    bucle();
    return 0;
}
