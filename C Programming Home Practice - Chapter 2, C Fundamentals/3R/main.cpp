//程式框架(Program Frame)
//-------------------------------------------------------------------
//程式名稱(Program Name)：C Programming Home Practice - Chapter 2, C Fundamentals(3)。
//程式敘述(Program Description)：Print ASCII picture。
//程式版本(Program Version)：1.00(0)
//程式修訂號(Program Revision Number)：
//程式框架版本(Program Frame Version)：A
//程式框架修訂號(Program Frame Revision Number)：6
//最新更新紀錄(Latest Update Log)：debug。
/*
其他(Other)：
１.uses printf(), fgetc()
２.為什麼editor跟binary顯示的結果不相同？
*/
//更新紀錄(Change Log)：。
//--------------注意事項--------------
/*
１.每一句Statement後面必接『;』
２.記得Return 0;
*/
//--------------程式碼開始(Code Started)--------------
//--------------前置處理器事項(Preprocessor Code)--------------
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
			printf("╭－－－－－－－－－－－－－－－－－－－－－－－－－－－－－－－－－－－－╮\n");
			printf("│　　　　. 　　 .　千 但 此 月 人 何 照 轉 何 起 高 唯 我 今 不 把 明 ★ │\n");
			printf("│ .　　　　　. 　　里 願 事 有 有 事 無 朱 似 舞 處 恐 欲 夕 知 酒 月 水 │\n");
			printf("│　 .　　　　　　. 共 人 古 陰 悲 長 眠 閣 在 弄 不 瓊 乘 是 天 問 幾 調 │\n");
			printf("│　　　●　. 　　　嬋 長 難 晴 歡 向 。 ， 人 清 勝 樓 風 何 上 青 時 歌 │\n");
			printf("│　　. 　　　　　　娟 久 全 圓 離 別 不 低 間 影 寒 玉 歸 年 宮 天 有 頭 │\n");
			printf("│　　　　　　 .　　。 ， ！ 缺 合 時 應 綺 ？ ， 。 宇 去 ？ 闕 。 ？ ★ │\n");
			printf("蘇 .　　　. 　　　　         ， ， 圓 有 戶          ， ，    ，          │\n");
			printf("軾　　 .　　　　　 .　       .  　 ？ 恨 ，                               │\n");
			printf("╰－－－－－－－－－－－－－－－－－－－－－－－－－－－－－－－－－－－－╯\n");
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
