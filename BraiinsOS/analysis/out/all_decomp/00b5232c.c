// FUN_00b5232c @ 00b5232c size=56 calls_out=2 calls_in=0
// strings: 

void FUN_00b5232c(undefined4 param_1)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)thunk_FUN_016d4a50(0x18);
  if (puVar1 == (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_00600874(4,0x18);
  }
  *(undefined1 *)(puVar1 + 5) = 0;
  *puVar1 = param_1;
  return;
}

