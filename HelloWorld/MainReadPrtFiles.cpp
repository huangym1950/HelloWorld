////#include <fstream>
////#include <iostream>
////
////using namespace std;
////
////int main() {
////	// ��PRT�ļ�
////	ifstream file;
////	file.open("C:\\Temp\\0000000023.prt", ios::binary);
////
////	if (!file.is_open()) {
////		cerr << "�޷����ļ���" << endl;
////		return 1;
////	}
////
////	// ����������������
////	while (!file.eof()) {
////		// ��ȡ��һ���ֽ�
////		char byte;
////		file.read(&byte, 1);
////
////		// �����ȡ�����ֽ�ֵ
////		cout << (int)byte << " ";
////	}
////
////	// �ر��ļ�
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
//	ifstream file("C:\\Temp\\0000000023.prt", ios::binary); // �򿪶������ļ�
//
//	if (!file.is_open()) { // �����ʧ�ܣ������������Ϣ���˳�����
//		cout << "Error opening file." << endl;
//		return 1;
//	}
//
//	// ��ȡ�ļ�ͷ����Ϣ
//	char header[80];
//	file.read(header, 80);
//	cout << "Header: " << header << endl;
//
//	// ��ȡ�汾��Ϣ
//	int version;
//	file.read((char*)&version, sizeof(int));
//	cout << "Version: " << version << endl;
//
//	// ��ȡ���ݳ���
//	int length;
//	file.read((char*)&length, sizeof(int));
//	cout << "Data length: " << length << endl;
//
//	// ��ȡ����
//	char* data = new char[length];
//	file.read(data, length);
//
//	// �����ȡ��������
//	for (int i = 0; i < length; i++) {
//		cout << data[i];
//	}
//	cout << endl;
//
//	// �����ڴ沢�ر��ļ�
//	delete[] data;
//	file.close();
//
//	return 0;
//}
//
