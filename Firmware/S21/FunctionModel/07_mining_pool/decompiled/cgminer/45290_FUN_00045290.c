// FUN_00045290 @ 00045290  size=176  callers=1
// program: cgminer


undefined4
FUN_00045290(uint param_1,int param_2,int param_3,code *UNRECOVERED_JUMPTABLE,undefined4 param_5)

{
  int iVar1;
  undefined4 uVar2;
  uint uVar3;
  uint uVar4;
  
  if ((param_1 & 0x1f) == 0) {
    if ((param_3 != 0) && ((param_1 & 0x20) == 0)) {
                    /* WARNING: Could not recover jumptable at 0x0004533c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar2 = (*UNRECOVERED_JUMPTABLE)(" ",1,param_5);
      return uVar2;
    }
  }
  else {
    uVar3 = (param_1 & 0x1f) * param_2;
    iVar1 = (*UNRECOVERED_JUMPTABLE)(&DAT_0004c39c,1,param_5);
    if (iVar1 != 0) {
      return 0xffffffff;
    }
    for (; uVar3 != 0; uVar3 = uVar3 - uVar4) {
      uVar4 = uVar3;
      if (0x1f < uVar3) {
        uVar4 = 0x20;
      }
      iVar1 = (*UNRECOVERED_JUMPTABLE)("                                ",uVar4,param_5);
      if (iVar1 != 0) {
        return 0xffffffff;
      }
    }
  }
  return 0;
}

