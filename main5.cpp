#include <iostream>
using namespace std;
int main(){
  int a[9]={1,2,3,4,5,6,7,8,9};
  int n=9;
  int start=0;
  int end=n-1;

  for(int i=0; i<=n; i++){
    if(start>end)
      break;

    if(start==end){
      cout<<a[start]<<endl;
    }

    else{
      cout<<a[start]<<"";
      cout<<a[end]<<"";
    }

    start++;
    end--;
  }
}