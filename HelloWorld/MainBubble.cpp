//#include <iostream>
//using namespace std;
//
///*
//	�ô����У�bubbleSort��������һ��������������С��Ϊ��������ÿ��ѭ���бȽ����ڵ�����Ԫ�أ�������ǵ�˳����ȷ���򽻻����ǵ�λ�á�
//	��ÿһ�ֽ���ʱ������Ƿ������������û�з�����������˵�������Ѿ��ź��򣬿�����ǰ����������̡����main����������һ������������飬������bubbleSort�����������������
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