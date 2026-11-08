// FUN_008a14dc @ 008a14dc size=80 calls_out=2 calls_in=0
// strings: 

void FUN_008a14dc(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  
  iVar1 = thunk_FUN_016d4a50(0xc0);
  if (iVar1 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_00600874(8,0xc0);
  }
  *(undefined1 *)(iVar1 + 0xb8) = 0;
  *(undefined4 *)(iVar1 + 0xa8) = param_1;
  *(undefined4 *)(iVar1 + 0xac) = param_2;
  *(undefined4 *)(iVar1 + 0xb0) = param_3;
  *(undefined4 *)(iVar1 + 0xb4) = param_4;
  return;
}

