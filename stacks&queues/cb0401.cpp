// STACKS AND QUEUES IN CPP
#include <bits/stdc++.h>
using namespace std;
int main(){
    stack<int>st;

    queue<int>q;
    q.push(1);
    q.push(2); //{1,2}
    q.emplace(4); //{1,2,4}
    q.back()+=5;  
    cout<<q.back()<<endl; // gives 9
    q.pop();
    cout<<q.front(); //{2,9}

    priority_queue<int>pq;
    pq.push(5); 
    pq.push(2); //{5,2}
    pq.push(8); //{8,5,2}
    
    return 0;
}