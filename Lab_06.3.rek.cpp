#include <iostream>
#include <cstdlib>
using namespace std;

void FullArr(int t[], const int size, int a, int b);
void PrintArr(int t[], const int size, int index);
int SumNegativeItem(int t[], const int size, int index, int sum);

void FullArr(int t[], const int size, int a, int b)
{
    if (size <= 0)
    {
        return;
    }
    else
    {
        t[size - 1] = a + rand() % (b - a + 1);
        FullArr(t, size - 1, a, b);
    }
}

void PrintArr(int t[], const int size, int index)
{
    if (index < size)
    {
        cout << t[index] << " ";
        PrintArr(t, size, index + 1);
    }
}

int SumNegativeItem(int t[], const int size, int index, int sum)
{
    if (index < 0)
    {
        return sum;
    }
    else
    {
        if (t[index] < 0)
        {
            sum += t[index];
        }
        return SumNegativeItem(t, size, index - 1, sum);
    }
}

int main()
{
    int a = -5;
    int b = 5;
    const int SIZE = 20;

    int arr[SIZE];

    FullArr(arr, SIZE, a, b);

    cout << "Array - ";
    PrintArr(arr, SIZE, 0);

    int sumArr = SumNegativeItem(arr, SIZE, SIZE - 1, 0);
    cout << endl
    << "Sum negative item array = " << sumArr;

    return 0;
}
