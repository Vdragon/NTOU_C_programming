//程式框架(Program Frame)
//-------------------------------------------------------------------
//程式名稱(Program Name)：。
//程式敘述(Program Description)：。
//程式版本(Program Version)：1.00(0)
//程式框架版本(Program Frame Version)：A
//程式框架修訂號(Program Frame Revision Number)：16
//最新更新紀錄(Latest Update Log)：。
/*
其他(Other)：。
*/
//更新紀錄(Change Log)：。
//--------------注意事項--------------
/*
１.每一句Statement後面必接『;』
２.記得Return 0;
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
//global variable for print message 1 move by 1 move+counter
	long long int counterHanoi = 0;
//function prototype
	void pauseProgram();
	void Hanoi(short int n, char start, char goal, char other);
//--------------主要程式碼(Main Code)--------------
//main函數架構
//版本：1.00(8)
//軟體的運行從main函數開始
	int main(void)
	{
	//宣告與定義(Declaration & Definition)


	//－－－－－－－－－－－－－－－－－－－－－
	//call Hanoi()
		Hanoi(29, 'A', 'C', 'B');
	//print result
		printf("運行完畢，總共做了%lld步", counterHanoi);
	//pause
		//pauseProgram();
	//－－－－－－－－－－－－－－－－－－－－－
		//傳回數字０（表程式運行成功）
		//版本：1.00(1)
		//return後面不可加註解！
			return 0;
	}
//Hanoi Func.
//其他函數架構
//版本：1.00(1)
/*
returnType functionName(auguments)
*/
void Hanoi(short int n, char start, char goal, char other)
	{
		//宣告與定義(Declaration & Definition)


		//－－－－－－－－－－－－－－－－－－－－－
		//if Hanoi function has run to 1 plates
		if(n == 1)
			{
				//counter++
					counterHanoi++;
				//print message 1 move by 1 move+counter
					//printf("第%lld步：將一上層圓盤從%c柱移到%c柱\n", counterHanoi, start, goal);
			}
		//else continue calling 'new' Hanoi func.
		else
			{
				//think
				//assume upper plates has moved to 'other' using the 'made' Hanoi()
					Hanoi(n - 1, start, other, goal);
				//made the lowest plate move to 'goal'
					Hanoi(1, start, goal, other);
				//made the upper plates at 'other' move to 'goal'
					Hanoi(n - 1, other, goal, start);
			}

		//－－－－－－－－－－－－－－－－－－－－－
		//傳回內容
		return ;
	}

//－－－－－－－－－－－－－－－－－－－－－－－－－－－－－－－－－－－－－－－－－
//使程式暫停運行
//版本：1.00(24)
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

