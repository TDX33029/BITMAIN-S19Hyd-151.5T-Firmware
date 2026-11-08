// FUN_00f9214c @ 00f9214c size=276 calls_out=5 calls_in=0
// strings: 

void FUN_00f9214c(undefined4 *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 param_5,int param_6)

{
  int iVar1;
  undefined4 *puVar2;
  int iVar3;
  int local_38;
  undefined4 local_34;
  undefined4 local_30;
  int local_2c;
  int local_28;
  int local_24;
  
  if (param_6 < 0) {
                    /* WARNING: Subroutine does not return */
    FUN_00600af4(0,param_6);
  }
  if (param_6 == 0) {
    iVar3 = 0;
    iVar1 = 1;
  }
  else {
    iVar1 = thunk_FUN_016d4a50(param_6);
    iVar3 = param_6;
    if (iVar1 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_00600af4(1,param_6);
    }
  }
  FUN_016dd1aa(iVar1,param_5,param_6);
  local_24 = param_6;
  local_2c = iVar3;
  local_28 = iVar1;
  FUN_00f91c48(&local_38,param_3,param_4,&local_2c);
  if (local_38 == -0x80000000) {
    *param_1 = 0;
    param_1[1] = local_34;
    return;
  }
  puVar2 = (undefined4 *)thunk_FUN_016d4a50(0x14);
  if (puVar2 == (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_00600874(4,0x14);
  }
  puVar2[1] = 1;
  puVar2[2] = local_38;
  *puVar2 = 1;
  puVar2[4] = local_30;
  puVar2[3] = local_34;
  *param_1 = puVar2;
  param_1[1] = &DAT_018806e4;
  param_1[2] = 0x7065a17c;
  param_1[3] = 0xbe992023;
  param_1[4] = 0x70f82b0;
  param_1[5] = 0x7f3b2976;
  return;
}

