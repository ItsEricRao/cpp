#include <bits/stdc++.h>
using namespace std;
const int MAXN = 10e3;

struct Node{
	ElementType data;
	int lchild;
	int rchild;
	int father;
} T[MAXN];

void preorder(int root) {
    if(root == -1) return;
    cout << T[root].data;
    preorder(T[root].lchild);
    preorder(T[root].rchild);
}

void inorder(int root) {
    if(root == -1) return;
    inorder(T[root].lchild);
    cout << T[root].data;
    inorder(T[root].rchild);
}

void postorder(int root) {
    if(root == -1) return;
    postorder(T[root].lchild);
    postorder(T[root].rchild);
    cout << T[root].data;
}