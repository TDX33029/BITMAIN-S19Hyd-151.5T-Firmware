// FUN_00b6db10 @ 00b6db10 size=56 calls_out=2 calls_in=2
// strings: 

void FUN_00b6db10(undefined4 param_1,undefined1 param_2)

{
  int iVar1;
  
  iVar1 = thunk_FUN_01be5118(0xd0);
  if (iVar1 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_0066439c(4,0xd0);
  }
  *(undefined1 *)(iVar1 + 0xcd) = param_2;
  *(undefined1 *)(iVar1 + 0xce) = 0;
  *(undefined4 *)(iVar1 + 200) = param_1;
  return;
}

