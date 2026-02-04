#include<iostream>
using namespace std;
int main(){
    int a,b;
    int temp;
    cout<<"Enter variables";
    cin>>a>>b;
    temp=a;
    a=b;
    b=temp;
    cout<<"Swapped Result:"<<a<<" "<<b;
    return 0;
}