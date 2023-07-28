#include <iostream>
#include <array> //Import librabry
using namespace std;

int main()
{

    // int array[5] = {1, 2, 3, 4, 5}; // Normal

    array<int, 5> arr = {10, 5, 7, 6, 87}; // Using STL

    // Methods

    int size = arr.size();
    cout << size;

    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }

    cout << "element at 2 Index" << arr.at(2) << endl;
    cout << "element at 2 Index" << arr.empty() << endl;
    cout << "element at first" << arr.front() << endl;
    cout << "element at last" << arr.back() << endl;
}