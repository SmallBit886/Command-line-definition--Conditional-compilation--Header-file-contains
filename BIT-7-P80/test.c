#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
//3.4 �����ж���
/*
���C �ı������ṩ��һ���������������������ж�����š���������������̡�
���磺�����Ǹ���ͬһ��Դ�ļ�Ҫ�����һ������Ĳ�ͬ�汾��ʱ����������е��ô������ٶ�ĳ��
������������һ��ĳ�����ȵ����飬��������ڴ����ޣ�������Ҫһ����С�����飬��������һ������
�ڴ��Щ��������Ҫһ�������ܹ���Щ����
*/

/*//linux ������ʾ
int main()
{
	int array[ARRAY_SIZE];
	int i = 0;
	for (i = 0; i < ARRAY_SIZE; i++)
	{
		array[i] = i;
	}
	for (i = 0; i < ARRAY_SIZE; i++)
	{
		printf("%d ", array[i]);
	}
	printf("\n");
	return 0;
}
//����ָ��
gcc - D ARRAY_SIZE = 10 programe.c
*/


//3.5 ��������
/*
�ڱ���һ�������ʱ���������Ҫ��һ����䣨һ����䣩������߷����Ǻܷ���ġ���Ϊ��������������ָ�
����˵��
�����ԵĴ��룬ɾ����ϧ�������ְ��£��������ǿ���ѡ���Եı���
*/

//#define __DEBUG__	
int main()
{
	int i = 0;
	int arr[10] = { 0 };
	for (i = 0; i < 10; i++)
	{
		arr[i] = i;

#ifdef __DEBUG__	//���������__DEBUG__��ִ�б���
		printf("%d\n", arr[i]);//Ϊ�˹۲������Ƿ�ֵ�ɹ���
#endif //__DEBUG__

	}
	return 0;
}

//��������������ָ�
/*
1.#if �������ʽ
//...
#endif
//�������ʽΪ������룬Ϊ���򲻱���
�磺
#define __DEBUG__ 1
#if __DEBUG__
//..
#endif
*/

/*
2.�����֧����������
#if �������ʽ
//...
#elif �������ʽ
//...
#else
//...
#endif
*/

/*
3.�ж��Ƿ񱻶���
#if defined(symbol)
#ifdef symbol
#if !defined(symbol)
#ifndef symbol
*/

/*
4.Ƕ��ָ��
#if defined(OS_UNIX)
	#ifdef OPTION1
		unix_version_option1();
	#endif
	#ifdef OPTION2
		unix_version_option2();
	#endif
#elif defined(OS_MSDOS)
	#ifdef OPTION2
		msdos_version_option2();
	#endif
#endif
*/


//3.6 �ļ�����
//#include ָ�����ʹ����һ���ļ�������
/*
�����滻�ķ�ʽ�ܼ򵥣�
Ԥ��������ɾ������ָ����ð����ļ��������滻��
����һ��Դ�ļ�������10�Σ��Ǿ�ʵ�ʱ�����10��

*/
//3.6.1 ͷ�ļ��������ķ�ʽ��
//�����ļ�����	#include "filename.h"
/*
���Ҳ��ԣ�����Դ�ļ�����Ŀ¼�²��ң������ͷ�ļ�δ�ҵ���������������ҿ⺯��ͷ�ļ�һ���ڱ�
׼λ�ò���ͷ�ļ���
����Ҳ�������ʾ�������

Linux�����ı�׼ͷ�ļ���·����
/usr/include

VS�����ı�׼ͷ�ļ���·��:
C:\Program Files (x86)\Microsoft Visual Studio 12.0\VC\include
//����VS2013��Ĭ��·��
*/

//���ļ�����	#include <filename.h>
/*
����ͷ�ļ�ֱ��ȥ��׼·����ȥ���ң�����Ҳ�������ʾ�������
�����ǲ��ǿ���˵�����ڿ��ļ�Ҳ����ʹ�� ���� ����ʽ������
���ǿ϶��ģ����ԡ�
�������������ҵ�Ч�ʾ͵�Щ����Ȼ����Ҳ�����������ǿ��ļ����Ǳ����ļ���
*/

//3.6.2 Ƕ���ļ�����----ͷ�ļ��ظ�����
//�ļ����ݵ��ظ�
//��ֹ�ظ�����
#ifndef __TEST_H__
#define __TEST_H__
//ͷ�ļ�������
#endif //__TEST_H

//���ߣ�
#pragma once	//�Ϳ��Ա���ͷ�ļ����ظ����롣

/*
�Ƽ���������C/C++���ָ�ϡ��и�¼�Ŀ����Ծ�����Ҫ����
�����⣺
1. ͷ�ļ��е� ifndef/define/endif�Ǹ�ʲô�õ�?
2. #include <filename.h> �� #include "filename.h"��ʲô����?
*/

//4. ����Ԥ����ָ��
/*
#error
#pragma
#line
...

#pragma pack()�ڽṹ�岿�ֽ���
//�ο���C������Ƚ��ʡ�ѧϰ
*/

