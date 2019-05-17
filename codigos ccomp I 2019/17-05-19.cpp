#include <iostream>

using namespace std;

class Integer{
public:
    int val;
    explicit Integer(int val=0){
    this->val=val;
    cout<<"constructor"<<endl;
    }

};

int *ptr(){
    int *x=new int;
    *x=4;
    return x;
}

class Point{
private:
    int x,y;
public:
    Point(int x_=0,int y_=0):x(x_),y(y_){}
    ~Point(){}
    void printP(){
        cout<<"("<<x<<","<<y<<")"<<endl;
    }
    void printParr(Point arr[],int size){
        for(int i=0;i<size;i++){
            arr[i].printP();
        }
    }
    int getx(){return x;}
    int gety(){return y;}

};
int main()
{
    Integer val1(4);
    cout<<val1.val;

    Integer var[3]={val1,Integer(3)};
    int size=sizeof(var)/sizeof(var[0]);

    for(int i=0;i<size;i++){
        cout<<var[i].val<<endl;
    }


    int*p;
    /*if(true){
        int x=5;
        p=&x;
    }*/
    p=ptr();

    cout<<*p<<endl;
    delete p;


    Point *punto=new Point;

    punto->printP();
    delete punto;

    ///crear arreglo de punto con memoria dinamica y imprimir los puntos
    //int *arr=new int[2];


    Point *arr= new Point[2];
    Point p1(4,5);
    Point p2;
    arr[0]=p1;
    arr[1]=p2;
    arr->printParr(arr,2);
    delete[] arr;
    ///implementar un arreglo con 0 elementos o con los que yo indique
    ///insert para aumentar aumentar el tamaña y poner un valor



    return 0;
}
