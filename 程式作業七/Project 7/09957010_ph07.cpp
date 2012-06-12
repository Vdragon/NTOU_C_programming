//�{���ج[(Program Frame)
//-------------------------------------------------------------------
//�{���W��(Program Name)�G�C
//�{���ԭz(Program Description)�G�C
//�{������(Program Version)�G1.00(0)
//�{���ج[����(Program Frame Version)�GA
//�{���ج[�׭q��(Program Frame Revision Number)�G19
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
*/
//--------------�{���X�}�l(Code Started)--------------
//--------------�e�m�B�z���ﶵ(Preprocessor Code)--------------
//standard input/output library
//�����G1.00(0)
	#include <stdio.h> //for printf(), scanf(), fgetc()
//string.h
//�����G1.00(0)
    #include <string.h>
//--------------���ҳ]�w(Enviroment Settings)--------------
//define debug var
	#define debug 0
//--------------����ŧi�P�w�q(Global Declaration & Definition)--------------
//global variable for ��k�G�G�B�ο�Jfunction�]��#include <stdio.h>�^
	short int scanfTriggered = 0;
//function prototype
	void pauseProgram();
    bool is_legalIdentifier(char str[]);
//--------------�D�n�{���X(Main Code)--------------
//���D��X���
//�����G1.00(5)
void printTitle()
    {
          printf("�{���W��(Program Name)�G�C\n");
          printf("�{���ԭz(Program Description)�G\n�C\n");
          printf("�{������(Program Version)�G1.00(0)\n");
          printf("�Т������@��B�@�����������I��������\n�Ϣ����@����������@��Ӣ�Ӣ��Ӣ�\n");
          printf("�СССССССССССССССССССССССССССССССС�\n");
    }

//main��Ƭ[�c
//�����G1.00(9)
//�n�骺�B��qmain��ƶ}�l
int main()
	{
	//�ŧi�P�w�q(Declaration & Definition)
    //define a char array for input
        char inputString[100];//identifier can't be over 32 chars + '\0'
    //define a string to be insert the test when false.
        char * notString = "not ";
        char * trueString = "";
	//�СССССССССССССССССССС�
    /*test ACSII code
        printf("A = %d, Z = %d, a = %d, z = %d, 0 = %d, 1 = %d, 9 = %d, _ = %d", 'A', 'Z', 'a', 'z', '0', '1', '9', '_');
        //result:   65      90      97     122      48      49      57      95
	*///test ACSII code
    //whole loopwhile(1){

	//ALL

    //printTitle
        //printTitle();
    //prompt
    //�����G1.00(0)
        printf("Enter a new identifier: ");
        gets(inputString);//reject the \n char
    //output
        printf("[%s] is %sa legal identifier.", inputString, is_legalIdentifier(inputString)?trueString:notString);
    ////ALL
    ////whole loopprintf("\n");}




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
bool is_legalIdentifier(char str[])
	{
		//�ŧi�P�w�q(Declaration & Definition)
        //define a movable pointer points at the first position
            char * ptrM = str;
		//�СССССССССССССССССССС�
        //first char is special, it shouldn't be non-alphabet.
            //if first char ASCII is not alphabet
                if((*ptrM < 65 || *ptrM > 90 /*BIG ALPHABET*/ )&&( *ptrM <97 || *ptrM > 122 /*small alphabet*/))
                    return false;
        //next to last char(not NULL CHAR) is alphanumberic+ underscore
            //for second char to not NULL CHAR
                for(ptrM++; *ptrM != '\0'; ptrM++)
                    {
                        //if other char is not alphanuberic or underscore...
                            if((*ptrM < 65/*'A'*/ || *ptrM > 90/*'Z'*//*BIG ALPHABET*/ )&&( *ptrM < 97/*'a'*/ || *ptrM > 122/*'z'*//*small alphabet*/) && (*ptrM < 48/*'0'*/ || *ptrM > 57/*'9'*/ /*number*/ )&& *ptrM != 95/*'_'*/)
                                return false;
                    }
		//�СССССССССССССССССССС�
		//�Ǧ^���e
		return true;//at last
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
