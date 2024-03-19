#include <iostream>
#define ElemType char
#include<map>
using namespace std;
typedef struct linknode {
    ElemType data;
    struct linknode* next;
}LinkStNode;

void InitStack(LinkStNode*&s){
    s=new LinkStNode;
    s->next=nullptr;
}

void DestoryStack(LinkStNode*&s){
    LinkStNode* pre=s,*p=s->next;
    while(p!= nullptr){
        delete pre;
        pre=p;
        p=p->next;
    }
    delete pre;
}

bool isEmpty(LinkStNode* s){
    return s->next==nullptr;
}
bool push(LinkStNode*&s, ElemType elem){
    LinkStNode* p=new LinkStNode;
    p->data=elem;
    p->next=s->next;
    s->next=p;
}

bool pop(LinkStNode*&s, ElemType&elem){
    if(isEmpty(s)){
        return false;
    }
    LinkStNode* p=s->next;
    elem=p->data;
    s->next=p->next;\
    delete p;
    return true;
}

bool isMatch(ElemType str[],int n){
    bool flag=true;
    char c;
    LinkStNode *s;
    InitStack(s);

    for(int i=0;flag&&i<n;i++){
        map<char,char> m={{')','('},{']','['},{'}','{'}};
        if(str[i]=='('||str[i]=='{'||str[i]=='['){
            push(s,str[i]);
        }else if(str[i]==')'||str[i]=='}'||str[i]==']'){
            if(pop(s,c)){
                if(c!=m[str[i]]){flag =false;}
            }
            else flag=false;
        }else{
            continue;
        }
    }
    if(!isEmpty(s)){
        flag=false;
    }
    DestoryStack(s);
    return flag;
}
int main() {
    char s[8]={'f','(','s','{',']','d',')','x'};
    if(isMatch(s,8)){
        cout<<"match"<<endl;
    }else{
        cout<<"not match"<<endl;
    }

    return 0;
}
