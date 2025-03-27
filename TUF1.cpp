#include<iostream>
using namespace std;

int main(){
    int max=0;
    int n;
    cout<<"enter size of array"<<endl;
    cin>>n;
    int arr[n];
    cout<<"enter the elements of array";
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    for(int i=0;i<n;i++){
        if(arr[i]>max){
           max=arr[i];
        }
    }
    cout<<"the largest element is"<<max;
    return 0;
}