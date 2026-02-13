#include<iostream>
using namespace std;
class Solution {
public:
    int countSetBits(int n) {
        // Your code goes here
        int rem,count=0;
        while(n>0)
        {
            rem=n%2;
            n=n/2;
            if(rem==1)
            {
                    count++;
            }

        }
        return count;
    }
};