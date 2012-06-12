//程式框架(Program Frame)
//-------------------------------------------------------------------
//程式名稱(Program Name)：。
//程式敘述(Program Description)：。
//程式版本(Program Version)：1.00(0)
//程式框架版本(Program Frame Version)：A
//程式框架修訂號(Program Frame Revision Number)：19
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
*/
//--------------程式碼開始(Code Started)--------------
//--------------前置處理器選項(Preprocessor Code)--------------
//standard input/output library
//版本：1.00(0)
	#include <stdio.h> //for printf(), scanf(), fgetc()
//string.h
//版本：1.00(0)
    #include <string.h>
//--------------環境設定(Enviroment Settings)--------------
//define debug var
	#define debug 0
//--------------全域宣告與定義(Global Declaration & Definition)--------------
//global variable for 方法二：運用輸入function（需#include <stdio.h>）
	short int scanfTriggered = 0;
//function prototype
	void pauseProgram();
    bool is_legalIdentifier(char str[]);
//--------------主要程式碼(Main Code)--------------
//標題輸出函數
//版本：1.00(5)
void printTitle()
    {
          printf("程式名稱(Program Name)：。\n");
          printf("程式敘述(Program Description)：\n。\n");
          printf("程式版本(Program Version)：1.00(0)\n");
          printf("Ｂｕｉｌｄ　ｂｙ　Ｖｄｒａｇｏｎ＠２０１０\nＡｌｌ　ｒｉｇｈｔｓ　ＲＥＳＥＲＶＥＤ\n");
          printf("－－－－－－－－－－－－－－－－－－－－－－－－－－－－－－－－－\n");
    }

//main函數架構
//版本：1.00(9)
//軟體的運行從main函數開始
int main()
	{
	//宣告與定義(Declaration & Definition)
    //define a char array for input
        char inputString[100];//identifier can't be over 32 chars + '\0'
    //define a string to be insert the test when false.
        char * notString = "not ";
        char * trueString = "";
	//－－－－－－－－－－－－－－－－－－－－－
    /*test ACSII code
        printf("A = %d, Z = %d, a = %d, z = %d, 0 = %d, 1 = %d, 9 = %d, _ = %d", 'A', 'Z', 'a', 'z', '0', '1', '9', '_');
        //result:   65      90      97     122      48      49      57      95
	*///test ACSII code
    //whole loopwhile(1){

	//ALL

    //printTitle
        //printTitle();
    //prompt
    //版本：1.00(0)
        printf("Enter a new identifier: ");
        gets(inputString);//reject the \n char
    //output
        printf("[%s] is %sa legal identifier.", inputString, is_legalIdentifier(inputString)?trueString:notString);
    ////ALL
    ////whole loopprintf("\n");}




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
bool is_legalIdentifier(char str[])
	{
		//宣告與定義(Declaration & Definition)
        //define a movable pointer points at the first position
            char * ptrM = str;
		//－－－－－－－－－－－－－－－－－－－－－
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
		//－－－－－－－－－－－－－－－－－－－－－
		//傳回內容
		return true;//at last
	}
//－－－－－－－－－－－－－－－－－－－－－－－－－－－－－－－－－－－－－－－－－
//使程式暫停運行
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
