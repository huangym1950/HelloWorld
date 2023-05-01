////#include <fstream>
////#include <iostream>
////
////using namespace std;
////
////int main() {
////	// 打开PRT文件
////	ifstream file;
////	file.open("C:\\Temp\\0000000023.prt", ios::binary);
////
////	if (!file.is_open()) {
////		cerr << "无法打开文件！" << endl;
////		return 1;
////	}
////
////	// 解析二进制数据流
////	while (!file.eof()) {
////		// 读取下一个字节
////		char byte;
////		file.read(&byte, 1);
////
////		// 输出读取到的字节值
////		cout << (int)byte << " ";
////	}
////
////	// 关闭文件
////	file.close();
////
////	system("pause");
////	return 0;
////}
//
//
//#include <fstream>
//#include <iostream>
//
//using namespace std;
//
//int main() {
//	ifstream file("C:\\Temp\\0000000023.prt", ios::binary); // 打开二进制文件
//
//	if (!file.is_open()) { // 如果打开失败，则输出错误消息并退出程序
//		cout << "Error opening file." << endl;
//		return 1;
//	}
//
//	// 读取文件头部信息
//	char header[80];
//	file.read(header, 80);
//	cout << "Header: " << header << endl;
//
//	// 读取版本信息
//	int version;
//	file.read((char*)&version, sizeof(int));
//	cout << "Version: " << version << endl;
//
//	// 读取数据长度
//	int length;
//	file.read((char*)&length, sizeof(int));
//	cout << "Data length: " << length << endl;
//
//	// 读取数据
//	char* data = new char[length];
//	file.read(data, length);
//
//	// 输出读取到的数据
//	for (int i = 0; i < length; i++) {
//		cout << data[i];
//	}
//	cout << endl;
//
//	// 清理内存并关闭文件
//	delete[] data;
//	file.close();
//
//	return 0;
//}
//
