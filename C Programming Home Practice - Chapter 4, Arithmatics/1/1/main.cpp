//程式框架(Program Frame)
//-------------------------------------------------------------------
//程式名稱(Program Name)：C Programming Home Practice - Chapter 4, Arithmatics-1。
//程式敘述(Program Description)：Now we are packing apples, six in a box. Write a program to receive the number of apples and reply the number of boxes we will need to pack these apples in the following two cases: if the number of the apples are not a multiple of 6, pack them or discard them.Hint: declare an integer variable numApple to store the number of apples, and another variable numBox to store the number of boxes needed. The relationship between these two variables are:。
//程式版本(Program Version)：1.00(0)
//程式修訂號(Program Revision Number)：
//程式框架版本(Program Frame Version)：A
//程式框架修訂號(Program Frame Revision Number)：9
//最新更新紀錄(Latest Update Log)：build ok。
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

//C Standard General Utilities Library
//版本：1.00(0)
	#include <stdlib.h>
	/*
	for SYSTEM("pause") if working
	非Windows系統確定不能使用（因為無該系統指令）
	*/
//--------------宣告與定義(Declaration & Definition)--------------
int numApple, numBox, numBox2;
//--------------主要程式碼(Main Code)--------------
//主函數架構
//版本：1.00(3)
	int main(void)
	{
	   //Title
   //畫面輸出
   //版本：1.00(0)
	printf("C Programming Home Practice - Chapter 4, Arithmatics-1\n");
   printf("－－－－－－－－－－－－－－－－－－－－－－－－－\n");
	printf("Now we are packing apples, six in a box.\n");
	printf("Write a program to receive the number of apples and reply the number of boxes we will need to pack these apples in the following two cases: if the number of the apples are not a multiple of 6, pack them or discard them.\n");
	printf("Hint: declare an integer variable numApple to store the number of apples, and another variable numBox to store the number of boxes needed. The relationship between these two variables are:\n");
   printf("－－－－－－－－－－－－－－－－－－－－－－－－－\n");

   //prompt ask
	printf("請輸入蘋果個數：");
//輸入
//版本：1.00(1)
scanf("%d", &numApple);

//thinkA
numBox = numApple / 6;
printf("如果零散的蘋果不裝箱，需要%d個箱子\n", numBox);

//thinkB
if(numApple % 6 != 0)
      {
         printf("如果零散的蘋果也要裝箱，則需要%d個箱子。\n", numBox + 1);
      }
else
      {
         printf("如果零散的蘋果也要裝箱，則需要%d個箱子。\n", numBox);
      }

//使程式暫停運行
//版本：1.00(5)

	//方法一︰執行系統指令（部份系統有效、需#include <stdlib.h>）
      printf("\n－－－－－－－－－－－－－－－－－－－－－－－－\n顯示運行結果，程式暫停運行\n");
		system("pause");

	//方法二：運用輸入function（需#include <stdio.h>）
      //printf("\n－－－－－－－－－－－－－－－－－－－－－－－－\n顯示運行結果，程式暫停運行\n請按Enter繼續");
		//fgetc(stdin); //參數stdin表鍵盤(stream來源)輸入（為什麼這個突然無效了冏）

		//傳回數字０（表程式運行成功）
		//版本：1.00(1)
		//return後面不可加註解！
			return 0;
	}

