// exercise 2-13
// find Middle Elem

// ensure length then find the Middle elem
void solution(SLNode* L,int &e) {
	SLNode* p = L;
	int count = 0;
	while (p->next != NULL) {
		count++;
		p = p->next;
	}
	count=count/2;
	p = L;
	for (int i = 0; i < count; i++) {
		p = p->next;
	}
	e= p->data;
}

// two pointer find 
void solution(SLNode* L, int& e) {
	SLNode* p = L, * r = L;
	while (r != NULL && r->next != NULL) {
		p = p->next;
		r = r->next->next;
	}
	e = p->data;
}

// Written by Yuxing Liu
// Date : 2024/03/09