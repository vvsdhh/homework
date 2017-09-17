#include<iostream>
using namespace std;
class A
{ 
public:
	A(int i)
	{
		cout<<"构建A"<<i<<endl;
	}
	A()
	{
		cout<<"构建A"<<endl;
	}
	~A()
	{
		cout<<"析构A"<<endl;
	}
};
class B:public A
{
private:
	A n1;
public:
	B(int a):A(a)
	{
		cout<<"构建B"<<endl;
	}
	~B()
	{
		cout<<"析构B"<<endl;
	}
};
int main()
{
	B b(1);
	return 0;
	system("pause");
}