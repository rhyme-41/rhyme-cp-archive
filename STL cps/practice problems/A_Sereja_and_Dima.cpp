#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    vector<int> cards;
    for (int i = 0, x; i < n; i++)
    {
        cin >> x;
        cards.push_back(x);
    }
    int sereja = 0, dima = 0;
    int firstidx = 0;
    int lastidx = n - 1;
    int move = 1; // move= 1 means sereja's turn
    while (lastidx - firstidx + 1 != 0)
    {
        if (move)
        {
            if (cards[firstidx] > cards[lastidx])
            {
                sereja += cards[firstidx];
                firstidx++;
            }
            else
            {
                sereja += cards[lastidx];
                lastidx--;
            }
            move = 0;
        }
        else
        {
            if (cards[firstidx] > cards[lastidx])
            {
                dima += cards[firstidx];
                firstidx++;
            }
            else
            {
                dima += cards[lastidx];
                lastidx--;
            }
            move = 1;
        }
    }
    cout << sereja << " " << dima;
    return 0;
}