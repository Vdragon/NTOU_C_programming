//�{���ج[(Program Frame)
//-------------------------------------------------------------------
//�{���W��(Program Name)�GC Programming Home Practice - Chapter 2, C Fundamentals 5.�C
//�{���ԭz(Program Description)�GDeclare three integer variables: chnGrade, engGrade, and mathGrade to store the scores of Chinese, English, and Math courses, respectively. Ask the user to input these three scores and reply his total score.�C
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
   int chnGrade, engGrade, mathGrade, totalScore;
//--------------�D�n�{���X(Main Code)--------------
//�D��Ƭ[�c
//�����G1.00(3)
	int main()
	{
	   //title
      //�ù���X
      //�����G1.00(0)
               printf("C Programming Home Practice - Chapter 2, C Fundamentals 5\n");
               printf("Declare three integer variables: chnGrade, engGrade, and mathGrade \nto store the scores of Chinese, English, and Math courses, respectively.\n Ask the user to input these three scores and reply his total score.\n");
               printf("�ССССССССССССССССССССССССССССССС�\n");

      //print Q &Scan Q
               printf("�п�J��妨�Z(Score of Chinese course)�]��ơ^�G");
      scanf("%d", &chnGrade);
               printf("�п�J�^�妨�Z(Score of English course)�]��ơ^�G");
      scanf("%d", &engGrade);
                printf("�п�J�ƾǦ��Z(Score of Math course)�]��ơ^�G");
      scanf("%d", &mathGrade);

      //test
      //printf("%d\n%d\n%d\n",chnGrade, engGrade, mathGrade);

      //calculation
      totalScore = chnGrade + engGrade + mathGrade;

      //output
      printf("�`���O(Total Score is)�G%d�C", totalScore);
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
