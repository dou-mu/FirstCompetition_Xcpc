#include<iostream>
#include<string>
#include<map>
using namespace std;


void solve()
{
    int k=0,len=0;
    string str;
    cin>>str;
/*     char *first,*check;
    first=&str[0],check=&str[1];
    for(int i=0;i<str.length();i++)
    {
        if(*first!=*check||*first!=*(check++))
        {
           first++;
           continue;
        }
        map<char,int> m;
        ans++;
        m[*first]=1;
        if(*(first+1)!=*check)
          m[*(first+1)]=1;
        first--,check++;  
        while(first!=&str[0]&&check!=&str[str.length()-1]&&*first==*check&&m[*first]!=1)
        {
            m[*first]=1;
            first--;
            check++;
        }
        first=check+1;
        check=first+1;
        if(check==&str[str.length()-1])
        {
            if(*first==*check)
            {
                ans++;
            }
            break;
        }
    } */
    for(int i=0;i<str.length();i++)
    {
      if(str[i]!=str[i+1])
        continue;
      k+=1,len+=1; 
      for(int j=i;j<str.length();j++)
      {
        if(str[j+1]==str[j])
        {
            len+=1;
            continue;
        }
        i=j;
        break;    
      }
    }
    printf("%d\n",len-k);
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