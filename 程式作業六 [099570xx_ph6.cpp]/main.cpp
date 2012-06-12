//程式框架(Program Frame)
//-------------------------------------------------------------------
//程式名稱(Program Name)：程式作業六 [099570xx_ph6.cpp]。
//程式敘述(Program Description)：。
//程式版本(Program Version)：1.00(0)
//程式框架版本(Program Frame Version)：A
//程式框架修訂號(Program Frame Revision Number)：16
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
//Math function(Unknown)
//版本：1.00(0)
	#include <math.h>
//--------------環境設定(Enviroment Settings)--------------
//define debug var
	#define debug 0
//--------------全域宣告與定義(Global Declaration & Definition)--------------
//global variable for 方法二：運用輸入function（需#include <stdio.h>）
	short int scanfTriggered = 1;//不變動題目，強制代成一
//function prototype
	void pauseProgram();
    double vector_length(double a[], int n);
//--------------主要程式碼(Main Code)--------------
//main函數架構
//版本：1.00(8)
//軟體的運行從main函數開始
int main()
	{
	//宣告與定義(Declaration & Definition)
    //code from the problem
        const int dimension = 10;
        double v[dimension];
        int i;
	//－－－－－－－－－－－－－－－－－－－－－
    //code from the problem
        printf("請輸入一個維度為 %d 的向量 (Please input a %d-dimension vector):\n", dimension, dimension);
        for(i = 0; i < dimension; i++)
            {
                printf("第 %d 維度: (Dimension %d)", i+1, i+1);
                scanf("%lf", &v[i]);
            }
        printf("這個向量的長度為:%f\n", vector_length(v, dimension));
	//pause
		pauseProgram();
	//－－－－－－－－－－－－－－－－－－－－－
		//傳回數字０（表程式運行成功）
		//版本：1.00(1)
		//return後面不可加註解！
			return 0;
	}
double vector_length(double a[], int n)
    {
		//宣告與定義(Declaration & Definition)
		//counter for for-loop
            short int counterA;
            double lengthSquare = 0;
		//－－－－－－－－－－－－－－－－－－－－－
        //for-loop for read array
            for(counterA = 0; counterA < n; counterA++)
                {
                    lengthSquare = lengthSquare + pow(a[counterA], 2);
                }
        //return value
            return sqrt(lengthSquare);
    }
//－－－－－－－－－－－－－－－－－－－－－－－－－－－－－－－－－－－－－－－－－
//使程式暫停運行
//版本：1.00(25)
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
