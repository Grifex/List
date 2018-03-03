#ifndef LIST_H
#define LIST_H

using namespace std;



template<class T>
class List
{
class Node
{
	
	Node *next;
	T value;
	public:
		
		friend class List;
		
		Node() : next(0){}
		
		Node(T value) : next(0),value(value){}
	
};
	
	
	Node *begin;
	Node *end;
	public:
			
	List();
	void Add(T );
	void Print();

};

template<class T>
List<T>::List()
{
	end = begin = 0;
}

template<class T>
void List<T>::Add(T value)
{
	Node *temp = new Node(value);
		if(begin==0)
	{
		end = begin = temp;
		return;
	}
		end->next = temp;
		end = temp;
}

template<class T>
void List<T>::Print()
{
	for(Node *temp = begin;temp!=0;temp=temp->next)
	{
		cout<<temp->value<<" ";
	}
}

#endif
