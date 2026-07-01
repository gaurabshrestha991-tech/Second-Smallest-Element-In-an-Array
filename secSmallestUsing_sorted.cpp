#include <iostream>
#include <algorithm>
using namespace std;

int main ()
{
    int arr[100];
    int n, elements;


    cout << "Enter the size of array: ";
    cin >> n;


    cout << "Enetr array elements: ";
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }


    sort(arr ,arr + n);
    cout << "Sorted Array\n";
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " " ;
        
    }

    cout << endl;

    for(int i = 0; i < n - 1; i++)
    {
        if(arr[i] < arr[i+1]){
            cout << "Second Smallest Element: " << arr[i+1];
            break;
        }
    }
    return 0;
}
