// FUN_00f267f4 @ 00f267f4 size=56 calls_out=2 calls_in=2
// strings: 

void FUN_00f267f4(undefined4 param_1)

{
  int iVar1;
  
  iVar1 = thunk_FUN_01be5118(0x110);
  if (iVar1 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_0066439c(4,0x110);
  }
  *(undefined4 *)(iVar1 + 0x100) = param_1;
  *(undefined4 *)(iVar1 + 0x104) = 0;
  *(undefined4 *)(iVar1 + 0x108) = 0;
  *(undefined4 *)(iVar1 + 0x10c) = 0;
  return;
}

