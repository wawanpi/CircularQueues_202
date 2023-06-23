#include<iostream>
using namespace std;

class Queuse {
	int FRONT, REARE, max = 5;
	int queue_array(5);

public:
	Queuse() {
		FRONT = -1;
		REARE = -1;
	}

	void insert() {
		int num;
		cout << "Enter a number: ";
		cin >> num;
		cout << endl;

		// cek apakah antrian penuh
		if ((FRONT == 0 && REARE == max - 1)) || (FRONT == REARE + 1)) {
			cout << "\nQueue overflow\n";
			return;
		}
		// cek apakah antrian kosong

	}
};
