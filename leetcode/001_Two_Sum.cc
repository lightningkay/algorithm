#include <iostream>
#include <map>
#include <vector>
#include <string>
#include <sstream>
#include <algorithm>

using namespace std;

class SolutionA {
public:
  vector<int> twoSum(vector<int> &nums, int target) {
    vector<int> ans;
    for (int i = 0; i != nums.size(); ++i) {
      for (int j = i + 1; j != nums.size(); ++j)
        if (target - nums[i] == nums[j]) {
          ans.push_back(i);
          ans.push_back(j);
          return ans;
        }
    }
    return ans;
  }
};

class SolutionB {
public:
  vector<int> twoSum(vector<int> &nums, int target) {
    vector<int> ans;
    map<int, int> num_index;
    for (int i = 0; i != nums.size(); ++i) {
      int componet = target - nums[i];
      if (num_index.count(componet)) {
        ans.push_back(num_index[componet]);
        ans.push_back(i);
        return ans;
      }
      num_index[nums[i]] = i;
    }
    return ans;
  }
};

void trimLeftTrailingSpaces(string &input) {
  input.erase(input.begin(), find_if(input.begin(), input.end(),
                                     [](int ch) { return !isspace(ch); }));
}

void trimRightTrailingSpaces(string &input) {
  input.erase(
      find_if(input.rbegin(), input.rend(), [](int ch) { return !isspace(ch); })
          .base(),
      input.end());
}

vector<int> stringToIntegerVector(string input) {
  vector<int> output;
  trimLeftTrailingSpaces(input);
  trimRightTrailingSpaces(input);
  input = input.substr(1, input.length() - 2);
  stringstream ss;
  ss.str(input);
  string item;
  char delim = ',';
  while (getline(ss, item, delim)) {
    output.push_back(stoi(item));
  }
  return output;
}

int stringToInteger(string input) { return stoi(input); }

string integerVectorToString(vector<int> list, int length = -1) {
  if (length == -1) {
    length = list.size();
  }

  if (length == 0) {
    return "[]";
  }

  string result;
  for (int index = 0; index < length; index++) {
    int number = list[index];
    result += to_string(number) + ", ";
  }
  return "[" + result.substr(0, result.length() - 2) + "]";
}

int main() {
  string line;
  while (getline(cin, line)) {
    vector<int> nums = stringToIntegerVector(line);
    getline(cin, line);
    int target = stringToInteger(line);
    // Solution A
    vector<int> retA = SolutionA().twoSum(nums, target);
    string outA = integerVectorToString(retA);
    cout << outA << endl;
    // Solution B
    vector<int> retB = SolutionB().twoSum(nums, target);
    string outB = integerVectorToString(retB);
    cout << outB << endl;
  }
  return 0;
}
