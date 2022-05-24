#include<iostream>
using namespace std;

template<typename T>
class Stack
{
public:
	

	
	T DataBase[10];
	int Count = -1;
	
	void Push(T A) 
	{
		DataBase[++Count]= A; // 전위
	}
	void Pop()
	{
		Count--;			// 후위 
	}
	int Top()
	{
		return DataBase[Count];
	}
	

public:

	Stack()
	{
	
	}
	
	~Stack() 
	{

	}

};
template <typename Q>
class queue
{
public:
	Q DataBase[10]; 
	int Cursor; 
	int begin;
	
	void QReturn()
	{
		begin = 0;
	}
	void Push(Q A)
	{
		DataBase[++Cursor] = A; // 전위
	}
	Q Top()
	{
		return DataBase[begin++];
	}
	void pop()
	{
		for (int i = 0; i <9; ++i)
		{
			
			Q temp;
			temp = DataBase[i+1];
			DataBase[i] = temp;
			

		}
		--Cursor;
	}

	void Qout()
	{
		for (int i = 0; i < 10; ++i)
		{
			cout <<DataBase[i] << endl;
		}
	}

public:

	queue()
	{
		Cursor = -1;
		begin = 0;
	}
	~queue()
	{

	}
};

int main()
{
	queue<int> A;
	for (int i = 0; i < 10; ++i)
	{
		A.Push(i);
	}

	A.pop();
	A.Qout();
	A.Push(30);
	A.QReturn();
	A.Qout();
	return 0;
}