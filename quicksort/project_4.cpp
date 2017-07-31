#include<iostream>
#include<algorithm>

void quicksort(int array[], int left, int right) {
	int i = left;
	int j = right;
	int mid;
	mid =array[left + (right - left) / 2];

	while (left <= right) {
		while (array[left] < mid)
			left++;
		while (array[right] > mid)
			right--;
		if (left <= right)
			std::swap(array[left], array[right]);
		left++;
		right--;
	}
	if (left < j) {
		quicksort(array, left, j);
	}
	if (i < right) {
		quicksort(array, i, right);
	}
}
void printarray(int array[], int n) {
	for (int i = 0; i <= n; ++i)
		std::cout << array[i] << " ";
}
int main() {
	int array[] = {4,8,10,6,7,3,5};
	int n = 6;
	quicksort(array,0,6);
	printarray(array, n);




}