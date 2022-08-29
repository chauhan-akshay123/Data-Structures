/*
While implementing the dynamic stack, we kept ourselves limited to the data of
type integer only, but what if we want a generic stack(something that works for
every other data type as well). For this we will be using templates. Refer the code
below(based on the similar approach as used while creating dynamic stack):
*/
# include <iostream>
# include <climits>
using namespace std;
template <typename T>
class stack{
     T* data;
     int nextIndex;
     int capacity;

     public:
     stack(){
        data = new int[4];
        nextIndex = 0;
        capacity = 4;
     }
     int size(){
        return nextIndex;
     }
     bool isEmpty(){
        return nextIndex==0;
     }
     void push(T element){
        if(nextIndex==capacity){
          T* newData = new T[capacity*2];
          for(int i=0; i<capacity; i++){
            newData[i] = data[i];
          }
          capacity = 2*capacity;
          delete [] data;
          data = newData;
        }
     }
     T pop(){
        if(isEmpty()){
            std::cout<<"Stack Empty\n";
            return INT_MIN;
        }
        nextIndex--;
        return data[nextIndex];
     }
     T top(){
        if(isEmpty()){
            std::cout<<"Stack Empty\n";
            return 0;
        }
        return [nextIndex-1];
     }
};
int main(){

    return 0;
}
