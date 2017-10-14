#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;
   while(t--) //for t number of testcases
   {
        int n;
        int c;
        int m;
        cin >> n >> c >> m;
       int cbought=n/c; //chocolates bought
       int nclts=cbought; //number of chocolates
       int wrpex=n/c; //current number of wrappers
       while(wrpex>=m) // when wrappers avialable are less than needed to puechase then loop ends
       {
        wrpex-=m;
       nclts++;
        wrpex++;  
       }
       cout<<nclts<<endl;
   }
    

    return 0;
}
