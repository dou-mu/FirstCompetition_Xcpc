#include<iostream>
using namespace std;


void solve()
{
    int n,k;
    scanf("%d%d",&k,&n);
    if(n%k>=n/k)
    {
        printf("Bob\n");
    }
    else
    {
        printf("Alice\n");
    }
}

int main()
{
    int T;
    scanf("%d",&T);
    for(int i=0;i<T;i++)
    {
        solve();
    }
    return 0;
}