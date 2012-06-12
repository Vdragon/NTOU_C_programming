//程式框架(Program Frame)
//-------------------------------------------------------------------
//程式名稱(Program Name)：11-4。
//程式敘述(Program Description)：。
//程式版本(Program Version)：1.00(0)
//程式框架版本(Program Frame Version)：A
//程式框架修訂號(Program Frame Revision Number)：23
//最新更新紀錄(Latest Update Log)：build ok。
/*更新紀錄(Change Log)：。
1.00(0) first code


*///更新紀錄(Change Log)：。
//--------------注意事項--------------
/*
１.有BUG先檢查scanf()參數的資料型態是否正確。
２.不同的compiler可能有處理函數、變數之先後差異，請＊不要＊在同一語句(Statement)中同時處理兩者。
３.運行函數要注意是否有return值。
４.在condition statement 中要使用多個AND、OR混合之判斷句時宜將AND分隔之各OR句用括號括起來。
５.用指標陣列指向字串之方式定義string literal 請用const char * 〔指標名稱〕 = 〔字串〕;
６. * (dereferencing operater) 優先級很低，與其他運算子在同一個語句中需檢查其優先級。
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
//F.P. for palin
	bool is_palindrome(int input[], unsigned int size);
//--------------主要程式碼(Main Code)--------------
//main函數架構
//版本：1.00(11)
//軟體的運行從main函數開始
//void會使debugger無法啟動！
int main(void)
	{restartProgram:
	//宣告與定義(Declaration & Definition)


	//－－－－－－－－－－－－－－－－－－－－－
	//demo code
		int alp[10]={1,2,3,4,5,5,4,3,2,1};
		int bet[10]={1,2,3,4,5,6,5,4,3,2};
		int gam[9] ={1,2,3,4,5,4,3,2,1};

		printf( is_palindrome(alp, 10) ? "yes\n" : "no\n" );
		printf( is_palindrome(bet, 10) ? "yes\n" : "no\n" );
		printf( is_palindrome(gam, 9) ? "yes\n" : "no\n" );

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
//is_palindrome
//版本：1.00(0)
/*
returnType functionName(auguments)
*/
bool is_palindrome(int input[], unsigned int size)
	{
		//宣告與定義(Declaration & Definition)
		//two pointer to int for checking, one in front another in end of array.
			int * ptrHead = input, * ptrEnd = input + size - 1;
		//－－－－－－－－－－－－－－－－－－－－－
		//while loop until two is over
		{
			//
				while(ptrHead < ptrEnd)
					{
						//if found not same then false
							if(* ptrHead != * ptrEnd)
								{
									return false;
								}
						//update pointer
							ptrHead++;
							ptrEnd--;
					}
		}
		////for loop until two is over

		//－－－－－－－－－－－－－－－－－－－－－
		//傳回內容
			return true;
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
