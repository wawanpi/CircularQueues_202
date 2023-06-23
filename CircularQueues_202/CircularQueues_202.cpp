#include<iostream>
using namespace std;

class Queuse {
	int FRONT, REAR, n = 5;
	int queue_array(5);

public:
	Queuse() {
		FRONT = -1;
		REAR = -1;
	}

	void insert() {
		int num;
		cout << "Enter a number: ";
		cin >> num;
		cout << endl;

		// cek apakah antrian penuh
		if ((FRONT == 0 && REAR == n - 1)) || (FRONT == REAR + 1)) {
			cout << "\nQueue overflow\n";
			return;
		}
		// cek apakah antrian kosong
		if (FRONT == -1) {
			FRONT = 0;
			REAR = 0;
		}
		queue_array[REAR] = num;
	}
	void 
};
