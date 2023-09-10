#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

void heapify(vector<int>& arr, int i) {
	if (i > arr.size()) return;

	int largest = i;
	int leftChild = 2 * i;
	int rightChild = 2 * i + 1;

	if (leftChild < arr.size() && arr[leftChild] > arr[largest]) largest = leftChild;
	if (rightChild < arr.size() && arr[rightChild] > arr[largest]) largest = rightChild;

	if (largest != i) {
		heapify(arr, largest);
	}
}



int main() {
  if (1) {
    cout << "Hello, World!\n";

  }
}
