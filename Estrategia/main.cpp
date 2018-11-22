#include <iostream>
using namespace std;

class Estrategia {
public:
    virtual void InterfazAlgoritmo()=0;
};

class Ataque :public Estrategia{
public:
    virtual void InterfazAlgoritmo(){
        cout <<"Ataque" <<endl;
    }
};

class ContraAtaque :public Estrategia{
public:
    virtual void InterfazAlgoritmo(){
        cout <<"ContraAtaque" <<endl;
    }
};

class Tirolibre :public Estrategia{
public:
    virtual void InterfazAlgoritmo(){
        cout <<"Tirolibre" <<endl;
    }
};

class Defensa :public Estrategia{
public:
    virtual void InterfazAlgoritmo(){
        cout <<"Defensa" <<endl;
    }
};

class Contexto{
private:
    Estrategia *estrategia;
public:
    Contexto(Estrategia *estrategia):estrategia(estrategia){}

    void Usar_estrategia(Estrategia *estrategia){
        this->estrategia= estrategia;
    }
    void InterfazContexto(){
        this->estrategia->InterfazAlgoritmo();
    }
};

int main()
{
    Ataque ataque;
    Defensa defensa;
    ContraAtaque contraataque;
    Tirolibre tirolibre;

    Contexto contexto(&ataque);
    contexto.InterfazContexto();

    contexto.Usar_estrategia(&defensa);
    contexto.InterfazContexto();



    return 0;
}
