// UnitBase.cpp: UnitBase ユニット基底クラス
//
//////////////////////////////////////////////////////////////////////
//WebhookTest

#include "UnitBase.h"


//////////////////////////////////////////////////////////////////////
// 構築/消滅
//////////////////////////////////////////////////////////////////////

/*****************************************************************/

/*****************************************************************/
UnitBase::UnitBase(LPTSTR name,DWORD stackSize):MVarious(name,stackSize)
{
	//サイクル完了状態にする
	mCycleFinishFlag = TRUE;
}

/*****************************************************************/
UnitBase::~UnitBase()
{
}

/*****************************************************************/
//1ｻｲｸﾙ完了ﾌﾗｸﾞ
// ユニットの1ｻｲｸﾙ分の動作が完了フラグの設定
//	TRUE:完了
//	FALSE:実施中(ｻｲｸﾙの先頭時にFALSEにする))
void UnitBase::setCycleFinishFlag(BOOL flag)
{
	mCycleFinishFlag = flag;
}

BOOL UnitBase::getCycleFinishFlag()
{
	return mCycleFinishFlag;
}



