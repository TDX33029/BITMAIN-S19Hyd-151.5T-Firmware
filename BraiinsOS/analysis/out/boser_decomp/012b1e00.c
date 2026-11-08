// FUN_012b1e00 @ 012b1e00 size=88 calls_out=2 calls_in=2
// strings: 

void FUN_012b1e00(undefined4 *param_1,undefined1 param_2)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)thunk_FUN_01be5118(0xc);
  if (puVar1 == (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_0066439c(4,0xc);
  }
  *(undefined1 *)(puVar1 + 2) = param_2;
  *puVar1 = 1;
  puVar1[1] = 1;
  *param_1 = puVar1;
  param_1[1] = &DAT_01ce2554;
  param_1[2] = 0x2aa46bdb;
  param_1[3] = 0x4d5c788c;
  param_1[4] = 0xc04376e6;
  param_1[5] = 0x596b48c;
  return;
}

