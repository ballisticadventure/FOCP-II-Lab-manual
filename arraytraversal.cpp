#include<iostream>
using namespace std;
class Array{
private:
    int arr[50],n;
public:
    void layout(){
        cout<<"Enter number of elements";
        cin>>n;
        cout<<"Enter elements:";
        for(int i=0;i<n;i++){
            cin>>arr[i];
        }

    }
    void traversing(){
        cout<<"elements of array are:";
        for(int i=0;i<n;i++){
            cout<<arr[i]<<"";
        }
    }
};
int main(){
    Array arraytraverse;
    arraytraverse.layout();
    arraytraverse.traversing();
    return 0;
}