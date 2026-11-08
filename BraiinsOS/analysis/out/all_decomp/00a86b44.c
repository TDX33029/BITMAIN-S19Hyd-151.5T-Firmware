// FUN_00a86b44 @ 00a86b44 size=68 calls_out=2 calls_in=0
// strings: 

void FUN_00a86b44(undefined4 *param_1)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)thunk_FUN_016d4a50(6);
  if (puVar1 == (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_00600af4(1,6);
  }
  *param_1 = 6;
  *(undefined2 *)(puVar1 + 1) = 0x7075;
  param_1[1] = puVar1;
  param_1[2] = 6;
  *puVar1 = 0x6b636f6d;
  return;
}

