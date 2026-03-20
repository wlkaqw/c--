#include <iostream>
#include <iomanip>
#include <vector>
#include <algorithm>
#include <string>
#include <sstream>
using namespace std;

void DisplayVector(vector<int> A);
bool Compare(const int &X1, const int &X2);

void main()
{
	string tt1 = "23 45 506 78 1111       ";
	istringstream ssin(tt1);
	int aa;

	while (ssin >> aa)
		cout << aa<<endl;

//	return;


/***************************************
通过数组实现向量批量初始化
****************************************/
	int t1[]={12,23,45,67,12};
	vector<int> t(t1,t1+5);	//t1+5等价于&t1[5],其中的&是取址符,能取出某变量的内存地址

	/***************************************
	向量直接批量初始化
	****************************************/
	vector<int> vt={ 12, 23, 45, 67, 12 };


/***************************************
向量遍历器在元素访问过程中的使用方法
****************************************/
	for (vector<int>::iterator it=t.begin(); it != t.end(); it++)
	{
		cout<<setw(5)<<*it;
	}
	cout << endl;




/***************************************
向量定义及对元素赋初值
****************************************/
	vector<int> a;		//在定义向量时一般不推荐指定其容量
	int i;

	cout<<"向量当前的长度为:"<<a.size()<<endl;
	cout<<"向量当前的容量为:"<<a.capacity()<<endl;

	for(i=0;i<10;i++)
	{
		a.push_back((i+1)*10);
//		a[i] = (i+1)*10;		//在使用下标形式访问向量元素时,一定要注意下标不能越界，因为下标形式下向量长度是不会自动扩展的
	}
	cout<<"向量当前的元素为:"<<endl;
	DisplayVector(a);
	cout<<"向量当前的长度为:"<<a.size()<<endl;
	cout<<"向量当前的容量为:"<<a.capacity()<<endl;




/***************************************
向量(紧缩)删除元素
****************************************/
	vector<int>::iterator p=a.begin()+2;
	a.erase(p);
	cout<<"元素删除操作完成后的向量为:"<<endl;
	DisplayVector(a);
	cout<<"向量当前的长度为:"<<a.size()<<endl;
	cout<<"向量当前的容量为:"<<a.capacity()<<endl;




/***************************************
向量插入元素
****************************************/
	p=a.begin()+2;
	a.insert(p,2,3);
	cout<<"元素插入操作完成后的向量为:"<<endl;
	DisplayVector(a);
	cout<<"向量当前的长度为:"<<a.size()<<endl;
	cout<<"向量当前的容量为:"<<a.capacity()<<endl;




/***************************************
向量追加元素后容量和长度的动态变化效果
****************************************/
	a.push_back(1001);
	cout<<"元素插入操作完成后的向量为:"<<endl;
	DisplayVector(a);
	cout<<"向量当前的长度为:"<<a.size()<<endl;
	cout<<"向量当前的容量为:"<<a.capacity()<<endl;




/***************************************
向量排序操作
****************************************/
	sort(a.begin(), a.end(), Compare);
	cout<<"排序操作完成后的向量为:"<<endl;
	DisplayVector(a);




/***************************************
向量交换
****************************************/
	vector<int> b(20);
	a.swap(b);	//两种形式的swap函数都可以使用
//	swap(a,b);	//两种形式的swap函数都可以使用
	cout<<"交换操作完成后的A向量为:"<<endl;
	DisplayVector(a);
	cout<<"交换操作完成后的B向量为:"<<endl;
	DisplayVector(b);




/***************************************
向量首尾交换(倒置)
****************************************/
	reverse(a.begin(),a.end());
}

/***************************************
用于指定排序规则的函数
X1和X2代表排序后向量中前后两个元素
形式参数必须使用const引用
返回值必须是bool类型
****************************************/
bool Compare(const int &X1, const int &X2)
{
//	return X1 > X2;				//绝对不允许使用<=、>=、==这些带有等于判断的关系运算符，否则将出现运行异常
	return X1/10%10 < X2/10%10;		//这个例子说明了如何实现对整数的10位数进行递增排序的方法
	//if (X1 / 10 % 10 < X2 / 10 % 10)
	//	return true;
	//else if (X1 / 10 % 10 == X2 / 10 % 10)
	//	return false;
	//else
	//	return false;
}

void DisplayVector(vector<int> A)
{
	int i;

	for(i=0;i<A.size();i++)
	{
		cout<<setw(5)<<left<<A[i];
		if ((i+1)%5 == 0)
		{
			cout<<endl;
		}
	}
	cout<<endl;
}