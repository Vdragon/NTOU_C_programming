//�{���ج[(Program Frame)
//-------------------------------------------------------------------
//�{���W��(Program Name)�GC Programming Home Practice - Chapter 6-7�C
//�{���ԭz(Program Description)�GAsk the user to input a positive integer. Print out the sum of 1 to this number.�C
//�{������(Program Version)�G1.00(1)
//�{���׭q��(Program Revision Number)�G
//�{���ج[����(Program Frame Version)�GA
//�{���ج[�׭q��(Program Frame Revision Number)�G9
//�̷s��s����(Latest Update Log)�Gdebug ������ܼơC
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

//--------------�ŧi�P�w�q(Declaration & Definition)--------------
   int lastNum, i,sum = 0 ;
//--------------�D�n�{���X(Main Code)--------------
//�D��Ƭ[�c
//�����G1.00(3)
	int main(void)
	{
//���D
//�����G1.00(1)
printf("�{���W��(Program Name)�GC Programming Home Practice - Chapter 6-7�C\n");
printf("�{���ԭz(Program Description)�G\nAsk the user to input a positive integer. Print out the sum of 1 to this number.�C\n");
printf("�{������(Program Version)�G1.00(0)\n");
printf("�Т������@��B�@�����������I��������\n�Ϣ����@����������@��Ӣ�Ӣ��Ӣ�\n");
printf("�СССССССССССССССССССССССССССССССС�\n");
   //prompt
      printf("�п�J����ơG");
      scanf("%d", &lastNum);
   //loop
      for(i = 1 ; i <= lastNum; i++)
   {
         sum = sum + i;
   }
   //output
      printf("1 �[�� %d ���ȬO%d�C", lastNum,sum);
//�ϵ{���Ȱ��B��
//�����G1.00(7)

	//��k�@�J����t�Ϋ��O�]�����t�Φ��ġB��#include <stdlib.h>�^
      //printf("\n�СССССССССССССССССССССССССССССССС�\n��ܹB�浲�G�A�{���Ȱ��B��\n");
		//system("pause");

	//��k�G�G�B�ο�Jfunction�]��#include <stdio.h>�^
      printf("\n�СССССССССССССССССССССССССССССССС�\n��ܹB�浲�G�A�{���Ȱ��B��\n�Ы�Enter�~��");
		//���M��imput buffer
         //��k�@
            //int ch;
            //while ((ch = getchar()) != EOF && ch != '\n');
         //��k�G
            scanf("%*[^\n]");
            scanf("%*c");
		fgetc(stdin); //�Ѽ�stdin����L(stream�ӷ�)��J�]��scanf()�N�|�L�ġA���M��inputbuffer�^

		//�Ǧ^�Ʀr���]��{���B�榨�\�^
		//�����G1.00(1)
		//return�᭱���i�[���ѡI
			return 0;
	}
