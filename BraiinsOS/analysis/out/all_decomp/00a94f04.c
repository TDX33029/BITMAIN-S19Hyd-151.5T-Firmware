// FUN_00a94f04 @ 00a94f04 size=56 calls_out=2 calls_in=0
// strings: 

void FUN_00a94f04(undefined4 param_1)

{
  int iVar1;
  
  iVar1 = thunk_FUN_016d4a50(0x338);
  if (iVar1 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_00600874(8,0x338);
  }
  *(undefined1 *)(iVar1 + 0x334) = 0;
  *(undefined4 *)(iVar1 + 0x330) = param_1;
  return;
}

