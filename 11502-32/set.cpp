#include<iostream>
using namespace std;
class A
{ 
public:
	A(int i)
	{
		cout<<"����A"<<i<<endl;
	}
	A()
	{
		cout<<"����A"<<endl;
	}
	~A()
	{
		cout<<"����A"<<endl;
	}
};
class B:public A
{
private:
	A n1;
public:
	B(int a):A(a)
	{
		cout<<"����B"<<endl;
	}
	~B()
	{
		cout<<"����B"<<endl;
	}
};
int main()
{
	B b(1);
	return 0;
	system("pause");
}