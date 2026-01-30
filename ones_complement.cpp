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
       if(num%10==0)
       {
        v.push_back(1);
       }
       else{
        v.push_back(0);
       }
        num/=10;
    }
    reverse(v.begin(),v.end());
    for(int i=0;i<v.size();i++)
    {
        cout<<v[i];
    }
    
    return 0;
}