//#include <iostream>
//#include <vector>
//#include <algorithm>
//
//using namespace std;
//
///*
//	�ô����У�compareVectors�������������������͵�vector��Ϊ��������ʹ��STL�е�set_difference���������������vector�Ĳ��������һ��vector���У�����һ����û�е�Ԫ�ء�
//	��󣬸��ݲ�Ƿ�Ϊ��������������main�����У��������������Ƚϵ�vector��������compareVectors�����������ǽ��бȽϡ����иó���������Vectors differ in the following elements: 1 2 6 7��
//*/
//
//void compareVectors(const vector<int>& v1, const vector<int>& v2) {
//	vector<int> diff;
//	set_difference(v1.begin(), v1.end(), v2.begin(), v2.end(), back_inserter(diff));
//	set_difference(v2.begin(), v2.end(), v1.begin(), v1.end(), back_inserter(diff));
//
//	if (diff.empty()) {
//		cout << "Vectors are identical." << endl;
//	}
//	else {
//		cout << "Vectors differ in the following elements:" << endl;
//		for (int i : diff) {
//			cout << i << " ";
//		}
//		cout << endl;
//	}
//}
//
//int main() {
//	vector<int> v1 = { 1, 2, 3, 4, 5 };
//	vector<int> v2 = { 3, 4, 5, 6, 7 };
//
//	compareVectors(v1, v2);
//	cin.get();
//	return 0;
//}