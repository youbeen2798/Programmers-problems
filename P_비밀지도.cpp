#include <string>
#include <vector>
#include <iostream>

using namespace std;

string tenConvertTwo(int num) { //9
    string st;
    int result = 0;
    for (int i = 1; num > 0; i *= 10) {
        int binary = num % 2; //1 0 0 1
        st.push_back(binary + '0');
        num /= 2; //4
    }
    return st;
}

vector<string> solution(int n, vector<int> arr1, vector<int> arr2) {

    vector <string> answer(n);

    for (int i = 0; i < n; i++) {
        string k = tenConvertTwo(arr1[i]);
        string t = tenConvertTwo(arr2[i]);

        while (k.size() < n) {
            k.push_back('0');
        }
        while (t.size() < n) {
            t.push_back('0');
        }

        for (int j = n - 1; j >= 0; j--) {
            if (k[j] == '0' && t[j] == '0') {
                answer[i].push_back(' ');
            }
            else {
                answer[i].push_back('#');
            }
        }
    }

    return answer;
}