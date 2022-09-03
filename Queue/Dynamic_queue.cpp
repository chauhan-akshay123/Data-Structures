/*
In the dynamic queue. we will be preventing the condition where the queue
becomes full and we were not able to insert any further elements in that. Let’s now
check the implementation of the same.
*/
# include <iostream>
using namespace std;
template<typename T>
class queue{
    T* data;
    int firstIndex;
    int nextIndex;
    int size;
    int capacity;
     
    queue(int s){
        data=new T[s];
        firstIndex=-1;
        nextIndex=0;
        capacity=s;
        size=0;
    }
    int size(){
        return size;
    }
    bool isEmpty(){
        return size==0;
    }
    T front(){
      if(isEmpty()){
        std::cout<<"Queue is Empty\n";
        return 0;
      }
      return data[firstIndex];  
    }
    void enqueue(T element) {
if(size == capacity) { // When size becomes full
T *newData = new T[2 * capacity]; // we simply doubled the
// capacity
int j = 0;
for(int i = firstIndex; i < capacity; i++) { // Now copied the
Elements to new one
newData[j] = data[i];
j++;
}
for(int i = 0; i < firstIndex; i++) { // Overcoming the initial
// cyclic insertion by copying
// the elements linearly
newData[j] = data[i];
j++;
}
delete [] data;
data = newData;
The STL queues in C++ are implemented in a similar fashion.
We can also implement the queues with the help of linked lists.
8
firstIndex = 0;
nextIndex = capacity;
capacity *= 2; // Updated here as well
//cout << "Queue Full ! " << endl;
// return;
}
data[nextIndex] = element;
nextIndex = (nextIndex + 1) % capacity ;
if(firstIndex == -1) {
firstIndex = 0;
}
size++;
}
T dequeue(){
  if(isEmpty()){
     std::cout<<"Queue is Empty\n";
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

int main(){

    return 0;
}
