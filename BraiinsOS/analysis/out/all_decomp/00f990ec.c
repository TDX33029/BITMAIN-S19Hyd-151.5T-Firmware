// FUN_00f990ec @ 00f990ec size=240 calls_out=2 calls_in=2
// strings: 

void FUN_00f990ec(undefined4 *param_1,uint param_2,uint param_3,int param_4)

{
  longlong lVar1;
  int iVar2;
  uint uVar3;
  int local_1c;
  
  lVar1 = (ulonglong)param_2 * (ulonglong)((param_3 + param_4) - 1 & -param_3);
  uVar3 = (uint)lVar1;
  if (((int)((ulonglong)lVar1 >> 0x20) != 0) || (0x80000000 - param_3 < uVar3)) {
    param_1[1] = 0;
    *param_1 = 1;
    return;
  }
  if (uVar3 == 0) {
    param_1[1] = 0;
    param_1[2] = param_3;
    *param_1 = 0;
    return;
  }
  if (uVar3 < param_3) {
    local_1c = 0;
    iVar2 = FUN_016d51b0(&local_1c,4,uVar3);
    if (iVar2 != 0) goto LAB_00f99168;
  }
  else {
    local_1c = thunk_FUN_016d4a50(uVar3);
  }
  if (local_1c != 0) {
    param_1[1] = param_2;
    param_1[2] = local_1c;
    *param_1 = 0;
    return;
  }
LAB_00f99168:
  param_1[1] = param_3;
  param_1[2] = uVar3;
  *param_1 = 1;
  return;
}

