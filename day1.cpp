#include<iostream>
using namespace std;//命名空间
int main() {
	//输入输出
	/*int a = 0;
	cin >> a;
	cout << "a的值："<<a;
	float b = 1.2;
	cin >> b;
	cout << "b的值："<<b;
	char c = 'x';
	cin >> c;
	cout << "c的值：" << c;
	string d = "xjslovext";
	cin >> d;
	cout << "d的值：" << d;*/
	//sizeof的使用
	/*long long f = 1;
	cout<<sizeof(f)<<endl;
	bool g = 1;
	cout << sizeof(g) << endl;*/
	//运算符
	//char e = 'a';
	//e += 1;
	//cout << "e的值:" << e << endl;
	//int h = 1;
	//int i = -2;
	//cout << h / -i << endl;
	//cout << h / i<<endl;//结果是0,注意这里的除法并非向下取整,而是把小数点后面截断
	//cout << h * 1.0 / i << endl;//结果是-0.5
	//求模(求余)
	int j = 100;
	int k = 9;
	cout << j % k<<endl;
	 j = 100;
	 k = -9;
	cout << j % k << endl;
	 j = -100;
	 k = 9;
	cout << j % k << endl;
	 j = -100;
	 k = -9;
	cout << j % k << endl;
	
	



	return 0;
}