#include <bits/stdc++.h>
using namespace std;
int main(){
  int n;
  cout<<"Enter the number of trem to generate \n";
  cin>>n;
  vector<int>feb(n);
if(n<=0){
    cout<<"Invalid input. Please enter a positive integer.\n";
    return 0;
  
}
else if(n==1){
    cout<<"The first term of the Fibonacci sequence is: 0\n";
    return 0;
}
else if(n==2){
    cout<<"The first two terms of the Fibonacci sequence are: 0, 1\n";
    return 0;
}
  feb[0]=0;
  feb[1]=1;
  cout<<"The first "<<n<<" terms of the Fibonacci sequence are:\n";
  cout<<feb[0]<<" "<<feb[1]<<" ";
  for(int i=2; i<n; i++){
    feb[i]=feb[i-1]+feb[i-2];
    cout<<feb[i]<<" ";
  }



return 0;
}