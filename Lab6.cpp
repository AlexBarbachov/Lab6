#include <iostream>

using namespace std;

int main() 
{
    double *numbers = enterArrayData(5);
    


    // free up memory
    delete [] numbers;
}

double sumArray(double *arr, int size)
{
    ;
}

void outputArrayData(double *arr, int size)
{
    ;
}

double* enterArrayData(int size)
{
    // declare dynamic array
    double *arr = new double[size];
    double element = 0;


    cout << "Data entry for the array: " << endl;
    for (int i = 0; i < size; i++)
    {
        cout << "Element #" << i << ":";
        cin >> element;
        arr[i] = element;
    }

    return arr;
}

