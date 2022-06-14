#include <string>
#include <vector>
#include <iostream>
#include <algorithm>

using namespace std;

vector<int> solution(vector<int> array, vector<vector<int>> commands) {
    
    vector <int> answer;
    for (int i = 0; i < commands.size(); i++) {
        vector <int> v;
        int k = commands[i][0];
        int t = commands[i][1];
      
        for (int j = k - 1; j < t; j++) {
            cout << array[j];
            v.push_back(array[j]);
        }

        sort(v.begin(), v.end());
        answer.push_back(v[commands[i][2] - 1]);
    }
    
    return answer;
}

