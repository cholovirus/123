#include <iostream>

using namespace std;

void cambio(int *ptr,int *ptr2){
    int temp=*ptr;
        *ptr=*ptr2;
        *ptr2=temp;
}

int suma_recursiva(int *arr,int len){
    if(len==1){return *arr;}

    else{
        int *ptr=arr+len-1;
        int *ptr2=arr+len-2;
        *ptr2+=*ptr;
        return suma_recursiva(arr,len-1);

    }
}

class Point{
private:
    int x,y;
public:
    Point(int x_, int y_): x(x_),y(y_){}
    int getX(){return x;}
    int getY(){return y;}

};


Point imprimir_point(Point *arr,int len){
    for(int i=0;i<len-1;i++,arr++){
        cout<<"("<<arr->getX()<<","<<arr->getY()<<")"<<endl;
    }
}

void invertir_iterativa(int *ptr, int len){
    int *ptr2=ptr+len-1;
    for(int i=0; i<len/2;i++,ptr++,ptr2--){
        int temp=*ptr;
        *ptr=*ptr2;
        *ptr2=temp;
    }
}

void invertir_recursiva(int *ptr, int len){
    if(len==1||len==0){return;}
    else{
        int*ptr2=ptr+len-1;
        int temp=*ptr;
        *ptr=*ptr2;
        *ptr2=temp;

        return invertir_recursiva(ptr+1,len-1);
    }
}
void imprimir(int arr[],int len){
    for(int i=0; i<len;i++){
        cout<<arr[i]<<endl;
    }
}
int main()
{
    int x=3; int y=5;
    int *ptr=&x; int *ptr2=&y;
    cambio(ptr,ptr2);
    cout<<x<<"  "<<y<<endl;

    int arr[]={1,2,3,51};
    cout<<suma_recursiva(arr,4);

    Point uno(2,4),dos(3,6),tres(4,5),cuatro(3,5);
    Point arre[]={uno,dos,tres,cuatro};



    cout<<"---"<<endl;

    int arr2[]={1,2,3,4};
    invertir_iterativa(arr2,4);
    imprimir(arr2,4);
    cout<<endl;

    int arr3[]={1,2,3,4};
    invertir_recursiva(arr3,4);
    imprimir(arr3,4);




    return 0;
}
