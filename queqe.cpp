// works on the concept of first in first out

#include<bits/stdc++.h>
using namespace std;

void explainQueqe(){

    queue<int> q ;
     q.push(3);// pushes in back not in front
     q.pop();
     q.emplace(4);

     q.back() += 5;
     q.front() += 10;


     

}