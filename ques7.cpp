#include<iostream>
using namespace std;
int main(){
    int a,b,c;
    cout<<"Enter the scores of three players"<<endl;
    cin>>a>>b>>c;
    if (a<b & b>c){
        cout<<b<<"\tis the winner"<<endl;
    }
    else if(a>b & a>c){
        cout<<a<<"\tis the winner"<<endl;
    }
    else if(a<c & b<c){
        cout<<c<<"\tis the winner"<<endl;
    }
    else if (a==b & b==c){
        cout<<"Its a Draw";
    }
    else{
        cout<<"Insert a valid number";
    }
    return 0;
}