//程式框架(Program Frame)
//-------------------------------------------------------------------
//程式名稱(Program Name)：13-6。
//程式敘述(Program Description)：。
//程式版本(Program Version)：1.00(0)
//程式框架版本(Program Frame Version)：A
//程式框架修訂號(Program Frame Revision Number)：23
//最新更新紀錄(Latest Update Log)：build ok。
/*更新紀錄(Change Log)：。
1.00(0) initial release


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
//string.h
//版本：1.00(0)
    #include <string.h>
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
//func. for checking 2 word surname
	bool check2surN(char inputName[]);
//--------------主要程式碼(Main Code)--------------
//main函數架構
//版本：1.00(11)
//軟體的運行從main函數開始
//void會使debugger無法啟動！
int main(void)
	{restartProgram:
	//宣告與定義(Declaration & Definition)
	//char. array for saving input string
		char inputString[13];//four UTF-8 characters MAX., include \0

	//－－－－－－－－－－－－－－－－－－－－－
	//prompt
	//版本：1.00(0)
		printf("請輸入姓名：");
		scanfTriggered = 1;
		scanf("%s", inputString);
	{
	//declare
		unsigned short int howManyWords;
		char * namePosition;
	//determine the BIG5 length of the inputString
		howManyWords = strlen(inputString) / 2;
	//char array for name and surname
		char surName[5];//two Big5 char.&& null char.
	//save surname
		//if 歐陽 is full name
			if(howManyWords == 2)
				{
					//surname should always be one word
						strncpy(surName, inputString, 2);
					//end this string with null char.
						surName[2] = '\0';
					//let namePosition be next word
						namePosition = inputString + 2;
				}
			else if(check2surN(inputString))
				{
					//copy to array
						strncpy(surName, inputString, 4);
					//end this string with null char.
						surName[4] = '\0';
					//let namePosition be next word
						namePosition = inputString + 4;
				}
			else
				{
					//copy surname
						strncpy(surName, inputString, 2);
					//end this string with null char.
						surName[2] = '\0';
					//let namePosition be next word
						namePosition = inputString + 2;
				}


	//output
		printf("%s教授%s博士", surName, namePosition);
	}
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
//其他函數架構
//版本：1.00(1)
/*
returnType functionName(auguments)
*/
bool check2surN(char inputName[])
	{
		//宣告與定義(Declaration & Definition)
		//define two-char. surnames
			const char * twoSurnames[40] = {"軒轅", "歐陽", "司馬", "司徒", "司空", "司寇", "上官", "尉遲", "羊舌", "第五", "梁丘", "鍾離", "東郭", "公孫", "孟孫", "仲孫", "叔孫", "季孫", "長孫", "慕容", "宇文", "閭丘", "諸葛", "東方", "西門", "公羊", "夏侯", "万俟", "百里", "端木", "公冶", "皇甫", "呼延", "浮屠", "令狐", "淳于", "即墨", "單於", "南宮", "毌丘"};
		//define a check space
			//char checkString[5];//2 BIG5 string
		//－－－－－－－－－－－－－－－－－－－－－
		//find 2char surname serially from first to last
			//first copy first two words from input
				//strncpy(checkString, inputName, 4);
				//close string
					//checkString[5] = '\0';
			//loop check
				//
					unsigned short int checkC;
				//
					for(checkC = 0; checkC < sizeof(twoSurnames) / sizeof(char * ); checkC++)
						{
							if(!strncmp(twoSurnames[checkC], inputName, 4))
								{
									return true;
								}
						}


		//－－－－－－－－－－－－－－－－－－－－－
		//傳回內容
		return false;
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
