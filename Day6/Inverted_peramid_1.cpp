#include <bits/stdc++.h>
using namespace std;

int main(int argc, char const *argv[])
{
     /* code */

     int n;
     cin >> n;
     for (int i = 1; i <= n; i++)
     {
          // space
          for (int j = 1; j <= n - i; j++)
          {
               /* code */
               cout << " " << " ";
          }
          for (int j = 1; j <= i; j++)
          {
               /* code */
               cout << "*" << " ";
          }
          cout << endl;
     }

     return 0;
}