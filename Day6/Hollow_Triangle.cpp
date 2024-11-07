#include <bits/stdc++.h>
using namespace std;

int main(int argc, char const *argv[])
{
     int n = 4;

     for (int i = 1; i <= n; i++) // outer loop to define the current row
     {
          cout << "*"<<" ";
          if (i == 1 || i == n)
          {
               for (int j = 1; j <=n - 1; j++)
               {
                    cout << "*"<<" ";
               }
          }
          else
          {
               for (int j = 1; j <= n-1 ; j++)
               {
                    cout << " "<<" ";
               }
          }
          cout << "*" << endl;
     }

     return 0;
}
