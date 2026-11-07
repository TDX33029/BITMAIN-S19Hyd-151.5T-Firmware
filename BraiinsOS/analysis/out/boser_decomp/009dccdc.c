// FUN_009dccdc @ 009dccdc size=56 calls_out=2 calls_in=2
// strings: 

void FUN_009dccdc(undefined4 param_1)

{
  int iVar1;
  
  iVar1 = thunk_FUN_01be5118(0x50);
  if (iVar1 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_0066439c(4,0x50);
  }
  *(undefined4 *)(iVar1 + 0x40) = param_1;
  *(undefined4 *)(iVar1 + 0x44) = 0;
  *(undefined4 *)(iVar1 + 0x48) = 0;
  *(undefined4 *)(iVar1 + 0x4c) = 0;
  return;
}

