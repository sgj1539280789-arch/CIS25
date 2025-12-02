# Week 7
# Module4

Variable declaration

float n1, n2, n3;

Three floating-point variables (n1, n2, n3) are created to store the user’s numbers.

Input from the user

cout << "Enter three numbers: ";

cin >> n1 >> n2 >> n3;

The program prompts the user to enter three numbers and reads them into n1, n2, and n3.

First comparison (outer if)

if (n1 >= n2) {

The program first checks whether n1 is greater than or equal to n2.

If yes, then only n1 and n3 need to be compared.

If no, then n2 is bigger than n1, and will be compared with n3.

Inner comparisons

If the program is inside the first block (n1 >= n2), it checks:

if (n1 >= n3)

If n1 is also greater than or equal to n3, then n1 is the largest.

Otherwise, n3 is the largest.

If the program goes to the else block (meaning n2 > n1), it checks:

if (n2 >= n3)

If n2 is greater than or equal to n3, then n2 is the largest.

Otherwise, n3 is the largest.

Output

Depending on the conditions, the program prints:

Largest number: <value>

Return statement

return 0;

This indicates that the program ends successfully.
