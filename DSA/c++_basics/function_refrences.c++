//  functions name: swap, max, min, ceil, floor, round, isupper, islower
//                  toupper, tolower,isdigit, isspace, strcat, strcmp, strcpy
//                  reverse, sort, max_element, min_element
#include <bits/stdc++.h>
using namespace std;
// void increament(int &n)
// {
//     n++;
// }

// int ceil(int a, int b)
// {
//     return (a + b - 1) / b;
// }

// ******* we do not need to make swap func cause its built-in c++ **********

// void swap(int &a, int &b) // this cannot be done in c programe we use pointer there
// {
//     int temp = a;
//     a = b;
//     b = temp;
// }

int main()
{
    // int a, b;
    // cin >> a >> b;
    // cout << a << endl;
    // increament(a);
    // cout << a << endl;
    // swap(a, b);
    // cout << a << " " << b;

    // cout << max(a, b) << endl;  // return maximum
    // cout << min(a, b) << endl;  // return minimum
    // cout << ceil(a, b) << endl; // return upper round figure
    // cout << max({4, 9, 22, 6, 2, 7}) << endl;
    // cout << min({4, 9, 22, 6, 2, 7}) << endl;

    // ***********  array reverse with function *******************

    // int arr[5] = {1, 2, 3, 4, 5};
    // reverse(arr + 1, arr + 4); // array er moddhe jei part ta reverse korbo
    //                            // oitar starting address and ending address+1 debo
    // for (int i = 0; i < 5; i++)
    // {
    //     cout << arr[i] << " ";
    // }

    // ***************** sorting with function *****************

    // int a[10] = {7, 5, 1, 4, 9, 22, 17, -3, 0, 11};
    // sort(a, a + 10); // starting ar ending+1 address
    // for (int i = 0; i < 10; i++)
    // {
    //     cout << a[i] << " ";
    // }

    // *************** max and min element in array ********************

    int a[10] = {7, 5, 1, 4, 9, 22, 17, -3, 0, 11};
    int max = *max_element(a, a + 10);
    int maxidx = max_element(a, a + 10) - a;
    int min = *min_element(a, a + 10);
    int minidx = min_element(a, a + 10) - a;
    cout << max << " -> " << maxidx << endl
         << min << " -> " << minidx << endl;

    return 0;
}