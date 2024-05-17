#include <iostream>
#include <vector>

using namespace std;

int findMissing(vector<int>& arr) {
    int low = 0;
    int high = arr.size() - 1;

    while (low <= high) {
        int mid = low + (high - low) / 2;
        // Check if mid element is at its correct position
        if (arr[mid] == mid) {
            low = mid + 1;
        } else {
            high = mid - 1;
        }
    }

    // At the end of the loop, low will be the index where the missing element should be
    return low;
}

int main() {
    vector<int> arr = {0, 1, 2, 4, 5, 6, 7, 8, 9}; // Assuming sorted array with one missing element
    int missing_element = findMissing(arr);
    cout << "Missing element is: " << missing_element << endl;
    return 0;
}
