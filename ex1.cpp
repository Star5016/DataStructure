#include <iostream>

#define MaxSize 100

using namespace std;
typedef struct SqList{
    int data[MaxSize];
    int length;
}sqlist;


void initList(sqlist*& L, const int arr[], int n) {
    L = new sqlist;
    L->length = 0;
    for (int i = 0; i < n; i++) {
        L->data[i] = arr[i];
        L->length++;
    }
}

void showData(sqlist* L) {
    for (int i = 0; i < L->length; i++) {
        printf("%d ", L->data[i]);
    }
}


void delSingleMinElem(sqlist*& L){
    int min=L->data[0];
    int index=0;
    for(int i=0;i<L->length;i++){
        if(L->data[i]<min){
            min=L->data[i];
            index=i;
        }
    }
    for(int i =index;i<L->length-1;i++){
        L->data[i]=L->data[i+1];
    }
    L->length--;
}

void TransposeElem(sqlist*& L){
    int i=0,j=L->length-1;
    while(i<=j){
        int temp=L->data[i];
        L->data[i]=L->data[j];
        L->data[j]=temp;
        i++;
        j--;
    }
    }

int main() {
    int arr[10]={12,2,3,2,5,6,7,10,29,2};
    sqlist* L=new sqlist;
    initList(L,arr,10);
    deleteMinElem(L);
    showData(L);
    return 0;
}
