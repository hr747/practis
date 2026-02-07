#include <bits/stdc++.h>

using namespace std;

 int main()

{
int t;
cin>>t;
while (t--)
{
    /* code */
    int a,b;
    cin>>a>>b;
    if (abs(b-a)==2)cout<<"YES"<<endl;
    else if(abs(b-a)==1 && max(a,b)%2==0)cout<<"YES"<<endl;
    else cout<<"NO"<<endl;
}

    return 0;
}