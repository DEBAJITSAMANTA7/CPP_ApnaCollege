#include <bits/stdc++.h>
using namespace std;

int main(int argc, char const *argv[])
{
     int n;
     cin >> n;

     int arr[n];
     for (int i = 0; i < n; i++)
     {
          /* code */
          cin >> arr[i];
     }
     sort(arr, arr + n);
     // binary search
     int key;
     cin >> key;
     int start = 0;
     int end = n - 1;
     while(start<=end)
     {
          int mid =start+end/2;

          if(arr[mid]==key) 
          {
               cout<<arr[mid]<<"->"<<mid;
               return 0;
          }
          else if (key>arr[mid])
          {
               /* code */
               start=mid+1;
          }
          else
          {
               end=mid-1;
          }
          
          
     }

     cout<<"Not find";
     return 0;
}
