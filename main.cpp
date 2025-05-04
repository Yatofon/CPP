#include <iostream>

using namespace std;


struct Node
{
	int info;
	Node * next;
	Node * prev;
};

void addFront(Node* top, int info)
{
	Node* a = new Node;
	a->info = info;
	a->next = top->next;
	a->prev = top;
	top->next->prev = a;
	top->next = a;
}

void print_list(Node * top)
{
	Node * p = top->next;
	while (p != top)
	{
		cout << p->info << " ";
		p = p->next;
	}
	
}

void duplicate_numbers(Node * top)
{
	Node * p = top->next;
	while (p != top)
	{
		if (p->info % 3 == 0)
		{
			Node * q = new Node;
			q->info = p->info;
			q->next = p->next;
			q->prev = p;
			p->next = q;
			q->next->prev = q;
			p = q->next;
		}
		else
		{
			p = p->next;

		}
		
	}
	
}

void remove_numbers(Node * &top)
{
	Node * p = top;
	while (p != top)
	{
		if (p->info % 4 == 0)
		{
			p->prev->next = p->next;
			p->next->prev = p->prev;
			Node * temp = p;
			p = p->next;
			delete temp;
		}
		else
		{
			p = p->next;
		}
	}
	
	
}

void sort_list(Node * top)
{
	for (Node * a = top->next; a->next != top; a = a->next)
		for (Node * b = a->next; b != top; b = b->next)
			if (a->info > b->info) swap(a->info, b->info);
}

bool is_list_sorted(Node * top)
{
	Node * p = top;

	while (p->next != top)
	{
		if (p->info > p->next->info)
			return false;
		else
			p = p->next;
	}
	return true;
}



void main()
{
	Node* node = new Node;
	node->next = node;
	node->prev = node;

	int n;
	cout << "Enter number of elemenrs: " << "\n";
	cin >> n;

	for (int i = 0; i < n; i++)
	{
		int number;
		cout << "Enter number: " << "\n";
		cin >> number;
		addFront(node, number);
	}
	
	print_list(node);
}

