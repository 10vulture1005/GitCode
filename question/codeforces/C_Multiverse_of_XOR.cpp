#include <bits/stdc++.h>
#include <unordered_set>
#define int long long
#define gcd(a, b) (__gcd(a, b))
#define vin(a,n) for(int i=0;i<n;++i) cin>>a[i];
#define vout(a,n) for(int i=0;i<n;++i) cout<<a[i]<<' ';
#define all(a) (a.begin(), a.end()); 
#define pb push_back
#define no cout<<"NO"<<endl;
#define yes cout<<"YES"<<endl;
#define vi vector<int>
#define input_tej_le ios::sync_with_stdio(false); cin.tie(NULL);
using namespace  std;
/*
 ██████     ██████     ██████  
██         ██     ██   ██    ██ 
██   ███   ██     ██   ██    ██ 
██    ██   ██     ██   ██    ██ 
 ██████     ██████     ██████  
==========================================================
Author: Vaidik Saxena
From : IIITL
==========================================================
*/


char reVal(int num)
{
    if (num >= 0 && num <= 9)
        return (char)(num + '0');
    else
        return (char)(num - 10 + 'A');
}

// Utility function to reverse a string
void strev(char *str)
{
    int len = strlen(str);
    int i;
    for (i = 0; i < len/2; i++)
    {
        char temp = str[i];
        str[i] = str[len-i-1];
        str[len-i-1] = temp;
    }
}

// Function to convert a given decimal number
// to a base 'base' and
char* fromDeci(char res[], int base, int inputNum)
{
    int index = 0; // Initialize index of result

    // Convert input number is given base by repeatedly
    // dividing it by base and taking remainder
    while (inputNum > 0)
    {
        res[index++] = reVal(inputNum % base);
        inputNum /= base;
    }
    res[index] = '\0';

    // Reverse the result
    strev(res);

    return res;
}
void vulture(){
int l,r;
cin>>l>>r;
int m;
cin>>m;
    char res[100];
    char res2[100];
string lm = fromDeci(res, m, l);
string rm = fromDeci(res2,m,r);
int ct = 1;
int n = rm.size();

string z ="";
for(int i = 0; i < rm.size()-lm.size(); i++) {
    z.pb('0');
}
lm = z+lm;
cout<<lm<<' '<<rm<<endl;
vector<int> bits(lm.size());
int sum = (m*(m-1))/2;
bits[0] = (lm[0]-'0')*sum;
for(int i = 1; i < lm.size(); i++) {
    int b = lm[i]-'0';
bits[i] =  (m*bits[i-1])*sum+b*(b+1)/2;
}
vector<int> bits2(lm.size());

bits2[0] = (rm[0]-'0');
for(int i = 1; i < rm.size(); i++) {
    int b = rm[i]-'0';

bits2[i] =  (m*bits2[i-1])*sum+b*(b+1)/2;
}



for(int i = 0; i <n;i++){
cout<<bits2[i]<<" ";
}
cout<<endl;


}
signed main(){
input_tej_le;
int t;
cin>>t;
while(t--){
vulture();
}
}