#include <bits/stdc++.h>
using namespace std;

int main(int argc, char const *argv[])
{
     /* code */

     int n=3;
     for (int  i = 1; i <= n; i++)
     {
          /* code */
          // space
          for (int  j = n; j > i; j--)
          {
               /* code */
               cout<<" "<<" ";
          }
          // star
          for (int  j = 0; j < 2*i-1; j++)
          {
               /* code */
               cout<<"*"<<" ";
          }
          cout<<endl;
     }
     // -------- Reverseing it 
     int init=1;
        for (int  i = n; i> 0; i--)
     {
          /* code */
          // space
          for (int  j = 1 ; j < init; j++)
          {
               /* code */
               cout<<" "<<" ";
          }
          // star
          init++;
          for (int  j = 0; j < 2*i-1; j++)
          {
               /* code */
               cout<<"*"<<" ";
          }
          cout<<endl;
     }
     return 0;
}
