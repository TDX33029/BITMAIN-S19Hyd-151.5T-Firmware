// FUN_013c71d0 @ 013c71d0 size=52 calls_out=2 calls_in=2
// strings: 

void FUN_013c71d0(undefined4 param_1,undefined4 param_2)

{
  undefined1 *puVar1;
  
  puVar1 = (undefined1 *)thunk_FUN_016d4a50(0xc);
  if (puVar1 == (undefined1 *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_00600874(4,0xc);
  }
  *(undefined4 *)(puVar1 + 4) = param_1;
  *(undefined4 *)(puVar1 + 8) = param_2;
  *puVar1 = 3;
  return;
}

