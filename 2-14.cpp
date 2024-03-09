// exercise 2-14
// Insert Element before the First Max Value

// use three pointers
void insertBeforeMax(SLNode*& L, int elem) {
	SLNode* p = L->next,*r=L,*pre=L;
	int Max = p->data;
	while(p->next!=NULL){
		p = p->next;
		pre = pre->next;
		if (Max < p->data) { Max = p->data; r = pre; }
	}
	SLNode* s = new SLNode;
	s->data = elem;
	s->next = r->next;
	r->next = s;
}

// Written By Yuxing Liu
// Date : 2024/03/09
