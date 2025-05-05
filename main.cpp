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

void duplicate_numbers(Node* top)
{
	Node* a = new Node;
	a->info = top->info;
	a->prev = top->prev;
	a->next = top;
	top->prev->next = a;
	top->prev = a;
}

void remove_numbers(Node * toRemove)
{
	toRemove->prev->next = toRemove->next;
    toRemove->next->prev = toRemove->prev;

    delete toRemove;
}

void sort_list(Node * top)
{
	for (Node * a = top->next; a->next != top; a = a->next)
		for (Node * b = a->next; b != top; b = b->next)
			if (a->info < b->info) swap(a->info, b->info);
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

bool isPrime(int k)
{	
	if (k == 2) return true;
	if (k < 2) return false;
	for (int i = 2; i <= sqrt(k) + 1; i++)
	{
		if (k % i == 0) {return false;}
	}
	return true;
}

int checkEvenOdd(int k)
{
	if (k == 0) return true;

	bool cond_Even = 1;
	bool cond_Odd = 1;
	while (k != 0)
	{
		int a = k % 10;
		if (a % 2 == 0) cond_Odd = 0;
		else cond_Even = 0;
		k = k / 10;
	}
	if (cond_Even == 1 && cond_Odd == 0) return 1;
	else if (cond_Even == 0 && cond_Odd == 1) return 2;
	else return 0;
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
	
	Node* p = node;
	p = p->next;
	bool anyPrime = 0; //0 - false
	
	while (p != node)
	{
		if (isPrime(p->info) == true)
		{
			anyPrime = 1;
			break;
		}
		p = p->next;
	}
	
	if (anyPrime == 1)	sort_list(node);

	p = node->next;
	while (p != node)
	{
		switch (checkEvenOdd(p->info))
		{
		case 1:
			duplicate_numbers(p);
			break;
		case 2:
			remove_numbers(p);
			break;
		
		default:
			break;
		}
		p = p->next;
	}
	print_list(node);
}

