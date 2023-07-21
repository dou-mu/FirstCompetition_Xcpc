#include<iostream>
using namespace std;

const int MAX=1e5+10;
char num[MAX];

void solve()
{
  int len;
  bool flg=false;
  long long n;
  scanf("%d%lld%\n",&len,&n);
  for(int i=0;i<len;i++)
  {
    num[i]=getchar(); 
  }
  for(int i=0;i<len;i++)
  {
    if(num[i]=='0'&&n)
    {
      flg=true;
      while(num[i]=='0')
      {
       num[i]='1';
        i+=1;
      }
      n-=1;
    }
  }
  if(!flg&&n==1)
  {
    num[len-1]='0';
  }
  for(int i=0;i<len;i++)
  {
    printf("%c",num[i]);
  }
  printf("\n");
  return;
}
int main()
{
   int N;
   scanf("%d",&N);
   for(int i=0;i<N;i++)
   {
     solve();
   }
   return 0;
}