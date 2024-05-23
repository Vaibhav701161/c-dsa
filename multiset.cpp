// same as set just the difference is that it can store multiple times a single element

#include<bits/stdc++.h>
using namespace std;

void explainMultiset(){

multiset<int> ms;
ms.insert(1);
ms.insert(1);// {1,1}

ms.erase(1);// all the 1s are erased

int cnt = ms.count(1);



}