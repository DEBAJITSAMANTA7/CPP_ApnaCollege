#include <bits/stdc++.h>
using namespace std;
int main(int argc, char const *argv[])
{
     /* code */
     int n;
     cin>>n;
     int temp=1;
     for (int  i = 1; i <= n; i++)
     {
          for ( int j = 1; j <= i; j++)
          {
               /* code */
               cout<<temp++<<" ";
          }
          cout<<endl;
          temp=1;
     }
     
     return 0;
}
