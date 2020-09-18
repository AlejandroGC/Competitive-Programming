class BST {
public:
  int value;
  BST *left;
  BST *right;

  BST(int val);
  BST &insert(int val);
};

int findClosestValueInBst(BST *tree, int target);
int findClosestValueInBSTHelper(BST *tree, int target, int closest);

int findClosestValueInBST(BST *tree, int target) {
	return findClosestValueInBSTHelper(BST *tree, int target, int tree->value)
}

int findClosestValueInBSTHelper(BST *tree, int target, int closest){
	if(abs(target - closest) > abs(target - tree->value)){
		closest = tree->value;
	}
	
}



