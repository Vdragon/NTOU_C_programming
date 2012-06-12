//程式框架(Program Frame)
//-------------------------------------------------------------------
//程式名稱(Program Name)：7-6。
//程式敘述(Program Description)：Define a double-precision floating point variable numd.Ask the user to key in a real number, multiple it with 3, and then print the value out in brackets. 。
//程式版本(Program Version)：1.00(1)
//程式框架版本(Program Frame Version)：A
//程式框架修訂號(Program Frame Revision Number)：22
//最新更新紀錄(Latest Update Log)：修正始符合題目要求。
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
８.用指標方式定義string literal 請用const char * 〔指標名稱〕 〔字串〕
*/
//--------------程式碼開始(Code Started)--------------
//--------------前置處理器選項(Preprocessor Code)--------------
//standard input/output library
//版本：1.00(0)
	#include <stdio.h> //for printf(), scanf(), fgetc()

//C Standard General Utilities Library
//版本：1.00(3)
	/*
	for srand()
	for SYSTEM("pause") if working
	*/
	#include <stdlib.h>
//--------------環境設定(Enviroment Settings)--------------
//define debug functionality
	#define debug 0
//OS Catergory
	#define SYSTEM 0//Windows console = 0, Linux console = 1
//--------------全域宣告與定義(Global Declaration & Definition)--------------
//global variable
//global variable for 方法二：運用輸入function（需#include <stdio.h>）
	unsigned short int scanfTriggered = 0;

//function prototype
//function prototype for pauseProgram
	bool pauseProgram();

//標題輸出函數
//版本：1.00(5)
void printTitle()
    {
          printf("程式名稱(Program Name)：7-6。\n");
          printf("程式敘述(Program Description)：\nDefine a double-precision floating point variable numd.Ask the user to key in a real number, multiple it with 3, and then print the value out in brackets.。\n");
          printf("程式版本(Program Version)：1.00(1)\n");
          printf("Ｂｕｉｌｄ　ｂｙ　Ｖｄｒａｇｏｎ＠２０１０\nＡｌｌ　ｒｉｇｈｔｓ　ＲＥＳＥＲＶＥＤ\n");
          printf("－－－－－－－－－－－－－－－－－－－－－－－－－－－－－－－－－\n");
    }
//--------------主要程式碼(Main Code)--------------
//main函數架構
//版本：1.00(11)
//軟體的運行從main函數開始
//void會使debugger無法啟動！
int main(void)
	{restartProgram:
	//宣告與定義(Declaration & Definition)
	//define a float number to get value inputed by user.
		double numd;

	//－－－－－－－－－－－－－－－－－－－－－
	//startProgram
		printTitle();
	//prompt
	//版本：1.00(0)
		printf("請輸入一個實數：");
		scanfTriggered = 1;
		scanf("%lf", &numd);
			/*%lf means double*/
	//output
		printf("它的三倍是 %.3lf。 ", numd * 3);

	//pauseProgram
		if(pauseProgram())
			{
				goto restartProgram;
			}

	//－－－－－－－－－－－－－－－－－－－－－
		//傳回數字０（表程式運行成功）
		//版本：1.00(1)
		//return後面不可加註解！
			return 0;
	}
//－－－－－－－－－－－－－－－－－－－－－－－－－－－－－－－－－－－－－－－－－
//使程式暫停運行
//版本：1.10(0)
bool pauseProgram()
    {
        //make a line
            printf("\n－－－－－－－－－－－－－－－－－－－－－－－－－－－－－－－－－\n");
		//prompt A
			printf("顯示運行結果，程式暫停運行\n");
			printf("請問您要重新運行嗎（Ｙ／Ｎ）？");
		//get action
			//先清除input buffer
			//需全域定義short int scanfTriggered = 0;
				/*方法一
					if (scanfTriggered == 1)
						{
							  unsigned short int getAChar;
							  while ((getAChar = getchar()) != EOF && getAChar != '\n');
						}
				*///方法一
				//方法二
					if (scanfTriggered == 1)
						{
							scanf("%*[^\n]");//丟掉所有換行符號以外的字元
							scanf("%*c");//丟掉換行符號
						}
				////方法二
			//get char
				{
					unsigned short int inputChar;
					//make sure input right
						while(!((inputChar = getchar()) == 'y' || inputChar == 'Y' || inputChar == 'n' || inputChar == 'N'));
					if(inputChar == 'y' || inputChar == 'Y')
						{
							//clean moniter
								if(SYSTEM == 0)
									{
										system("cls");
									}
								else
									{
										system("clear");
									}
							return true;
						}

				}
		//return false
			return false;
    }
