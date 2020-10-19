#include<iostream>
using namespace std;
struct node
{
int data;
node *lchild;
node *rchild;
}*root;

int height(struct node *p)
{int x,y;
if(p==NULL)
return 0;
x=height(p->lchild);
y=height(p->rchild);
return x>y?x+1:y+1;
}

struct node* pre(struct node *p)
{
    while(p && p->lchild!=NULL)
    {
        p=p->lchild;
    }
    return p;

}
void insert(int key)
{
   struct node *t=root,*r,*p;
   if(root==NULL)
   {
       p=(struct node*)malloc(sizeof(struct node));
       p->data=key;
       p->lchild=p->rchild=NULL;
       root=p;
       return;
   }
   //else
   while(t!=NULL)
   {
       r=t;
       if(key<t->data)
       t=t->lchild;
       else if(key>t->data)
       t=t->rchild;
       else //element matched
      return;
       
   }
   p=(struct node*)malloc(sizeof(struct node));
  p->data=key;
  p->lchild=p->rchild=NULL;
  if(key<r->data)
  r->lchild=p;
  else
  r->rchild=p;
}
struct node *search(int key)
{ struct node *t=root;
    while(t!=NULL)
    {
if(key==t->data)
return t;
else if(key<t->data)
t=t->lchild;
else
t=t->rchild;
    }
return NULL; //if not found
}

void inorder(node *p)
{
    if(p!=NULL)
    {
inorder(p->lchild);
cout<<p->data<<" ";
inorder(p->rchild);
    }
}
//counting the number of leaf
unsigned int countLeaf(node *p)
{
    if(p==NULL)
    return 0;
    if(p->lchild==NULL && p->rchild==NULL)
    return 1;
    else
    {
        return countLeaf(p->lchild)+countLeaf(p->rchild);
    }
    
}
//count the numbr of the nodes
int getSize(node* node)
{
if(node==NULL)
return 0;
else
{
    return getSize(node->lchild)+getSize(node->rchild)+1;
}
}
//sum of Leafnode
int sumOfLeafNodes(node *r)
{if(r==NULL)
return 0;
if(r->lchild==NULL && r->rchild==NULL)
return r->data;
else
{
    return sumOfLeafNodes(r->lchild)+sumOfLeafNodes(r->rchild);
}
}
int main()
{ //67 34 82 12 45 78
insert(67);
insert(34);
insert(82);
insert(12);
insert(45);
insert(78);
insert(88);
insert(8);
insert(9);

 inorder(root);cout<<"\n";
node * temp=search(23);
if(temp!=NULL)
cout<<"Yes element found\n";
else 
cout<<"Not found\n";

 cout<<"Height is "<<height(root);//node ke hisaab se
 cout<<"\n";
cout<<"Number of leaf node is: "<<countLeaf(root)<<endl;
cout<<"Size is: "<<getSize(root);
return 0;
}