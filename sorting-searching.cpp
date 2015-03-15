// Sorting algorithms v.1
// Arad Reed

#include <iostream>
#include <ctime>

using namespace std;

int* bubbleSort(int array[], int size);
int* insertionSort(int array[], int size);
int* selectionSort(int array[], int size);
int* mergeSort(int array[], int size);
int* quickSort(int array[], int size);
int* bogoSort(int array[], int size);
void printArr(int sorted[], int size);

int main() {
	int num_elements = 100000;
	int array[num_elements];
	
	srand(time(NULL));
	
	for (int i = 0; i < num_elements; i++) {
		array[i] = rand() % 100 + 1;
	}
	
	int size = sizeof(array)/sizeof(array[0]);
	
	clock_t begin = clock();
	
	int* sorted = bubbleSort(array, size);
	
	clock_t end = clock();
	double seconds = double(end - begin) / CLOCKS_PER_SEC;
	printArr(sorted, size);
	cout << "Time: " << seconds << endl;
	
}

int* bubbleSort(int array[], int size) {
	// Recursive Bubble sort
	int swaps = 0;
	
	for (int i = 0; i < size - 1; i++) {
		if (array[i] > array[i+1]) {
			int temp = array[i];
			array[i] = array[i+1];
			array[i+1] = temp;
			swaps++;
		}
		
	}
	
	if (swaps != 0)
		return bubbleSort(array, size - 1);
	else
		return array;
}

int* insertionSort(int array[], int size) {
	for (int i = 1; i < size; i++) {
		int element = array[i];
		
		for (int j = i; array[j-1] > element; j--) {
			array[j] = array[j-1];
			array[j-1] = element;
		}
	}
	
	return array;
}

int* selectionSort(int array[], int size) {
	
	for (int i = 0; i < size; i++) {
		int minIndex = i;
		
		for (int j = i + 1; j < size; j++) {
			if (array[j] < array[i])
				minIndex = j;
		}
		
		if (minIndex != i) {
			int temp = array[i];
			array[i] = array[minIndex];
			array[minIndex] = temp;
		}
	}
	
	return array;
}

int* mergeSort(int array[], int size) {
	return array;
}

int* quickSort(int array[], int size) {
	return array;
}

int* bogoSort(int array[], int size) {
	return array;
}

void linearSearch(int array[], int size) {
	
}

void binarySearch(int array[], int size) {
	
}

void printArr(int sorted[], int size) {
	for (int i = 0; i < size; i++)
		cout << sorted[i] << endl;
}