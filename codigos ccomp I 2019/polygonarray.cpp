#include <iostream>

using namespace std;

class Polygon {
 protected:
    int width, height;
 public:
     Polygon (int a=0, int b=0) : width(a), height(b) {}
     //virtual int area ()=0;
     int area(){return 0;}
     void printarea(){
        cout << this->area() << endl;
    }
    int getW(){return width;}
    int getH(){return height;}
    void printWH(Polygon var){
        cout<<var.getW()<<" "<<var.getH()<<endl;
    }

};

class Rectangle:public Polygon{
public:
    Rectangle(int a=0,int b=0):Polygon(a,b){}
    int area(){return width*height;}
    void printarea(){cout << this->area() << endl;}


};

class Triangle:public Polygon{
public:
    Triangle(int a=0,int b=0):Polygon(a,b){}
    int area(){return width*height/2;}
    void printarea(){cout << this->area() << endl;}


};

class PolygonArray {
		Polygon *data;
        int size_;

        void eliminar(){
            reSize(this->size_-1);


        }
        void reSize(int size_){
            Polygon *temp= new Polygon[size_];
            int minsize=(size_>this->size_)?this->size_:size_;
            for(int i=0;i<minsize;i++){
                temp[i]=this->data[i];
            }
            this->size_=size_;
            delete[] data;
            this->data=temp;
        }

    public:
        PolygonArray() {
            this->size_ = 0;
			this->data = new Polygon[0];
        }

		PolygonArray(Polygon arr[], int size_){
			this->size_ = size_;
			this->data = new Polygon[size_];
			for(int i = 0; i < size_; i++){
				this->data[i] = arr[i];
			}
		}

        void printArray(){
            for(int i=0;i<getSize();i++){
                this->data[i].printWH(data[i]);

            }
        }


        void insertar(Polygon var){
            reSize(getSize()+1);
            this->data[size_-1]=var;
        }




        void insertarPosicion(Polygon var, int posicion){
	    	insertar(var);
   	    	for(int i=getSize()-1;i>=posicion;i--){
                Polygon temp=this->data[i];
                this->data[i]=this->data[i-1];
                this->data[i-1]=temp;
                }
            }

        void eliminarP(int posicion){
            for(int i=posicion;i<this->size_;i++){
                Polygon temp=this->data[i];
                this->data[i]=this->data[i+1];
                this->data[i+1]=temp;

            } eliminar();

        }

		int getSize(){
			return size_;
		}
		~PolygonArray(){
			delete[] this->data;
		}
};

void prinar(Polygon arr[],int size_){
    for(int i=0;i<size_;i++){
        arr[i].printarea();
    }
}
int main()
{
    Rectangle a(4,5);
    Triangle b(4,7);
    Triangle c(3,564);
    Rectangle d(9,5);

    Polygon arr[]={a,b};

    PolygonArray ar(arr,2);
    ar.insertar(c);
    ar.insertar(c);ar.insertar(c);ar.insertar(c);ar.insertar(c);ar.insertar(c);ar.insertar(c);
    ar.insertarPosicion(d,2);
    ar.eliminarP(3);
    ar.eliminarP(3);ar.eliminarP(3); ar.eliminarP(3);ar.eliminarP(3); ar.eliminarP(3);ar.eliminarP(3); ar.eliminarP(3);ar.eliminarP(3);ar.eliminarP(3);
    ar.printArray();
    int tam=2;///se tiene que usar cin, (esto es un prueba
    Polygon *arrre=new Polygon[tam];
    arrre[0]=a;
    arrre[1]=b;


    delete[]arrre;

    prinar(arr,2);

    return 0;
}
