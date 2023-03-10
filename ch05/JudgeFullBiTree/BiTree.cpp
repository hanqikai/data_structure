#include <iostream>
using namespace std;
#include "BiTree.h"

template <class ElemType>
BiNode<ElemType> *BiTree<ElemType>::Creat(BiNode<ElemType> *bt) {
	char ch;
	cout<<"请输入创建一棵二叉树的结点数据："<<endl;
	cin>>ch;
	/*'#'代表空二叉树*/
    if(ch == '#') 
		return NULL;
    else { 
		bt = new BiNode<ElemType>; /*生成新结点*/
        bt->data = ch;
        bt->lchild = Creat(bt->lchild); /*递归创建左子树*/
        bt->rchild = Creat(bt->rchild); /*递归创建右子树*/
    } 
    return bt;
}

template <class ElemType>
int BiTree<ElemType>::Depth(BiNode<ElemType> *bt) {
	if(bt == NULL)
		return 0;
	else {
		int dep1 = Depth(bt->lchild);
		int dep2 = Depth(bt->rchild);
		return (dep1 > dep2) ? (dep1 + 1) : (dep2 + 1);
	}
}

template <class ElemType>
void BiTree<ElemType>::CountLeaf(BiNode<ElemType> *bt) {
	if(bt != NULL) {
		if(bt->lchild == NULL && bt->rchild == NULL)
			countLeaf++;
		CountLeaf(bt->lchild);
		CountLeaf(bt->rchild);
	}
}
