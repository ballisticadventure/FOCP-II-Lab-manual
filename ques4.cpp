#include<iostream>
using namespace std;
int main(){
    int itemno,quantity;
    float price,discount,totalamount,billingamount;
    cout<<"Enter Item number";
    cin>>itemno;
    cout<<"Enter quantity";
    cin>>quantity;
    cout<<"Enter price";
    cin>>price;
    totalamount=quantity*price;
    discount=totalamount*0.20;
    billingamount=totalamount-discount;
    cout << "\nItem Number: " << itemno << endl;
    cout << "Total Amount: " << totalamount << endl;
    cout << "Discount (20%): " << discount << endl;
    cout << "Final Bill Amount: " << billingamount << endl;
}