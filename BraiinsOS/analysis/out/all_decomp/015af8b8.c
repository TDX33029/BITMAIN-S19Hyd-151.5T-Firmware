// FUN_015af8b8 @ 015af8b8 size=336 calls_out=5 calls_in=5
// strings: 

void FUN_015af8b8(undefined4 *param_1,int param_2,undefined4 param_3,uint param_4,uint param_5,
                 int param_6)

{
  longlong lVar1;
  int iVar2;
  uint uVar3;
  undefined4 uVar4;
  uint local_28;
  uint local_24;
  
  uVar4 = 1;
  lVar1 = (ulonglong)param_4 * (ulonglong)((param_5 + param_6) - 1 & -param_5);
  uVar3 = (uint)lVar1;
  if (((int)((ulonglong)lVar1 >> 0x20) != 0) || (0x80000000 - param_5 < uVar3)) {
    param_1[1] = 0;
    *param_1 = 1;
    return;
  }
  if (param_2 == 0) {
    if (uVar3 != 0) {
      if (uVar3 < param_5) {
        local_24 = 0;
        iVar2 = FUN_016d51b0(&local_24,4,uVar3);
        if (iVar2 != 0) goto LAB_015af9f0;
      }
      else {
        local_24 = thunk_FUN_016d4a50(uVar3);
      }
      goto joined_r0x015af9ac;
    }
    local_24 = param_5;
LAB_015af9e4:
    param_1[1] = local_24;
    uVar4 = 0;
  }
  else {
    if (uVar3 < param_5) {
      local_28 = 0;
      iVar2 = FUN_016d51b0(&local_28,4,uVar3);
      local_24 = local_28;
      if ((iVar2 == 0) && (local_28 != 0)) {
        FUN_016dd1aa(local_28,param_3,param_6 * param_2);
        thunk_FUN_016d3fb4(param_3);
        goto LAB_015af9e4;
      }
    }
    else {
      local_24 = thunk_FUN_016d4ea4(param_3,uVar3);
joined_r0x015af9ac:
      if (local_24 != 0) goto LAB_015af9e4;
    }
LAB_015af9f0:
    param_1[1] = param_5;
  }
  param_1[2] = uVar3;
  *param_1 = uVar4;
  return;
}

