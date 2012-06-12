//程式框架(Program Frame)
//-------------------------------------------------------------------
//程式名稱(Program Name)：C Programming Home Practice - Chapter 2, C Fundamentals (2)。
//程式敘述(Program Description)：Print an ASCII picture。
//程式版本(Program Version)：1.00(2)
//程式修訂號(Program Revision Number)：
//程式框架版本(Program Frame Version)：A
//程式框架修訂號(Program Frame Revision Number)：6
//最新更新紀錄(Latest Update Log)：build ok。
/*
其他(Other)：
１.Using function:printf(), fgetc()。
２.不知道為什麼出錯→return 0後面不可加註解
	g++ -Wall -c "main.cpp"(在目錄: /media/PRIVATE/編程/Ｃ語言/程式設計實習/C Programming Home Practice - Chapter 2, C Fundamentals/2)
	main.cpp:39:12: warning: multi-line comment
	main.cpp: In function ‘int main()’:
	main.cpp:39: error: expected ‘}’ at end of input
	編譯失敗.
*/
//更新紀錄(Change Log)：。
//--------------注意事項--------------
/*
１.每一句Statement後面必接『;』
２.記得Return 0;
*/
//--------------程式碼開始(Code Started)--------------
//--------------前置處理器事項(Preprocessor Code)--------------
#include <stdio.h> //for printf(), scanf(), fgetc()
//--------------主要程式碼(Main Code)--------------
int main(void)
{
//畫面輸出
//版本：1.00(0)
	printf(" _\\||/         _\\||/        _\\||/        _\\||/       \n");
	printf(" |_^  /       |_@  /       |_\\  /       |_0--/       \n");
	printf("  /   /        /   /        /   /        /   /       \n");
	printf("_| _ //....> _| _ //....> _| _ //....>  _| _//....>　\n");
	printf("高興 泡泡龍　發呆 泡泡龍　可憐 泡泡龍　戴眼鏡的泡泡龍\n");
//製造暫停運行
//版本：1.00(1)
	printf("請按任意鍵繼續 ");
	//方法一︰系統指令（部份系統有效、需#include <stdlib.h>）
		//system("pause");
	//方法二：運用輸入function（需#include <stdio.h>）
		fgetc(stdin); //參數stdin表鍵盤(stream來源)輸入

//傳回數字０（表程式運行成功）
//版本：1.00(1)
//return 0;後面不可加註解！
    return 0;
}

