// FUN_00f267bc @ 00f267bc size=56 calls_out=2 calls_in=2
// strings: 

void FUN_00f267bc(undefined4 param_1)

{
  int iVar1;
  
  iVar1 = thunk_FUN_01be5118(0x290);
  if (iVar1 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_0066439c(4,0x290);
  }
  *(undefined4 *)(iVar1 + 0x280) = param_1;
  *(undefined4 *)(iVar1 + 0x284) = 0;
  *(undefined4 *)(iVar1 + 0x288) = 0;
  *(undefined4 *)(iVar1 + 0x28c) = 0;
  return;
}

