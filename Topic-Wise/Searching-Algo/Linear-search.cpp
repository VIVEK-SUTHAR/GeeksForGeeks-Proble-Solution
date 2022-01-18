#include <bits/stdc++.h>
using namespace std;

int main(void)
{
    int size;
    cin >> size;
    int ar[size];
    printf("Enter %d Elements", size);
    for (int i = 0; i < size; i++)
        cin >> ar[i];
    cout << "Enter key to Find" << endl;
    int key;
    cin >> key;
    bool isPresent = false;
    for (int i = 0; i < size; i++)
    {
        if (ar[i] == key)
            isPresent = true;
        else
            isPresent = false;
    }
    if (isPresent)
        cout << "Element found  :)" << endl;
    else
        printf("Not found :(");

    return 0;
}