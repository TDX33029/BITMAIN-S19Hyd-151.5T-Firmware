// FUN_00715c0c @ 00715c0c size=212 calls_out=4 calls_in=3
// strings: 

void FUN_00715c0c(undefined4 *param_1,undefined4 param_2,uint param_3,undefined4 *param_4)

{
  uint uVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 uVar4;
  uint uVar5;
  uint local_30;
  int local_2c;
  uint local_28;
  
  if ((param_3 & 1) == 0) {
    FUN_00600d2c(&local_30);
  }
  else {
    uVar1 = param_3 >> 1;
    if (param_3 < 2) {
      iVar3 = 1;
      uVar5 = 0;
    }
    else {
      iVar3 = thunk_FUN_016d4a50(uVar1);
      uVar5 = uVar1;
      if (iVar3 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_00600af4(1,uVar1);
      }
    }
    FUN_016dd1aa(iVar3,param_2,uVar1);
    local_30 = uVar5;
    local_2c = iVar3;
    local_28 = uVar1;
  }
  uVar4 = param_4[1];
  uVar2 = param_4[2];
  *param_1 = *param_4;
  param_1[1] = uVar4;
  param_1[2] = uVar2;
  param_1[3] = local_30;
  param_1[4] = local_2c;
  param_1[5] = local_28;
  param_1[6] = 0;
  param_1[7] = 4;
  param_1[8] = 0;
  param_1[9] = 0x80000000;
  return;
}

