//Kunga Gurung

#include <iostream>
using namespace std;
void printArray(int arr[], int size) {
    for (int i = 0; i < size; i++) {
        cout << arr[i] << " ";
    }
}
int main() {
    const int SIZE = 4;
    int nums[SIZE] = {3, 6, 9, 12};
// The original code used printArray(nums[], SIZE); I found the mistake in this line because we don't need the empty brackets 
// [] after nums. We only need to write nums because we already created the list of numbers earlier, and writing nums is 
// enough to send all those numbers.
printArray(nums, SIZE);  
    return 0;
}
