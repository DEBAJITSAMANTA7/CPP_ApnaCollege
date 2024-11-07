#include <bits/stdc++.h>
using namespace std;

int main(int argc, char const *argv[])
{
     
     int n=5;
     for (int  i = 1; i <=n; i++)
     {

          // space 
          for (int  j = 0; j< n-i; j++)
          {
               /* code */
               cout<<" "<<" ";
          }
          
          /* code */
          // 1st reverse order
          for (int  j =i; j >1; j--)
          {
               /* code */
               cout<<j<<" ";
          }
          // 2nd proper order  
          for (int  j =1; j <=i; j++)
          {
               /* code */
               cout<<j<<" ";
          }
          cout<<endl;
     }
     
     return 0;
}
