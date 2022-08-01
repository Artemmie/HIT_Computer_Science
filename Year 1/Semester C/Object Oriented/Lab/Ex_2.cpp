#include <iostream>

using namespace std;

void swapPoint(int *val_1, int *val_2)
{
    int tmp = *val_1;
    *val_1 = *val_2;
    *val_2 = tmp;
}
void swapRef(int &val_1, int &val_2)
{
    int tmp = val_1;
    val_1 = val_2;
    val_2 = tmp;
}


int main()
{
    int val_1, val_2;
    cout << "Enter two values you want to swap:";
    cin >> val_1 >> val_2;
    cout << "Before the swap: value #1:" << val_1 << " value #2:" << val_2 << endl;
    swapPoint(&val_1, &val_2);
    cout << "After the pointer swap - value #1:" << val_1 << " value #2:" << val_2 << endl;
    swapRef(val_1, val_2);
    cout << "After the reference swap - value #1:" << val_1 << " value #2:" << val_2 << endl;
}