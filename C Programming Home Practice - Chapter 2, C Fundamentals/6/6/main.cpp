//�{���ج[(Program Frame)
//-------------------------------------------------------------------
//�{���W��(Program Name)�GC Programming Home Practice - Chapter 2, C Fundamentals-6�C
//�{���ԭz(Program Description)�GAsk the user how many boys and girls there are in his/her class. Reply the total number of students in the class.�C
//�{������(Program Version)�G1.00(1)
//�{���׭q��(Program Revision Number)�G
//�{���ج[����(Program Frame Version)�GA
//�{���ج[�׭q��(Program Frame Revision Number)�G9
//�̷s��s����(Latest Update Log)�G�L�ץ��C
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
//TITLE
//�ù���X
//�����G1.00(1)
    printf("C Programming Home Practice - Chapter 2, C Fundamentals-6\n");
//�ù���X
//�����G1.00(1)
    printf("Ask the user how many boys and girls there are in his/her class.\nReply the total number of students in the class.\n");
//�ù���X
//�����G1.00(1)
printf("�ССССССССССССССССССССССС�\n");

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
    printf("�Z�W�`�@��%d�H�C", numMale + numFemale);

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
