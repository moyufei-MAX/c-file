#include<iostream>
using namespace std;

//构造函数
//分类
class Person
{
	//构造函数
	//按照参数分类 无参构造（默认构造）和有参构造
	//按照类型分类 普通构造 拷贝构造
public:
	Person()
	{
		cout << "Person的无参构造函数调用" << endl;
	}
	Person(int a)
	{
		age = a;
		cout << "Person的有参构造函数调用" << endl;
	}
	//拷贝构造函数
	Person(const Person &p)
	{
		//将传入的人身上的所有属性，拷贝到我身上
		age = p.age;
		cout << "Person的拷贝构造函数调用" << endl;

	}
	~Person()
	{
		cout << "Person析构函数的调用" << endl;
	}
	int age;
	
};
//调用
void test01()
{
	//1.括号法（默认构造函数调用）
        //Person p1;           //无参构造函数的调用
		//Person p2(10);       //有参构造函数的调用

		//Person p3(p2);       //拷贝构造函数的调用
	//	注意事项
	//	cout << "p2的年龄为：" << p2.age << endl;
	//	cout << "p3的年龄为：" << p3.age << endl;

	//调用默认函数构造时，不要加（）声明
	
		Person p1();
//因为下面这行代码，编译器会认为是一个函数的
		void func();
	//2.显示法
		Person p1;
		Person p2 = Person(10);//有参构造
		Person p3 = Person(p2);//拷贝构造

		//Person(10);//匿名对象 特点：当前行执行结束后，系统会自动释放
		//cout<<"aaaa" << endl
		// 注意事项2
		//不要利用拷贝构造函数 初始化匿名对象
		
	//3.隐式转换法
		Person p4 = 10;//相当于 写了 Person p4=Person(10);有参构造
	
}
int main()
{
   test01();
}