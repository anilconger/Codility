#include <iostream>
using namespace std;

int  solution(int N) {
	int value= 0;
	int value2 = 0;
	int copyOfN, copyofN2 = N;
	int counter=0;
	int max=0;
	
	while (N!=0) {
		N = N / 2;
		counter++;
	}
	int* pbinaryArray = new int[counter];
	while (copyofN2 != 0) {
		copyOfN = copyofN2 % 2;
		copyofN2 = copyofN2 / 2;
		pbinaryArray[value] = copyOfN;
		value++;
	}
	int* pOnesArray = new int[value2];
	for (int i = (counter-1); i>=0; i--) {
		if (pbinaryArray[i] == 1) {
			pOnesArray[value2] = i;
			value2++;
		}
	}
	if (value2 == 0 || value2 == 1) {
		cout << "There is No Gap Length";
	}
	
	else{
		for (int k = 0; k < value2; k++) {
		if (max < (pOnesArray[k] - pOnesArray[k + 1]-1)) 
			max = (pOnesArray[k] - pOnesArray[k + 1]-1);
		
	}
	cout << "Gap Length: "<<max;
	}
	return max;
}


int main() {

	solution(1041);
	return 0;
}