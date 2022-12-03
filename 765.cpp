using namespace std;
#include <iostream>
struct shk {
	char name;
	int kll;
	char kllb;
	float sroc;
};

int main()
{

	shk a;
	a.name = 'ABBA';
	a.kll = 4;
	a.kllb = 'A';
	a.sroc = 3.23;
	shk b;
	b.name = 'ASA';
	b.kll = 8;
	b.kllb = 'B';
	b.sroc = 4.32;
	shk c;
	c.name = 'UWU';
	c.kll = 9;
	c.kllb = 'A';
	c.sroc = 2.53;
	if (a.sroc > b.sroc && a.sroc > c.sroc) {
		cout << a.sroc;
	}
	if (c.sroc > b.sroc && c.sroc > a.sroc) {
		cout << c.sroc;
	}
	if (b.sroc > c.sroc && b.sroc > a.sroc) {
		cout << b.sroc;
	}
}