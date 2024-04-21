#include <iostream>
#include <vector>
using namespace std;
int main()
{
	int num;
	vector<int> nums;
	cin >> num;
	while (num > 0){
		nums.push_back(num % 2);
		num = num / 2;
	};
	for(int i = nums.size()-1;i>=0;i--)
	{
		cout << nums[i];
	}
	return 0;
}

