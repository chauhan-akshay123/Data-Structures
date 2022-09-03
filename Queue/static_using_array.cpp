/*
We are implementing static queue using array
*/
// we are going to implement queue using array
// This is going to be static queue
# include <iostream>
using namespace std;
template <typename T>
class queue{
    T* data;
    int firstIndex;
    int nextIndex;
    int size;
    int capacity;

    public:
    queue(int s){
        data = new T[s];
        nextIndex=0;
        firstIndex=-1;
        size=0;
        capacity=s;
    }
    int getSize(){
        return size;
    }
    bool isEmpty(){
         return size==0;
    }
    void enqueue(T element){
        if(size==capacity){ // check if stack is full
            std::cout<<"Queue is Full\n";
            return;
        
        data[nextIndex]=element; // add a new element
        nextIndex=(nextIndex+1)%capacity; // in a cyclic way
        if(firstIndex==-1){ // suppose if queue was empty
            firstIndex=0;
        }
        size++;
    }
    T front(){  // to return  element at front position
        if(isEmpty()){
            std::cout<<"Queue is Empty\n";
            return 0;
        }
        return data[firstIndex];
    }
    T dequeue(){
      if(isEmpty()){
        std::cout<<"Stack is Empty\n";
        return 0;
      }
      T ans = data[firstIndex];
      firstIndex=(firstIndex+1)%capacity;
      size--;
      if(size==0){
        firstIndex=-1;
        nextIndex=0;
      }
      return ans;
    }
};
