#ifndef STICK_H_INCLUDED
#define STICK_H_INCLUDED

#include <stdlib.h>
#include<stdbool.h>
typedef struct spt_sticks_s {
    int quantity; //ľ��������
    int count; //ͳ�Ƶ�ǰ����
    int sum; //ͳ���ܳ���
    bool *visited; //����Ƿ��Ѿ��ɹ����
    int *sticks; //����ľ���ĳ���
}spt_sticks_t ;

int spt_sticks_init(spt_sticks_t * spt_s, int stick_quantity);
void spt_sticks_destroy(spt_sticks_t * spt_s);
int spt_sticks_append_stick(spt_sticks_t * spt_s, int stick_len);
int spt_sticks_get_min_origin(spt_sticks_t * spt_s);


#endif // STICK_H_INCLUDED
