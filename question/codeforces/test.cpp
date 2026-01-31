#include <bits/stdc++.h>
using namespace  std;
int main() {
string a;
cin>>a;
int ct = count(a.begin(),a.end()-1,'1');
if(ct%2==a.back()-'0'){
    cout<<"vaild"<<endl;
}else{
    cout<<"invaild"<<endl;
}
}z