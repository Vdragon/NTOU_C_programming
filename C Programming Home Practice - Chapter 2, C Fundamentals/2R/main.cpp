//�{���ج[(Program Frame)
//-------------------------------------------------------------------
//�{���W��(Program Name)�GC Programming Home Practice - Chapter 2, C Fundamentals (2)�C
//�{���ԭz(Program Description)�GPrint an ASCII picture�C
//�{������(Program Version)�G1.00(2)
//�{���׭q��(Program Revision Number)�G
//�{���ج[����(Program Frame Version)�GA
//�{���ج[�׭q��(Program Frame Revision Number)�G6
//�̷s��s����(Latest Update Log)�Gbuild ok�C
/*
��L(Other)�G
��.Using function:printf(), fgetc()�C
��.�����D������X����return 0�᭱���i�[����
	g++ -Wall -c "main.cpp"(�b�ؿ�: /media/PRIVATE/�s�{/�ѻy��/�{���]�p���/C Programming Home Practice - Chapter 2, C Fundamentals/2)
	main.cpp:39:12: warning: multi-line comment
	main.cpp: In function ��int main()��:
	main.cpp:39: error: expected ��}�� at end of input
	�sĶ����.
*/
//��s����(Change Log)�G�C
//--------------�`�N�ƶ�--------------
/*
��.�C�@�yStatement�᭱�����y;�z
��.�O�oReturn 0;
*/
//--------------�{���X�}�l(Code Started)--------------
//--------------�e�m�B�z���ƶ�(Preprocessor Code)--------------
#include <stdio.h> //for printf(), scanf(), fgetc()
//--------------�D�n�{���X(Main Code)--------------
int main(void)
{
//�e����X
//�����G1.00(0)
	printf(" _\\||/         _\\||/        _\\||/        _\\||/       \n");
	printf(" |_^  /       |_@  /       |_\\  /       |_0--/       \n");
	printf("  /   /        /   /        /   /        /   /       \n");
	printf("_| _ //....> _| _ //....> _| _ //....>  _| _//....>�@\n");
	printf("���� �w�w�s�@�o�b �w�w�s�@�i�� �w�w�s�@�����誺�w�w�s\n");
//�s�y�Ȱ��B��
//�����G1.00(1)
	printf("�Ы����N���~�� ");
	//��k�@�J�t�Ϋ��O�]�����t�Φ��ġB��#include <stdlib.h>�^
		//system("pause");
	//��k�G�G�B�ο�Jfunction�]��#include <stdio.h>�^
		fgetc(stdin); //�Ѽ�stdin����L(stream�ӷ�)��J

//�Ǧ^�Ʀr���]��{���B�榨�\�^
//�����G1.00(1)
//return 0;�᭱���i�[���ѡI
    return 0;
}

