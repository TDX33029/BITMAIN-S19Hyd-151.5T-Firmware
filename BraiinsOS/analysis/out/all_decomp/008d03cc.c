// FUN_008d03cc @ 008d03cc size=80 calls_out=2 calls_in=0
// strings: 

void FUN_008d03cc(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 param_5)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)thunk_FUN_016d4a50(0x18);
  if (puVar1 == (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_00600874(8,0x18);
  }
  *(undefined1 *)(puVar1 + 5) = 0;
  puVar1[4] = param_1;
  *puVar1 = param_3;
  puVar1[1] = param_4;
  puVar1[2] = param_5;
  return;
}

