// FUN_014322c4 @ 014322c4 size=64 calls_out=2 calls_in=1
// strings: 

void FUN_014322c4(int param_1)

{
  undefined4 *puVar1;
  
  if (*(int *)(param_1 + 0x20) != 0) {
    return;
  }
  puVar1 = (undefined4 *)thunk_FUN_01be5118(8);
  if (puVar1 == (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_0066439c(4,8);
  }
  *(undefined4 **)(param_1 + 0x20) = puVar1;
  *puVar1 = 2;
  return;
}

