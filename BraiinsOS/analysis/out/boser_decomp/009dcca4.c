// FUN_009dcca4 @ 009dcca4 size=56 calls_out=2 calls_in=2
// strings: 

void FUN_009dcca4(undefined4 param_1)

{
  int iVar1;
  
  iVar1 = thunk_FUN_01be5118(0x910);
  if (iVar1 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_0066439c(8,0x910);
  }
  *(undefined4 *)(iVar1 + 0x900) = param_1;
  *(undefined4 *)(iVar1 + 0x904) = 0;
  *(undefined4 *)(iVar1 + 0x908) = 0;
  *(undefined4 *)(iVar1 + 0x90c) = 0;
  return;
}

