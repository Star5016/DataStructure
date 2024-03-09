// exercise 2-8 
// put 0- in front of 0&&0+

void swap(int &a, int &b) {
    int temp;
    temp = a;
    a = b;
    b = temp;
}
void Sort(SqList*& L) {
    int i = 0, j = L->length - 1;
    while (i < j) {
        while (i < j && L->data[j]>=0) {
            j--;
        }
        while (i < j && L->data[i]<0) {
            i++;
        }
        if (i < j) {
            swap(L->data[i], L->data[j]);
        }
    }
}

// Written by Yuxing Liu
// Date : 2024/03/09