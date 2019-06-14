#include <iostream>

using namespace std;
template<typename T>
class DinamicArray {
    T *data;
    int size;
    void resize(int newSize) {
        T *arr = new T[size];
        int minSize = (newSize > size ? newSize : newSize);
        for(int i = 0; i < minSize; i++){
            arr[i]=data[i];
        }
        delete[] data;
        this->size = newSize;
        data = arr;
    }

public:
    DinamicArray<T>() {
        data = new T[0];
        this->size = 0;
    }
    DinamicArray<T>(T arr[], int size) {
        this->data = new T[size];
        this->size = size;
        for (int i = 0; i < size; ++i)
            data[i] = arr[i];
    }
    DinamicArray<T>(DinamicArray &o) {
        data = new T[o.size];
        size = o.size;
        for (int i = 0; i < size; ++i)
            data[i] = o.data[i];
    }

    void push_back(T val) {
        resize(size + 1);
        this->data[size-1] = val;
    }

    void insert(const T val, int pos) {
        resize(size + 1);

        for( int i = size; i > pos; i--){
            data[i]= data[i-1];
        }
        data[pos] = val;
    }

    void remove(int pos) {
        if(pos >= 0 && pos < size) {
            for(int i=pos; i<size-1; i++)
            {
                data[i] = data[i+1];
            }
            resize(size - 1);
        }
    }

    void print() {
        for(int i =0; i < size; i++){
            cout << data[i] << " ";
        }
        cout << endl;
    }

    int getSize() {
        return size;
    }

    ~DinamicArray<T>() {
        delete[] data;
    }
    T getdata(int i){return data[i];}

};
template <typename A>
void operator+(DinamicArray<A> &data, DinamicArray<A> &arr){
        for(int i=0;i<arr.getSize();i++){
            data.push_back(arr.getdata(i));
        }
    }

int main() {
    /*double arr[] = {1,2,3,4,5};
    DinamicArray<double> a(arr, 5);
    a.push_back(6);
    a.print();
    a.insert(10,5);
    a.print();
    a.remove(5);
    a.print();
    cout << a.getSize() << endl; // 4*/

    double arr[]={1,2,5,0.322,3.5};
    double arre[]={1,2};

    DinamicArray<double> a(arr,5);
    DinamicArray<double> b(arre,2);
    a+b;
    a.print();

}

