#include <bits/stdc++.h>
using namespace  std;
void print(multiset<int> &s){
    for(auto it = s.begin(); it!=s.end(); it++){
        cout<<*it<<" ";
    }
    cout<<endl;
    
}
int main() {
    //multiset bhi same hai but kuch diff hai tp is logn
    multiset<int> s;
    s.insert(10);
    s.insert(20);
    s.insert(30);
    s.insert(30); //30 is inserted twice
    print(s);
    //multiset is better than priority queue
    //here things are sorted
    //but multiple entries are allowed

}