#include <bits/stdc++.h>     

using namespace std;

 int main()

{
int n;
cin>>n;
vector<long long int> v(n);
for (int i=0;i<n;i++)
{
    cin>>v[i];

}
long long int total=0;
for (int i=0;i<n;i++)
{
    total+=v[i];

}
if (total%2!=0)
{
    cout<<0<<endl;
    return 0;
}
long long tar=total/2;
long long sum=0;
int count=0;
for (int i=0;i<n-1;i++)
{
    sum+=v[i];
    if (sum==tar)count++;

}
cout<<count<<endl;


    return 0;
}
