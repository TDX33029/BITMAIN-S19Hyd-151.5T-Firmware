// FUN_01496784 @ 01496784 size=112 calls_out=5 calls_in=6
// strings: 

void FUN_01496784(undefined4 param_1,int param_2,undefined4 param_3)

{
  int iVar1;
  undefined1 auStack_190 [376];
  
  FUN_01adbaa4(auStack_190,param_3);
  iVar1 = thunk_FUN_01be5118(0x178);
  if (iVar1 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_0066439c(8,0x178);
  }
  FUN_01bed4e2(iVar1,auStack_190,0x178);
  FUN_014975d8(param_2 + 0xdc);
  *(int *)(param_2 + 0xdc) = iVar1;
  FUN_01bed4e2(param_1,param_2,0xe8);
  return;
}

