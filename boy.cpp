
// program for the sum of n terms of the fibonacci series;

#include<iostream>
using namespace std;

int fibo(int n){
    if (n==1) return 0;
    if(n==2) return 1;
    return fibo(n-1)+fibo(n-2);

}
int main(){
    int a;
    int count =0;
    cout<<"enter the number for the sum  of nth fibonacci series"<<endl;
    cin>>a;
    for(int i=1;i<=a;i++){
        count+=fibo(i);
    }

    cout<<"the sum is :"<<count;

    return 0;

}


