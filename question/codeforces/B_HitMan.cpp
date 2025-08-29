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
const int N = 1000001; 

  
// array to store inverse of 1 to N 
int  factorialNumInverse[N + 1]; 
  
// array to precompute inverse of 1! to N! 
int  naturalNumInverse[N + 1]; 
  
// array to store factorial of first N numbers 
int  fact[N + 1]; 
  
// Function to precompute inverse of numbers 
void InverseofNumber(int  p) 
{ 
    naturalNumInverse[0] = naturalNumInverse[1] = 1; 
    for (int i = 2; i <= N; i++) 
        naturalNumInverse[i] = naturalNumInverse[p % i] * (p - p / i) % p; 
} 
// Function to precompute inverse of factorials 
void InverseofFactorial(int  p) 
{ 
    factorialNumInverse[0] = factorialNumInverse[1] = 1; 
  
    // precompute inverse of natural numbers 
    for (int i = 2; i <= N; i++) 
        factorialNumInverse[i] = (naturalNumInverse[i] * factorialNumInverse[i - 1]) % p; 
} 
  
// Function to calculate factorial of 1 to N 
void factorial(int  p) 
{ 
    fact[0] = 1; 
  
    // precompute factorials 
    for (int i = 1; i <= N; i++) { 
        fact[i] = (fact[i - 1] * i) % p; 
    } 
} 
  
// Function to return nCr % p in O(1) time 
int  Binomial(int  N, int  R, int  p) 
{ 
    // n C r = n!*inverse(r!)*inverse((n-r)!) 
    int  ans = ((fact[N] * factorialNumInverse[R]) 
              % p * factorialNumInverse[N - R]) 
             % p; 
    return ans; 
} 
  
int nCr(int n, int r) {
  
    // No valid combinations if r is greater than n
    if (r > n) 
        return 0;
  
    // Base case: only one way to choose 0 or all elements
    if (r == 0 || r == n) 
        return 1;
  
    // include or exclude current element
    return nCr(n - 1, r - 1) + nCr(n - 1, r);
}
void vulture(){
int n,r;
cin>>n>>r;
int mod = 1e9+7;
int ans = Binomial(n+1,r+1,mod);
cout<<ans%mod<<endl;
}
signed main(){
input_tej_le;
int t;
int  p = 1e9+7;
    InverseofNumber(p); 
    InverseofFactorial(p); 
    factorial(p); 
cin>>t;
while(t--){
vulture();
}
}