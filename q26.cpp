#include <iostream>
using namespace std;
int main() {
    float arr[5];
    float total = 0;
    float percentage;
    cout << "Enter the marks of five subjects out of 100:\n";
    for(int i = 0; i < 5; i++) {
        cin >> arr[i];
    }
    for(int i = 0; i < 5; i++) {
        total += arr[i];
    }
    percentage = (total / 500) * 100;
    cout << "Total marks: " << total << endl;
    cout << "Percentage: " << percentage << "%" << endl;
    return 0;
}
