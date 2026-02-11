#include <iostream>
using namespace std;

int main() {
    int arr[5];
    int largest, secondLargest;
    cout << "Enter 5 numbers:" << endl;
    for(int i = 0; i < 5; i++) {
        cin >> arr[i];
    }
    largest = arr[0];
    secondLargest = arr[0];
    for(int i = 1; i < 5; i++) {
        if(arr[i] > largest) {
            secondLargest = largest;
            largest = arr[i];
        } else if(arr[i] > secondLargest && arr[i] != largest) {
            secondLargest = arr[i];
        }
    }
    cout << "Largest number: " << largest << endl;
    cout << "Second largest number: " << secondLargest << endl;
    return 0;
}
