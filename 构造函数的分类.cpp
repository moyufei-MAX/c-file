#include<iostream>
using namespace std;

//���캯��
//����
class Person
{
	//���캯��
	//���ղ������� �޲ι��죨Ĭ�Ϲ��죩���вι���
	//�������ͷ��� ��ͨ���� ��������
public:
	Person()
	{
		cout << "Person���޲ι��캯������" << endl;
	}
	Person(int a)
	{
		age = a;
		cout << "Person���вι��캯������" << endl;
	}
	//�������캯��
	Person(const Person &p)
	{
		//������������ϵ��������ԣ�������������
		age = p.age;
		cout << "Person�Ŀ������캯������" << endl;

	}
	~Person()
	{
		cout << "Person���������ĵ���" << endl;
	}
	int age;
	
};
//����
void test01()
{
	//1.���ŷ���Ĭ�Ϲ��캯�����ã�
        //Person p1;           //�޲ι��캯���ĵ���
		//Person p2(10);       //�вι��캯���ĵ���

		//Person p3(p2);       //�������캯���ĵ���
	//	ע������
	//	cout << "p2������Ϊ��" << p2.age << endl;
	//	cout << "p3������Ϊ��" << p3.age << endl;

	//����Ĭ�Ϻ�������ʱ����Ҫ�ӣ�������
	
		Person p1();
//��Ϊ�������д��룬����������Ϊ��һ��������
		void func();
	//2.��ʾ��
		Person p1;
		Person p2 = Person(10);//�вι���
		Person p3 = Person(p2);//��������

		//Person(10);//�������� �ص㣺��ǰ��ִ�н�����ϵͳ���Զ��ͷ�
		//cout<<"aaaa" << endl
		// ע������2
		//��Ҫ���ÿ������캯�� ��ʼ����������
		
	//3.��ʽת����
		Person p4 = 10;//�൱�� д�� Person p4=Person(10);�вι���
	
}
int main()
{
   test01();
}