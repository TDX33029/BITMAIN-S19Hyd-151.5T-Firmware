// FUN_00b9d1e0 @ 00b9d1e0 size=100 calls_out=2 calls_in=0
// strings: 

void FUN_00b9d1e0(undefined4 *param_1)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)thunk_FUN_016d4a50(8);
  if (puVar1 == (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_00600874(4,8);
  }
  param_1[1] = &DAT_3fb99999;
  *puVar1 = 0x5f5e10;
  puVar1[1] = 0x5f5e10;
  *param_1 = 0x9999999a;
  param_1[2] = 2;
  param_1[3] = puVar1;
  param_1[4] = 2;
  param_1[5] = 0x4000101;
  return;
}

