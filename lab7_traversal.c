#include<stdio.h>
#include<stdlib.h>

typedef struct Node{
    int data;
    struct Node* left;
    struct Node* right;
}node;

node* createNode(int value)
{
    node* newNode=(node*)malloc(sizeof(node));
    newNode->data=value;
    newNode->left=NULL;
    newNode->right=NULL;
    return newNode;
}

node* insert(node* root, int value)
{
    if(root==NULL)
    {
        return createNode(value);
    }
    if(value<root->data)
    {
        root->left=insert(root->left,value);
    }
    else if(value>root->data)
    {
        root->right=insert(root->right,value);
    }
    return root;
}

void inorder(node* root)
{
    if(root!=NULL)
    {
        inorder(root->left);
        printf("%d ",root->data);
        inorder(root->right);
    }
}

void preorder(node* root)
{
    if(root!=NULL)
    {
        printf("%d ",root->data);
        preorder(root->left);
        preorder(root->right);
    }
}

void postorder(node* root)
{
    if(root!=NULL)
    {
        postorder(root->left);
        postorder(root->right);
        printf("%d ",root->data);
    }
}

int main()
{
    node* root=NULL;

    root=insert(root,45);
    root=insert(root,4);
    root=insert(root,56);
    root=insert(root,6);
    root=insert(root,9);
    root=insert(root,5);

    printf("inorder: ");
    inorder(root);
    printf("\n");


    printf("preorder: ");
    preorder(root);
    printf("\n");

    printf("postorder");
    postorder(root);
    printf("\n");

    return 0;

    
}