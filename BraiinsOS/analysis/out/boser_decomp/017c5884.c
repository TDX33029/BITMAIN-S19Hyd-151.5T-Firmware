// FUN_017c5884 @ 017c5884 size=56 calls_out=2 calls_in=2
// strings: 

void FUN_017c5884(undefined4 param_1)

{
  int iVar1;
  
  iVar1 = thunk_FUN_01be5118(0xd10);
  if (iVar1 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_0066439c(8,0xd10);
  }
  *(undefined4 *)(iVar1 + 0xd00) = param_1;
  *(undefined4 *)(iVar1 + 0xd04) = 0;
  *(undefined4 *)(iVar1 + 0xd08) = 0;
  *(undefined4 *)(iVar1 + 0xd0c) = 0;
  return;
}

