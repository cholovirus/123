#include <iostream>

using namespace std;

class Cliente{
private:

    void a(){cout << "a  ";}

    void c(){cout << "c  ";}

    void e(){cout << "e  ";}

    virtual void ph1() = 0;
    virtual void ph2() = 0;

public:

    void execute(){
        //a();
        ph1();
        //c();
        ph2();
        //e();
    }
};

class Estudiante: public Cliente{

     void ph1(){cout << "b  ";}

     void ph2(){cout << "d  ";}
};

class Profesor: public Cliente{

    void ph1(){cout << "2  ";}

    void ph2(){cout << "4  ";}
};

int main(){
    Estudiante a;
    Profesor b;

    Cliente *arr[] = {&a, &b};

    for (int i = 0; i < 2; i++){
        arr[i]->execute();
    }
    return 0;
}
