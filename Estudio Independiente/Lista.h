#pragma once
class Lista
{
	struct Nodeli
	{
		int data;
		Nodeli* next;
	};
public:
	void Add(int);
	int get_all_items(int);
private:
	Nodeli* header = nullptr;
};
