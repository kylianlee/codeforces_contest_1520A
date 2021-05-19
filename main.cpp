//
// Created by Kylian Lee on 2021/05/12.
//

#include <iostream>

using namespace std;

bool solution(int days, string tasks);

int alphbet[26];

int main() {
  int caseNum;
  cin >> caseNum;
  for(int i = 0; i < caseNum; i++){
    int days;
    string tasks;
    cin >> days >> tasks;
    bool isDistracted = solution(days, tasks);
    if(isDistracted)
      cout << "YES" << endl;
    else
      cout << "NO" << endl;
    fill_n(alphbet, 26, 0);
  }
  return 0;
}

bool solution(int days, string tasks){
  for(int i = 0; i < days; i++){
    if(alphbet[tasks[i] - 'A'] == 1) {
      if(tasks[i - 1] == tasks[i])
        continue;
      return false;
    }
    alphbet[tasks[i] - 'A'] = 1;
  }
  return true;
}
