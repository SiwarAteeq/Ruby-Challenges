#include <bits/stdc++.h>
using namespace std;
int main(){
  int n;
  cout << "Enter the number of elements: ";
  cin >> n;
  int arr[n];
  map<int,int>m;
  cout << "Enter the elements: ";
  for(int i=0; i<n; i++){
    cin >> arr[i];
    m[arr[i]]++;
  }
  for(int i=1;i<=n+1;i++){
    if(m[i]==0)
    cout<<i;
  }


return 0;
}