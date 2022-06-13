#include <iostream>
#include <algorithm>
#include <string>
#include <vector>

using namespace std;

string solution(string new_id) {

    for (int i = 0; i < new_id.size(); i++) {
        if ('A' <= new_id[i] && new_id[i] <= 'Z') {
            new_id[i] += 32;
        }
    }

    for (int i = 0; i < new_id.size(); i++) {

        int c = new_id[i] - '0';
        if (0 <= c && c <= 9) {
            continue;
        }
        if (!('a' <= new_id[i] && new_id[i] <= 'z') && !('A' <= new_id[i] && new_id[i] <= 'Z') &&
            !(new_id[i] == '-') && !(new_id[i] == '.') && !(new_id[i] == '_')) {
            new_id.erase(new_id.begin() + i);
            i--;
        }
    }


    for (int i = 0; i < new_id.size(); i++) {
        if (new_id[i] == '.' && new_id[i + 1] == '.') {
            new_id.erase(new_id.begin() + i + 1);
            i--;
        }
    }


    if (new_id[0] == '.') {
        new_id.erase(new_id.begin() + 0);
    }

    if (new_id.size() >= 1) {
        if (new_id[new_id.size() - 1] == '.') {
            new_id.erase(new_id.begin() + new_id.size() - 1);
        }
    }
    

    if(new_id.size() == 0){
        new_id = 'a';
    }


    if (new_id.size() >= 16) {
        int m = new_id.size() - 16;
        for (int i = 0; i <= m; i++) {
            new_id.erase(new_id.begin() + 15);
        }
    }


    if (new_id.size() >= 1) {
        if (new_id[new_id.size() - 1] == '.') {
            new_id.erase(new_id.begin() + new_id.size() - 1);
        }
    }

    
    if (new_id.size() <= 2) {
        while (new_id.size() < 3) {
            new_id.push_back(new_id[new_id.size() - 1]);
        }
    }
    return new_id;
    
}
