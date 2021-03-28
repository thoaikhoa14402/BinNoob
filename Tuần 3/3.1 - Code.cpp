1) Viết chương trình tính UCLN, BCNN 2 số nguyên a và b
#include<iostream>

using namespace std;

int GCD(int a, int b) {
	int min_val = a < b ? a : b;
	for (int i = min_val; i >= 1; i--) {
		if (a % i == 0 && b % i == 0) return i;
	}
}

int LCM(int a, int b) {
	return a * b / GCD(a, b);
}
int main() {
	int a, b;
	cout << "Enter a: ";
	cin >> a;
	cout << "Enter b: ";
	cin >> b;
	cout << "The greatest common divisor: " << GCD(a, b) << endl;
	cout << "The least common multiple: " << LCM(a, b);
	return 0;
}

2) Viết ct nhập n số nguyên, tìm số lớn nhất, nhỏ nhất.// ko sử dụng mảng
#include<iostream>

using namespace std;

int MAX(int n) {
	int a;
	int max = INT_MIN;
	for (int i = 1; i <= n; i++) {
		cout << "Number " << i << ": ";
		cin >> a;
		if (a > max) max = a;
	}
	return max;
}
int main() {
	int n = 0;
	do {
		system("cls");
		cout << "Enter n: ";
		cin >> n;
		if (n < 0) {
			cout << "Invalid number";
			system("pause");
		}
		else {
			cout << "The greatest number is: " << MAX(n);
		}
	} while (n < 0);
	return 0;
}

3) Viết hàm nhập vào điểm xuất ra học lực
void assessing(int diem)
{
	if (diem < 0 || diem > 10) cout << "Diem khong hop le, khong the danh gia";
	else if (diem >= 8.0) cout << "Hoc luc gioi";
	else if (6.5 <= diem && diem < 8.0) cout << "Hoc luc kha";
	else if (5.0 <= diem && diem < 6.5) cout << "Hoc luc trung binh";
	else if (3.5 <= diem && diem < 5.0) cout << "Hoc luc yeu";
	else cout << "Hoc luc kem";
}

4) Viết ct hoán vị 2 số a b
#include<iostream>

using namespace std;

void hoanvi(int& a, int& b) {
	int temp = a;
	a = b;
	b = temp;
}
int main() {
	int a, b;
	cout << "Enter a: ";
	cin >> a;
	cout << "Enter b: ";
	cin >> b;
	hoanvi(a, b);
	cout << "AFTER SWAPPING" << endl;
	cout << "a: " << a << endl;
	cout << "b: " << b;
	return 0;
}

5) Viết ct nhập vào tuổi xuất ra năm sinh
#include<iostream>

using namespace std;

int age(int n) {
	return 2021 - n;
}
int main() {
	int n;
	do {
		system("cls");
		cout << "Enter age: ";
		cin >> n;
		if (n < 0) {
			cout << "Invalid age";
			system("pause");
		}
	} while (n < 0);
	cout << "The year you were born is: " << age(n);
	return 0;
}