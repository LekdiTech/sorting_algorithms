#include "sort.h"
/**
 *change_position - function that changes the position of the numbers
 *@array: array
 *@number1: first number
 *@number2: second number
 *@size: size of the array
 **/
void change_position(int *array, int *number1, int *number2, size_t size)
{
	int exchange_position = *number1;

	*number1 = *number2;
	*number2 = exchange_position;
	print_array(array, size);
}
