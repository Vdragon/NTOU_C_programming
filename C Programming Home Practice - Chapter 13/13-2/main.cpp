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
//for problem
    void replace_symbol(char str[], char c);
//--------------�D�n�{���X(Main Code)--------------
//main��Ƭ[�c
//�����G1.00(10)
//�n�骺�B��qmain��ƶ}�l
//void�|��debugger�L�k�ҰʡI
int main(void)
	{
	//�ŧi�P�w�q(Declaration & Definition)


	//�СССССССССССССССССССС�
	//code from problem
        char mystr[100] = "A 6-foot boy's ID: 33-24_83-45##79";

        printf("Before replacement: %s\n", mystr);
        replace_symbol(mystr, '-');
        printf("After replacing -: %s\n", mystr);
        replace_symbol(mystr, '_');
        printf("After replacing _: %s\n", mystr);
        replace_symbol(mystr, '#');
        printf("After replacing #: %s\n", mystr);


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
void replace_symbol(char str[], char c)
	{
		//counter for//for loop for checking
			unsigned short int checkC;

		//�СССССССССССССССССССС�
		//for loop for checking, starting from 0 to char == \0
			for(checkC = 0; str[checkC] != '\0'; checkC++)
				{
					//if char checking == '-'
						if(str[checkC] == c)
							{
								//then assign space to the char
									str[checkC] = ' ';
								//test01
									if(debug == 1)
										{
											printf("Here!\n");
										}
								////test01
							}
					//test02
						if(debug == 1)
							{
								printf("Out Here!\n");
							}
					////test02
				}
		//test03
			if(debug == 1)
				{
					printf("Out Right Here!\n");
				}
		////test03
		//�СССССССССССССССССССС�
		//�Ǧ^���e
		return ;
	}

//�СССССССССССССССССССССССССССССССССССССССС�
//�ϵ{���Ȱ��B��
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

