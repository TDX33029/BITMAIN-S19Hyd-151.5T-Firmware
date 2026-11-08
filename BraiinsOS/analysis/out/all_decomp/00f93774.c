// FUN_00f93774 @ 00f93774 size=172 calls_out=3 calls_in=0
// strings: 

void FUN_00f93774(undefined4 *param_1)

{
  undefined4 *puVar1;
  char local_18;
  undefined1 local_17;
  undefined4 local_14;
  
  FUN_00f92888(&local_18);
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
  param_1[1] = &DAT_018806d4;
  param_1[2] = 0x2aa46bdb;
  param_1[3] = 0x4d5c788c;
  param_1[4] = 0xc04376e6;
  param_1[5] = 0x596b48c;
  return;
}

