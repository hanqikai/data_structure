#ifndef BITREE_H
#define BITREE_H
#define NodesLength 6
template <class ElemType>
/*�������Ľ��ṹ*/
struct BiNode{
	ElemType data;       
	BiNode<ElemType> *lchild, *rchild;
};

template <class ElemType>
class BiTree{
public:
	BiTree(ElemType *preOrder, ElemType *inOrder, int len) {
		root = Rebuild(preOrder, inOrder, len);
	}
	void PostOrder() {
		PostOrder(root);
	}
	void PreOrder() {
		PreOrder(root);
	} 
	void InOrder() {
		InOrder(root);
	}
	/*����ǰ���������������ؽ�������*/
	BiNode<ElemType> *Rebuild(ElemType *preOrder, ElemType *inOrder, int len);
private:
	BiNode<ElemType> *root; /*ָ�������ͷָ��*/
	void PostOrder(BiNode<ElemType> *bt); /*�������������*/ 
	void PreOrder(BiNode<ElemType> *bt); /*ǰ�����������*/
	void InOrder(BiNode<ElemType> *bt); /*�������������*/
};
#endif