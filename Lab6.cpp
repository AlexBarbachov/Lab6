#include <iostream>

using namespace std;


double sumArray(double *arr, int size);
void outputArrayData(double *arr, int size);
double* enterArrayData(int size);

int main() 
{
    const int SIZE = 5;
    double *numbers = nullptr;
    double sum = 0;


    numbers = enterArrayData(SIZE);
    outputArrayData(numbers, SIZE);
    
    sum = sumArray(numbers, SIZE);
    cout << "Sum of values: " << sum << endl;

    // free up memory
    delete [] numbers;
}

double sumArray(double *arr, int size)
{
    double sum = 0;
    for (int i = 0; i < size; i++)
    {
        sum += arr[i];
    }

    return sum;
}

void outputArrayData(double *arr, int size)
{
    cout << "Outputting array elements: ";
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}

double* enterArrayData(int size)
{
    // declare dynamic array
    double *arr = new double[size];
    double element = 0;


    cout << "Data entry for the array: " << endl;
    for (int i = 0; i < size; i++)
    {
        cout << "Element #" << i << ": ";
        cin >> element;
        arr[i] = element;
    }
    cout << "Data entry complete." << endl;

    return arr;
}

