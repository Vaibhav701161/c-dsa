// the maximum or the largest character stays on the top

#include<bits/stdc++.h>
using namespace std;

void explainPriorityQueue(){

    priority_queue<int> pq;
 pq.push(3);// pushes in back not in front
     pq.pop();
     pq.emplace(4);

    pq.top();

    // minimum heap
    priority_queue<int , vector <int> , greater <int>>  pq;
    

}