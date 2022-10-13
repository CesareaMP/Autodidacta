#pragma once
class PILA
{

private:

	struct Node {
		int dato;
		Node* next;
		Node(int dato) {
			this->dato = dato;
			this->next = nullptr;
		}
	};
	Node* head;

public:
	PILA() {
		head = nullptr;
	}
	void nodeadd(int);
	int pop();
};


