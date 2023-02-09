#include<iostream>
using namespace std;

void printdigits(int n,string arr[]){
    if(n==0)
    return ;
    printdigits(n/10,arr);
    int digits=n%10;
    cout<<arr[digits]<<" ";
}
int main(){
    int n;
    cin>>n;
    string arr[10]={"zero","one","two","three","four","five","six","seven","eight","nine"};
    printdigits(n,arr);
    return 0;
}