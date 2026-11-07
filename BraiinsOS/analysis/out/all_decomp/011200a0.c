// FUN_011200a0 @ 011200a0 size=248 calls_out=2 calls_in=1
// strings: 

void FUN_011200a0(undefined4 *param_1,uint param_2,uint param_3,int param_4)

{
  longlong lVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  int local_1c;
  
  lVar1 = (ulonglong)param_2 * (ulonglong)((param_3 + param_4) - 1 & -param_3);
  uVar4 = (uint)lVar1;
  if (((int)((ulonglong)lVar1 >> 0x20) != 0) || (0x80000000 - param_3 < uVar4)) {
    param_1[1] = 0;
    *param_1 = 1;
    return;
  }
  if (uVar4 == 0) {
    param_1[1] = 0;
    param_1[2] = param_3;
    *param_1 = 0;
    return;
  }
  if (uVar4 < param_3) {
    local_1c = 0;
    uVar3 = param_3;
    if (param_3 < 5) {
      uVar3 = 4;
    }
    iVar2 = FUN_016d51b0(&local_1c,uVar3,uVar4);
    if (iVar2 != 0) goto LAB_01120124;
  }
  else {
    local_1c = thunk_FUN_016d4a50(uVar4);
  }
  if (local_1c != 0) {
    param_1[1] = param_2;
    param_1[2] = local_1c;
    *param_1 = 0;
    return;
  }
LAB_01120124:
  param_1[1] = param_3;
  param_1[2] = uVar4;
  *param_1 = 1;
  return;
}

