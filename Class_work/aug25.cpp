#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
#include <cctype> // for tolower

using namespace std;

// Function to perform case-insensitive string comparison
bool caseInsensitiveStringCompare(const string& str1, const string& str2) {
    return strcasecmp(str1.c_str(), str2.c_str()) < 0;
}

int main() {
    int size;
    cout << "Enter the size of the array: ";
    cin >> size;

    if (size <= 0) {
        cout << "Size of the array should be a positive integer." << endl;
        return 1;
    }

    vector<string> strings;
    string input;

    cout << "Enter the strings:" << endl;
    for (int i = 0; i < size; ++i) {
        cin >> input;
        if (input.length() > 100) {
            cout << "Each string should not exceed 100 characters." << endl;
            return 1;
        }
        strings.push_back(input);
    }

    // Sort and remove duplicates using case-insensitive comparison
    sort(strings.begin(), strings.end(), caseInsensitiveStringCompare);
    strings.erase(unique(strings.begin(), strings.end()), strings.end());

    cout << "Updated array:";
    for (const string& str : strings) {
        cout << " " << str;
    }
    cout << endl;

    return 0;
}
