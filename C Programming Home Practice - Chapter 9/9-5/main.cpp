//程式框架(Program Frame)
//-------------------------------------------------------------------
//程式名稱(Program Name)：。
//程式敘述(Program Description)：。
//程式版本(Program Version)：1.00(0)
//程式框架版本(Program Frame Version)：A
//程式框架修訂號(Program Frame Revision Number)：19
//最新更新紀錄(Latest Update Log)：。
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
	int intArrayMax(int input[]);
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
	/*test01
		int a[10] = {0};
	*///test01
	//counter for //while loop for assign
		unsigned short int assignC;
	//array for testing
		int test[10];
	//counter for //print test array
		unsigned short int printC;
	//－－－－－－－－－－－－－－－－－－－－－
    //printTitle
        //printTitle();
	/*test01
		printf("%d\n", sizeof(a) / 4);
	*///test01
	//assign rand num to test array
		//random function initialization
		//版本：1.00(2)
			srand((unsigned)time(NULL));
				//now rand() is usable :D
				//rand() range: int Min ~ int MAX?
		//while loop for assign
			assignC = 0;
			while(assignC < sizeof(test) / sizeof(test[0])/*size for int unit*/)
				{
					//assign
						test[assignC] = rand() % 20;
					//increment
						assignC++;
				}
		//for loop for print test array
			for(printC = 0; printC < sizeof(test) / sizeof(test[0])/*size for int unit*/; printC++)
				{
					//printf
						printf("@%d", test[printC]);
				}
			//last new line
				printf("\n");
		//print MAX
			printf("Max = %d", intArrayMax(test));
	//pause
		pauseProgram();
	//－－－－－－－－－－－－－－－－－－－－－
    //傳回數字０（表程式運行成功）
    //版本：1.00(1)
    //return後面不可加註解！
			return 0;
	}
int intArrayMax(int input[])
	{
		//宣告與定義(Declaration & Definition)
		//maxCurrent
			int maxCurrent = input[0];
		//counter for loop
			unsigned short int countA;
		//－－－－－－－－－－－－－－－－－－－－－
		//read 2~last space
			//for loop from second space to last
				for(countA = 1; countA < 10/*sizeof(input) / sizeof(input[0]*/; countA++)
					{
						//if second space smaller than maxCurr
							if(input[countA] > maxCurrent)
								{
									//then assign it as *new* maxCurr
										maxCurrent = input[countA];
								}
					}
		/*test1
			printf("\nDEBUG = %d\n", sizeof(input) / sizeof(input[0]));
		*///test1
		//－－－－－－－－－－－－－－－－－－－－－
		//傳回內容
		return maxCurrent;
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
