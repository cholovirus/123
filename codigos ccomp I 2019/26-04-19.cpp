#include <iostream>
#include <stdlib.h>
#include <time.h>
#include <math.h>
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
    for(int i=0;i<len-1;i++){
        for(int j=1;j<len-1;j++){
            if(arr[i]<arr[j]){
                int temp= arr[i];
                arr[i]=arr[j];
                arr[j]=temp;
            }
        }
    }
}

void quicksort(){}
void busquedaBinaria(){}

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
    int arr[]={100,7,99,3,65};
    invertir(arr,5);
    imprimir(arr,5);
    cout<<endl;

    burbuja(arr,5);
    imprimir(arr,5);


    cout<<cantidadPrimos(arr,5);cout<<" primos en la lista"<<endl;
    return 0;
}
