// FUN_00bddfd0 @ 00bddfd0 size=176 calls_out=3 calls_in=0
// strings: 

void FUN_00bddfd0(undefined4 *param_1)

{
  undefined4 *puVar1;
  int local_28;
  undefined4 local_24;
  undefined4 local_20;
  undefined4 local_1c;
  
  FUN_00bde15c(&local_28);
  if (local_28 == 1) {
    *param_1 = 0;
    param_1[1] = local_24;
    return;
  }
  puVar1 = (undefined4 *)thunk_FUN_016d4a50(0x10);
  if (puVar1 == (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_00600874(8,0x10);
  }
  *puVar1 = 1;
  puVar1[1] = 1;
  puVar1[2] = local_20;
  puVar1[3] = local_1c;
  *param_1 = puVar1;
  param_1[1] = &DAT_018728ac;
  param_1[2] = 0xe578f4a5;
  param_1[3] = 0x2cb86891;
  param_1[4] = 0x91e30413;
  param_1[5] = 0x9ed91be8;
  return;
}

