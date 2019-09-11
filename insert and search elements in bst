#include<iostream>
using namespace std;
struct node
{
    int data;
    struct node *left,*right;
};
struct node *newnode(int data)
{
    struct node *temp=new node();
    temp->data=data;
    temp->left=temp->right=NULL;
    return temp;
}
struct node* insert(struct node *root,int data)
{
    if(root==NULL)
        return newnode(data);
    if(root->data>data)
        root->left=insert(root->left,data);
    if(root->data<data)
        root->right=insert(root->right,data);
    return root;
}
struct node *search(struct node *root,int data)
{
    if(root==NULL || root->data==data) return root;
    if(root->data>data) return search(root->left,data);
    if(root->data<data) return search(root->right,data);
}
int main(void)
{
    struct node *root=NULL;
    root=insert(root,50);
    insert(root,60);
    insert(root,70);
    insert(root,40);
    insert(root,30);
    insert(root,20);
    insert(root,100);
    struct node *temp=search(root,200);
    if(temp==NULL) cout<<"Element doesnt exist \n";
    else cout<<"Element exists";
    return 0;
}
