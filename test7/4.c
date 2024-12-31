//프로그래밍 기초 실습 #07
//2024004501 이현수

#include <stdio.h>
#include <stdlib.h>

#define MALLOC(p,s) \
    if ((p = malloc(s)) == NULL) { \
        fprintf(stderr, "Insufficient Memory"); \
        exit(EXIT_FAILURE); \
    }

typedef struct tree{
    int data;
    struct tree* leftChild;
    struct tree* rightChild;
} tree, *treePointer;

treePointer search(treePointer tree, int target);
void insert(treePointer *tree, int data);
void inorder(treePointer tree);

int main () {
    treePointer root = NULL;
    int data;

    while (1) {
        scanf("%d", &data);

        if (data != 0) {
            insert(&root, data);
        } else {
            break;
        }
    }

    inorder(root);
}

treePointer search(treePointer tree, int target) {
    while (tree) {
        if (tree->data == target) return tree;
        else if (tree->data > target) tree = tree->leftChild;
        else if (tree->data < target) tree = tree->rightChild;
    }
    return NULL;
}

void insert(treePointer *tree, int data) {
    treePointer ptr, temp = search(*tree, data);

    if (!temp) {
        MALLOC(ptr, sizeof(*ptr));
        ptr->data = data;
        ptr->leftChild = NULL, ptr->rightChild = NULL;

        if (*tree == NULL) {
            *tree = ptr;
        } else {
            treePointer current = *tree, parent = NULL;
            while (current != NULL) {
                parent = current;
                if (current->data > data) current = current->leftChild;
                else current = current->rightChild;
            }
            if (parent->data > data) parent->leftChild = ptr;
            else parent->rightChild = ptr;
        }
    }
}

void inorder(treePointer tree) {
    if (tree == NULL) 
        return;
    
    inorder(tree->leftChild);
    printf("%d ", tree->data);
    inorder(tree->rightChild);
}