//�{���ج[(Program Frame)
//-------------------------------------------------------------------
//�{���W��(Program Name)�G�{���@�~�G Programming Project 2.6�C
//�{���ԭz(Program Description)�GWrite a program that asks the user ti enter a value for x and then displays the value of the following polynomial:3x5 + 2x4 - 5x3 - x2 + 7x - 6Write your the program so that the polynomial is evaluated using the formula:((((3x + 2)x - 5)x - 1)x + 7)x - 6Note that the modified program performs fewer multiplications. This technique for evaluating polynomials is known as Horner's Rule.�C
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
int scanfTriggered = 0;
float inputX, ans;
//--------------�D�n�{���X(Main Code)--------------
//�D��Ƭ[�c
//�����G1.00(3)
	int main(void)
	{
//���D
//�����G1.00(1)
printf("�{���W��(Program Name)�G�{���@�~�G Programming Project 2.6�C\n");
printf("�{���ԭz(Program Description)�G\nWrite a program that asks the user to enter a value for x and then displays the value of the following polynomial�]�h�����^:3x5 + 2x4 - 5x3 - x2 + 7x - 6  Write your the program so that the polynomial is evaluated�]�D�ȡH�^ using the formula:  ((((3x + 2)x - 5)x - 1)x + 7)x - 6  Note that the modified program performs fewer multiplications�]���k�^. This technique for evaluating polynomials is known as Horner's Rule.�C\n");
printf("�{������(Program Version)�G1.00(0)\n");
printf("�Т������@��B�@�����������I��������\n�Ϣ����@����������@��Ӣ�Ӣ��Ӣ�\n");
printf("�СССССССССССССССССССССССССССССССС�\n");

//prompt x
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
printf("�п�Jx�ȡG");
//�q��L��J
//�����G1.00(2)
//�\��G�b��Ц�m�B��X�r��
/*�Ϊk�]���βŸ���䤺�����e�Ҭ����ѡ^�G
scanf("�y��L��J�����e�]�]�AFormat conversion�榡�ഫ�r���^�v,  &�u�榡�ഫ�r���N���ܼƦW�z");
*/
/*Format conversion�d�ҡG
   %d��(decimal number)�Q�i����
   %f��(float number)�B�I��
   %lf
   %.2f
*/
scanfTriggered = 1;
scanf("%f", &inputX);

//calc
ans = ((((3 * inputX + 2) * inputX - 5) * inputX - 1) * inputX + 7) * inputX - 6;

//print
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
   \\��(black slash)��X�@�Ӥϱ׽u (\)
   \"��(double quote)��X�@��double quote(")
*/
/*Format conversion�d�ҡG
   %d��(decimal number)�Q�i����
   %f��(float number)�B�I��
   %lf
   %.2f
*/
printf("3��%f^5+2��%f^4-5��%f^3-%f^2+7��%f-6��%f", inputX, inputX, inputX, inputX, inputX, ans);

//�ϵ{���Ȱ��B��
//�����G1.00(9)
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
         if (scanfTriggered == 1)
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
