#include <iostream> 
#include <string> 
using namespace std;

int main()
{
	int i;
	double C;
	C = 0;
	for (i = 0; i < 1000000; i++)
		if ((i - i % 100000) / 100000 + (i % 100000 - i % 10000) / 10000 + (i % 10000 - i % 1000) / 1000 == i % 10 + (i % 100 - i % 10) / 10 + (i % 1000 - i % 100) / 100)
			C = C + 1;
	setlocale(LC_ALL, "Russian");
	cout << "Количество счастливых билетов " << C;

	system("pause");
	return 0;
}