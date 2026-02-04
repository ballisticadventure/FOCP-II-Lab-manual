#include<iostream>
using namespace std;
int main(){
    int emp,salary;
    float bonus,net;
    cout<<"Enter the Number of employees and their salary"<<endl;
    cin>>emp>>salary;
    bonus=salary*0.12;
    net=salary+bonus;
    cout<<"Bonus successfully added to salary:"<<net;
    cout<<"\nBonus:"<<bonus;
}