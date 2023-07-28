// Selection sort

#include <iostream>
using namespace std;
class Selection
{
public:
    int j, i, min, pos;

public:
    void Selection_sort(int array[], int size);
    void Print_array(int array[], int size);
};
void Selection ::Selection_sort(int array[], int size)
{
    for (int i = 0; i < size - 1; i++)
    {
        int minIndex = i;
        for (int j = i + 1; j < size; j++)
        {
            if (array[j] < array[minIndex])
                minIndex = j;
        }
        swap(array[minIndex], array[i]);
    }
}
void Selection ::Print_array(int array[], int size)
{
    cout << "\n\t The elements are = ";
    for (int i = 0; i < size; i++)
    {
        cout << "   " << array[i];
    }
    cout << "\n";
}
int main()
{
    Selection obj;
    int array[20];
    int size;
    cout << "\n\t How many elementys to insert the data :- ";
    cin >> size;
    cout << "\n\t Enter the number :- ";
    for (int i = 0; i < size; i++)
    {
        cin >> array[i];
    }
    cout << "\n\t The array is before sorting elements are = ";
    obj.Print_array(array, size);
    obj.Selection_sort(array, size);
    cout << "\n\t The array is after sorting elements are = ";
    obj.Print_array(array, size);
    return 0;
}
