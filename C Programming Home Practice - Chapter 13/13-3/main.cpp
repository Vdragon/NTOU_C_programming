//程式框架(Program Frame)
//-------------------------------------------------------------------
//程式名稱(Program Name)：。
//程式敘述(Program Description)：。
//程式版本(Program Version)：1.00(0)
//程式框架版本(Program Frame Version)：A
//程式框架修訂號(Program Frame Revision Number)：21
//最新更新紀錄(Latest Update Log)：build ok。
/*
其他(Other)：。
*/
//更新紀錄(Change Log)：。
//--------------注意事項--------------
/*
１.每一句Statement後面必接『;』。
２.記得Return 0;。
３.有BUG先檢查scanf。
４.compiler可能有處理函數、變數之先後，不要同時處理兩者。
５.運行函數要注意是否有return值。
６.在condition statement 中要使用多個AND、OR混合之判斷句時宜將AND分隔之各OR句用括號括起來。
７.不明原因：需int main(){}才能用偵錯工具。
*/
//--------------程式碼開始(Code Started)--------------
//--------------前置處理器選項(Preprocessor Code)--------------
//standard input/output library
//版本：1.00(0)
	#include <stdio.h> //for printf(), scanf(), fgetc()
//--------------環境設定(Enviroment Settings)--------------
//define debug functionality
	#define debug 0
//OS Catergory
	#define SYSTEM 0//Windows console = 0, Linux console = 1
//--------------全域宣告與定義(Global Declaration & Definition)--------------
//global variable
//global variable for 方法二：運用輸入function（需#include <stdio.h>）
	short int scanfTriggered = 0;

//function prototype
//function prototype for//使程式暫停運行
	void pauseProgram();
	void encrypt(char str[]);
//--------------主要程式碼(Main Code)--------------
//main函數架構
//版本：1.00(10)
//軟體的運行從main函數開始
//void會使debugger無法啟動！
int main()
	{
	//宣告與定義(Declaration & Definition)


	//－－－－－－－－－－－－－－－－－－－－－
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
	//－－－－－－－－－－－－－－－－－－－－－
		//傳回數字０（表程式運行成功）
		//版本：1.00(1)
		//return後面不可加註解！
			return 0;
	}
//其他函數架構
//版本：1.00(1)
/*
returnType functionName(auguments)
*/
void encrypt(char str[])
	{
		//宣告與定義(Declaration & Definition)
        //counter for count string char
            unsigned int charC;
		//－－－－－－－－－－－－－－－－－－－－－
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


		//－－－－－－－－－－－－－－－－－－－－－
		//傳回內容
		return ;
	}
//－－－－－－－－－－－－－－－－－－－－－
//使程式暫停運行
//－－－－－－－－－－－－－－－－－－－－
//版本：1.00(27)
void pauseProgram()
    {
        //make a line
            printf("\n－－－－－－－－－－－－－－－－－－－－－－－－－－－－－－－－－\n");
        /*開關
            //方法一︰執行系統指令（僅Windows系統有效、需#include <stdlib.h>）
                printf("顯示運行結果，程式暫停運行\n");
                system("pause");
        */
            //方法二：運用輸入function（需#include <stdio.h>）
                //先清除input buffer
                //需全域定義short int scanfTriggered = 0;
                    //方法一
                    /*開關
                        if (scanfTriggered == 1)
                            {
                                  short int ch;
                                  while ((ch = getchar()) != EOF && ch != '\n');
                            }
                    */
                    //方法二
                    //開關
                        if (scanfTriggered == 1)
                            {
                                scanf("%*[^\n]");
                                scanf("%*c");
                            }
                    //
                //開關
                //print message
                    printf("顯示運行結果，程式暫停運行\n請按Enter繼續");
                //get char from keyboard
                    fgetc(stdin); //參數stdin表鍵盤(stream來源)輸入（有scanf()就會無效，須清除inputbuffer）
                  //
    }

