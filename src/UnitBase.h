// UnitBase.h: UnitBase ���j�b�g���N���X
//
//////////////////////////////////////////////////////////////////////

/***********************************************************************/
//! @class UnitBFTable     @brief BF�e�[�u���N���X
class UnitBase
{
private:
	BOOL 		mCycleFinishFlag;
public:
				UnitBase							(LPTSTR name, DWORD stackSize);		//!< �R���X�g���N�^
	virtual		~UnitBase							();									//!< �f�X�g���N�^
	
	void		setCycleFinishFlag(BOOL flag);													//!< �T�C�N�������t���O�Z�b�g
	BOOL		getCycleFinishFlag();															//!< �T�C�N�������t���O�擾
};