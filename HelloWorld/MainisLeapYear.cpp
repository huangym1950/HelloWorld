//#include <iostream>
//
//using namespace std;
//
//// �ж��Ƿ�Ϊ����
//bool isLeapYear(int year) {
//	return (year % 4 == 0 && year % 100 != 0) || year % 400 == 0;
//}
//
//int main() {
//	int year, month, day;
//	cout << "�����������գ�" << endl;
//	cin >> year >> month >> day;
//
//	int daysOfMonth[] = { 31, 28 + isLeapYear(year), 31, 30, 31, 30, 31, 31, 30, 31, 30, 31 };
//	// ��������
//	int days = 0;
//	for (int i = 0; i < month - 1; i++) {
//		days += daysOfMonth[i];
//	}
//	days += day;
//
//	// ������
//	cout << year << "��" << month << "��" << day << "������һ��ĵ�" << days << "�졣" << endl;
//	system("pause");
//	return 0;
//}
