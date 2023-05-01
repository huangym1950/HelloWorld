//#include <iostream>
//using namespace std;
//
///*
//	该代码中，bubbleSort函数接受一个整数数组和其大小作为参数，在每轮循环中比较相邻的两个元素，如果它们的顺序不正确，则交换它们的位置。
//	在每一轮结束时，检查是否发生交换，如果没有发生交换，则说明数组已经排好序，可以提前结束排序过程。最后，main函数定义了一个待排序的数组，并调用bubbleSort函数来对其进行排序。
//*/
//
//void bubbleSort(int arr[], int n) {
//	for (int i = 0; i < n - 1; ++i) {
//		bool swapped = false;
//		for (int j = 0; j < n - i - 1; ++j) {
//			if (arr[j] > arr[j + 1]) {
//				swap(arr[j], arr[j + 1]);
//				swapped = true;
//			}
//		}
//		if (!swapped) break;
//	}
//}
//
//int main() {
//	int arr[] = { 5, 2, 7, 1, 9, 3 };
//	int n = sizeof(arr) / sizeof(arr[0]);
//	bubbleSort(arr, n);
//	for (int i = 0; i < n; ++i) {
//		cout << arr[i] << " ";
//	}
//	cout << endl;
//	cin.get();
//	return 0;
//}