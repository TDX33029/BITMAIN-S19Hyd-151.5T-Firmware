// FUN_0061d0d4 @ 0061d0d4 size=364 calls_out=4 calls_in=3
// strings: 

void FUN_0061d0d4(undefined4 *param_1,uint param_2,int param_3,uint param_4,int param_5)

{
  longlong lVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  int local_20;
  int local_1c;
  
  lVar1 = (ulonglong)param_2 * (ulonglong)((param_4 + param_5) - 1 & -param_4);
  uVar4 = (uint)lVar1;
  if (((int)((ulonglong)lVar1 >> 0x20) != 0) || (0x80000000 - param_4 < uVar4)) {
    param_1[1] = 0;
    *param_1 = 1;
    return;
  }
  if (uVar4 == 0) {
    param_1[1] = 0;
    param_1[2] = param_4;
    *param_1 = 0;
    return;
  }
  if (param_3 == 0) {
    if (uVar4 < param_4) {
      local_1c = 0;
      uVar3 = param_4;
      if (param_4 < 5) {
        uVar3 = 4;
      }
      iVar2 = FUN_016d51b0(&local_1c,uVar3,uVar4);
      if (iVar2 != 0) goto LAB_0061d1ec;
    }
    else {
      local_1c = thunk_FUN_016d4a50(uVar4);
    }
  }
  else {
    if (uVar4 < param_4) {
      local_20 = 0;
      uVar3 = param_4;
      if (param_4 < 5) {
        uVar3 = 4;
      }
      iVar2 = FUN_016d51b0(&local_20,uVar3,uVar4);
      local_1c = local_20;
      if ((iVar2 != 0) || (local_20 == 0)) goto LAB_0061d1ec;
      FUN_016dd606(local_20,0,uVar4);
      goto LAB_0061d228;
    }
    local_1c = FUN_016d38c8(uVar4,1);
  }
  if (local_1c == 0) {
LAB_0061d1ec:
    param_1[1] = param_4;
    param_1[2] = uVar4;
    *param_1 = 1;
    return;
  }
LAB_0061d228:
  param_1[1] = param_2;
  param_1[2] = local_1c;
  *param_1 = 0;
  return;
}

