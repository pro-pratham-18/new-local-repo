
#include<algorithm>
#include<climits>
#include<iostream>
using namespace std;

int main(){

    int a;
    cout<<"Enter The Number Of Elements for an array:";
    cin>>a;
    int arr[a];

    for(int i=0;i<a;i++){
        cout<<"Enter The "<<i<<"th Index Element:"<<endl;
        cin>>arr[i];
    }

    cout<<"The Array Formed:"<<endl;

    for(int i=0;i<a;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;

    int mx = INT_MIN;

    for(int i=0;i<a;i++){
        mx=max(mx,arr[i]);
    }

    cout<<"The maximum element is:"<<mx<<endl;

    return 0;
}

//hello there 