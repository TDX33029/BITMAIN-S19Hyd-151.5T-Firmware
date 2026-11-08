// FUN_00873d4c @ 00873d4c size=56 calls_out=2 calls_in=0
// strings: 

void FUN_00873d4c(undefined4 param_1)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)thunk_FUN_016d4a50(8);
  if (puVar1 == (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_00600874(4,8);
  }
  *(undefined1 *)(puVar1 + 1) = 0;
  *puVar1 = param_1;
  return;
}

