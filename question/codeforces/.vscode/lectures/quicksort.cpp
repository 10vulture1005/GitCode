#include <bits/stdc++.h>
using namespace  std;
int pivot(int a[],int s,int e){
    int p = e;
    int i = s-1;
    int j = s;
    while(j<e){
        if(a[j]<a[p]){
            i++;
            swap(a[i],a[j]);
        }
        j++;
    }i++;
    swap(a[i],a[p]);
    return i;

}
void quicksort(int a[] ,int s,int e){
    if(e<=s)return;
    int p = pivot(a,s,e);
    quicksort(a,s,p-1);
    quicksort(a,p+1,e);
}
int main() {
    int a[] = {5,2,3,1,4};
    quicksort(a,0,sizeof(a)/sizeof(a[0])-1);
    for(int i=0;i<5;i++) cout<<a[i]<<" ";
    return 0;
 
}