#include <iostream>
int binarySearch(int array[], int n, int key)
{
    int s = 0;
    int l = n - 1;

    while (s <= l)
    {
        int mid = (s + l) / 2;
        if (array[mid] == key)
        {
            return mid;
        }
        else if (array[mid] > key)
        {
            l = mid - 1;
        }
        else
        {
            s = mid + 1;
        }
    }
    return -1;
}
int main()
{
    int n;
    std::cin >> n;

    int array[n];
    for (int i = 0; i < n; i++)
    {
        std::cin >> array[i];
    }

    int key;
    std::cin >> key;
    std::cout << binarySearch(array, n, key);
}