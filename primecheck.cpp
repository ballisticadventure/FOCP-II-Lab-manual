#include<iostream>
using namespace std;
bool isPrime(int n){
    if (n<=1) 
    return false;
    for(int i=2;i<=n/2;i++){
        if (n%i==0){
            return false;
        }
    }
    return true;
}
int main(){
    int x;
    cout<<"Enter a number to check if its prime"<<endl;
    cin>>x;
    if(isPrime(x)){
        cout<<x<<"is prime";

    }
    else{
        cout<<x<<"is not prime";
    }
    return 0;

}