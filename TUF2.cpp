#include <iostream>
using namespace std;

bool checksortedarray(int arr[],int n){
    for(int i=0;i<n;i++){
            if(arr[i]<arr[i+1]){
                return true;

            }else{
                return false;
            }
    }
}

int main(){
    int n;
    cout<<"enter size of array"<<endl;
    cin>>n;
    int arr[n];
    cout<<"enter the elements of array";
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    if ( checksortedarray(arr, n)) {
        cout << "The array is sorted.\n";
    } else {
        cout << "The array is not sorted.\n";
    }
   
}
