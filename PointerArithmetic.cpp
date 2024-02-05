#include <iostream>

using namespace std;

void increment_all(int* start, int* stop)
{
	int* current = start;
	while (current != stop) {
		++(*current);	//increment value pointed
		++current;		//increment pointer
	}
}

void print(const int* start, const int* stop)
{
	const int* current = start;
	while (current != stop) {
		cout << *current << ", ";
		++current;		//increment pointer
	}
	cout << endl;
}

int main()
{
	int numbers[] = { 1, 2, 3 };

	print(numbers, numbers + 3);
	increment_all(numbers, numbers + 3);
	print(numbers, numbers + 3);
	system("pause");
	return 0;
}
