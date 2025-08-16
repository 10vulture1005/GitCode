#include <unordered_set>//hai isko alag se lana padta hai
#include <bits/stdc++.h>
using namespace  std;
void print(unordered_set<int> &s){
    for(auto it = s.begin(); it != s.end();it++){
        cout<<*it<<" ";
    }
    cout<<endl;

}
int main() {
    //sab same hai bus arder me nhi reheta and idar time complexity is O(1)!!
    //defined by
   unordered_set<int> s; 
   for(int i = 0;i<5;i++){
    s.insert(i);
   } 
   print(s);
   //yaha dekho ki sab randomly ordered ye ek disadvantage hai iska baki same hai

}