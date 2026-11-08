// FUN_013c7204 @ 013c7204 size=56 calls_out=2 calls_in=9
// strings: 

void FUN_013c7204(undefined1 param_1,undefined4 param_2)

{
  undefined1 *puVar1;
  
  puVar1 = (undefined1 *)thunk_FUN_016d4a50(0xc);
  if (puVar1 == (undefined1 *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_00600874(4,0xc);
  }
  *(undefined4 *)(puVar1 + 4) = param_2;
  puVar1[1] = param_1;
  *puVar1 = 0;
  return;
}

