#include <iostream>
#include <fstream>
#include <string>

using namespace std;

int main()
{
    ifstream inputData("data/day1input.txt");
    if (!inputData.is_open()) {
        cerr << "Unable to open file\n";
        return 1;
    }

    int maxCal = 0;
    
    string line;
    int currCal = 0;
    while (getline(inputData, line)) {
        if (line.size() == 0) {
            maxCal = max(maxCal, currCal);
            currCal = 0;
        } else {
            currCal += stoi(line);
        }
    }

    inputData.close();
    cout << "Maximum calories: " << maxCal<< endl;
    return maxCal;
}