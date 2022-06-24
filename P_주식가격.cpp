#include <iostream>
#include <vector>
#include <string>
using namespace std;


vector<int> solution(vector<int> prices) {
	vector<int> answer;

	for (int i = 0; i < prices.size(); i++) {
//		cout << "hello" << "\n";
		int cnt = 0;
		bool low = false;
		for (int j = i; j < prices.size(); j++) {
			if (prices[j] >= prices[i]) {
				cnt++;
			}
			else {
				low = true;
				break;
			}
		}
		if (low) {
			answer.push_back(cnt);
		}
		else {
			answer.push_back(cnt-1);
		}
	}
	return answer;
}
