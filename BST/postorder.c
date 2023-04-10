#include<stdio.h>
#include<stdlib.h>
#include<string.h>

struct node{
    struct  node *lchild;
    int data;
    struct node *rchild;
}*root = NULL;

struct node *insert(struct node *p, int key){

    struct node *t = NULL;
    if(p==NULL){
        t = (struct node *)malloc(sizeof(struct node));
        t->data = key;
        t->lchild = t->rchild = NULL;
        return t;
    }
    if(key<p->data){
        p->lchild = insert(p->lchild, key);
    }
    else{
        p->rchild = insert(p->rchild, key);
    }
    return p;
}

void postorder(struct node *p){
    if(p){
      postorder(p->lchild);
      postorder(p->rchild);
      printf("%d ",p->data);
    }
}

int main(){

    root = insert(root,10);
    insert(root,6);
    insert(root,5);
    insert(root,15);

    inorder(root);
    printf("\n");
  return 0;
}
