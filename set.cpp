#include<bits/stdc++.h>
using namespace std;

// set stores in order and unique

void explainSet(){
set <int> st;
st.insert(1);//{1}
st.emplace(2);//{1,2}
st.insert(2);//{1,2}does not insert 2 again. only unique elements can be inserted

//{1,2,3,4,5,6}
auto it = st.find(3);
st.erase(5);

//if an element is not there , it will always return set.end()

int cnt = st.count(1);

// upper bound and lower bound functions are also there

}