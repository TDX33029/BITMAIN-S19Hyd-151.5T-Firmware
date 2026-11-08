// FUN_000781c0 @ 000781c0  size=288  callers=1
// program: bmminer


undefined4 FUN_000781c0(uint param_1,int param_2,int param_3,code *param_4,undefined4 param_5)

{
  int iVar1;
  undefined4 uVar2;
  uint uVar3;
  uint local_c;
  
  if ((param_1 & 0x1f) == 0) {
    if ((param_3 != 0) && ((param_1 & 0x20) == 0)) {
      uVar2 = (*param_4)(&DAT_000a93fc,1,param_5);
      return uVar2;
    }
  }
  else {
    local_c = param_2 * (param_1 & 0x1f);
    iVar1 = (*param_4)(&DAT_000a93f8,1,param_5);
    if (iVar1 != 0) {
      return 0xffffffff;
    }
    for (; local_c != 0; local_c = local_c - uVar3) {
      uVar3 = local_c;
      if (0x1f < local_c) {
        uVar3 = 0x20;
      }
      iVar1 = (*param_4)("                                ",uVar3,param_5);
      if (iVar1 != 0) {
        return 0xffffffff;
      }
    }
  }
  return 0;
}

