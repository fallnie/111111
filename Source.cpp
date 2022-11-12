#include <iostream>
#include <ctime>
using namespace std;
int main() {
	setlocale(LC_ALL, "rus");
	//1
	/*int mas[12];
	srand(time(nullptr));
	for (int i = 0; i < 12; i++) {
		mas[i] = rand() % 10 - 5;
		cout << mas[i] << ' ';
	}
	cout << endl;
	int p = 0;
	for (int i = 0; i < 12; i++) {
		p = mas[i] + p;
	}
	cout << p;*/
	//2
	/*int mas[13];
	srand(time(nullptr));
	for (int i = 0; i < 13; i++) {
		mas[i] = rand() % 24 - 12;
		cout << mas[i] << ' ';
	}
	cout << endl;
	int p = 1;
	for (int i = 0; i < 13; i++) {
		if (mas[i] < 0) {
			p = mas[i] * p;
		}
	}
	cout << p;*/
	//3
	/*int mas[11];
	srand(time(nullptr));
	for (int i = 0; i < 11; i++) {
		mas[i] = rand() % 20-0;
		cout << mas[i] << ' ';
	}
	cout << endl;
	for (int i = 0; i < 11; i++) {
		mas[i] = rand() % 20 - 0;
		
	}
	cout << endl;
	int p = 0;
	for (int i = 0; i < 11; i++) {
		if (mas[i] %3==0||mas[i]%7==0||mas[i]%5==0) {
			p++;
		}
	}
	cout << p;*/
	//4
	int mas[15];
	srand(time(nullptr));
	for (int i = 0; i < 15; i++) {
		mas[i] = rand() % 25 - 0;
		cout << mas[i] << ' ';
	}
	cout << endl;
	int p = 0;
	for (int i = 0; i < 15; i++) {
		if (mas[i] %2!=0) {
			p = mas[i] + p;
		}
	}
	cout << p;
}