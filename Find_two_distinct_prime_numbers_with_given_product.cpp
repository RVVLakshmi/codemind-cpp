#include<bits/stdc++.h>
using namespace std;
void findingPrimeNumbers(int n,bool calcPrime[]){
    calcPrime[0]=calcPrime[1]=false;
    for(int i=2;i<=n;i++)
      calcPrime[i]=true;
    for(int p=2;p*p<=n;p++){
        if(calcPrime[p]==true){
            for(int i=p*2;i<=n;i+=p)
              calcPrime[i]=false;
        }
    }
}
void calcPairPrime(int n){
    int flag=0;
    bool calcPrime[n+1];
    findingPrimeNumbers(n,calcPrime);
    for(int i=2;i<n;i++){
        int x=n/i;
      if(calcPrime[i] && calcPrime[x] and x!=i and x*i==n){
          cout<<i<<" "<<x;
          flag=1;
          return;
      }
    }
    if(!flag)
       cout<<"-1";
    }
    int main(){
        int n;
        cin>>n;
        calcPairPrime(n);
        return 0;
}