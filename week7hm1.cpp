#include <iostream>
#include <string>
using namespace std;

struct Item {
    string name;
    int id;
};

// Binary search by ID
int binarySearch(Item arr[], int size, int targetID) {
    int left = 0, right = size - 1;

    while (left <= right) {
        int mid = (left + right) / 2;

        if (arr[mid].id == targetID)
            return mid;
        else if (arr[mid].id < targetID)
            left = mid + 1;
        else
            right = mid - 1;
    }
    return -1; // not found
}

int main() {
    int size = 100;
    Item* items = new Item[size];   // dynamically allocated array

    // Populate with sample data (sorted by name)
    for (int i = 0; i < size; i++) {
        items[i].name = "Item" + to_string(i + 1);
        items[i].id = i + 1;  // id also increasing (1..100)
    }

    // Ask the user for an ID
    int searchID;
    cout << "Enter an ID to search for: ";
    cin >> searchID;

    // Binary search
    int index = binarySearch(items, size, searchID);

    // Output result
    if (index != -1) {
        cout << "Found item:\n";
        cout << "Name: " << items[index].name << endl;
        cout << "ID: " << items[index].id << endl;
    } else {
        cout << "Item with ID " << searchID << " not found.\n";
    }

    // Free memory
    delete[] items;

    return 0;
}
