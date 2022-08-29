/*
There is one limitation to the previous approach, which is the size of the stack is fixed.
In order to overcome this limitation, whenever the size of the stack reaches its limit
we will simply double its size. To get the better understanding of this approach,
look at the code below…
*/
# include <iostream>
# include <climits>
using namespace std;
class stack{
    int* data;
    int nextIndex;
    int capacity;

    public:
    stack(){
        data = new int[4];
        nextIndex=0;
        capacity=4;    // initially declared with a small size
    }  
    int size(){
        return nextIndex;
    }
    bool isEmpty(){
        return nextIndex==0;
    }
    int top(){
        if(isEmpty()){
            std::cout<<"Stack Empty\n";
        }
        return data[nextIndex-1];
    }
    void push(int element){
        if(nextIndex==capacity){
          int* newData = new int[2*capacity];   // Capacity doubled 
          for(int i=0; i<capacity; i++){
            newData[i] = data[i];
          }    
          capacity  = capacity*2;
          delete [] data;
          data = newData;
        }
        data[nextIndex] = element;
        nextIndex++;
    }
    int pop(){
        if(isEmpty()){
            std::cout<<"Stack empty\n";
            return INT_MIN;
        }
        nextIndex--;
        return data[nextIndex];
    }
};
int main(){
stack s;
s.push(1);
s.push(2);
s.push(3);
s.push(4);
s.push(5);
s.push(6);
s.push(7);
s.push(8);
s.push(9);
s.push(10);
std::cout<<s.size()<<"\n";
std::cout<<s.top()<<"\n";
std::cout<<s.pop()<<"\n";
std::cout<<s.pop()<<"\n";
std::cout<<s.size()<<"\n";

    return 0;
}
