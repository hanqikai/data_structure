#include <stdio.h>
#include "BiTree.cpp"
#define NodesLength 6
using namespace std;
int main() {
	int i;
    char preOrder[NodesLength] = {'A', 'B', 'D', 'C', 'E', 'F'};
    char inOrder[NodesLength] = { 'D', 'B', 'A', 'E', 'C', 'F'};
    BiTree<char> T(preOrder, inOrder, NodesLength);
    cout<<"重建二叉树使用的前序序列为：";
	for(i = 0; i < NodesLength; i++)
		cout<<preOrder[i]<<" ";
	cout<<endl;
	cout<<"重建二叉树使用的中序序列为：";
	for(i = 0; i < NodesLength; i++)
		cout<<inOrder[i]<<" ";
	cout<<endl;
    cout<<"遍历重建的二叉树的后序序列为：";
    T.PostOrder();
    cout<<endl;
    cout<<"遍历重建的二叉树的前序序列为：";
    T.PreOrder();
    cout<<endl;
    cout<<"遍历重建的二叉树的中序序列为：";
    T.InOrder();
    cout<<endl;
    return 0;
}
