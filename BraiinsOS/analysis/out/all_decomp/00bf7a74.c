// FUN_00bf7a74 @ 00bf7a74 size=176 calls_out=3 calls_in=0
// strings: 

void FUN_00bf7a74(undefined4 *param_1,undefined4 *param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 param_5,undefined4 param_6)

{
  undefined4 *puVar1;
  char local_18;
  undefined1 local_17;
  undefined4 local_14;
  
  FUN_00bf7c40(&local_18,*param_2,param_3,param_4,param_5,param_6);
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
  param_1[1] = &DAT_018728bc;
  param_1[2] = 0x1a27b7d3;
  param_1[3] = 0x3a79fddd;
  param_1[4] = 0xc097ebc0;
  param_1[5] = 0x43c4d542;
  return;
}

