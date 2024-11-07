#include <bits/stdc++.h>
using namespace std;

int main(int argc, char const *argv[])
{
     int n=4;
     for (int  i = 1; i <=n; i++)
     {
          // 1st Sequence Star
          for (int  j = 0; j < i; j++)
          {
               /* code */
               cout<<"*"<<" ";
          }
          // space middle
          for (int  j = 0; j < (n-i)*2; j++)
          {
               /* code */
               cout<<" "<<" ";
          }
          
          // 2nd Star Sequence
          for (int  j = 0; j < i; j++)
          {
               /* code */
               cout<<"*"<<" ";
          }
          cout<<endl;
     }
     
// ---Lower part same like upper but just main ROW loop just reverse it
   for (int  i = n; i >0; i--)
     {
          // 1st Sequence Star
          for (int  j = 0; j < i; j++)
          {
               /* code */
               cout<<"*"<<" ";
          }
          // space middle
          for (int  j = 0; j < (n-i)*2; j++)
          {
               /* code */
               cout<<" "<<" ";
          }
          
          // 2nd Star Sequence
          for (int  j = 0; j < i; j++)
          {
               /* code */
               cout<<"*"<<" ";
          }
          cout<<endl;
     }

     return 0;
}
