//�{���ج[(Program Frame)
//-------------------------------------------------------------------
//�{���W��(Program Name)�G�C
//�{���ԭz(Program Description)�G�C
//�{������(Program Version)�G1.00(1)
//�{���׭q��(Program Revision Number)�G
//�{���ج[����(Program Frame Version)�GA
//�{���ج[�׭q��(Program Frame Revision Number)�G9
//�̷s��s����(Latest Update Log)�Gadd pause�C
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
float midterm, final, homework, totalScore;
//--------------�D�n�{���X(Main Code)--------------
//�D��Ƭ[�c
//�����G1.00(3)
	int main(void)
	{
//Title
//�ù���X
//�����G1.00(2)
printf("C Programming Home Practice - Chapter 2, C Fundamentals\n");
printf("(Following the previous problem) Ask the user to input these three scores and reply his total score.\n");
printf("�СССССССССССССССССССССССССССССССС�\n");

//ask
//�ù���X
//�����G1.00(2)
printf("�п�J�����Ҧ��Z�G");
//��J
//�����G1.00(1)
scanf("%f", &midterm);
//�ù���X
//�����G1.00(2)
printf("�п�J�����Ҧ��Z�G");
//��J
//�����G1.00(1)
scanf("%f", &final);
//�ù���X
//�����G1.00(2)
printf("�п�J���ɧ@�~���Z�G");
//��J
//�����G1.00(1)
scanf("%f", &homework);

//Calculate
totalScore = midterm * 0.3 + final *0.4 + homework * 0.3;

//output
//�ù���X
//�����G1.00(2)
printf("�`���Z��%f���C\n", totalScore);
//�ϵ{���Ȱ��B��
//�����G1.00(6)

	//��k�@�J����t�Ϋ��O�]�����t�Φ��ġB��#include <stdlib.h>�^
      //printf("\n�СССССССССССССССССССССССССССССССС�\n��ܹB�浲�G�A�{���Ȱ��B��\n");
		//system("pause");

	//��k�G�G�B�ο�Jfunction�]��#include <stdio.h>�^
      printf("\n�СССССССССССССССССССССССССССССССС�\n��ܹB�浲�G�A�{���Ȱ��B��\n�Ы�Enter�~��");
		fgetc(stdin); //�Ѽ�stdin����L(stream�ӷ�)��J�]������o�Ӭ�M�L�ĤF�j�^


		//�Ǧ^�Ʀr���]��{���B�榨�\�^
		//�����G1.00(1)
		//return�᭱���i�[���ѡI
			return 0;
	}
