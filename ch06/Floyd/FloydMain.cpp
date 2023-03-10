#include <iostream>
#include <iomanip>
#include <string>
#include "MGraph.cpp"
int main() {	
	string ch[] = {"A", "B", "C", "D", "E", "F", "G", "H", "I", "J"};
	int n, e;
	cout<<"请输入有向图的顶点数(<=10)："<<endl;
	cin>>n;
	if(n < 0 || n > 10)
		throw "顶点数不合法！";
	cout<<"请输入有向图的边数："<<endl;
	cin>>e;
	if(e < 0 || e > n * (n - 1))
		throw "边数不合法！";
	MGraph<string> M(ch, n, e);
	M.Floyd();
	return 0;
}
