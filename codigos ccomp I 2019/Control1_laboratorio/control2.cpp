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
    float pi=0;
    int aux=1;
    for(int i=1;i<=x;i++){
        if(i%2){pi=pi+(4.0/aux);}
        else{pi=pi-(4.0/aux);}
        aux+=2;
    }cout<<pi<<endl;

}

int problem3(int x,int y){
    if(x<y){
        int temp=x;
        x=y;
        y=temp;

    }
    if(y==0){
        return x;
    }else{problem3(y,x%y);}
}

///problem4
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


    void bajarSueldo(int s){

        int x=(salario*s)/100;
        salario=salario-x;
    }


};

void problem5(long long x){
    int i;
    for( i=2;1<x;i++){
        while(!(x%i)){
            x/=i;
        }
    }
    cout<<i-1<<endl;
}


int main()
{
    problem1(13);
    cout<<endl;

    problem2(1000);
    cout<<endl;

    cout<<problem3(28,40)<<endl;

    ///problem4
    Empleado em1("pedro","alcantaro",3000);
    Empleado em2("Juan","ee",-500);
    cout<<em1.getN()<<"--"<<em1.getA()<<"--"<<em1.getS()<<endl;
    cout<<em2.getN()<<"--"<<em2.getA()<<"--"<<em2.getS()<<endl;
    em1.bajarSueldo(10);
    cout<<em1.getS()<<endl;

    problem5(600851475143);
    return 0;
}
