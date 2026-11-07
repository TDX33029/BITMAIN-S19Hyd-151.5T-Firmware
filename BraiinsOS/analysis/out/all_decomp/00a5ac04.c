// FUN_00a5ac04 @ 00a5ac04 size=56 calls_out=2 calls_in=0
// strings: 

void FUN_00a5ac04(undefined4 param_1)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)thunk_FUN_016d4a50(0xa38);
  if (puVar1 == (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_00600874(8,0xa38);
  }
  *(undefined1 *)(puVar1 + 3) = 0;
  *puVar1 = param_1;
  return;
}

