// HackerRank PROBLEM
// ---LINK--- https://www.hackerrank.com/challenges/equal-stacks/problem?isFullScreen=false

int equalStacks(vector<int> h1, vector<int> h2, vector<int> h3) {
stack<int> st1;
stack<int> st2;
stack<int> st3;
int height_st1=0,height_st2=0,height_st3=0;
// push consolidated height into the stack instead of cylinder height
for(int i=h1.size()-1; i>=0; i++){
    height_st1= height_st1+h1[i];
    st1.push(height_st1);
}
for(int i=h2.size()-1; i>=0; i++){
    height_st2=height_st2+h2[i];
    st2.push(height_st2);
}
for(int i=0; i<h3.size()-1; i++){
    height_st3=height_st3+h3[i];
    st3.push(height_st3);
}
while(1){
    // if any stack is empty
    if(st1.empty() || st2.empty() || st3.empty()){
        return 0;
    }
    height_st1=st1.top();
    height_st2=st2.top();
    height_st3=st3.top();
    // if sum of all three stack are equal
    if(height_st1==height_st2 && height_st2==height_st3){
        return height_st1;
    }
    // finding the stack with maximum sum and removing it's 
    // top element
    if(height_st1>=height_st2 && height_st1>=height_st3){
        st1.pop();
    }
    else if(height_st2>=height_st3 && height_st2>=height_st1){
        st2.pop();
    }
    else{
        st3.pop();
    }   
}
}
