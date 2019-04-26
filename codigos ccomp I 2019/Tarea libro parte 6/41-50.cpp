#include <iostream>
#include <stdlib.h>
#include <time.h>
#include <math.h>
using namespace std;

int libro_41(int x,int y){
    if(x<y){
        int temp=x;
        x=y;
        y=temp;

    }
    if(y==0){
        return x;
    }else{libro_41(y,x%y);}
}

double libro_42(double x1, double y1,double x2, double y2){
    return sqrt(pow((x2-x1),2)+pow((y2-y1),2));
}
int main()
{
    cout<<libro_41(20,60);
    cout<<endl;cout<<endl;

    cout<<libro_42(2,3,3,2)<<endl;
    cout<<endl;
    return 0;
}
