//程式框架(Program Frame)
//-------------------------------------------------------------------
//程式名稱(Program Name)：16-1。
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

//--------------環境設定(Enviroment Settings)--------------
//define debug var
	#define debug 0
//--------------全域宣告與定義(Global Declaration & Definition)--------------
//global variable for 方法二：運用輸入function（需#include <stdio.h>）
	short int scanfTriggered = 0;
//function prototype
	void pauseProgram();
//structure defined
    struct fishdata/*datatype*/
                {
                    char chnName[20];//a string
                    char engName[25];//a string including more than one word
                    char sciName[25];//a string including more than one word
                    double avgLength;//not a integer
                    double avgWeight;//not a integer
                    char environment;//character; 's' for 海水 seawater and 'f' for 淡水 freshwater
                };
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
int main(void)
	{
	//宣告與定義(Declaration & Definition)
    //array for setting structed data
        fishdata database[5];
	//－－－－－－－－－－－－－－－－－－－－－
    //printTitle
        //printTitle();
    //input
    {
        //counter for//for loop 5 times
            unsigned short int counter5;
        //for loop 5 times to input
        for(counter5 = 0; counter5 < 5; counter5++)
            {
                //
                    printf("請輸入 中文名：");
                    scanf("%s%*c", &database[counter5].chnName);
                //
                    printf("請輸入 英文名：");
                    scanf("%s%*c", &database[counter5].engName);
                //
                    printf("請輸入 學名：");
                    scanf("%s%*c", &database[counter5].sciName);
                //
                    printf("請輸入 平均身長：");
                    scanf("%lf%*c", &database[counter5].avgLength);
                //
                    printf("請輸入 平均體重：");
                    scanf("%lf%*c", &database[counter5].avgWeight);
                //
                    printf("請輸入 養殖環境('s' for 海水 seawater and 'f' for 淡水 freshwater)：");
                    scanf("%c%*c", &database[counter5].environment);
            }
    }
    //output
    {
        //counter for//for loop to output
            unsigned short int outputC;

        //for loop to output
            for(outputC = 0; outputC < 5; outputC++)
                {
                    printf("%s是一種%s魚，英文叫 %s，學名是 %s，平均可長到 %l.1f 公分長，%l.1f 公克重。\n", database[outputC].chnName, database[outputC].environment =='s'?"海水":"淡水", database[outputC].engName, database[outputC].sciName, database[outputC].avgLength, database[outputC].avgWeight);
                }
    }

    //pause
		pauseProgram();
	//－－－－－－－－－－－－－－－－－－－－－
    //傳回數字０（表程式運行成功）
    //版本：1.00(1)
    //return後面不可加註解！
			return 0;
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
