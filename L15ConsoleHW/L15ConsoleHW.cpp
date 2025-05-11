#include <iostream>
#include "myarray.h"

int main()
{
    srand(time(0));
    int size;
    int userInt;
    int userIndex;

    cout << "Enter array size: ";
    cin >> size;

    int* ar = memory_allocation(size);
    fill_array(ar, size);
    print_array(ar, size);

    cout << "\nEnter your int: ";
    cin >> userInt;
    add_first_element(ar, size, userInt);
    print_array(ar, size);

    cout << "\nEnter your int: ";
    cin >> userInt;
    add_last_element(ar, size, userInt);
    print_array(ar, size);

    cout << "\nEnter your int: ";
    cin >> userInt;
    cout << "\nEnter your index: ";
    cin >> userIndex;
    add_element_byIndex(ar, size, userInt, userIndex);
    print_array(ar, size);

    delete_first_element(ar, size);
    print_array(ar, size);

    delete_last_element(ar, size);
    print_array(ar, size);

    cout << "\nEnter your index: ";
    cin >> userIndex;
    delete_element_byIndex(ar, size, userIndex);
    print_array(ar, size);
}