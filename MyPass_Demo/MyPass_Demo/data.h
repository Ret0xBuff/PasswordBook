#pragma once

//�Զ�����������
//�������е��û�����Ϊö��

#define �鿴���� 1
#define ���� 2
#define ɾ�� 3
#define �޸� 4
#define ��ѯ 5
#define �����ı� 6
#define ��������� 7

//����洢�˺�����Ľṹ��
typedef struct _PASSWORD
{
	char website[100]; //վ����
	char userName[100]; //�˻���
	char passWord[100]; //����
	char note[100]; //��ע
}PASSWORD,*PPASSWORD;

//ȫ�ֱ���������������
#define NUM 1000	//��ʼ�����뱾����
extern int g_nNum;	//��ǰ���뱾����

