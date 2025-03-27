#include <iostream>
using namespace std;

int main(){
    int n;
    int maxval = INT8_MIN;
    int minval = INT8_MAX;
    int secondmin= INT8_MAX;
    int secondmax= INT8_MIN;
    cout<<"enter size of array"<<endl;
    cin>>n;
    int arr[n];
    cout<<"enter the elements of array";
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    for(int i=0;i<n;i++){
        if(arr[i]>maxval){
            secondmax=maxval;
            maxval= arr[i];
        }else if(arr[i]>secondmax && arr[i]!= maxval){
            secondmax=arr[i];
        }
            
        }
        return secondmax;
    
    
}