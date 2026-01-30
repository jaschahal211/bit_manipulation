//conversion from decimal to binary number

// #include<iostream>
// using namespace std;
// #include<string>
// int main()
// {
//     vector<int>v;
//     int num;
//     cout<<"enter number"<<endl;
//     cin>>num;
//     while(num>0)
//     {
//          v.push_back(num%2);
//          num/=2;
//     }
//     reverse(v.begin(),v.end());
//     for(int val:v)
//     {
//         cout<<val;
//     }
//     return 0;
// }


// conversion of binary number to decimal number
#include<iostream>
using namespace std;
#include<string>
int main()
{
    int num;
    cout<<"enter binary number:"<<endl;
    cin>>num;
    int ans=0;
    vector<int>v;
    while(num>0)
    {
        v.push_back(num%10);
        num/=10;
    }
    for(int i=0;i<v.size();i++)
    {
        ans+=pow(2,i)*v[i];
    }
    cout<<ans;
    
    return 0;
}