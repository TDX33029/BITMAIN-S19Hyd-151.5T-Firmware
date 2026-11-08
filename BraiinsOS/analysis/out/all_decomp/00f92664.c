// FUN_00f92664 @ 00f92664 size=268 calls_out=5 calls_in=0
// strings: 

void FUN_00f92664(undefined4 *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 param_5,int param_6)

{
  int iVar1;
  undefined4 *puVar2;
  int iVar3;
  int local_30;
  undefined4 local_2c;
  undefined4 local_28;
  int local_24;
  int local_20;
  int local_1c;
  
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
  local_1c = param_6;
  local_24 = iVar3;
  local_20 = iVar1;
  FUN_00f91a34(&local_30,param_3,&local_24);
  if (local_30 == -0x80000000) {
    *param_1 = 0;
    param_1[1] = local_2c;
    return;
  }
  puVar2 = (undefined4 *)thunk_FUN_016d4a50(0x14);
  if (puVar2 == (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_00600874(4,0x14);
  }
  puVar2[1] = 1;
  puVar2[2] = local_30;
  *puVar2 = 1;
  puVar2[4] = local_28;
  puVar2[3] = local_2c;
  *param_1 = puVar2;
  param_1[1] = &DAT_01880704;
  param_1[2] = 0x50f052f7;
  param_1[3] = 0x9909b2a5;
  param_1[4] = 0xdf97b325;
  param_1[5] = 0xb55cb20e;
  return;
}

