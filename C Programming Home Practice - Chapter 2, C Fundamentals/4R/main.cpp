//程式框架(Program Frame)
//-------------------------------------------------------------------
//程式名稱(Program Name)：。
//程式敘述(Program Description)：。
//程式版本(Program Version)：1.00(1)
//程式修訂號(Program Revision Number)：
//程式框架版本(Program Frame Version)：A
//程式框架修訂號(Program Frame Revision Number)：8
//最新更新紀錄(Latest Update Log)：build ok。
/*
其他(Other)：
１.using printf(), fgetc()。
２.Linux的terminal似乎沒有用等寬字體，所以會出現位移。
*/
//更新紀錄(Change Log)：。
//--------------注意事項--------------
/*
１.每一句Statement後面必接『;』
２.記得Return 0;（其後不可加註解！）
*/
//--------------程式碼開始(Code Started)--------------
//--------------前置處理器選項(Preprocessor Code)--------------
//standard input/output library
//版本：1.00(0)
	#include <stdio.h> //for printf(), scanf(), fgetc()
//--------------主要程式碼(Main Code)--------------
//主函數架構
//版本：1.00(1)
	int main(void)
	{
		//畫面輸出
		//版本：1.00(0)
			printf("　  　　                       \n");
			printf("／￣◥◣ *.  ..*　★.*  . +.*  \n");
			printf(" |田 |田 ★. *●   ●  *.  .★.\n");
			printf("╬╬╬╬╬　 _/|\\_/|\\_  *. +   \n");
			printf("￣￣￣￣￣￣√√ √√￣￣￣￣￣\n");
		//製造暫停運行
		//版本：1.00(3)
			printf("請按Enter繼續 ");
				//方法一︰執行系統指令（部份系統有效、需#include <stdlib.h>）
					//system("pause");
				//方法二：運用輸入function（需#include <stdio.h>）
					fgetc(stdin); //參數stdin表鍵盤(stream來源)輸入
		//傳回數字０（表程式運行成功）
		//版本：1.00(1)
		//return後面不可加註解！
			return 0;
	}
