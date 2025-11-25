#week6
#include <iostream>

Allows the program to use input/output (cout, cin).

#include <string>

Allows the program to use the C++ string type.

using namespace std;

Lets us use names like string, cout, and cin without writing std:: every time.
Defines a structure called Item.

It has two members:

name → a string

id → an integer

This struct lets us store each item as a pair of (name, id).
Searches for an item with the given ID.

Uses binary search, which is faster than linear search.

left and right mark the current search range.

mid is the middle of the range.

If arr[mid].id equals the target ID → return the index.

If the ID in the middle is too small → search right half.

If the ID is too big → search left half.

If ID is not found → return -1.
Start of the main program.
size = 100 records

new Item[size] creates an array of 100 Items in heap memory.

items points to the first element.
Fills each array element with:

name: "Item1", "Item2", … "Item100"

id: 1, 2, 3, … 100

Data is sorted by name (Item1, Item2, … Item100).
Fills each array element with:

name: "Item1", "Item2", … "Item100"

id: 1, 2, 3, … 100

Data is sorted by name (Item1, Item2, … Item100).
Calls the binarySearch function.

index will be:

the position of the matching item

or -1 if not found
If found → prints the item’s name and ID.

If not found → prints a message.
Releases the dynamic array from memory.

Prevents memory leaks.
Exits the program normally.
