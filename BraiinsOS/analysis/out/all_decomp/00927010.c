// FUN_00927010 @ 00927010 size=168 calls_out=4 calls_in=4
// strings: 

void FUN_00927010(undefined4 *param_1,undefined4 param_2,uint param_3)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  uint local_28;
  int local_24;
  uint local_20;
  
  if ((param_3 & 1) == 0) {
    FUN_00600d2c(&local_28);
  }
  else {
    uVar1 = param_3 >> 1;
    if (param_3 < 2) {
      iVar2 = 1;
      uVar3 = 0;
    }
    else {
      iVar2 = thunk_FUN_016d4a50(uVar1);
      uVar3 = uVar1;
      if (iVar2 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_00600af4(1,uVar1);
      }
    }
    FUN_016dd1aa(iVar2,param_2,uVar1);
    local_28 = uVar3;
    local_24 = iVar2;
    local_20 = uVar1;
  }
  *param_1 = 0;
  param_1[3] = local_28;
  param_1[4] = local_24;
  param_1[5] = local_20;
  param_1[6] = 0;
  param_1[7] = 4;
  param_1[8] = 0;
  param_1[9] = 0x80000000;
  return;
}

