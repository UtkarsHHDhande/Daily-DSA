#include <iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int i;
    for ( i = 1; i <= n; i++)
    {
        int j;
       for ( j = 0; j<n-i+1; j++)
       {
        cout<< "*";
       }
       cout<<endl;
        
    }
    
}