//�{���ج[(Program Frame)
//-------------------------------------------------------------------
//�{���W��(Program Name)�G�C
//�{���ԭz(Program Description)�G�C
//�{������(Program Version)�G1.00(0)
//�{���ج[����(Program Frame Version)�GA
//�{���ج[�׭q��(Program Frame Revision Number)�G21
//�̷s��s����(Latest Update Log)�Gbuild ok�C
/*
��L(Other)�G�C
*/
//��s����(Change Log)�G�C
//--------------�`�N�ƶ�--------------
/*
��.�C�@�yStatement�᭱�����y;�z�C
��.�O�oReturn 0;�C
��.��BUG���ˬdscanf�C
��.compiler�i�঳�B�z��ơB�ܼƤ�����A���n�P�ɳB�z��̡C
��.�B���ƭn�`�N�O�_��return�ȡC
��.�bcondition statement ���n�ϥΦh��AND�BOR�V�X���P�_�y�ɩy�NAND���j���UOR�y�άA���A�_�ӡC
��.������]�G��int main(){}�~��ΰ����u��C
*/
//--------------�{���X�}�l(Code Started)--------------
//--------------�e�m�B�z���ﶵ(Preprocessor Code)--------------
//standard input/output library
//�����G1.00(0)
	#include <stdio.h> //for printf(), scanf(), fgetc()
//--------------���ҳ]�w(Enviroment Settings)--------------
//define debug functionality
	#define debug 0
//OS Catergory
	#define SYSTEM 0//Windows console = 0, Linux console = 1
//--------------����ŧi�P�w�q(Global Declaration & Definition)--------------
//global variable
//global variable for ��k�G�G�B�ο�Jfunction�]��#include <stdio.h>�^
	short int scanfTriggered = 0;

//function prototype
//function prototype for//�ϵ{���Ȱ��B��
	void pauseProgram();
	void encrypt(char str[]);
//--------------�D�n�{���X(Main Code)--------------
//main��Ƭ[�c
//�����G1.00(10)
//�n�骺�B��qmain��ƶ}�l
//void�|��debugger�L�k�ҰʡI
int main()
	{
	//�ŧi�P�w�q(Declaration & Definition)


	//�СССССССССССССССССССС�
	//code from problem
        char str1[100] = "A funny guy. @@";
        /*test01
        char str1[100] = "abcdefghi";
        *///test01
        char str2[100] = "It is 10:15 now.";
        encrypt(str1); encrypt(str2);
        printf("Encrypted str1: %s\n", str1);
        printf("Encrypted str2: %s\n", str2);


    //pause
        pauseProgram();
	//�СССССССССССССССССССС�
		//�Ǧ^�Ʀr���]��{���B�榨�\�^
		//�����G1.00(1)
		//return�᭱���i�[���ѡI
			return 0;
	}
//��L��Ƭ[�c
//�����G1.00(1)
/*
returnType functionName(auguments)
*/
void encrypt(char str[])
	{
		//�ŧi�P�w�q(Declaration & Definition)
        //counter for count string char
            unsigned int charC;
		//�СССССССССССССССССССС�
        //for first to last char loop
            for(charC = 0; str[charC] != '\0'; charC++)
                {
                    //if were UPPER CASE
                        if(str[charC] >= 65 && str[charC] <= 90/*UPPER CASE*/)
                            {
                                //all use mod to make fair
                                    str[charC] = (((str[charC] - 65)/*0~25*/ + 2)/*2~27*/ % 26) + 65;
                                //continue
                                    continue;
                            }
                    //if were LOWER CASE
                        if(str[charC] >= 97 && str[charC] <= 122/*lower CASE*/)
                            {
                                //all use mod to make fair
                                    str[charC] = (((str[charC] - 97)/*0~25*/ + 2)/*2~27*/ % 26) + 97;
                                //continue
                                    continue;

                            }
                    //if were digit
                        if(str[charC] >= 48 && str[charC] <= 57/*UPPER CASE*/)
                            {
                                //all use mod to make fair
                                    str[charC] = (((str[charC] - 48)/*0~9*/ + 9)/*9~18*/ % 10) + 48;
                                //continue
                                    continue;

                            }

                }


		//�СССССССССССССССССССС�
		//�Ǧ^���e
		return ;
	}
//�СССССССССССССССССССС�
//�ϵ{���Ȱ��B��
//�ССССССССССССССССССС�
//�����G1.00(27)
void pauseProgram()
    {
        //make a line
            printf("\n�СССССССССССССССССССССССССССССССС�\n");
        /*�}��
            //��k�@�J����t�Ϋ��O�]��Windows�t�Φ��ġB��#include <stdlib.h>�^
                printf("��ܹB�浲�G�A�{���Ȱ��B��\n");
                system("pause");
        */
            //��k�G�G�B�ο�Jfunction�]��#include <stdio.h>�^
                //���M��input buffer
                //�ݥ���w�qshort int scanfTriggered = 0;
                    //��k�@
                    /*�}��
                        if (scanfTriggered == 1)
                            {
                                  short int ch;
                                  while ((ch = getchar()) != EOF && ch != '\n');
                            }
                    */
                    //��k�G
                    //�}��
                        if (scanfTriggered == 1)
                            {
                                scanf("%*[^\n]");
                                scanf("%*c");
                            }
                    //
                //�}��
                //print message
                    printf("��ܹB�浲�G�A�{���Ȱ��B��\n�Ы�Enter�~��");
                //get char from keyboard
                    fgetc(stdin); //�Ѽ�stdin����L(stream�ӷ�)��J�]��scanf()�N�|�L�ġA���M��inputbuffer�^
                  //
    }

