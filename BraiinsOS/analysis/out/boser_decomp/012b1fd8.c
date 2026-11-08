// FUN_012b1fd8 @ 012b1fd8 size=88 calls_out=2 calls_in=2
// strings: 

void FUN_012b1fd8(undefined4 *param_1,undefined1 param_2)

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
  param_1[1] = &DAT_01ce2594;
  param_1[2] = 0x15b11d7e;
  param_1[3] = 0xb3f9e9b0;
  param_1[4] = 0xa423c218;
  param_1[5] = 0xf4422d85;
  return;
}

