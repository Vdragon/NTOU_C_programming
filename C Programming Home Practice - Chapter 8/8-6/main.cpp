//程式框架(Program Frame)
//-------------------------------------------------------------------
//程式名稱(Program Name)：8-6。
//程式敘述(Program Description)：Define a 100-element integer array score[] and set the values as random numbers in the range of 0 ~ 99.Calculate the statistics of students' scores and graph it with histograms. 。
//程式版本(Program Version)：1.00(0)
//程式框架版本(Program Frame Version)：A
//程式框架修訂號(Program Frame Revision Number)：23
//最新更新紀錄(Latest Update Log)：build ok!。
/*更新紀錄(Change Log)：。
1.00(0)　開始專案
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

//--------------主要程式碼(Main Code)--------------
//main函數架構
//版本：1.00(11)
//軟體的運行從main函數開始
//void會使debugger無法啟動！
int main(void)
	{restartProgram:
	//宣告與定義(Declaration & Definition)
	//define an int array for storing score
		unsigned short int score[100];
	//－－－－－－－－－－－－－－－－－－－－－
	//init. the data from first person to last person
		//for loop for assigning rand. value
		{
			//counter for looping
				unsigned short int assignC;
															/*test sizeof
																printf("size of score is %d--%d\n", sizeof(score), sizeof(score) / sizeof(short int));
																//result is 200--100
															*///test sizeof
			//assign loop
				for(assignC = 0; assignC < sizeof(score) / sizeof(short int); assignC++)
					{
						//assign from 0 to 100
							score[assignC] = rand() % 101;

					}
																	/*breakpoint
																		printf("\n");
																	*///breakpoint
			////assign loop
		}////for loop for assigning rand. value
	//research the value of the data using switch
		//define an int array for storing stars
			unsigned short int stars[11] = {0};//including 100~100
		//use switch to accumulate stars in loop of all person
		{
			unsigned short int searchC;
			for(searchC = 0; searchC < sizeof(score) / sizeof(short int); searchC++)
				{
					switch(score[searchC] / 10)
						{
							case 10 : stars[10]++ ; break;
							case 9  : stars[9]++ ; break;
							case 8  : stars[8]++ ; break;
							case 7  : stars[7]++ ; break;
							case 6  : stars[6]++ ; break;
							case 5  : stars[5]++ ; break;
							case 4  : stars[4]++ ; break;
							case 3  : stars[3]++ ; break;
							case 2  : stars[2]++ ; break;
							case 1  : stars[1]++ ; break;
							case 0  : stars[0]++ ; break;

						};
				}

		}
		////use switch to accumulate stars in loop of all person
	////research the value of the data using switch
	//output graph
	{
		//print title
			printf("範圍	人數	圖表\n");
		//print others using for loops from 0~10
			short int titleC;
			for(titleC = 10; titleC >= 0; titleC--)
				{
					printf("%2d~%2d	%-7d", titleC * 10, titleC * 10 + 9, stars[titleC]);
					//print stars using loops
					{
						unsigned short int starPrintC;
						for(starPrintC = 0; starPrintC < stars[titleC]; starPrintC++)
							{
								if(starPrintC % 5 == 0)
									{
										putchar(' ');
									}
								putchar('*');
							}
					}
					////print stars using loops
					//a new line
						putchar('\n');
				}

		////print others using for loops
	}
	////output graph
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
