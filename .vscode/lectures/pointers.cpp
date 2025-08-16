#include <bits/stdc++.h>
using namespace  std;
int main() {
    int a = 3;
    int* ptr = &a;// stores address of a
    int **altptr = &ptr;// stores address of pointer of a * -pointing to pointer,**pointing to which ptr is pointing
    cout<<**altptr<<endl;
}