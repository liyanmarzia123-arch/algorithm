#include <iostream>   
using namespace std;  

int main() {

    int n, key;  // n = number of elements, key = value to search

    cout << "Enter number of elements: ";
    cin >> n;   // Take number of elements from user

    int arr[n];  // Declare an array of size n

    cout << "Enter sorted elements: ";
    for(int i = 0; i < n; i++) {
        cin >> arr[i];   // Input array elements (must be sorted)
    }

    cout << "Enter the value to search: ";
    cin >> key;   // Take the value to search

    int low = 0, high = n - 1;   // Set starting and ending index
    bool found = false;          // Assume element is not found initially

    // Start Binary Search
    while(low <= high) {

        int mid = (low + high) / 2;   // Find the middle index

        if(arr[mid] == key) {   // If middle element equals key
            cout << "Element found at position: " << mid + 1 << endl;
            found = true;   // Mark as found
            break;          // Exit loop
        }
        else if(arr[mid] < key) {  
            low = mid + 1;  // If key is greater, search right half
        }
        else {
            high = mid - 1; // If key is smaller, search left half
        }
    }

    if(!found) {   // If element was not found
        cout << "Element not found." << endl;
    }

    return 0;  
}


