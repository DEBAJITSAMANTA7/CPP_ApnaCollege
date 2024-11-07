#include <bits/stdc++.h>
using namespace std;

int main(int argc, char const *argv[])
{
     /* code */
     int n=5;
     int count=1;
     for (int  i = 1; i <=n; i++)
     {
          /* code */
          for (int  j = 0; j <i; j++)
          {
               cout<<count <<" ";
               count++;
          }
          cout<<endl;
     }
     
     return 0;
}
