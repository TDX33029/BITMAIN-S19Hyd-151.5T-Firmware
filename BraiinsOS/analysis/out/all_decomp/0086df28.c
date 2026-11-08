// FUN_0086df28 @ 0086df28 size=56 calls_out=2 calls_in=0
// strings: 

void FUN_0086df28(undefined4 param_1)

{
  int iVar1;
  
  iVar1 = thunk_FUN_016d4a50(0xe0);
  if (iVar1 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_00600874(8,0xe0);
  }
  *(undefined1 *)(iVar1 + 0xd8) = 0;
  *(undefined4 *)(iVar1 + 0xd0) = param_1;
  return;
}

