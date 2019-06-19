#include <bits/stdc++.h>
#include <string.h>
using namespace std;
static string biggerIsGreater(string w)
{
    char new_str[w.length()];
    //An array to store the characters in the string
    for (int i = 0; i < w.length(); i++)
        new_str[i] = w[i];
    int size_of_new = sizeof(new_str) / sizeof(new_str[0]);
    int i = size_of_new - 1;
    while (i > 0 && new_str[i - 1] >= new_str[i])
        i--;
    //If we reach the beginning without getting a single character that's less than the last character of the sorted sequence
    //there is no possible permutation for the string
    if (i <= 0)
        return ("no answer");

    int j = size_of_new - 1;
    //Now we iterate forward until we get a character that's smaller than the last character in the sorted sequence
    while (new_str[j] <= new_str[i - 1])
        j--;

    char temp = new_str[i - 1];
    new_str[i - 1] = new_str[j];
    new_str[j] = temp;

    j = size_of_new - 1;

    while (i < j)
    {
        temp = new_str[i];
        new_str[i] = new_str[j];
        new_str[j] = temp;
        i++;
        j--;
    }
    //this is to return the resultant permutation as a string
    string new_s = "";
    for (i = 0; i < size_of_new; i++)
        new_s += new_str[i];
    return (new_s);
}
int main()
{
    int test_case;
    cin >> test_case;
    for (int i = 0; i < test_case; i++)
    {
        string s;
        cin >> s;
        cout<<(biggerIsGreater(s));
        cout<<"\n";
    }
    return (0);
}

