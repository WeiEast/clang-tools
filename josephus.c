#include <stdio.h>
#include <stdlib.h>

//Լɪ��˹

int josephus(int n, int start ,int m) ;

int main()
{
    printf(" josephus(2, 0,3)  is %d\n", josephus(5, 0, 3));

    return 0;
}

/*
n : int  ->����ʵ������
start : int ->��ʼ������
m : int -> ��������

����:
1.n��ʵ����������ӵ�һ����ʼ���� ����һ�κ� ��ȥ�����±� Ϊ m % n, ʣ�� n-1ʵ��
2.n��ʵ����������ӵڵڶ�����ʼ���� ����һ�κ� ��ȥ�����±� Ϊ (1+m) % n, ʣ�� n-1ʵ��
....
3.n��ʵ����������ӵڵ�start����ʼ���� ����һ�κ� ��ȥ�����±� Ϊ (start + m) % n, ʣ�� n-1ʵ��

���ɵõ�β�ݹ���ѧ���ʽ
    f(n, start, m) = (start + m) n =1;
    f(n, start, m) = f(n -1, (start + m) % n, m)  n > 1

���º���ʹ��ѭ��������(ע��: β�ݹ���Դﵽ��ѭ��һ���Ŀռ��Ч��)

*/

int josephus(int n, int start, int m)
{
    int i;
    int choice = start ;

    if(n < 1)
        return -1;


    for(i = n  ; i > 1; i--){

        choice = (choice + m) % i ;
        printf(" i = %d  is %d\n", i, choice);
    }


    return choice;
}
