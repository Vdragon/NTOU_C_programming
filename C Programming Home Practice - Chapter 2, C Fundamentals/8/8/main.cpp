//�{���ج[(Program Frame)
//-------------------------------------------------------------------
//�{���W��(Program Name)�GC Programming Home Practice - Chapter 2, C Fundamentals-8�C
//�{���ԭz(Program Description)�GDeclare 4 floating-point variables as follows.�C
//�{������(Program Version)�G1.00(1)
//�{���׭q��(Program Revision Number)�G
//�{���ج[����(Program Frame Version)�GA
//�{���ج[�׭q��(Program Frame Revision Number)�G9
//�̷s��s����(Latest Update Log)�Gstructure change�C
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
float midterm = 72, final = 90, homework = 83, totalScore;
//--------------�D�n�{���X(Main Code)--------------
//�D��Ƭ[�c
//�����G1.00(3)
	int main(void)
	{
//Title
//�ù���X
//�����G1.00(2)
printf("C Programming Home Practice - Chapter 2, C Fundamentals\n");
printf("Declare 4 floating-point variables as follows.\n");
printf("�СССССССССССССССССССССССССССССССС�\n");

//Calculate
totalScore = midterm * 0.3 + final *0.4 + homework * 0.3;

//output
//�ù���X
//�����G1.00(2)
printf("������%f���C\n", midterm);
printf("������%f���C\n", final);
printf("���ɧ@�~%f���C\n", homework );
printf("�`���Z��%f���C\n", totalScore);

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
