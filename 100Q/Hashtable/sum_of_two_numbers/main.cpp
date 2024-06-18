#include "header.h"

int main() 
{
	Solution solution;
	int num[] = { 2,7,11,15 };
	int target = 9;

	// variable type transfor£ºarray ==> vector
	int arraySize = sizeof(num) / sizeof(int);
	vector<int> nums(num, num + arraySize);			// "num" is the address of the first element
													// "num + arraySize" is the address of the next to the end element

	cout << solution.twoSum(nums, target).at(0);
	cout << ",";
	cout << solution.twoSum(nums, target).at(1);

	return 0;
}