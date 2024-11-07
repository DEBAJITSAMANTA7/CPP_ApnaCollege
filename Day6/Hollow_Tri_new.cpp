#include <bits/stdc++.h>
using namespace std;

int main(int argc, char const *argv[])
{
     int n=5;
     for (int  i = 1; i <=n; i++)
     {
          // first star for all and last star
          cout<<"*"<<" ";
          for (int  j = 1; j<=n-1; j++)
          {
               if (i==1||i==n)
               {
                    cout<<"*"<<" ";

               }
               else
               {
                    cout<<" "<<" ";
               }
               
               cout<<"*"<<endl;
          }
          
     }
     
     /* code */
     return 0;
}
