#include <bits/stdc++.h>

using namespace std;

 int main()

{
int t;
cin>>t;
while (t--)
{
    /* code */
    int n,a,b;
    cin>>n>>a>>b;
    int total_time=2*(180+n);
    int total_step=(a+b);
    cout<<total_time-total_step<<endl;
    
}

    return 0;
}