#include <vector>
using namespace std;

// Time complexity: O(n^2) ; Space Complexity: O(1)
vector<int> twoNumberSum(vector<int> array, int targetSum) {
  for(int i = 0; i < array.size(); i++) {
		int firstNum = array[i];
		for(int j = i + 1; j < array.size(); j++) {
			int secondNum = array[j];
			if(firstNum + secondNum == targetSum) {
				return vector<int>{firstNum, secondNum};
			}
		}
	}
  return {};
}
