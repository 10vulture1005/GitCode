//sets
#include <bits/stdc++.h>
using namespace  std;
void print(set<int> &s){
for(auto x:s){
    cout<<(x)<<" ";
}cout<<endl;
}
int main(){
ios::sync_with_stdio(0);
cin.tie(0);
//sets is a data structure which stores only unqiue values.and keep them in sorted fashion.
set<int> s;// ye ordered sets hai isme time complexity(o(logn)) hoti hai (mostly).
// insert function is used to insert values in sets.
s.insert(1);
s.insert(2);
s.insert(4);
s.insert(4);
s.insert(3);
s.insert(1);
//to print. here x not is iterator
print(s);



//by using iterator
// for(set<int>::iterator it=s.begin();it!=s.end();it++){
//     cout<<(*it)<<" ";
// }

//fuctions of sets
//1.insert() : used to insert values in sets.
//2.erase() : used to erase values from sets.
//3.find() : used to find the value in sets.
//4.lower_bound() : used to find the lower bound of the value in sets.
//6.count(value) : return 1 or 0 if element exist 1 else 0. it diffrent  from find() function as find returns iterator
//7. size() : return the size of set
//8. upper_bound(value): Returns an iterator to the first element that is greater than value.

s.erase(4);
print(s);

s.insert(1000);
auto its = s.find(1000);
cout<<*its<<endl;

cout<<s.count(2)<<endl;
cout<<s.size()<<endl;


//prints the no btw 2 and 1000
auto it1 = s.lower_bound(2);
auto it2 = s.upper_bound(1000);
for(auto it=it1;it!=it2;it++){
    cout<<(*it)<<" ";
}









//algos
//1. union
// set<int> s1 = {1, 2, 3};
// set<int> s2 = {3, 4, 5};
// set<int> result;
// set_union(s1.begin(), s1.end(), s2.begin(), s2.end(),inserter(result, result.begin()));
// result contains {1, 2, 3, 4, 5}
//2. intersection
// set<int> result;
// set_intersection(s1.begin(), s1.end(), s2.begin(), s2.end(),inserter(result, result.begin()));
// result contains {3}
//3. diffrence
// set_difference(): Computes the difference of two sorted ranges.
// set<int> result;
// set_difference(s1.begin(), s1.end(), s2.begin(), s2.end(),inserter(result, result.begin()));
//symettric diff bhi hota hai








}