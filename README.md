Module6
iostream: allows use of cout and cin.

fstream: used for file writing (ofstream) and file reading (ifstream).

string: enables the use of the string type.

using namespace std;: removes the need to type std:: before standard library items.
Defines a class named Item.

It has two public member variables:

name (the item’s name)

quantity (the item’s quantity)

These variables can be accessed directly in main().
Creates an output file stream out, opening items.txt.

If the file opens successfully:

Writes the name and quantity into the file, separated by a comma.

Closes the file after writing.

Prints “Item saved to file.”

If the file fails to open, it prints an error message.
reates an input file stream in to open items.txt.

If the file opens successfully:

Reads the first line (e.g., "Apple,10").

Displays the content.

If the file cannot be opened, prints an error message.
Creates an Item object named item.

Assigns values to its name and quantity.

Calls saveToFile() to write the data into the file.

Calls loadFromFile() to read and display the data from the file.

Ends the program.
Module 11
iostream allows the program to use cout for printing.

using namespace std; avoids needing to type std::cout.
This declares a class with three private data members:

id → product ID

name → product name

price → product price

Private: They cannot be directly accessed outside the class (better security and encapsulation).
Explanation:

A constructor is automatically executed when an object is created.

This one initializes id, name, and price using an initializer list:

id = i

name = n

price = p

It prints “Constructor called” to show the constructor is running.
Explanation:

A destructor is automatically executed when the object is destroyed.

This usually happens when the object goes out of scope (like when main() ends).

It prints “Destructor called” so you can see when the object is being cleaned up.
Purpose:

Prints the product’s ID, name, and price.

Uses the private variables through a public class method.
Step-by-step:

Calls constructor with:

id = 200

name = "Laptop"

price = 899.99

Prints product details.

When main() ends:

The object p is destroyed

Destructor runs automatically
