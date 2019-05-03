#include <iostream>
#include <stdlib.h>

using namespace std;


void invertir(int arr[],int len){
    for(int i=0;i<len/2;i++,len--){
        int aux=arr[i];
        arr[i]=arr[len-1];
        arr[len-1]=aux;
    }
}
void imprimir(int arr[], int len){
    for(int i=0;i<len;i++){
        cout<<arr[i]<<endl;

    }
}


void burbuja(int arr[],int len){
    for(int i=0;i<len;i++){
        for(int j=0;j<len;j++){

            if(arr[j]>arr[j+1]){
                int temp= arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=temp;
            }
        }
    }
}

void cambio(int *a, int *b){
    int temp=*a;
    *a=*b;
    *b=temp;
}

int pivote(int arr[],int inicio, int fin){
    int pivo=arr[fin];
    int i=(inicio-1);

    for (int j=inicio;j<=fin-1;j++){
        if (arr[j] <= pivo){
            i++;
            cambio(&arr[i],&arr[j]);
        }
    }
    cambio(&arr[i+1],&arr[fin]);
    return (i+1);
}

void quickSort(int arr[], int inicio, int fin){
    if(inicio<fin){
        int piv=pivote(arr,inicio,fin);
        quickSort(arr,inicio,piv-1);
        quickSort(arr,piv+1,fin);
    }

}

void busquedaBinaria(int arr[],int var){
    int x=0, y=5,mit=0;
    bool buscar=false;
    while(x<=y){
        mit=(x+y)/2;
        if(arr[mit]==var){
            buscar=true;
            break;
        }if(arr[mit]>var){
            y=mit;
            mit=(x+y)/2;
        }if(arr[mit]<var){
            x=mit;
            mit=(x+y)/2;
        }
    }
    if(buscar){cout<<"el numero "<<arr[mit]<<" esta en la posicion: "<<mit+1<<endl;}
    else{cout<<"numero invalido"<<endl;}
}

bool primo(int numero){
    bool prim=true;
    int div=2;
    while(prim && div<numero/2){
        if(numero%div==0){
            prim=false;
        }
        else{ div++;}
    }
     return prim;
}

int cantidadPrimos(int arr[],int len){
    int aux=0;
    for(int i=0;i<len-1;i++){
        if(primo(arr[i])){
            aux++;

        }

    }
    return aux;
}

int main()
{
    ///primer ejercicio
    int arr[]={100,7,99,3,5};
    invertir(arr,5);
    imprimir(arr,5);
    cout<<endl;

    ///segundo ejercicio
    burbuja(arr,5);
    imprimir(arr,5);
    cout<<endl;

    quickSort(arr,0,5-1);
    imprimir(arr,5);
    cout<<endl;

    ///tercer ejercio
    busquedaBinaria(arr,99);

    ///cuarto ejercicio
    cout<<cantidadPrimos(arr,5);cout<<" primos en la lista"<<endl;
    return 0;
}
