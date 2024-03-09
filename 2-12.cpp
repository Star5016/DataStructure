// exercise 2-12
// reserve SingleNodeLinkList


void reverseSLNode(SLNode*& L) {
	SingleNodeLinkList*p=L->next,*r;
	L->next = NULL;
	while (p->next != NULL) {
		r = p->next;
		p->next = L->next;
		L->next = p;
		p = r;
	}
	p->next = L->next;
	L->next = p;
}


// Written by Yuxing Liu
// Date : 2024/03/09