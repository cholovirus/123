#include <iostream>
#include <string>
using namespace std;

void problem1(int x){
    if(x%2){x--;}
    for(int i=2;i<=x;i++){
        if(!(i%2)){
            cout<<i;
        }if((i%2)){cout<<",";}
    }
}

void problem2(int x){
    float pi=0.0;
    for(float i=1;i<x;i++){
      if((i%2)){
        pi+=4/i;
        cout<<pi<<"--"<<i<<endl;
      }

}
}
//problem4

class Empleado{
private:
    string nombre, apellido;
    double salario;
public:
    //costructor
    Empleado(string n, string a, double s):nombre(n),apellido(a){
        if(s<0){salario=0;}
        else{salario=s;}
    }
    //metodos

    string getN(){return nombre;}
    string getA(){return apellido;}
    double getS(){return salario;}





};



bool primo(int x){
    int cont=0;
    for(int i=1;i<=x;i++){
        if(!(x%i)){cont++;}
    }if(cont==2){return true;}
    else{return false;}
}

long long problem5(long long x){

    for(long long i=x;i>1;i--){
        if(primo(i)){
          if(x%i==0){return i; }
        }
    }

}


int main()
{
    problem1(13);
    cout<<endl;

    problem2(10);

    Empleado em1("pedro","alcantaro",3000);
    Empleado em2("Juan","ee",-500);
    cout<<em1.getN()<<em1.getA()<<em1.getS()<<endl;
    cout<<em2.getN()<<em2.getA()<<em2.getS()<<endl;

    cout<<problem5(13195)<<endl;

    return 0;
}
