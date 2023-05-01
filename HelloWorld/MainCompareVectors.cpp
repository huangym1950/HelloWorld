//#include <iostream>
//#include <vector>
//#include <algorithm>
//
//using namespace std;
//
///*
//	该代码中，compareVectors函数接受两个整数类型的vector作为参数，并使用STL中的set_difference函数来求出这两个vector的差集，即其中一个vector中有，而另一个中没有的元素。
//	最后，根据差集是否为空来输出结果。在main函数中，定义了两个待比较的vector，并调用compareVectors函数来对它们进行比较。运行该程序会输出：Vectors differ in the following elements: 1 2 6 7。
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