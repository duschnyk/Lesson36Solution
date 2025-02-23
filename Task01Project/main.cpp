#include "util.h"
#include "algorithm.h"
#define SIZE 5

int main() {
	int array[SIZE]{};

	/*cout << "Before array: " << convert(array, SIZE) << endl;
	*/
	
	init(array, SIZE, -10, 10);
	cout << "Array: " << convert(array, SIZE) << endl;

	int max = get_max(array, SIZE);
	cout << "Max value of array = " << max << endl;

	int min = get_min(array, SIZE);
	cout << "Min value of array = " << min << endl;

	double arithmetical_avg = calc_arithm_avg(array, SIZE);
	cout << "Avg arithmetical value of array = " << arithmetical_avg << endl;

	double geo_avg = calc_geo_avg(array, SIZE);
	cout << "Avg geo value of array = " << geo_avg << endl;


	return 0;
}