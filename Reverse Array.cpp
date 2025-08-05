#include <iostream>
using namespace std;
int main(){
    int n;
    int num;
    int arr[n];
  cout<<"enter the array size :";
  cin>>num;
   cout<<"enter the vaalue for num :";
  for(int i=0;i<num;i++){
     
      cin>>arr[i];
  }
  cout<<"the reversed array is :";
  for(int j=num-1;j>=0;j--){
    cout<<arr[j]<<endl;
  }
}
/*
Output :
enter the array size :3
enter the vaalue for num :10 20 30
the reversed array is :30
20
10
*/
