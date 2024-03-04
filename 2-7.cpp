void InsertElem(SqList*& L, int elem) {
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
}