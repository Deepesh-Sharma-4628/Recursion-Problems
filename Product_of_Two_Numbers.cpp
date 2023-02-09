#include<bits/stdc++.h>
using namespace std;

int product(int a,int b){
    if(b==0)
    return 0;
    int ans= a+product(a,b-1);
    return ans;
}
int main(){
    int a,b;
    cin>>a>>b;
    if(a<b)
    swap(a,b);
    cout<<product(a,b);
}