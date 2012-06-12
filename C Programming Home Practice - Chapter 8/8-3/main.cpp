//程式框架(Program Frame)
//-------------------------------------------------------------------
//程式名稱(Program Name)：8-3。
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
//C Standard General Utilities Library
//版本：1.00(2)
	/*
	for srand()
	for SYSTEM("pause") if working
	非Windows系統確定不能使用（因為無該系統指令）
	*/
	#include <stdlib.h>

//Date and time functions Library
//版本：1.00(0)
	/*
	for srand()
	*/
	#include <time.h>
//--------------環境設定(Enviroment Settings)--------------
//define debug var
	#define debug 0
//--------------全域宣告與定義(Global Declaration & Definition)--------------
//global variable for 方法二：運用輸入function（需#include <stdio.h>）
	short int scanfTriggered = 0;
//function prototype
	void pauseProgram();
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
    //Define a 20-element integer array number[]
        int number[20];
                                                    //test rand() range
                                                        //unsigned int test1;
    //for loop to assign-assign counter
        unsigned short int assignCounter;
    //second not unique(for loop)
        unsigned short int printCounter;
	//－－－－－－－－－－－－－－－－－－－－－
    //printTitle
        //printTitle();
    //random function initialization
    //版本：1.00(1)
        srand((unsigned)time(NULL));
            //now rand() is usable :D
                                                    //test rand() range be in 0~unsigned integer MAX:D
                                                        /*switch
                                                            while(1)
                                                                {
                                                                    test1 = rand();
                                                                    printf("%u\n", test1);
                                                                    if(test1 == 0)
                                                                        {
                                                                            break;
                                                                        }
                                                                }
                                                        */
    //for loop to assign
        for(assignCounter = 0 ;assignCounter < 20; assignCounter++)
            {
                //assign rand 0~30 to -15~15 to array
                    number[assignCounter] = rand() % 31 - 15;
            }
    //output
        //first unique
            printf("A[] = {%d", number[0]);
        //second not unique(for loop)
            for(printCounter = 1; printCounter < 20; printCounter++)
                {
                    printf(", %d", number[printCounter]);
                }
        //third unique
            printf("}\n");
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
