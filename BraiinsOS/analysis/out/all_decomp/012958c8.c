// FUN_012958c8 @ 012958c8 size=68 calls_out=2 calls_in=1
// strings: 

void FUN_012958c8(undefined1 *param_1,undefined1 param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)thunk_FUN_016d4a50(0xc);
  if (puVar1 == (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_00600874(4,0xc);
  }
  *(undefined1 *)(puVar1 + 2) = param_2;
  *puVar1 = param_3;
  puVar1[1] = param_4;
  *(undefined4 **)(param_1 + 4) = puVar1;
  *param_1 = 3;
  return;
}

