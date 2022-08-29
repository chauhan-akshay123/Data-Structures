/*
STACK IMPLEMENTATION
*/
# include <iostream>
# include <climits>
using namespace std;
class stack{
    int* data;
    int nextIndex;
    int capacity;

    public:
    stack(int totalSize){
        data = new int[totalSize];
        nextIndex = 0;
        capacity = totalSize;
    }
    int size(){
        return nextIndex;
    }
    bool isEmpty(){
        return nextIndex==0;
    }
    void push(int element){
        if(nextIndex==capacity){
            std::cout<<"Stack Full\n";
            return; 
        }
        data[nextIndex] = element;
        nextIndex++;
    }
    int pop(){
        if(isEmpty()){
            std::cout<<"Stack Empty\n";
            return INT_MIN;
        }
        nextIndex--;
        return data[nextIndex];
    }
    int top(){
        if(isEmpty()){
            std::cout<<"Stack empty\n";
        }
        return data[nextIndex-1];
    }
};
int main(){
stack s(4);
s.push(1);
s.push(2);
s.push(3);
s.push(4);
s.push(5);
std::cout<<s.top()<<"\n";

    return 0;
}
