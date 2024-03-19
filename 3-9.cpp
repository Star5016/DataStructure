#include <iostream>
#define ElemType char
#define MaxSize 100

using namespace std;
typedef struct SqStack {
    ElemType data[MaxSize];
    int top;
}SqStack;

void InitStack(SqStack*& S) {
    S = new SqStack();
    S->top = -1;
};

void DestoryStack(SqStack*& S) {
    delete S;
};

bool isEmpty(SqStack* S) {
    return S->top == -1;
};

void push(SqStack*& S, ElemType elem) {
    if (S->top == MaxSize - 1) {
        cout << "栈已满" << endl;
        return;
    }
    S->top++;
    S->data[S->top] = elem;
};

bool pop(SqStack*& S, ElemType& elem) {
    if (S->top == -1) {
        cout << "栈为空" << endl;
        return false;
    }
    elem = S->data[S->top];
    S->top--;
    return true;
}

bool isOk(SqStack* S, ElemType elem[], int n) {
    if(elem[0]=='O'){return false;}
    char c;
    for (int i = 0; i < n; i++) {
        if (elem[i] == 'I') { push(S, elem[i]); }
        if (elem[i] == 'O') { if(pop(S, c)) return false; }

    }
    return true;
}

int main() {
    SqStack* S;
    InitStack(S);
    ElemType c[5] = { 'I','O','O','I','O' };
    if (isOk(S, c, 5)) {
        cout << "Yes" << endl;
    }
    else {
        cout << "No" << endl;
    }
    DestoryStack(S);
    return 0;
}