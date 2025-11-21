#include <iostream>
#include <fstream>
#include <string>
using namespace std;

class Item {
public:
    string name;
    int quantity;

    // Write: name,quantity
    void saveToFile() {
        ofstream out("items.txt");
        if (out.is_open()) {
            out << name << "," << quantity << endl;
            out.close();
            cout << "Item saved to file." << endl;
        } else {
            cout << "Unable to open file for writing." << endl;
        }
    }

    // Read from file and display
    void loadFromFile() {
        ifstream in("items.txt");
        if (in.is_open()) {
            string line;
            getline(in, line);
            in.close();
            cout << "Data from file: " << line << endl;
        } else {
            cout << "Unable to open file for reading." << endl;
        }
    }
};

int main() {
    Item item;

    // Assign values
    item.name = "Iphone";
    item.quantity = 10;

    // Save to file
    item.saveToFile();

    // Load & display file contents
    item.loadFromFile();

    return 0;
}
