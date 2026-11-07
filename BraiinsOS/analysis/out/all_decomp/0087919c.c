// FUN_0087919c @ 0087919c size=56 calls_out=2 calls_in=0
// strings: 

void FUN_0087919c(undefined4 param_1)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)thunk_FUN_016d4a50(0xac);
  if (puVar1 == (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_00600874(4,0xac);
  }
  *(undefined1 *)(puVar1 + 0x2a) = 0;
  *puVar1 = param_1;
  return;
}

