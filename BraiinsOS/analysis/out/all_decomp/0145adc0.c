// FUN_0145adc0 @ 0145adc0 size=68 calls_out=2 calls_in=0
// strings: 

void FUN_0145adc0(undefined4 *param_1)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)thunk_FUN_016d4a50(0xc);
  if (puVar1 == (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_00600874(4,0xc);
  }
  *(undefined1 *)(puVar1 + 2) = 0;
  *puVar1 = 1;
  puVar1[1] = 1;
  *(undefined2 *)(param_1 + 3) = 1;
  param_1[2] = puVar1;
  *param_1 = 0;
  return;
}

