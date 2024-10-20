#include<bits/stdc++.h>
using namespace std;
const int MAXN = 20;
struct Node{
	char data;
	int lchild;
	int rchild;
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

int main(){
    int pre[MAXN], in[MAXN];
    for (size_t i = 1; i <= MAXN; i++)
    {
        
    }
    
}
