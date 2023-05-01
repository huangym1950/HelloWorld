//#include <iostream>
//
//using namespace std;
//
//// 判断是否为闰年
//bool isLeapYear(int year) {
//	return (year % 4 == 0 && year % 100 != 0) || year % 400 == 0;
//}
//
//int main() {
//	int year, month, day;
//	cout << "请输入年月日：" << endl;
//	cin >> year >> month >> day;
//
//	int daysOfMonth[] = { 31, 28 + isLeapYear(year), 31, 30, 31, 30, 31, 31, 30, 31, 30, 31 };
//	// 计算天数
//	int days = 0;
//	for (int i = 0; i < month - 1; i++) {
//		days += daysOfMonth[i];
//	}
//	days += day;
//
//	// 输出结果
//	cout << year << "年" << month << "月" << day << "日是这一年的第" << days << "天。" << endl;
//	system("pause");
//	return 0;
//}
