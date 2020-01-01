// TaskDemo1.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

/*This is a demo task.

Write a function :

int solution(vector<int>& A);

that, given an array A of N integers, returns the smallest positive integer(greater than 0) that does not occur in A.

For example, given A = [1, 3, 6, 4, 1, 2], the function should return 5.

Given A = [1, 2, 3], the function should return 4.

Given A = [−1, −3], the function should return 1.

Write an efficient algorithm for the following assumptions :

N is an integer within the range[1..100, 000];
each element of array A is an integer within the range[−1, 000, 000..1, 000, 000].
*/

#include <iostream>
#include <vector>

using namespace std;

int solution(vector<int>& );

int main()
{
	int n;
	int s; 

	

	cout << "Enter a range of integer values: " << endl;
	cin >> n;
	vector<int> userA(n);

	s = solution(userA);

	cout << "The missing index is: " << s << endl;

	return 0;
}

int solution(vector<int>& A) {

	A.begin();
	A.end();
	int missingIndex = 0;

	for (int i = 0; i < A.size(); i++)
	{
		if (i != A[i] - 1)
		{
			
			missingIndex = A.end() - A.begin();
		}

	}
	return missingIndex;
}
