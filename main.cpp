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
	Node * p = top->prev;
	while (p != top)
	{
		cout << p->info << " ";
		p = p->prev;
	}
	cout << "\n";
}

void duplicate_numbers(Node* node)
{
	Node* newNode = new Node;
    newNode->info = node->info;
    newNode->next = node->next;
    newNode->prev = node;
    node->next->prev = newNode;
    node->next = newNode;
}

void remove_numbers(Node* top)
{
	top->prev->next = top->next;
	top->next->prev = top->prev;

	delete(top);
}

void sort_list(Node * top)
{
	for (Node * a = top->next; a->next != top; a = a->next)
		for (Node * b = a->next; b != top; b = b->next)
			if (a->info > b->info) swap(a->info, b->info);
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
	if (k == 0) return 2;

	short cond_Even = 0;
	short cond_Odd = 0;
	while (k != 0)
	{
		int a = k % 10;
		if (a % 2 == 0) cond_Even += 1;
		else cond_Odd += 1;
		k = k / 10;
	}
	if (cond_Even >= 1 && cond_Odd == 0) return 1;
	else if (cond_Even == 0 && cond_Odd >= 1) return 2;
	else return 0;
}


void main()
{
			//Инициализация и заполнение
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
	
			//Проверка на наличие простых чисел
	Node* p = node;
	p = p->next;
	bool anyPrime = 0; 
	
	while (p != node)
	{
		if (isPrime(p->info) == true)
		{
			anyPrime = 1;
			break;
		}
		p = p->next;
	}
	
			//Обработка списка
	if (anyPrime == 1)	
		sort_list(node);
	else
	{
		p = node->next;
		while (p != node)
		{
			Node* p1 = p;
			p = p->next;
			switch (checkEvenOdd(p1->info))
			{
			case 1:
				duplicate_numbers(p1);
				break;
			case 2:
				remove_numbers(p1);
				break;
			default:
				break;
			}
		}
	}
	print_list(node);
}