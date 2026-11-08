// FUN_013c723c @ 013c723c size=48 calls_out=2 calls_in=4
// strings: 

void FUN_013c723c(undefined4 param_1)

{
  undefined1 *puVar1;
  
  puVar1 = (undefined1 *)thunk_FUN_016d4a50(0xc);
  if (puVar1 == (undefined1 *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_00600874(4,0xc);
  }
  *(undefined4 *)(puVar1 + 4) = param_1;
  *puVar1 = 1;
  return;
}

