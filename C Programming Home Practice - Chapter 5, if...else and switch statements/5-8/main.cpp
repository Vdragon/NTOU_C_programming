//�{���ج[(Program Frame)
//-------------------------------------------------------------------
//�{���W��(Program Name)�GC Programming Home Practice - Chapter 5, if...else and switch statements-8�C
//�{���ԭz(Program Description)�GInput an integer n. Check if it is a 5-digit even number (such as 12348, 96732, etc.) or 0. �C
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

//--------------�ŧi�P�w�q(Declaration & Definition)--------------
int num;
//--------------�D�n�{���X(Main Code)--------------
//�D��Ƭ[�c
//�����G1.00(3)
	int main(void)
	{
	   //���D
//�����G1.00(1)
printf("�{���W��(Program Name)�GC Programming Home Practice - Chapter 5, if...else and switch statements-8�C\n");
printf("�{���ԭz(Program Description)�G\nInput an integer n. Check if it is a 5-digit even number (such as 12348, 96732, etc.) or 0. �C\n");
printf("�{������(Program Version)�G1.00(0)\n");
printf("�{���׭q��(Program Revision Number)�G\n");
printf("�Т������@��B�@�����������I��������\n�Ϣ����@����������@��Ӣ�Ӣ��Ӣ�\n");
printf("�СССССССССССССССССССССССССССССССС�\n");

//input
	printf("�п�J�@�ӼƦr�G");
	scanf("%d", &num);

//think&output
   if((num  <=10000 || num >99999 || num% 2 == 1) && num != 0)
   {
      	printf("�D�]�A�o���O�s�Τ���ƪ����ƪ����ΡC \n");
   }
   else
   {
	printf("�S���A�o�O�s�Τ���ƪ����ƪ����ΡC \n");
   }
//�ϵ{���Ȱ��B��
//�����G1.00(7)

	//��k�@�J����t�Ϋ��O�]�����t�Φ��ġB��#include <stdlib.h>�^
      //printf("\n�СССССССССССССССССССССССССССССССС�\n��ܹB�浲�G�A�{���Ȱ��B��\n");
		//system("pause");

	//��k�G�G�B�ο�Jfunction�]��#include <stdio.h>�^
      printf("\n�СССССССССССССССССССССССССССССССС�\n��ܹB�浲�G�A�{���Ȱ��B��\n�Ы�Enter�~��");
		//���M��imput buffer
         //��k�@
            int ch;
            while ((ch = getchar()) != EOF && ch != '\n');
         //��k�G
            //scanf("%*[^\n]");
            //scanf("%*c");
		fgetc(stdin); //�Ѽ�stdin����L(stream�ӷ�)��J�]��scanf()�N�|�L�ġA���M��inputbuffer�^

		//�Ǧ^�Ʀr���]��{���B�榨�\�^
		//�����G1.00(1)
		//return�᭱���i�[���ѡI
			return 0;
	}
