#include <iostream>

using namespace std;

int problem14(int var){
    int cont=1;
    for(int i=0;;i++){

        if(!(var%2)){
            var/=2;
        }else if(var%2==1){
            var=3*var+1;

        }  cont++;
        if(var<=1){
            return cont;

        }
    }
}

void bucle(){
    int aux=0;
    int con=0;
    int aux2=0;
    for(int i=0;i< 1000000;i++){
       con= problem14(i);
       //cout<<con<< " "<<i<<endl;
        if(con >aux){
            aux=con;
            aux2=i;
        }
    }
    cout<<aux2 <<endl;
}


int main()
{

    bucle();
    return 0;
}
