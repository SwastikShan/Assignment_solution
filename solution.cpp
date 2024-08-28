#include <iostream>
#include <fstream>  // Include for file handling
#include <vector>
#include <string>
#include <algorithm>
#include <unordered_map>
#include <chrono>   // Include the chrono library

using namespace std;
using namespace std::chrono;  // For convenience

int main() {
    // Start the clock
    auto start = high_resolution_clock::now();

    ifstream inputFile("input.txt");  // Open the input file

    if (!inputFile.is_open()) {
        cerr << "Error: Could not open the file!" << endl;
        return 1;
    }

    vector<string> str;
    string line;

    // Read each line (string) from the file and add it to the vector
    while (getline(inputFile, line)) {
        str.push_back(line);
    }

    inputFile.close();  // Close the file after reading

    // Sort strings by length
    sort(str.begin(), str.end(), [](const string &a, const string &b) {
        return a.size() < b.size();
    });

    unordered_map<string, int> map;

    for (const auto &s : str) {
        map[s]++;
    }

    int count = 0;
    int n = str.size();  // Get the number of strings dynamically
    for (int i = n - 1; i >= 0; --i) {
        string sb;
        int c = 0;
        const string &word = str[i];

        for (int j = word.size() - 1; j >= 0; --j) {
            sb.insert(sb.begin(), word[j]);
            if (map.find(sb) != map.end()) {
                if (sb == word) continue;
                sb.clear();
                c = 0;
            } else {
                c++;
            }
        }

        if (c == 0) {
            count++;
            if (count == 1) {
                cout << "Longest Compound Word: " << word << endl;
            } else if (count == 2) {
                cout << "Second Longest Compound Word: " << word << endl;
            }
        }

        if (count == 2) {
            break;
        }
    }

    // Stop the clock
    auto end = high_resolution_clock::now();
    auto duration = duration_cast<milliseconds>(end - start);

    // Print the execution time
    cout << "Execution Time: " << duration.count() << " ms" << endl;

    return 0;
}
