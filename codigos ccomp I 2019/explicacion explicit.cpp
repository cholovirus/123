#include <iostream>
#include <string>
using namespace std;

class Piedra{
   public:
          Piedra(string x){
            mp=x;
        }
        Piedra(const Piedra &x){
            mp=x.mp;
        }
        string obtenerx()const{
            return mp;
        }
   private:
    string mp;
};

void print(const Piedra &x){
    cout<<x.obtenerx()<<endl;
}

// compilador realiza conversión implícita(convierte un tipo de dato de menor rango a un supertipo)
//explicit evita que el compilador use ese constructor para las conversiones implícitas.
//sirve para encontrar error ocultos
int main()
{
    Piedra piedra1("4");
    print(piedra1);

    //variable int 55 al no contar contar explicit el compilador hace una conversion implicita
    //si se da uso a explicit el compilador queda restringido por lo que no puede hacer la conversion implicita convertiendola en explicita(el compilador no es capaz de realizarla por si solo, se necesita definirse)
    print("5");//usar constructores con un solo parametro para convertir de un tipo a otro con el fin de obtener el tipo correcto para un parámetro.
    print(Piedra("5"));

    return 0;
}

