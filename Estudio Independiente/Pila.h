#pragma once
class PILA
{
	struct Nodepi
	{
		int data;
		Nodepi* next;
	}; 
public:	
	void Add(int);
	int Pop();
private:
	Nodepi* header = nullptr;
};

