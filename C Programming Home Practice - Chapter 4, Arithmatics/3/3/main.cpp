//-------------------------------------------------------------------
//�{���W��(Program Name)�GC Programming Home Practice - Chapter 4, Arithmatics-3�C
//�{���ԭz(Program Description)�GNow we are dividing students into 5 groups according to the seat numbers in round-robin fashion. I.e. Student No. 1 is in Group1, Student No. 2 is in Group2, Student No. 3 is in Group3, Student No. 4 is in Group4, Student No. 5 is in Group5, Student No. 6 is in Group1, Student No. 7 is in Group2, and so on. Similarly, declare an integer variable seatNo to store the seat number, and another variable groupNo to store the group number. Write a C statement to assign the value of groupNo by seatNo.Hint: the relationship between these two variables are:�C
//�{������(Program Version)�G1.00(0)
//�{���׭q��(Program Revision Number)�G
//�{���ج[����(Program Frame Version)�GA
//�{���ج[�׭q��(Program Frame Revision Number)�G9
//�̷s��s����(Latest Update Log)�Gbuild ok�C
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
int seatNo, groupNo;
//--------------�D�n�{���X(Main Code)--------------
//�D��Ƭ[�c
//�����G1.00(3)
	int main(void)
	{
//���D
//�����G1.00(1)
printf("�{���W��(Program Name)�GC Programming Home Practice - Chapter 4, Arithmatics-3�C\n");
printf("�{���ԭz(Program Description)�G\nNow we are dividing students into 5 groups according to the seat numbers in round-robin fashion. I.e. Student No. 1 is in Group1, Student No. 2 is in Group2, Student No. 3 is in Group3, Student No. 4 is in Group4, Student No. 5 is in Group5, Student No. 6 is in Group1, Student No. 7 is in Group2, and so on. Similarly, declare an integer variable seatNo to store the seat number, and another variable groupNo to store the group number. Write a C statement to assign the value of groupNo by seatNo.Hint: the relationship between these two variables are:�C\n");
printf("�{������(Program Version)�G1.00(0)\n");
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
groupNo = seatNo % 5;
if(groupNo == 0)
{
   groupNo = 5;
}
//output
//prompt
//�e����X
//�����G1.00(0)
	printf("�A�b��%d�աC", groupNo);

//�ϵ{���Ȱ��B��
//�����G1.00(6)

	//��k�@�J����t�Ϋ��O�]�����t�Φ��ġB��#include <stdlib.h>�^
      //printf("\n�СССССССССССССССССССССССССССССССС�\n��ܹB�浲�G�A�{���Ȱ��B��\n");
		//system("pause");

	//��k�G�G�B�ο�Jfunction�]��#include <stdio.h>�^
      printf("\n�СССССССССССССССССССССССССССССССС�\n��ܹB�浲�G�A�{���Ȱ��B��\n�Ы�Enter�~��");
		fgetc(stdin);


			return 0;
	}
