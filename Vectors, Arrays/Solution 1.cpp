#include <iostream>
#include <vector>

using namespace std;

void Display(const vector<int> &arr)
{
    for (int i = 0; i < arr.size(); i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}

vector<int> moveZerosEnd(vector<int> arr)
{
    int j = -1;
    int temp = 0;

    for (int i = 0; i < arr.size(); i++)
    {
        if (arr[i] == 0 && j == -1)
        {
            j = i;
        }
        else if (arr[i] != 0 && j != -1)
        {
            temp = arr[i];
            arr[i] = arr[j];
            arr[j] = temp;
            j++;
        }
    }

    return arr;
}

int main()
{
    vector<int> a = {1, 0, 0, 4, 5, 0, 7};

    cout << "Original array: " << endl;
    Display(a);

    vector<int> result = moveZerosEnd(a);

    cout << "Array after moving zeros to the end: " << endl;
    Display(result);

    return 0;
}
