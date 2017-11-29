#include <iostream>
#include <string>
using namespace std;

template <typename T> class Sample {
public:
	int size;
	T *arr;
	Sample(int s) {
		size = s;
		arr = new T[size];
	}
	void printArr() {
		int i;
		for (int i = 0; i < size ; i++) {
			cout << arr[i];
		}
	}
};
int main() {
	Sample<int> s(5);
	string input;
	//std::cout << "What type of data would you like to enter i/I for Integer, s/S for String? s";
	//getline (cin, input);
	//if (input.compare("s") || input.compare("S")) {
		//std::cout << " Enter four strings";
		//getline(cin, input);
	//}
	int i;
	for (int i = 0; i < 5; i++) {
		s.arr[i] = i;
	
	}
	s.printArr();
	getchar();
	return 0;

}