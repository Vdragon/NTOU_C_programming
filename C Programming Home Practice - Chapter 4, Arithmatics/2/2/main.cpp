//�{���ج[(Program Frame)
//-------------------------------------------------------------------
//�{���W��(Program Name)�GC Programming Home Practice - Chapter 4, Arithmatics�C
//�{���ԭz(Program Description)�GNow we are dividing students into groups, 5 students in each group. I.e. students whose seat numbers are No. 1 to No. 5 are in Group 1. students whose seat numbers are No. 6 to No. 10 are in Group 2. And so on. Declare an integer variable seatNo to store the seat number, and another variable groupNo to store the group number. Write a C statement to assign the value of groupNo by seatNo.�C
//�{������(Program Version)�G1.00(0)
//�{���׭q��(Program Revision Number)�G
//�{���ج[����(Program Frame Version)�GA
//�{���ج[�׭q��(Program Frame Revision Number)�G9
//�̷s��s����(Latest Update Log)�G�C
/*
��L(Other)�G�C
*/
//��s����(Change Log)�G�C
//--------------�`�N�ƶ�--------------
/*
��.�C�@�yStatement�᭱�����y;�z
��.�O�oReturn 0;
*/
//--------------�{���X�}�l(Code Started)--------------
//--------------�e�m�B�z���ﶵ(Preprocessor Code)--------------
//standard input/output library
//�����G1.00(0)
	#include <stdio.h> //for printf(), scanf(), fgetc()

//C Standard General Utilities Library
//�����G1.00(0)
	#include <stdlib.h>
	/*
	for SYSTEM("pause") if working
	�DWindows�t�νT�w����ϥΡ]�]���L�Өt�Ϋ��O�^
	*/
//--------------�ŧi�P�w�q(Declaration & Definition)--------------
int groupNo, seatNo;
//--------------�D�n�{���X(Main Code)--------------
//�D��Ƭ[�c
//�����G1.00(3)
	int main(void)
	{

//���D
printf("�{���W��(Program Name)�GC Programming Home Practice - Chapter 4, Arithmatics�C\n");
printf("�{���ԭz(Program Description)�G\nNow we are dividing students into groups, 5 students in each group. I.e. students whose seat numbers are No. 1 to No. 5 are in Group 1. students whose seat numbers are No. 6 to No. 10 are in Group 2. And so on. Declare an integer variable seatNo to store the seat number, and another variable groupNo to store the group number. Write a C statement to assign the value of groupNo by seatNo.�C\n");
printf("�{������(Program Version)�G1.00(0)\n");
printf("�{���׭q��(Program Revision Number)�G\n");
printf("�Т������@��B�@�����������I��������\n�Ϣ����@����������@��Ӣ�Ӣ��Ӣ�\n");
printf("�СССССССССССССССССССССССССССССССС�\n");

//prompt
//�e����X
//�����G1.00(0)
	printf("�п�J�y���G");
//�q��L��J
//�����G1.00(1)
scanf("%d", &seatNo);

//think
groupNo = (seatNo - 1) / 5 + 1;

//output
//prompt
//�e����X
//�����G1.00(0)
	printf("�A�b��%d�աC\n", groupNo);

//�ϵ{���Ȱ��B��
//�����G1.00(6)
	//��k�@�J����t�Ϋ��O�]�����t�Φ��ġB��#include <stdlib.h>�^
      printf("\n�СССССССССССССССССССССССССССССССС�\n��ܹB�浲�G�A�{���Ȱ��B��\n");
		system("pause");

	//��k�G�G�B�ο�Jfunction�]��#include <stdio.h>�^
      //printf("\n�ССССССССССССССССССССССС�\n��ܹB�浲�G�A�{���Ȱ��B��\n�Ы�Enter�~��");
		//fgetc(stdin); //�Ѽ�stdin����L(stream�ӷ�)��J�]������o�Ӭ�M�L�ĤF�j�^

		//�Ǧ^�Ʀr���]��{���B�榨�\�^
		//�����G1.00(1)
		//return�᭱���i�[���ѡI
			return 0;
	}
