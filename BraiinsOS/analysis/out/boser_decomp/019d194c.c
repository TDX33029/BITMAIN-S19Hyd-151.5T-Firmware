// FUN_019d194c @ 019d194c size=56 calls_out=2 calls_in=2
// strings: 

void FUN_019d194c(undefined4 param_1)

{
  int iVar1;
  
  iVar1 = thunk_FUN_01be5118(0x90);
  if (iVar1 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_0066439c(8,0x90);
  }
  *(undefined4 *)(iVar1 + 0x80) = param_1;
  *(undefined4 *)(iVar1 + 0x84) = 0;
  *(undefined4 *)(iVar1 + 0x88) = 0;
  *(undefined4 *)(iVar1 + 0x8c) = 0;
  return;
}

