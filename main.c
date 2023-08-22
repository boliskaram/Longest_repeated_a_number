#include <stdio.h>

void sort_arr(int* arr);
int LRN(int* arr);

void main(void) {

	int number;
	int arr[10] = { 1,5,9,4,9,9,5,6,5,9 };
	
	sort_arr(arr);

	number = LRN(arr);
	printf("LRN : %d", number);
}

void sort_arr(int* arr) {
	int temp;
	for (int i = 0; i < 9;i++) {
		for (int j = 0; j < 9 - i;j++) {
			if (arr[j] > arr[j + 1]) {
				temp = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = temp;
			}
		}
	}
}

int LRN(int* arr) {

	int lrn=0;
	int temp=1;
	int var=0;

	for (int i = 0; i < 9; i++) {
		if (arr[i] == arr[i + 1]) {
			if (temp > lrn) {
				lrn = temp;
				var = arr[i];
			}
			temp++;
		}
		else {
			temp = 1;
		}
	}
	return var;
}