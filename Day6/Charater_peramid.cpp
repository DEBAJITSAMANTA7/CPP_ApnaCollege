#include <bits/stdc++.h>
using namespace std;

int main(int argc, char const *argv[])
{
     int n;
     cin >> n;
     char startAlphabet = 'A';
     int count = 0;
     for (int i = 1; i <= n; i++)
     {
          for (int j = 1; j <= i; j++)
          {
               char temp = startAlphabet + count;

               cout << temp << " ";
               count++;
          }
          cout << endl;
     }

     return 0;
}
