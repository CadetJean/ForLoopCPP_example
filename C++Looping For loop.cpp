#include <iostream>
#include <vector>
using namespace std;

int main() {
	/* int i{0};
	 for(i=1; i<=5; ++i)
	 std::cout<<i;

	 for(;;)
	 std::cout<<"endless";*/
	cout << "count to 10" << endl;
	for (int i(1); i <= 10; ++i)
		cout << i << endl;
	cout << "increment by 3" << endl;
	for (int i(1); i <= 20; i += 3)
		cout << i << endl;
	cout << "count down" << endl;
	for (int i{ 10 }; i > 0; --i)
		cout << i << endl;

	cout << "count to 100 by 10" << endl;
	for (int i(10); i <= 100; i += 10) {
		cout << i << endl;
	}

	cout << "divisible by 15 with a remainder of zero" << endl;
	for (int i(10); i <= 100; i += 10) {
		if (i % 15 == 0)
			cout << i << endl;
	}

	cout << "adding: " << endl;
	for (int i(1), j(5); i <= 5; i++, ++j)
		cout << i << " + " << j << " = " << (i + j) << endl;

	cout << " jump to the next line on the 10th item";
	//(1)
	for (int i(1); i <= 100; i++) {
		cout << i;
		if (i % 10 == 0)
			cout << endl;
		else
			cout << " ";
	}

	cout << "other way to jump to the next line" << endl;
	//other way to re do (1)
	for (int i(1); i <= 100; i++) {
		cout << i;
		cout << ((i % 10 == 0) ? "\n" : " ");
	}
	cout << "the vector element" << endl;
	vector<int>nums{ 10,20,30,40,50 };
	//for(int i(0); i<nums.size(); ++i) //(1)
	for (unsigned i(0); i < nums.size(); ++i)
		// (1) is returning an unsigned integer meaning a number without + or - sign to solve switch int to unsigned
		cout << nums[i] << endl;
	cout << endl;
	return 0;
}