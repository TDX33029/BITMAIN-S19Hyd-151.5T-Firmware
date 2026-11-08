// FUN_0089bc74 @ 0089bc74 size=56 calls_out=2 calls_in=0
// strings: 

void FUN_0089bc74(undefined4 param_1)

{
  int iVar1;
  
  iVar1 = thunk_FUN_016d4a50(0xd8);
  if (iVar1 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_00600874(8,0xd8);
  }
  *(undefined1 *)(iVar1 + 0xd4) = 0;
  *(undefined4 *)(iVar1 + 0xd0) = param_1;
  return;
}

