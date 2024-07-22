#include <iostream>
#include <math.h>
using namespace std;
int main(){

    // Positive to Binary
    int n;
    cin>>n;

    int i = 0;
    int ans = 0;
    while (n!= 0)
    {
      int bit = n & 1;

      ans = (bit * pow(10,i))+ans;
       n = n>> 1;
       i++;
    }
    
cout<<"Answer is "<<ans <<endl;

// Negative to Binary
    int n;
    cin >> n;
    n*=(-1);
    int i=0,ans=0;
    while(n!=0){
        int bit = n & 1;
        ans = ans + (bit * pow(10,i));
        n = n >> 1;
        i++;
        }
    int newAns = ~ans+1;
    cout << newAns;


}