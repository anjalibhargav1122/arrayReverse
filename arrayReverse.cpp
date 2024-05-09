
#include <iostream>
using namespace std;

int main()
{
     int num;
    cout<<"Enter number: ";
    cin>>num;
   int arr[num];
     for(int i =0; i<num;i++){
           cout<<"Enter value"<<i+1<< ": ";
      cin>>arr[i];
  }
   

 
  for(int i =num - 1; i>=0;i--){
      cout<<arr[i]<<"  ";
  }
   
}

