// UnitBase.cpp: UnitBase ���j�b�g���N���X
//
//////////////////////////////////////////////////////////////////////


#include "UnitBase.h"


//////////////////////////////////////////////////////////////////////
// �\�z/����
//////////////////////////////////////////////////////////////////////

/*****************************************************************/

/*****************************************************************/
UnitReagentDisp::UnitReagentDisp(LPTSTR name,DWORD stackSize):MVarious(name,stackSize)
{
	//�T�C�N��������Ԃɂ���
	mCycleFinishFlag = TRUE;
}

/*****************************************************************/
UnitReagentDisp::~UnitReagentDisp()
{
}



