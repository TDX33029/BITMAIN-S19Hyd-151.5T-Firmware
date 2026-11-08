// FUN_006c8e10 @ 006c8e10 size=184 calls_out=3 calls_in=0
// strings: 

void FUN_006c8e10(undefined4 *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 param_5,undefined4 param_6)

{
  undefined4 *puVar1;
  char local_18;
  undefined1 local_17;
  undefined4 local_14;
  
  FUN_006c9098(&local_18,param_3,param_4,param_5,param_6);
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
  param_1[1] = &DAT_01858ed0;
  param_1[2] = 0x4f4800f;
  param_1[3] = 0x969014e1;
  param_1[4] = 0x89ec357f;
  param_1[5] = 0x3b77ca7c;
  return;
}

