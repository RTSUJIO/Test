// UnitBase.h: UnitBase ユニット基底クラス
//
//////////////////////////////////////////////////////////////////////

/***********************************************************************/
//! @class UnitBFTable     @brief BFテーブルクラス
class UnitBase
{
private:
	BOOL 		mCycleFinishFlag;
public:
				UnitBase							(LPTSTR name, DWORD stackSize);		//!< コンストラクタ
	virtual		~UnitBase							();									//!< デストラクタ
	
	void		setCycleFinishFlag(BOOL flag);													//!< サイクル完了フラグセット
	BOOL		getCycleFinishFlag();															//!< サイクル完了フラグ取得
};