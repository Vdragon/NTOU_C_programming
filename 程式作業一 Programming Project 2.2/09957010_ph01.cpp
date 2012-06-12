//�{���ج[(Program Frame)
//-------------------------------------------------------------------
//�{���W��(Program Name)�G�{���@�~�@ Programming Project 2.2�C
//�{���ԭz(Program Description)�GWrite a program that computes the volume of a sphere with a 10-meter radius, using the formula v= 4/3�kr 3. Write the fraction 4/3 as 4.0f/3.0f. (Do not use 4/3. You can try and see what happens.) Hint: C doesn't have an exponentiation operator, so you'll need to multiply r by itself twice to compute r 3.�C
//�{������(Program Version)�G1.00(0)
//�{���׭q��(Program Revision Number)�G
//�{���ج[����(Program Frame Version)�GA
//�{���ج[�׭q��(Program Frame Revision Number)�G9
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

//--------------�ŧi�P�w�q(Declaration & Definition)--------------
#define Pi 3.14159
float rad, vol;
//--------------�D�n�{���X(Main Code)--------------
//�D��Ƭ[�c
//�����G1.00(3)
	int main(void)
	{
//���D
//�����G1.00(1)
printf("�{���W��(Program Name)�G�{���@�~�@ Programming Project 2.2�C\n");
printf("�{���ԭz(Program Description)�G\nWrite a program that computes the volume�]��n�^ of a sphere�]�y��^ with a 10-meter radius, using the formula v= 4/3�kr 3. Write the fraction�]���ơ^ 4/3 as 4.0f/3.0f. (Do not use 4/3. You can try and see what happens.) Hint: C doesn't have an exponentiation�]�����^ operator, so you'll need to multiply r by itself twice to compute r 3.�C\n");
printf("�{������(Program Version)�G1.00(0)\n");
printf("�Т������@��B�@�����������I��������\n�Ϣ����@����������@��Ӣ�Ӣ��Ӣ�\n");
printf("�СССССССССССССССССССССССССССССССС�\n");

//prompt
//�ù���X
//�����G1.00(3)
//�\��G�b��Ц�m�B��X�r��
/*�Ϊk�]���βŸ���䤺�����e�Ҭ����ѡ^�G
printf("�y�ù���X�����e�]�]�AFormat conversion�榡�ഫ�r����Escape sequence����ǦC�r���^�v, �u�榡�ഫ�r���N���ܼƦW�]�h���ܼƫh�H�r�����}�A�e���ܼƤ��O�����e�ᤣ�P���榡�ഫ�š^�z");
*/
/*Escape sequence�d�ҡG
   \n��(new line)����r���A�۷����J�e�Ӣ���������f��
   \t��(tab)��X�@��[tab]
   \a��(alarm)�o�X�@�Өt���n��
   \\��((black slash)��X�@�Ӥϱ׽u (\)
   \"��((double quote)��X�@��double quote(")
*/
/*Format conversion�d�ҡG
   %d��(decimal number)�Q�i����
   %f��(float number)�B�I��
   %lf
   %.2f
*/
printf("�п�J�b�|�G");
//�q��L��J
//�����G1.00(2)
//�\��G�b��Ц�m�B��X�r��
/*�Ϊk�]���βŸ���䤺�����e�Ҭ����ѡ^�G
scanf("�y��L��J�����e�]�]�AFormat conversion�榡�ഫ�r���^�z,  &�u�榡�ഫ�r���N���ܼƦW�z");
*/
/*Format conversion�d�ҡG
   %d��(decimal number)�Q�i����
   %f��(float number)�B�I��
   %lf
   %.2f
*/
scanf("%f", &rad);
//testInput
	//printf("%f", rad);

//calc�]���F�קK�ܦ��p��ӡA�N�u/�v�B�⤸���k���@��令�D��ƧΦ��^
vol = (4 / 3.0) * Pi * rad * rad * rad;

//output
printf("�y����n���G%f�C", vol);

//�СССССССССССССССССССССССССССССС�//
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
