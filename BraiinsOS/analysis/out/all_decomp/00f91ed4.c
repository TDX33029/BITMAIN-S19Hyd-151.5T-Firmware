// FUN_00f91ed4 @ 00f91ed4 size=184 calls_out=3 calls_in=0
// strings: 

void FUN_00f91ed4(undefined4 *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 param_5,undefined4 param_6)

{
  undefined4 *puVar1;
  char local_18;
  undefined1 local_17;
  undefined4 local_14;
  
  FUN_00f915c8(&local_18,param_3,param_4,param_5,param_6);
  if (local_18 == '\x01') {
    *param_1 = 0;
    param_1[1] = local_14;
    return;
  }
  puVar1 = (undefined4 *)thunk_FUN_016d4a50(0xc);
  if (puVar1 == (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_00600874(4,0xc);
  }
  *puVar1 = 1;
  puVar1[1] = 1;
  *(undefined1 *)(puVar1 + 2) = local_17;
  *param_1 = puVar1;
  param_1[1] = &DAT_01880714;
  param_1[2] = 0x15b11d7e;
  param_1[3] = 0xb3f9e9b0;
  param_1[4] = 0xa423c218;
  param_1[5] = 0xf4422d85;
  return;
}

