//�{���ج[(Program Frame)
//-------------------------------------------------------------------
//�{���W��(Program Name)�G�����Һ�q�D��ԸѡC
//�{���ԭz(Program Description)�G�����Һ�q�D��Ըѡ]�����^�C
//�{������(Program Version)�G1.00(0)
//�{���ج[����(Program Frame Version)�GA
//�{���ج[�׭q��(Program Frame Revision Number)�G14
//�̷s��s����(Latest Update Log)�G�C
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
int mystery(int a, int n)
	{
		while(a >= n)
			{
				int total = 0;
				while(a > 0)
					{
						total = total + a % n;
						a = a / n;
					}
					a = total;
			}
			return a;
	}

//�D��Ƭ[�c
//�����G1.00(5)
//�n�骺�B��qmain��ƶ}�l
	int main(void)
	{
      //�ŧi�P�w�q(Declaration & Definition)
	short int scanfTriggered = 0;
	//1
	short int seatNo, group, ID;
//���D
//�����G1.00(3)
      printf("�{���W��(Program Name)�G�����Һ�q�D��ԸѡC\n");
      printf("�{���ԭz(Program Description)�G\n�����Һ�q�D��Ըѡ]�����^�C\n");
      printf("�{������(Program Version)�G1.00(0)\n");
      printf("�Т������@��B�@�����������I��������\n�Ϣ����@����������@��Ӣ�Ӣ��Ӣҡ@������@�ܢ�ݢ�Ѣ�\n");
      printf("�СССССССССССССССССССССССССССССССС�\n");


/*
��.Suppose that the students are grouped in the following way...
	���]�ǥ̳ͭQ�H�U�C�覡���աD�D�D
	�]���^
	Write C expression to assign the values of "group" and "ID" with the value of "seatNo".
	�g�X�Q��seatNo�]�y���^���ܼƭȽ�Pgroup�]�էO�^��ID�]�עҡ^����ܼƤ��Ȫ��ѻy����F���C
*/
	printf("��.Suppose that the students are grouped in the following way...\n");
	printf("�@ ���]�ǥ̳ͭQ�H�U�C�覡���աD�D�D\n\n");
	printf("�@ �]���^\n\n");
	printf("�@ Write C expression to assign the values of \"group\" and \"ID\" with the value\n");
	printf("�@ of \"seatNo\".\n");
	printf("�@ �g�X�Q��seatNo�]�y���^���ܼƭȽ�Pgroup�]�էO�^��ID�]�עҡ^����ܼƤ��Ȫ�\n");
	printf("�@ �ѻy����F���C\n");

//answer
printf("\n�Се��סС�\n");
printf("\tgroup = (seatNo - 1) �H 5 + 1;\n");
printf("\tID = (seatNo - 1) / 5 + 1;\n");

//��X
printf("\n�Сп�X�С�\n");
	//print seatNo
	printf("seatNo ");
for(seatNo = 1 ;seatNo <= 20 ;seatNo++ )
{
	//�ù���X���
	//�����G1.00(8)
	//�\��G�b���ܲŦ�m�B��X�r��
	/*�Ϊk�]���βŸ���䤺�����e�Ҭ����ѡ^�G
	printf("�y�ù���X�����e�]�]�AFormat conversion�榡�ഫ�r����Escape sequence����ǦC�r���^�z", �y�榡�ഫ�r���N���ܼƦW�]�h���ܼƫh�H�r�����}�A�e���ܼƤ��O�����e�ᤣ�P���榡�ഫ�š^�z);
	*/
	/*Format conversion�d�ҡG
	   %�]N�^d���Q�i����
	*/
	printf("%2d ", seatNo);
}
printf("�K\n");//new line

	//print group
	printf("group  ");
for(seatNo = 1 ;seatNo <= 20 ;seatNo++ )
{
	group = (seatNo - 1/*���z�Q���l�ƳW�ߦV�y�k�z�����s�y�X��*/) % 5 + 1/*��0~4�ܦ�1~5*/;
	printf("%2d ", group);
}
printf("�K\n");//new line

	//print ID
	printf("ID     ");
for(seatNo = 1 ;seatNo <= 20 ;seatNo++ )
{
	ID = (seatNo - 1/*��5�����ƥ�b�P�@���W�ߤ��դ�*/) / 5 + 1/*�N�ӱq0���W��1*/;
	printf("%2d ", ID);
}
printf("�K\n");//new line

//
printf("\n\n\n");//new line
//

/*
��.Given a piece of a program:
	 �o�O�@�ӵ{���������q�G
	�]���^
	What are the "condition"s if we want to print out the following graph?
	����X�U�C�ϧΪ�"condition�]����^"���O����H
	�]���^
*/
	printf("��.Given a piece of a program:\n");
	printf("�@ �o�O�@�ӵ{���������q�G\n");
	printf("�@ �]���^\n");
	printf("�@ What are the \"condition\"s if we want to print out the following graph?\n");
	printf("�@ ����X�U�C�ϧΪ�\"condition�]����^\"���O����H\n");


	//(1)
	printf("(1)\n");
//��X
printf("\n�Сп�X�С�\n");
//def
short int size/*�x�}�����*/ = 10,  i, j;
//�бq�̸̭��j�骺�y�y(Statement)���~�ѪR
for(i = 0/*�qY�y�Ь�0�}�l*/; i < size/*��Y�y�е���size����*/; i++/*�v�����WY*/)
	{//�N���ܲŲ���U�@�C�����PY�y��
		for(j = 0/*�qX�y�Ь�0�}�l*/; j < size/*��X�y�е���size����*/; j++/*�v�����WX*/)
			{//�b�P�@�C���@�@��X�r�������PX�y��
				if(i + j > 4/*condition���ŦX����X, Y�y�����Y������*/)
					 {
						/*�N*/printf("��");
					 }
				else/*���M����*/
					{
						/*�N*/printf("�C");
					}
			}//���C���ʧ@����
		printf("\n");//���C�w��X��������
	}
//answer
printf("\n�Се��סС�\n");
printf("i + j > 4\n");
//newline
printf("\n");


	//(2)
	printf("(2)\n");
//��X
printf("\n�Сп�X�С�\n");

//�бq�̸̭��j�骺�y�y(Statement)���~�ѪR
for(i = 0/*�qY�y�Ь�0�}�l*/; i < size/*��Y�y�е���size����*/; i++/*�v�����WY*/)
	{//�N���ܲŲ���U�@�C�����PY�y��
		for(j = 0/*�qX�y�Ь�0�}�l*/; j < size/*��X�y�е���size����*/; j++/*�v�����WX*/)
			{//�b�P�@�C���@�@��X�r�������PX�y��
				if(j >= i - 1 &&/*AND*/ j <= i + 1/*condition���ŦX����X, Y�y�����Y������*/)
					 {
						/*�N*/printf("��");
					 }
				else/*���M����*/
					{
						/*�N*/printf("�C");
					}
			}//���C���ʧ@����
		printf("\n");//���C�w��X��������
	}

//answer
printf("\n�Се��סС�\n");
printf("j >= i - 1 && j <= i + 1\n");

//newline
printf("\n");

	//(3)
		printf("(3)\n");

//��X
printf("\n�Сп�X�С�\n");

//�бq�̸̭��j�骺�y�y(Statement)���~�ѪR
for(i = 0/*�qY�y�Ь�0�}�l*/; i < size/*��Y�y�е���size����*/; i++/*�v�����WY*/)
	{//�N���ܲŲ���U�@�C�����PY�y��
		for(j = 0/*�qX�y�Ь�0�}�l*/; j < size/*��X�y�е���size����*/; j++/*�v�����WX*/)
			{//�b�P�@�C���@�@��X�r�������PX�y��
				if(j/*Y�y��*/ % 4/*�H�C�|�Ӭ��@�ը��l = 0, 1, 2, 3*/ >= 2)
					 {/*condition���ŦX����X, Y�y�����Y������*/
						/*�N*/printf("��");
					 }
				else/*�l�ƬO0 , 1����*/
					{
						/*�N*/printf("�C");
					}
			}//���C���ʧ@����
		/*���C�w��X��������*/printf("\n");
	}

//answer
printf("\n�Се��סС�\n");
printf("j �H 4 >= 2\n");

//newline
printf("\n");

/*
��.Rewrite the following codes into simple statements:
�@ �N�U�C�{���X��g��²�䪺�y�y�G
*/
	printf("��.Rewrite the following codes into simple statements:\n");
	printf("�@ �N�U�C�{���X��g��²�䪺�y�y�G\n");
	printf("�@ �]���^\n");

//newline
printf("\n");

	//(1)
	printf("(1)\n");

//answer
printf("�Се��סС�\n");
printf("a[i] = a[i] + (i �H 3 + 1) * 2;\n");


//newline
printf("\n");

	//(2)
	printf("(2)\n");

//answer
printf("�Се��סС�\n");
printf("int b[4] = {1,7,6,4};\n");
printf("a[i] = a[i] + b[i �H 4];\n");

//newline
printf("\n");

	//(3)
	printf("(3)\n");

//answer
printf("�Се��סС�\n");
printf("for(i = 0;  i<21; i++)\n");
printf("�@ if(i �H 7 < 3) printf(\"$\")\n");
printf("�@ else printf(\"#\")\n");

//newline
printf("\n");

/*
��.Given a mysterious function:
�@ �o�̦��@�ӯ�������ơG

�@ �]���^

�@ What is the execution result of the following statement?
�@ �аݤU�C�y�y�����浲�G����H
*/
printf("��.Given a mysterious function:\n");
printf("�@ �o�̦��@�ӯ�������ơG\n");
printf("\n�@ �]���^\n\n");
printf("�@ What is the execution result of the following statement?\n");
printf("�@ �аݤU�C�y�y�����浲�G����H\n");

//newline
printf("\n");

//��X
printf("\n�Сп�X�С�\n");

printf("The mysterious number of %d is %d.", 1987, mystery(1987, 8));

/*
��.Please rewrite the following "for"-loops into "while"-loops.
�@ �бN�U�����Ѫ�for�j���g��while�j��C

�@ �]���^

*/

printf("��.Please rewrite the following \"for\"-loops into \"while\"-loops\n");
printf("�@ �бN�U�����Ѫ�for�j���g��while�j��C\n");
printf("\n�@ �]���^\n\n");

//newline
printf("\n");

	//(1)
	printf("(1)\n");
//answer
printf("�Се��סС�\n");
printf("//�бq�̸̭��j�骺�y�y(Statement)���~�ѪR\n");
printf("int i, j, sum;\n");
printf("/*�e������b�j��e��*/\n");
printf("i = 0;/*�ĤG�h�j�骺�e��*/\n");
printf("while(i < 4)/*�ĤG�h�j��O�d��for�j�骺condition*/\n");
printf("	{/*�ĤG�h�j��}�l*/\n");
printf("		sum = 0;\n");
printf("		\n");
printf("		j = 0;/*�Ĥ@�h�j�骺�e��*/\n");
printf("		while(j < i)/*�Ĥ@�h�j��O�d��for�j�骺condition*/\n");
printf("			{/*�Ĥ@�h�j��}�l*/\n");
printf("				sum = sum + j;\n");
printf("				\n");
printf("				j++;/*�Ĥ@�h�j�骺increment��b�j�餺���̫�B*/\n");
printf("			}/*�Ĥ@�h�j�鵲��*/\n");
printf("		printf(\"%d, \", sum);\n");
printf("		i++;/*�ĤG�h�j�骺increment��b�j�餺���̫�B*/\n");
printf("	}/*�ĤG�h�j�鵲��*/\n");

//newline
printf("\n");

	//(2)
	printf("(2)\n");
//answer
printf("�Се��סС�\n");
printf("int i, j;\n");
printf("/*�e������b�j��e��*/\n");
printf("i = 0;j = 20;/*for�j�骺�e��*/\n");
printf("while(i < j)/*�j��O�d��for�j�骺condition*/\n");
printf("	{/*�j��}�l*/\n");
printf("		printf(\"(%d, %d)-\", i, j);\n");
printf("		\n");
printf("		i += 3; j -= 2;/*��j�骺increment��b�j�餺���̫�B*/\n");
printf("	}/*�j�鵲��*/\n");

//newline
printf("\n");

/*
��.What are the results of the programs in Question 5?
�@ �Ĥ��D����X���G����H
*/
printf("��.What are the results of the programs in Question 5?\n");
printf("�@ �Ĥ��D����X���G����H \n");

//newline
printf("\n");

	//(1)
	printf("(1)\n");

//��X
printf("\n�Сп�X�С�\n");
int i2, j2, sum;
for(i2 = 0; i2 < 4; i2++)
	{
		sum = 0;
		for(j2 = 0; j2 < i2; j2++)
			{
				sum = sum + j2;
			}
		printf("%d, ", sum);
	}

//newline
printf("\n\n\n");

	//(2)
	printf("(2)\n");

//��X
printf("\n�Сп�X�С�\n");
int i3, j3;
for(i3 = 0, j3 = 20; i3 < j3; i3 += 3, j3 -= 2)
	{
		printf("(%d, %d)-", i3, j3);
	}

//newline
printf("\n\n\n");

/*
��.
(1)What are the results of the programs in Question 5?
�@ �Ĥ��D����X���G����H
*/


//�СССССССССССССССССССССССССССССССССССССССС�
//�ϵ{���Ȱ��B��
//�����G1.00(15)
	//��k�@�J����t�Ϋ��O�]�����t�Φ��ġB��#include <stdlib.h>�^
      //printf("\n�СССССССССССССССССССССССССССССССС�\n��ܹB�浲�G�A�{���Ȱ��B��\n");
		//system("pause");
	//��k�G�G�B�ο�Jfunction�]��#include <stdio.h>�^
      printf("\n�СССССССССССССССССССССССССССССССС�\n��ܹB�浲�G�A�{���Ȱ��B��\n�Ы�Enter�~��");
		//���M��imput buffer
         //��k�@
         /*
            short int ch;
            while ((ch = getchar()) != EOF && ch != '\n');
         */
         //��k�G
         //�ݥ���w�q
         //short int scanfTriggered = 0;

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
