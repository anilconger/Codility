

#include <iostream>
using namespace std;
#include <vector>

int  solution(int N) {
	vector<int>binaryVector;
	vector <int>OnesVector;
	int copyOfN, copyofN2 = N;
	int counter = 0, counterDiff = 0;
	int max = 0;

	while (N != 0) {
		N = N / 2;
		counter++;
	}
	while (copyofN2 != 0) {
		copyOfN = copyofN2 % 2;
		copyofN2 = copyofN2 / 2;
		binaryVector.push_back(copyOfN);
	}
	for (int i = binaryVector.size() - 1; i >= 0; i--) {
		if (binaryVector[i] == 1)
			OnesVector.push_back(i);
	}
	if (OnesVector.size() == 0 || OnesVector.size() == 1 || OnesVector.size() == binaryVector.size()) {
		cout << "There is No Gap Length " << endl;
		return 0;
	}
	else {
		for (int j = 0; j < OnesVector.size(); j++) {
			if (j + 1 != OnesVector.size())
				counterDiff = (OnesVector[j] - OnesVector[j + 1] - 1);
			if (counterDiff > max)
				max = counterDiff;
		}
		cout << max;
	}
	return max;
}

int main() {
	solution(59);
	return 0;
}