// FUN_01a9da28 @ 01a9da28 size=56 calls_out=2 calls_in=2
// strings: 

void FUN_01a9da28(undefined4 param_1)

{
  int iVar1;
  
  iVar1 = thunk_FUN_01be5118(0x690);
  if (iVar1 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_0066439c(8,0x690);
  }
  *(undefined4 *)(iVar1 + 0x680) = param_1;
  *(undefined4 *)(iVar1 + 0x684) = 0;
  *(undefined4 *)(iVar1 + 0x688) = 0;
  *(undefined4 *)(iVar1 + 0x68c) = 0;
  return;
}

