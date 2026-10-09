/*
    vector<int>
    push_back()
    size()
    pop_back()
    begin()
    end()
    range based loop
    vector initialize
    vector with size and without size
    how to use in sort or reverse
    vectors in vector
    different datatypes
*/

#include <bits/stdc++.h>
using namespace std;
int main()
{
    // vector<int> vec; // vector declaration
    // while (1)
    // {
    //     int x;
    //     cin >> x;
    //     vec.push_back(x); // vector push back(adding another element to back)
    //     if (x == -1)
    //         break;
    // }
    // int n = vec.size();  // vector size

    // // ********** reverse ***************

    // for (int i = n - 1; i >= 0; i--)
    // {
    //     cout << vec[i] << " ";
    // }
    // cout << endl;

    // **************** if we know the size ****************

    // int n;
    // cin >> n;
    // vector<int> vec(n);
    // for (int i = 0; i < n; i++)
    // {
    //     cin >> vec[i];
    // }
    // vec.pop_back(); // vector pop back(subtracting an element from back)
    // for (int i = 0; i < vec.size(); i++)
    // {
    //     cout << vec[i] << " ";
    // }

    // ************** initializing vectors value ******************

    // vector<int> vec(5); // array er moto gurbage na rekhe 0 rakhe
    // int x;
    // cin >> x;
    // vector<int> vec(5, x); // x diye initialize all cell
    // for (int i = 0; i < 5; i++)
    // {
    //     cout << vec[i] << " ";
    // }

    // *************** range based loop *******************

    // vector<int> vec(4, 100);
    // for (auto x : vec)
    // {
    //     cout << x << endl;
    // }

    // *********************sorting********************

    // vector<int> vec;
    // int n;
    // cin >> n;
    // for (int i = 0; i < n; i++)
    // {
    //     int x;
    //     cin >> x;
    //     vec.push_back(x);
    // }
    // sort(vec.begin(), vec.end());
    // for (auto k : vec)
    // {
    //     cout << k << " ";
    // }

    // **************** sorting or reversing a part **************

    // ******* In array ********
    /*
    int arr[9] = {9, 11, 7, 1, 5, 14, -3, 2, -88};
    sort(arr + 3, arr + 8);
    for (int i = 0; i < 9; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
    */

    // ********* In vector ********
    // vector<int> vec = {9, 11, 7, 1, 5, 14, -3, 2, -88};
    // sort(vec.begin() + 3, vec.begin() + 8);
    //  reverse(vec.begin() + 3, vec.begin() + 8);
    //  for (auto x : vec)
    //  {
    //      cout << x << " ";
    //  }
    // cout << vec[vec.size() - 1] << endl
    //      << vec.back();

    // ************** vectors in vector **************

    // vector<vector<int>> vec = {{1, 4, -2}, {7, 2, 0, 8}, {55, 7, -89}};

    // ********* print method 1 ***************

    // for (auto v : vec)
    // {
    //     for (auto x : v)
    //     {
    //         cout << x << " ";
    //     }
    //     cout << endl;
    // }

    // **************print method 2 ************

    // for (int i = 0; i < vec.size(); i++)
    // {
    //     for (int j = 0; j < vec[i].size(); j++)
    //     {
    //         cout << vec[i][j] << " ";
    //     }
    //     cout << endl;
    // }

    // ************** other datatypes **************

    // vector<double> vec = {3, 2.8, 9, 7.99};
    // for (auto x : vec)
    // {
    //     cout << x << " ";
    // }

    // ***************** 2d vector user input ********************

    // vector<vector<int>> vec;
    // int n;
    // cin >> n;
    // for (int i = 0; i < n; i++)
    // {
    //     vector<int> v;
    //     int m;
    //     cin >> m;
    //     for (int j = 0; j < m; j++)
    //     {
    //         int x;
    //         cin >> x;
    //         v.push_back(x);
    //     }
    //     vec.push_back(v);
    // }

    // cout << "size of vec= " << vec.size() << endl;
    // for (auto v : vec)
    // {
    //     cout << "size of v= " << v.size() << endl;
    //     for (auto x : v)
    //     {
    //         cout << x << " ";
    //     }
    //     cout << endl;
    // }

    // **************initializing 2d vector********************

    vector<vector<int>> vec(3, vector<int>(4, -1));

    cout << "size of vec= " << vec.size() << endl;
    for (auto v : vec)
    {
        cout << "size of v= " << v.size() << endl;
        for (auto x : v)
        {
            cout << x << " ";
        }
        cout << endl;
    }
    return 0;
}