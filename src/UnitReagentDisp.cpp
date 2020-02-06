// UnitBase.cpp: UnitBase ユニット基底クラス
//
//////////////////////////////////////////////////////////////////////


#include "UnitBase.h"


//////////////////////////////////////////////////////////////////////
// 構築/消滅
//////////////////////////////////////////////////////////////////////

/*****************************************************************/

/*****************************************************************/
UnitReagentDisp::UnitReagentDisp(LPTSTR name,DWORD stackSize):MVarious(name,stackSize)
{
	//サイクル完了状態にする
	mCycleFinishFlag = TRUE;
}

/*****************************************************************/
UnitReagentDisp::UnitReagentDisp()
{
	//Testからコミット
	int value = 0;
	value = value+100;
}


BOO UnitReagentDisp::exeSip()
{
	//吸引する
	int SipVol = 200;
	for(int i = 0 ; i < 10 ; i++)
	{
		SipVol += i;
	}
}


