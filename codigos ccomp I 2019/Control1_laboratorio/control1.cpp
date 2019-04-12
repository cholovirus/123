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
    cout << problem1(1000)<< endl;

    problem2(10);
    cout<<endl;

    problem3_2(1000);
    cout<<endl;

    cout<<em1.getN()<<em1.getA()<<em1.getS()<<endl;
    cout<<em2.getN()<<em2.getA()<<em2.getS()<<endl;
    em1.bajarSueldo(10);
    cout<<em1.getS()<<endl;

    problem5(600851475143);

    return 0;
}
