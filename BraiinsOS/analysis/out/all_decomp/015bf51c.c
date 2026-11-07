// FUN_015bf51c @ 015bf51c size=356 calls_out=5 calls_in=25
// strings: 

void FUN_015bf51c(undefined4 *param_1,int param_2,undefined4 param_3,uint param_4,uint param_5,
                 int param_6)

{
  longlong lVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  undefined4 uVar5;
  uint local_2c;
  uint local_28;
  
  uVar5 = 1;
  lVar1 = (ulonglong)param_4 * (ulonglong)((param_5 + param_6) - 1 & -param_5);
  uVar4 = (uint)lVar1;
  if (((int)((ulonglong)lVar1 >> 0x20) != 0) || (0x80000000 - param_5 < uVar4)) {
    param_1[1] = 0;
    *param_1 = 1;
    return;
  }
  if (param_2 == 0) {
    if (uVar4 != 0) {
      if (uVar4 < param_5) {
        local_28 = 0;
        uVar3 = param_5;
        if (param_5 < 5) {
          uVar3 = 4;
        }
        iVar2 = FUN_016d51b0(&local_28,uVar3,uVar4);
        if (iVar2 != 0) goto LAB_015bf668;
      }
      else {
        local_28 = thunk_FUN_016d4a50(uVar4);
      }
      goto joined_r0x015bf624;
    }
    local_28 = param_5;
LAB_015bf65c:
    param_1[1] = local_28;
    uVar5 = 0;
  }
  else {
    if (uVar4 < param_5) {
      local_2c = 0;
      uVar3 = param_5;
      if (param_5 < 5) {
        uVar3 = 4;
      }
      iVar2 = FUN_016d51b0(&local_2c,uVar3,uVar4);
      local_28 = local_2c;
      if ((iVar2 == 0) && (local_2c != 0)) {
        FUN_016dd1aa(local_2c,param_3,param_6 * param_2);
        thunk_FUN_016d3fb4(param_3);
        goto LAB_015bf65c;
      }
    }
    else {
      local_28 = thunk_FUN_016d4ea4(param_3,uVar4);
joined_r0x015bf624:
      if (local_28 != 0) goto LAB_015bf65c;
    }
LAB_015bf668:
    param_1[1] = param_5;
  }
  param_1[2] = uVar4;
  *param_1 = uVar5;
  return;
}

