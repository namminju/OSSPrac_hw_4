#include<iostream>
#include<string>
using namespace std;
int main() {
	string name="",major="";
	int number = 0;
	cout << "�̸��� �Է��ϼ���: ";
	cin >> name;
	cout << "�й��� �Է��ϼ���: ";
	cin >> number;
	cout << "�а��� �Է��ϼ���: ";
	cin >> major;

	cout << "\n<���>"<<endl;
	cout << "�̸�: " << name << endl;
	cout << "�й�: " << number << endl;
	cout << "�а�: " << major << endl;
}