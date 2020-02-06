// UnitReagentDisp.h: UnitReagentDisp 試薬分注ユニットクラス
//
//////////////////////////////////////////////////////////////////////

/***********************************************************************/
//! @class UnitBFTable     @brief BFテーブルクラス
class UnitReagentDisp public UnitBase:
{
private:
	
public:
				UnitReagentDisp							(LPTSTR name, DWORD stackSize);		//!< コンストラクタ
	virtual		~UnitReagentDisp							();									//!< デストラクタ
	BOOL		exeDisp()
	BOOL	exeSip();
};