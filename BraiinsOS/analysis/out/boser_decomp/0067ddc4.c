// FUN_0067ddc4 @ 0067ddc4 size=56 calls_out=2 calls_in=2
// strings: 

void FUN_0067ddc4(undefined4 param_1)

{
  int iVar1;
  
  iVar1 = thunk_FUN_01be5118(0x250);
  if (iVar1 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_0066439c(4,0x250);
  }
  *(undefined4 *)(iVar1 + 0x240) = param_1;
  *(undefined4 *)(iVar1 + 0x244) = 0;
  *(undefined4 *)(iVar1 + 0x248) = 0;
  *(undefined4 *)(iVar1 + 0x24c) = 0;
  return;
}

