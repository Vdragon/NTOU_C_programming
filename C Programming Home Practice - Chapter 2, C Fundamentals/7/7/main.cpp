//�{���ج[(Program Frame)
//-------------------------------------------------------------------
//�{���W��(Program Name)�GC Programming Home Practice - Chapter 2, C Fundamentals-7�C
//�{���ԭz(Program Description)�G(Following the previous problem) Suppose that a boy has to offer $1,200 and a girl has to offer $1,000 as the class fund, what is the total amount of the class fund?�C
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
int numMale, numFemale;
//--------------�D�n�{���X(Main Code)--------------
//�D��Ƭ[�c
//�����G1.00(3)
	int main(void)
	{
//title
//�ù���X
//�����G1.00(2)
printf("C Programming Home Practice - Chapter 2, C Fundamentals-7\n");
printf("(Following the previous problem) Suppose that a boy has to offer $1,200 and a girl has to offer $1,000 as the class fund, \nwhat is the total amount of the class fund?\n");
printf("�ССССССССССССССССССССССССС�\n");

//ask
//�ù���X
//�����G1.00(2)
printf("�п�J�k�ͤH�ơG");
//assign
scanf("%d", &numMale);

//�ù���X
//�����G1.00(2)
printf("�п�J�k�ͤH�ơG");
//assign
scanf("%d", &numFemale);

//print ANS
//�ù���X
//�����G1.00(2)
printf("�Z�O�`�@%d���C�C", numMale * 1200 + numFemale * 1000);


//�ϵ{���Ȱ��B��
//�����G1.00(5)

	//��k�@�J����t�Ϋ��O�]�����t�Φ��ġB��#include <stdlib.h>�^
      printf("\n�ССССССССССССССССССССССС�\n��ܹB�浲�G�A�{���Ȱ��B��\n");
		system("pause");

	//��k�G�G�B�ο�Jfunction�]��#include <stdio.h>�^
      //printf("\n�ССССССССССССССССССССССС�\n��ܹB�浲�G�A�{���Ȱ��B��\n�Ы�Enter�~��");
		//fgetc(stdin); //�Ѽ�stdin����L(stream�ӷ�)��J�]������o�Ӭ�M�L�ĤF�j�^

		//�Ǧ^�Ʀr���]��{���B�榨�\�^
		//�����G1.00(1)
		//return�᭱���i�[���ѡI

			return 0;
	}
