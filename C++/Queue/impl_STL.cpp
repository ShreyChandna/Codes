#include <bits/stdc++.h>
using namespace std;
int main(){
queue<int> q;
q.push(10);
q.push(20);
q.push(30);
q.pop();
cout<<q.front()<<endl;
cout<<q.back()<<endl;
return 0;
}