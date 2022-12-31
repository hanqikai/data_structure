#include <iostream>
using namespace std;

/*·������*/
const int n = 13;
/*·��*/
const string path[n] = {"AB", "AC", "AD", "BA", "BC", "BD", "DA", "DB", "DC", "EA", "EB", "EC", "ED"};
/*�ڽӾ����ʾ��·��֮��Ĺ�ϵ��1��ʾ·�߲���ͬʱͨ�У�0��ʾ·�߿���ͬʱͨ��*/
const int data[n][n] = {
    {0, 0, 0, 0, 1, 1, 1, 0, 0, 1, 0, 0, 0}, 
    {0, 0, 0, 0, 0, 1, 1, 1, 0, 1, 1, 0, 0}, 
    {0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 1, 1, 0}, 
    {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0}, 
    {1, 0, 0, 0, 0, 0, 0, 1, 0, 0, 1, 0, 0}, 
    {1, 1, 0, 0, 0, 0, 1, 0, 0, 0, 1, 1, 0}, 
    {1, 1, 0, 0, 0, 1, 0, 0, 0, 0, 1, 1, 0}, 
    {0, 1, 0, 0, 1, 0, 0, 0, 0, 0, 0, 1, 0}, 
    {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0}, 
    {1, 1, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0}, 
    {0, 1, 1, 0, 1, 1, 1, 0, 0, 0, 0, 0, 0}, 
    {0, 0, 1, 0, 0, 1, 1, 1, 0, 0, 0, 0, 0}, 
    {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0}, 
};
/*·�߶�Ӧ�Ľ�ͨ����ɫ��0��ʾû�ж�Ӧ��ɫ*/
int color[n] = {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0};
/*��¼��ͨ�Ʒ���������*/
static int total; 

/*�����ͨ����ɫ����*/
void PrintColor() {
    for(int i = 0; i < n; i++) {
    	cout<<path[i]<<" ";
        cout<<color[i]<<" ";
    }
    total++;
    if(total == 6)
    	exit(0);
    cout<<endl;
}

/*�ж��벻��ͬʱͨ�е�·�ߵ���ɫ�Ƿ���ͬ*/
int ColorSame(int s) {
    int flag = 0;
    for(int i = 0; i < s; i++) {
        if(data[i][s] == 1 && color[i] == color[s])
            flag = 1;
    }
    return flag;
}

/*�ݹ���ҽ�ͨ�Ʒ���*/
void Painting(int s) {
    /*s = 0~12�����s = 13˵���Ѿ�Ϳ��*/
    if(s == n)
        PrintColor();
    else {
        /*1��2��3��4����������ɫ*/
        for(int i = 1; i <= 4; i++) {
            color[s] = i;
            /*�����s��·�ߵĽ�ͨ����ɫ����Ҫ����ݹ鴦����s+1��*/ 
            if(ColorSame(s) == 0)
                Painting(s + 1);
        }
    }
}

int main() {
    total = 0;
    Painting(0);
    return 0;
}