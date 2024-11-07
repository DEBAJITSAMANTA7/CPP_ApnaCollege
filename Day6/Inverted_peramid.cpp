// Inverted peramid 
// ****
//  ***
//   **
//    * 
#include <bits/stdc++.h>
using namespace std;

int main(int argc, char const *argv[])
{
int n=4;
for (int  i = 1; i <= n; i++)
{
     // space 
     for (int  j = 1; j< i; j++)
     {
          /* code */
          cout<<" "<<" ";
     }
     // star
     for (int  j = 0; j<= n-i; j++)
     {
          /* code */
          cout<<"*"<<" ";
     }
     cout<<endl;
     
}


     return 0;
}
