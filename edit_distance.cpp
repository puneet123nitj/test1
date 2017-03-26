
#include<bits/stdc++.h>
using namespace std;
int min1(int a,int b,int c)
{return min(min(a,b),c);}

int main()
{string s1,s2;
cin>>s1>>s2;
int m=s1.length(),n=s2.length();
long long arr[m+1][n+1];
for(long long i=0;i<=m;i++)
    for(long long j=0;j<=n;j++)
{if(i==0)
 arr[i][j]=j;
 else if(j==0)
arr[i][j]=i;
else if(s1[i-1]==s2[j-1])
    arr[i][j]=arr[i-1][j-1];
else
arr[i][j]=1+min1(arr[i-1][j],arr[i][j-1],arr[i-1][j-1]);

}

cout<<arr[m][n];
}
