#include<iostream>
using namespace std;

int main() {


	//������ float
	//˫���� double
	//Ĭ����������һ��С�󣬻���ʾ6λ��Ч����
	float f1 = 3.14f;

	double d1 = 3.14;
	cout << f1 << endl;
	cout << d1 << endl;
	//ͳ��float��doubleռ�ÿռ�
	cout << "d1ռ�õ��ڴ�ռ�" << sizeof(double) << endl;
	cout << "f1ռ�õ��ڴ�ռ�" << sizeof(float) << endl;


	//��ѧ������
	float  f2 = 3e2;
	cout << "f2=" << f2 << endl;

	float f3 = 3e-2;
	cout << "f3= " << f3 << endl;


	system("pause");

	return 0;

}

