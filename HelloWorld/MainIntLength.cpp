//#include <iostream>
//
//using namespace std;
//
//int main() {
//	int n;
//	cout << "请输入一个不多于5位的正整数：" << endl;
//	cin >> n;
//
//	// 计算位数
//	int digits = 0;
//	int temp = n;
//	while (temp > 0) {
//		digits++;
//		temp /= 10;
//	}
//	cout << n << " 是 " << digits << " 位数。" << endl;
//
//	// 逆序输出各位数字
//	cout << "逆序输出各位数字：";
//	while (n > 0) {
//		cout << n % 10 << " ";
//		n /= 10;
//	}
//
//	system("pause");
//	return 0;
//}
