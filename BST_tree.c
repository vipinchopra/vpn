#include<stdio.h>
#include<string.h>
#include<stdlib.h>
struct BST
{
int data;
struct BST *left,*right;
};

struct BST *root=NULL;
struct BST* insert(struct BST *ptr,int info)
{
struct BST *nu=NULL;
if(ptr==NULL)
{
nu=calloc(sizeof(struct BST),1);
nu->data=info;
nu->left=NULL;
nu->right=NULL;
ptr=nu;
return ptr;
}
else if(info>ptr->data)
{
ptr->right=insert(ptr->right,info);
}
else if(info<ptr->data)
{
ptr->left=insert(ptr->left,info);
}
else
{
printf("Duplicates are not allowed\n");
}
return ptr;
}

void inorder(struct BST* ptr)
{
if(ptr)
{
inorder(ptr->left);
printf("%d\n",ptr->data);
inorder(ptr->right);
}
}


void preorder(struct BST* ptr)
{
if(ptr)
{
printf("%d\n",ptr->data);
preorder(ptr->left);
preorder(ptr->right);
}
}

void postorder(struct BST* ptr)
{
if(ptr)
{
postorder(ptr->left);
postorder(ptr->right);
printf("%d\n",ptr->data);
}
}
struct BST* search(struct BST* ptr,int info)
{
    if(ptr->data==info)
    return ptr;
    else if(info>ptr->data)
    search(ptr->right,info);
    else if(info<ptr->data)
    search(ptr->left,info);
    else
    {
     return NULL;   
    }
    
}

int main()
{
    int data,ch;
    int info;
    while(1)
    {
        printf("Enter the choice\n");
        scanf("%d",&ch);
        switch(ch)
        {
        case 1:printf("Enter the data to be inserted\n");
                scanf("%d",&data);
                root=insert(root,data);
                 break;
        case 3:inorder(root);
            break; 
        case 4:preorder(root);
            break;
        case 5:postorder(root);
            break;   
        case 6:exit(0); 
        case 7: printf("Enter the data to be searched in binary tree\n");
        scanf("%d",&info);
        struct BST *temp=search(root,info);
        if(temp==NULL)
            printf("Not found data\n");
        else
        {printf("at location:%d\n",temp->data);
        }
        break;
        default:printf("Entered choice is invalid\n");
        }
    }   
    return 0;
}