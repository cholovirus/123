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

///libro_43 : error nunca acabaria la funcion por que main se iniciaria siempre
/*
int main()
 {
     int c = 0;

     if ( ( c = cin.get() ) != EOF )
         {
         main();                        /// Error
         cout << c;
         }
 }
*/

///libro_44: no tiene error de sintaxis
/*
int mystery( int, int ); // function prototype

 int main()
 {
     int x = 0;
     int y = 0;

     cout << "Enter two integers: ";
     cin >> x >> y;
     cout << "The result is " << mystery( x, y ) << endl;
 } // end main

 // Parameter b must be a positive integer to prevent infinite recursion
 int mystery( int a, int b )
 {
     if ( 1 == b ) // base case
         return a;
     else // recursion step
          return a + mystery( a, b - 1 );
 } // end function mystery

*/
int main()
{
    cout<<libro_41(20,60);
    cout<<endl;cout<<endl;

    cout<<libro_42(2,3,3,2)<<endl;
    cout<<endl;


    return 0;
}
