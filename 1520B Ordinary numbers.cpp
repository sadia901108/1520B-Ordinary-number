#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        long long n,count=0,temp;
        cin>>n;
        for(int i=1;i<=9;i++)
        {
            temp=i;
            while(temp<=n)
            {
                count++;
                temp=temp*10+i;
            }
        }
        cout<<count<<endl;
    }
}
