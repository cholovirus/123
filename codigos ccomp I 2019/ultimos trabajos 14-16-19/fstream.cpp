#include <iostream>
#include <fstream>

using namespace std;

int main()
{
    ofstream pedro;
    pedro.open("datos.txt");
    pedro << "primera línea"<<endl;
    pedro << "segunda línea"<<endl;
    pedro << "tercera línea"<<endl;
    pedro.close();

    string temp;
    ifstream archivo("datos.txt");
    ofstream copia("ede.txt");

    while(getline(archivo,temp)){
        copia<<temp<<endl;
    }
    archivo.close();

    string temp2;
    int cont=0;
    ifstream copia2("ede.txt");
    while(copia2>>temp2){
        cont++;
    }

    cout<<cont<<endl;

    return 0;
}
