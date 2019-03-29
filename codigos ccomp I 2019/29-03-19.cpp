#include <iostream>

using namespace std;

bool esPar(int x){
    return(x%2)?false:true;
}

bool esParif(int x){
    return !(x%2);
}

bool multseg(int x, int y){
    return !(x%y);
}

bool multsegter(int x, int y){
    return (x%y)?false:true;
}

bool potDos(int x){
    int aux=1;
    for(int i=0;;i++){
         aux*=2;
         if(aux==x){ return true;}
         else if(aux>x || x==1){return false;}


    }

}
int main()
{
    /*cout<<esPar(3)<<endl;
    cout<<esParif(3)<<endl;
    cout<<multseg(1,2)<<endl;
    cout<<multsegter(1,2);*/
    cout<<potDos(1);



    return 0;
}
