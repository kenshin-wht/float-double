#include<iostream>
using namespace std;

int main() {


	//单精度 float
	//双精度 double
	//默认情况下输出一个小鼠，会显示6位有效数字
	float f1 = 3.14f;

	double d1 = 3.14;
	cout << f1 << endl;
	cout << d1 << endl;
	//统计float和double占用空间
	cout << "d1占用的内存空间" << sizeof(double) << endl;
	cout << "f1占用的内存空间" << sizeof(float) << endl;


	//科学计数法
	float  f2 = 3e2;
	cout << "f2=" << f2 << endl;

	float f3 = 3e-2;
	cout << "f3= " << f3 << endl;


	system("pause");

	return 0;

}

