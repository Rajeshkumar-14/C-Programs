#include <stdio.h>
#include <stdlib.h>

struct node
{
    int data;
    struct node *left, *right;
} *root = NULL;

void create(int n);
void pre_display(struct node *node);
int sum(struct node *root);
int issumtree(struct node* node);

int main()
{
    int n;

    do
    {
        printf("Enter Data : ");
        scanf("%d", &n);
        if (n > 0)
        {
            create(n);
        }
    } while (n >= 0);

    printf("Binary Tree in Pre-order: ");
    pre_display(root);
    printf("\n");

    int val = sum(root);
    printf("The Sum is : %d",val);
    printf("\n");

    int result = issumtree(root);
    printf("%d",result);

    return 0;
}

void create(int n)
{
    struct node *newnode, *temp;
    int flag = 0;

    newnode = (struct node *)(malloc(sizeof(struct node)));
    newnode->data = n;
    newnode->left = NULL;
    newnode->right = NULL;

    if (root == NULL)
    {
        root = newnode;
    }
    else
    {
        temp = root;

        while (1)
        {
            if (temp->left == NULL)
            {
                temp->left = newnode;
                break;
            }
            else if (temp->right == NULL)
            {
                temp->right = newnode;
                break;
            }
            else if (flag == 0)
            {
                temp = temp->left;
                flag = 1;
            }
            else
            {
                temp = temp->right;
                flag = 0;
            }
        }
    }
}

void pre_display(struct node *node)
{
    if (node == NULL)
    {
        return;
    }

    printf("%d ", node->data);
    pre_display(node->left);
    pre_display(node->right);
}

int sum(struct node *root)
{
   if(root == NULL)
   {
       return 0;
   }
   else
   {
       return sum(root->left) + root->data + sum(root->right);
   }
}

int issumtree(struct node* node)
{
    int ls, rs;
    if(node == NULL || (node->left == NULL && node->right == NULL))
    {
        return 1;
    }

   ls = sum(node->left);
   rs = sum(node->right);

    if((node->data == ls + rs) && isSumTree(node->left) && isSumTree(node->right))
    {
        return 1;
    }
   return 0;
}
