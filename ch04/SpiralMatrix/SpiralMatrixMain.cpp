#include <iostream>
using namespace std;
static int calculate(int n, int i, int j);
int main() {
	int n, i, j;
    cout<<"请输入螺旋方阵的行数或列数n(n>0)：";
    cin>>n;
    if(n<0)
		throw "参数不合法！";
    cout<<n<<"阶的螺旋方阵为："<<endl;
    for (i = 0; i < n; ++i) {
		for(j = 0; j < n; ++j) {
			/*设置输出宽度*/ 
			cout.width(5);
			cout<<calculate(n - 1, i, j);
		}
        cout<<endl;
   }
   return 0;
}

int calculate(int n, int i, int j) {
	int k = 0;
	int mini = i < n-i ? i : n-i;
    int minj = j < n-j ? j : n-j;
    int min = mini <minj ? mini : minj;
    int h;
	for(h = 0; h < min; ++h) {
		k += (n - 2 * h) * 4;
	}
    if(i == min) {
		k += j - min + 1;
    }
    else if(j == n - min) {     
		k += (n - 2 * min) + (i - min) + 1;
	}
	else if(i == n - min) {
		k += (n - 2 * min) * 2 + (n - min - j) + 1;
    }
    else if(j == min) {
		k += (n - 2 * min) * 3 + (n - min - i) + 1;
    }
    return k;
}
