// FUN_00bf8b50 @ 00bf8b50 size=192 calls_out=3 calls_in=0
// strings: 

void FUN_00bf8b50(undefined4 *param_1,undefined4 *param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 param_5,undefined4 param_6)

{
  undefined4 *puVar1;
  int local_20;
  undefined4 local_1c;
  
  FUN_00bf8d0c(&local_20,*param_2,param_3,param_4,param_5,param_6);
  if (local_20 == 1) {
    *param_1 = 0;
    param_1[1] = local_1c;
    return;
  }
  puVar1 = (undefined4 *)thunk_FUN_016d4a50(0xc);
  if (puVar1 == (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_00600874(4,0xc);
  }
  *puVar1 = 1;
  puVar1[1] = 1;
  puVar1[2] = local_1c;
  *param_1 = puVar1;
  param_1[1] = &DAT_0187288c;
  param_1[2] = 0xd506443e;
  param_1[3] = 0x87a6e9e8;
  param_1[4] = 0x24a34114;
  param_1[5] = 0x68dd2e2;
  return;
}

