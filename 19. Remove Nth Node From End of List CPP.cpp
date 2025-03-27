#include <iostream>
#include <vector>
#include "Output.h"

using namespace std;

int main(){
	setlocale(LC_ALL, "RUS");

	Output output;

	int example = 0;
	int n;
	vector<int> head_data, expected_data;

	example++;
	n = 2;
	head_data = { 1, 2, 3, 4, 5 };
	expected_data = { 1, 2, 3, 5 };
	output.set_output_data(example, n, head_data, expected_data);
	output.print_solution();

	example++;
	n = 1;
	head_data = { 1 };
	expected_data = {};
	output.set_output_data(example, n, head_data, expected_data);
	output.print_solution();

	example++;
	n = 1;
	head_data = { 1, 2 };
	expected_data = { 1 };
	output.set_output_data(example, n, head_data, expected_data);
	output.print_solution();
}
