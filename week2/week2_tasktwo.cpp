#include <bits/stdc++.h>
using namespace std;

int fibonacci(int n)
{
    if(n==0){return 0;}
    if(n==1){return 1;}
    return( fibonacci(n-1)+fibonacci(n-2));
}

int main()
{
    int n;
    cout<<"Enter number of terms:";
    cin>>n;
    cout<<"Series:"<<endl;
    for(int i=1 ;i<=n; i++)
    {
        cout<<fibonacci(i)<<" ";
    }
    return(0);
}
