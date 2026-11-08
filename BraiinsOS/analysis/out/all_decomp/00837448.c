// FUN_00837448 @ 00837448 size=68 calls_out=2 calls_in=0
// strings: 

void FUN_00837448(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)thunk_FUN_016d4a50(0xa0);
  if (puVar1 == (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_00600874(4,0xa0);
  }
  *(undefined1 *)(puVar1 + 0x27) = 0;
  *puVar1 = param_2;
  puVar1[1] = param_3;
  puVar1[2] = param_1;
  return;
}

