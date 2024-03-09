// exercise 2-7  
//Insert Element into the List ordered from min to max 

bool InsertElem(SqList*& L, int elem) {
	if(L->length==MaxSize){return false;} // check whether could insert elem or not
    for (int i = L->length; i > 0; i--) {
        if (L->data[i - 1] <= elem) {
            L->data[i] = elem;
            break;
        }
        else {
            L->data[i] = L->data[i - 1];
        }
    }
    if (L->data[0] >= elem) {
        L->data[0] = elem;
    }
    L->length++;
	return true;
}


// Written By Yuxing Liu
// Date : 2024.03.09
