using namespace std;

// Time Complexity: O(n) , Space Complexity: O(1)
bool isValidSubsequence(vector<int> array, vector<int> sequence) {
  int position = 0;
	for(int i = 0; i < array.size(); i++){
		if(array[i] == sequence[position]){
			position++;
		}
	}
  return position == sequence.size();
}
