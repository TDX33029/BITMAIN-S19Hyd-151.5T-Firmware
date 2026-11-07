// FUN_013c42d8 @ 013c42d8 size=348 calls_out=4 calls_in=0
// strings: 

void FUN_013c42d8(undefined4 *param_1,uint param_2,int param_3,uint param_4,int param_5)

{
  longlong lVar1;
  int iVar2;
  uint uVar3;
  int local_20;
  int local_1c;
  
  lVar1 = (ulonglong)param_2 * (ulonglong)((param_4 + param_5) - 1 & -param_4);
  uVar3 = (uint)lVar1;
  if (((int)((ulonglong)lVar1 >> 0x20) != 0) || (0x80000000 - param_4 < uVar3)) {
    param_1[1] = 0;
    *param_1 = 1;
    return;
  }
  if (uVar3 == 0) {
    param_1[1] = 0;
    param_1[2] = param_4;
    *param_1 = 0;
    return;
  }
  if (param_3 == 0) {
    if (uVar3 < param_4) {
      local_1c = 0;
      iVar2 = FUN_016d51b0(&local_1c,4,uVar3);
      if (iVar2 != 0) goto LAB_013c43e0;
    }
    else {
      local_1c = thunk_FUN_016d4a50(uVar3);
    }
  }
  else {
    if (uVar3 < param_4) {
      local_20 = 0;
      iVar2 = FUN_016d51b0(&local_20,4,uVar3);
      local_1c = local_20;
      if ((iVar2 != 0) || (local_20 == 0)) goto LAB_013c43e0;
      FUN_016dd606(local_20,0,uVar3);
      goto LAB_013c441c;
    }
    local_1c = FUN_016d38c8(uVar3,1);
  }
  if (local_1c == 0) {
LAB_013c43e0:
    param_1[1] = param_4;
    param_1[2] = uVar3;
    *param_1 = 1;
    return;
  }
LAB_013c441c:
  param_1[1] = param_2;
  param_1[2] = local_1c;
  *param_1 = 0;
  return;
}

