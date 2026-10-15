#include <bits/stdc++.h>
using namespace std;
int main()
{
    // map<int, string> student;
    // student[2504084] = "Rhyme";
    // student[2504085] = "MD Mahim";
    // student[2504086] = "Shuvo";
    // // cout << student[2504085] << endl;
    // cout<<student.size()<<endl;
    // for (auto data : student)
    // {
    //     cout << data.first << " " << data.second << endl;
    // }

    // **********************************************

    map<int, vector<string>> person;
    person[2504085] = {"MD Mahim"};
    person[2504084] = {"Rhyme", "Dhaka"};
    person[2504086] = {"Shuvo", "Rajbari", "America"};
    person[2504087] = {"Mubdee"};
    person[2504085].push_back("Khulna");

    person.erase(2504085);
    for (auto data : person)
    {
        cout << data.first << " ";
        for (auto x : data.second)
        {
            cout << x << " ";
        }
        cout << endl;
    }
    // output is always sorted by key in ascending order

    // ************ kono key map er vitor ace ki na check ************
    if (person.count(2504086) == 1)
        cout << "exists" << endl;
    else
        cout << "do not exists" << endl;
    return 0;
}