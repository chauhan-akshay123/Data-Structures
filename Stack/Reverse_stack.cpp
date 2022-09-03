/*
You have been given two stacks that can store integers as the data. Out of the two given stacks, one is populated and the other one is empty. You are required to write a function that reverses the populated stack using the one which is empty.
*/
/*
Constraints:
1 <= N <= 10^3
-2^31 <= data <= 2^31 - 1

Time Limit: 1sec 
Sample Input 1:
6
1 2 3 4 5 10
Note:
Here, 10 is at the top of the stack.
Sample Output 1:
1 2 3 4 5 10
Note:
Here, 1 is at the top of the stack.
Sample Input 2:
5
2 8 15 1 10
Sample Output 2:
2 8 15 1 10
*/
# include <iostream>
# include <stack>
using namespace std;
void reverseStack(stack<int> &input , stack<int> &extra){
     if(input.size()==0 || input.size()==1){
        return;
     }
     int top = input.top();
     input.pop();
     reverseStack(input,extra);
     while(!input.empty()){
          int a = input.top();
          input.pop();
          extra.push(a);
     }
     input.push(top);
     while(!extra.empty()){
         int a = extra.top();
         extra.pop();
         input.push(a);    
     }
}
int main() {
    stack<int> input, extra;
    int size;
    cin >> size;

    for (int i = 0, val; i < size; i++) {
        cin >> val;
        input.push(val);
    }

    reverseStack(input, extra);

    while (!input.empty()) {
        cout << input.top() << " ";
        input.pop();
    }
}
