//�{���ج[(Program Frame)
//-------------------------------------------------------------------
//�{���W��(Program Name)�GC Programming Home Practice - Chapter 4, Arithmatics-1�C
//�{���ԭz(Program Description)�GNow we are packing apples, six in a box. Write a program to receive the number of apples and reply the number of boxes we will need to pack these apples in the following two cases: if the number of the apples are not a multiple of 6, pack them or discard them.Hint: declare an integer variable numApple to store the number of apples, and another variable numBox to store the number of boxes needed. The relationship between these two variables are:�C
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
int numApple, numBox, numBox2;
//--------------�D�n�{���X(Main Code)--------------
//�D��Ƭ[�c
//�����G1.00(3)
	int main(void)
	{
	   //Title
   //�e����X
   //�����G1.00(0)
	printf("C Programming Home Practice - Chapter 4, Arithmatics-1\n");
   printf("�СССССССССССССССССССССССС�\n");
	printf("Now we are packing apples, six in a box.\n");
	printf("Write a program to receive the number of apples and reply the number of boxes we will need to pack these apples in the following two cases: if the number of the apples are not a multiple of 6, pack them or discard them.\n");
	printf("Hint: declare an integer variable numApple to store the number of apples, and another variable numBox to store the number of boxes needed. The relationship between these two variables are:\n");
   printf("�СССССССССССССССССССССССС�\n");

   //prompt ask
	printf("�п�Jī�G�ӼơG");
//��J
//�����G1.00(1)
scanf("%d", &numApple);

//thinkA
numBox = numApple / 6;
printf("�p�G�s����ī�G���˽c�A�ݭn%d�ӽc�l\n", numBox);

//thinkB
if(numApple % 6 != 0)
      {
         printf("�p�G�s����ī�G�]�n�˽c�A�h�ݭn%d�ӽc�l�C\n", numBox + 1);
      }
else
      {
         printf("�p�G�s����ī�G�]�n�˽c�A�h�ݭn%d�ӽc�l�C\n", numBox);
      }

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

