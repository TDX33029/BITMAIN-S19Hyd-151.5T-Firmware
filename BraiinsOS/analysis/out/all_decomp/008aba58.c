// FUN_008aba58 @ 008aba58 size=64 calls_out=2 calls_in=0
// strings: 

void FUN_008aba58(undefined4 param_1,undefined4 param_2)

{
  int iVar1;
  
  iVar1 = thunk_FUN_016d4a50(0x180);
  if (iVar1 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_00600874(8,0x180);
  }
  *(undefined1 *)(iVar1 + 0x178) = 0;
  *(undefined4 *)(iVar1 + 0x170) = param_1;
  *(undefined4 *)(iVar1 + 0x174) = param_2;
  return;
}

