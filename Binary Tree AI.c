#include <stdio.h>
#include <stdlib.h>

struct node {
    int data;
    struct node *left;
    struct node *right;
};

struct node *root = NULL;

void create(int n);
void display(struct node *root);

int main() {
    int n;

    do {
        printf("Enter Data (Enter -1 to stop): ");
        scanf("%d", &n);
        if (n != -1) {
            create(n);
        }
    } while (n != -1);

    display(root);

    return 0;
}

void create(int n) {
    struct node *newnode, *temp;

    newnode = (struct node *)malloc(sizeof(struct node));
    newnode->data = n;
    newnode->left = NULL;
    newnode->right = NULL;

    if (root == NULL) {
        root = newnode;
        return;
    }

    temp = root;
    while (1) {
        if (n < temp->data) {
            if (temp->left == NULL) {
                temp->left = newnode;
                break;
            } else {
                temp = temp->left;
            }
        } else if (n > temp->data) {
            if (temp->right == NULL) {
                temp->right = newnode;
                break;
            } else {
                temp = temp->right;
            }
        } else {
            printf("Duplicate data not allowed.\n");
            free(newnode);
            break;
        }
    }
}

void display(struct node *root) {
    if (root != NULL) {
        display(root->left);
        printf("%d ", root->data);
        display(root->right);
    }
}

