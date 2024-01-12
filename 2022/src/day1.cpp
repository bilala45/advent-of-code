#include <iostream>
#include <fstream>
#include <string>
#include <queue>

using namespace std;

int main()
{
    ifstream inputData("data/day1input.txt");
    if (!inputData.is_open()) {
        cerr << "Unable to open file\n";
        return 1;
    }

    priority_queue<int> pq;

    string line;
    int currCal = 0;
    while (getline(inputData, line)) {
        if (line.size() == 0) {
            pq.push(currCal);
            currCal = 0;
        } else {
            currCal += stoi(line);
        }
    }

    int maxCal = pq.top();
    int top3Cal = 0;
    for (int i = 0 ; i < 3 ; i++) {
        top3Cal += pq.top();
        pq.pop();
    }

    inputData.close();
    cout << "Most calories: " << maxCal << endl;
    cout << "Top 3 most calories: " << top3Cal << endl;
    return 0;
}