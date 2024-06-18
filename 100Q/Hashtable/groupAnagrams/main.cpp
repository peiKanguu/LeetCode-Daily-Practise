#include "groupAnagrams.h"

int main()
{
	vector<string> strs = { {"eat"}, {"tea"}, {"tan"},{"ate"}, {"nat"}, {"bat"} };

	Solution solution;
	solution.groupAnagrams(strs);
	for (const auto& outer : solution.groupAnagrams(strs)) {
		for (const auto& inner : outer) {
			cout << inner << " ";
		}
	}
	return 0;
}