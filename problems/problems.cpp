// 1281.subtract-the-product-and-sum-of-digits-of-an-integer


class Solution {
public:
    int subtractProductAndSum(int n) {
        
    int prod =1;
    int sum=0;
    while(n!=0){
        int digit=n%10;
        prod=prod * digit;
        sum= sum + digit;

        n=n/10;
    }
    int answer=prod - sum;
   return answer;
    }
};

// 191.number-of-1-bits
#include <cstdint>
class Solution {
public:
    int hammingWeight(uint32_t n) {
        int count = 0;
        while(n!=0){
            if(n&1){
                count++;
            }
            n=n>>1;
        }
        return count;
    }
};

// 7.reverse-integer
#include <climits>
class Solution {
public:
    int reverse(int x) {
       int ans = 0;
    while(x!=0){
        int digit = x%10;
        if((ans>INT_MAX/10)|| (ans< INT_MIN/10)){
            return 0;
        }
        ans = (ans*10) + digit;
        x=x/10;
    } 
    return ans;
    }
};

//1009.complement-of-base-10-integer
class Solution {
public:
    int bitwiseComplement(int n) {
       int m=n;
       int mask=0;
       if(n==0)
       return 1;
       while(m!=0){
           mask = (mask<<1) | 1;
           m = m >> 1;
       } 
       int ans = (~n) & mask;
       return ans;
    }
};


// 231.power-of-two
#include <math.h>
class Solution {
public:
    bool isPowerOfTwo(int n) {
       for(int i=0;i<=30;i++){
           int ans=pow(2,i);
           if(ans==n){
               return true;
           }
       } 
       return false;
    }
};