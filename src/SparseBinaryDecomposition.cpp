#include <iostream>
using namespace std;
#include <vector>
#include <bitset>

vector<int>vectorA;
int solution(int N) {
	bitset<32> binaryValue(N);
	vector<int>vectorA;

	for (int i = 0; i < binaryValue.size() - 1; i++) {
		if (binaryValue.test(i) == 1 && binaryValue.test(i) == binaryValue.test(i + 1)) {
			vectorA.push_back(i+1);
		}
	}
	for (int i = 0; i < vectorA.size(); i++) {
		cout << vectorA[i] << endl;
	}
	if (vectorA.size() == 0) {
		return 0;
	}
	else if (vectorA.size() == 1) {
		binaryValue[vectorA[0]] = 0;
		cout << (int)(binaryValue.to_ulong());
		return (int)(binaryValue.to_ulong());
	}
	else {
		for(int i =0; i<binaryValue.size()-1; i+=2){
			if(binaryValue[i + 1] ==1 && binaryValue[i] == binaryValue[i + 1]){
				binaryValue[i+1] = 0;
			}
			else {
				binaryValue[i+1] = 0;
			}
		}
		cout << binaryValue << endl;
		cout << (int)(binaryValue.to_ulong());
		return (int)(binaryValue.to_ulong());
	}
}
int main() {
	solution(1023);
	return 0;
}