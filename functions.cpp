#include<iostream>
using namespace std;
int areasq(int a){
    return a*a;
}
int arearec(int b,int c){
    return b*c;
}
int areacir(int d){
    return 3.14*d*d;
}
int main(){
    int side,length,breadth,radius;
    cout<<("Enter in this order:- 1) Square 2)Length and breadth 3)Radius")<<endl;
    cin>>side>>length>>breadth>>radius;
    int result1=areasq(side);
    int result2=arearec(length,breadth);
    float result3=areacir(radius);
    cout<<result1<<endl<<result2<<endl<<result3;
    return 0;
}
