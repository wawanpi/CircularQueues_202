#include<iostream>
using namespace std;

class Queuse {
	int FRONT, REAR, n = 5;
	int queue_array[5];

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
		else {
			// jika REAR berada di posisi terakhir array, kembali ke awal array
			if (REAR == n - 1)
				REAR = 0;
			else
				REAR = REAR + 1;
		}
		queue_array[REAR] = num;
	}
	void remove() {
		//cek apakah antrian kosong
		if (FRONT == -1) {
			cout << "Queue underflow/n";
			return;
		}
		cout << "\nThe element deleted from the queuw isi :" << queue_array[FRONT] << "\n";

	}
};
