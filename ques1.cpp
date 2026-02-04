#include<iostream>
using namespace std;
int main(){
    int n1,n2,n3;
    int avg=0;
    cout<<"Enter marks of first student";
    cin>>n1;
    cout<<"Enter marks of second student"<<endl;
    cin>>n2;
    cout<<"Enter marks of third student";
    cin>>n3;
    avg=(n1+n2+n3)/3;
    cout<<avg;
    return 0;
}