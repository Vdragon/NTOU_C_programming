//�{���ج[(Program Frame)
//-------------------------------------------------------------------
//�{���W��(Program Name)�G�{���@�~�� Programming Project 8.1�C
//�{���ԭz(Program Description)�GModify the repdigit.c program of Section 8.1 so that it shows which digits (if any) were repeated: �C
//�{������(Program Version)�G1.00(0)
//�{���ج[����(Program Frame Version)�GA
//�{���ج[�׭q��(Program Frame Revision Number)�G14
//�̷s��s����(Latest Update Log)�Gbuild ok(52min)�C
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
   int digit_seen[10] = {0};
   int repeat[10] = {0};
   int digit;
   long int n;
   int countA = 0;
   int token = 0;

//���D
//�����G1.00(3)
      printf("�{���W��(Program Name)�G�{���@�~�� Programming Project 8.1�C\n");
      printf("�{���ԭz(Program Description)�G\nModify the repdigit.c program of Section 8.1 so that it shows which digits (if any) were repeated: �C\n");
      printf("�{������(Program Version)�G1.00(0)\n");
      printf("�Т������@��B�@�����������I��������\n�Ϣ����@����������@��Ӣ�Ӣ��Ӣ�\n");
      printf("�СССССССССССССССССССССССССССССССС�\n");

	//prompt
   printf("Enter a number: ");
   scanfTriggered = 1;
   scanf("%ld", &n);

   //think
   while (n > 0) {
      digit = n % 10;
      if (digit_seen[digit])
				{//repeated
							//test ok
							//printf("Here!\n");
				token = 1;
				repeat[digit] = 1;
				}
      digit_seen[digit] = 1;
      n /= 10;
   }



//output
   if (token == 1)
   {
   	printf("Repeated digit(s):");
		while(countA <  10)
		{
			if(repeat[countA] == 1)
			{
				printf(" %d", countA);

			}
				countA++;
		}

   }
   else
      printf("No repeated digit");



//}













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

