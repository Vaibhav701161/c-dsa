// stack works on the concept of first in last out
// meaning the last element added to the stack will be the first one to be removed

// stack have only three functions : push, pop , top

// indexing don't work in it

// if I say top, it will return the top element but do not delete it 
// pop function deletes it

#include<bits/stdc++.h>
using namespace std;

void explainStack(){

    stack<int> st;
    st.push(5); // pushes the element in the front and not at the back

    st.pop();
    st.emplace(5);

    cout <<st.top() << endl;
    stack<int>st1,st2;
    st1.swap(st2);

    

}