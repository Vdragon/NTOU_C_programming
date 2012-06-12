//�{���ج[(Program Frame)
//-------------------------------------------------------------------
//�{���W��(Program Name)�GC Programming Home Practice - Chapter 4, Arithmatics-4�C
/*�{���ԭz(Program Description)�G
Now there is a promotion about Product A as follows:
buy two bottles of Product A, you will get a discount of 20% (�C���K��),
or 30% off for every three bottles of Product A (�C�T��C��).
The price for a bottle of Product A is $25.

Write a program to ask the user to input the number of bottles he would like to buy and reply the total price he has to pay.�C
*/
//�{������(Program Version)�G1.00(1)
//�{���׭q��(Program Revision Number)�G
//�{���ج[����(Program Frame Version)�GA
//�{���ج[�׭q��(Program Frame Revision Number)�G9
//�̷s��s����(Latest Update Log)�Gremove stdlib�C
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
int numBuy;
double sumPrice;
//--------------�D�n�{���X(Main Code)--------------
//�D��Ƭ[�c
//�����G1.00(3)
	int main(void)
	{
//���D
//�����G1.00(1)
printf("�{���W��(Program Name)�GC Programming Home Practice - Chapter 4, Arithmatics-4�C\n");
printf("�{���ԭz(Program Description)�G\nNow there is a promotion about Product A as follows:buy two bottles of Product A, you will get a discount of 20% (�C���K��),or 30% off for every three bottles of Product A (�C�T��C��).The price for a bottle of Product A is $25.�C\n");
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
printf("�аݶR�X���G");

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
scanf("%d", &numBuy);

//calc
sumPrice = (numBuy / 3 * 3) * 25 * 0.7 + ((numBuy - ( numBuy / 3 * 3)) / 2 * 2) * 25 * 0.8 + (numBuy - (numBuy / 3 * 3) - ((numBuy - ( numBuy / 3 * 3)) / 2 * 2)) * 25;

//output
//�ù���X
//�����G1.00(3)
//�\��G�b��Ц�m�B��X�r��
/*�Ϊk�]���βŸ���䤺�����e�Ҭ����ѡ^�G
printf("�y�ù���X�����e�]�]�AFormat conversion�榡�ഫ�r����Escape sequence����ǦC�r���^�v, �u�榡�ഫ�r���N���ܼƦW�]�h���ܼƫh�H�r�����}�A�e���ܼƤ��O�����e�ᤣ�P���榡�ഫ�š^�z");
*/
/*Escape sequence�d�ҡG
   \n��(new line)����r���A�۷����J�e�Ӣ�������������������f��
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
printf("�`���B%lf���C", sumPrice);

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
