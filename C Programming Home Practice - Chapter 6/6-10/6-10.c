//�{���ج[(Program Frame)
//-------------------------------------------------------------------
//�{���W��(Program Name)�GC Programming Home Practice - Chapter 6-10�C
//�{���ԭz(Program Description)�GCalculate the sum of this series: 1+4+16+...+16384 (Hint: a geometric series with a common ratio of 4). The answer should be 21845. �C
//�{������(Program Version)�G1.00(0)
//�{���ج[����(Program Frame Version)�GA
//�{���ج[�׭q��(Program Frame Revision Number)�G14
//�̷s��s����(Latest Update Log)�Gbuild ok!�C
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

//--------------�D�n�{���X(Main Code)--------------
//�D��Ƭ[�c
//�����G1.00(5)
//�n�骺�B��qmain��ƶ}�l
	int main(void)
	{
      //�ŧi�P�w�q(Declaration & Definition)
      int scanfTriggered = 0;
      int sum, i;
//���D
//�����G1.00(3)
      printf("�{���W��(Program Name)�GC Programming Home Practice - Chapter 6-10�C\n");
      printf("�{���ԭz(Program Description)�G\nCalculate the sum of this series: 1+4+16+...+16384 (Hint: a geometric series with a common ratio of 3). The answer should be 21845. \n");
      printf("�{������(Program Version)�G1.00(0)\n");
      printf("�Т������@��B�@�����������I��������\n�Ϣ����@����������@��Ӣ�Ӣ��Ӣ�\n");
      printf("�СССССССССССССССССССССССССССССССС�\n");

//calc
	sum = 0;
	for(i = 1; i <= 16384; i = 4 * i)
	  {
		  sum = sum + i;
		 }
//output
	printf("sum=%d", sum);
	

//�СССССССССССССССССССССССССССССССССССССССС�
//�ϵ{���Ȱ��B��
//�����G1.00(14)
	//��k�@�J����t�Ϋ��O�]�����t�Φ��ġB��#include <stdlib.h>�^
      //printf("\n�СССССССССССССССССССССССССССССССС�\n��ܹB�浲�G�A�{���Ȱ��B��\n");
		//system("pause");
	//��k�G�G�B�ο�Jfunction�]��#include <stdio.h>�^
      printf("\n�СССССССССССССССССССССССССССССССС�\n��ܹB�浲�G�A�{���Ȱ��B��\n�Ы�Enter�~��");
		//���M��imput buffer
         //��k�@
         /*
            int ch;
            while ((ch = getchar()) != EOF && ch != '\n');
         */
         //��k�G
         //�ݥ���w�qint scanfTriggered = 0;
         if (scanfTriggered ==1)
         {
			scanf("%*[^\n]");
            scanf("%*c");
		 }


		fgetc(stdin); //�Ѽ�stdin����L(stream�ӷ�)��J�]��scanf()�N�|�L�ġA���M��inputbuffer�^


		//�Ǧ^�Ʀr���]��{���B�榨�\�^
		//�����G1.00(1)
		//return�᭱���i�[���ѡI
			return 0;
	}


