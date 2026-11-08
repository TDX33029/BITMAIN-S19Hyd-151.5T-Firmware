// FUN_00beaee4 @ 00beaee4 size=68 calls_out=2 calls_in=1
// strings: 

void FUN_00beaee4(undefined4 *param_1)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)thunk_FUN_016d4a50(5);
  if (puVar1 == (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_00600af4(1,5);
  }
  *param_1 = 5;
  *(undefined1 *)(puVar1 + 1) = 0x65;
  param_1[1] = puVar1;
  param_1[2] = 5;
  *puVar1 = 0x736c6166;
  return;
}

