#pragma once
#include"data.h"	//�޸ĵ�


//�鿴��������
void searchAllInfo(PASSWORD pwd[], int nCount);
//��������
void insertInfo(PASSWORD pwd[], int *pnCount);
//ɾ������
void deleteInfo(PASSWORD pwd[], int *pnCount);
//�޸�����
void alterInfo(PASSWORD pwd[], int pnCount);
//��ѯ����
void searchInfo(PASSWORD pwd[], int pnCount);
//��������(�ı���ʽ)
void SaveInfoA(PASSWORD pwd[], int pnCount);
//��������(��������ʽ)
void SaveInfoB(PASSWORD pwd[], int pnCount);


//�ӱ����ļ��ж�ȡ���룬���ڳ�ʼ�����뱾
void readInfo(PPASSWORD * ppPwd, int *pnCount);

