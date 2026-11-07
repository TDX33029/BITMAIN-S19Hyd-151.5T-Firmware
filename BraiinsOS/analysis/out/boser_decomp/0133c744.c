// FUN_0133c744 @ 0133c744 size=40 calls_out=1 calls_in=1
// strings: 

void FUN_0133c744(int param_1)

{
  int iVar1;
  int iVar2;
  
  iVar2 = *(int *)(param_1 + 8) + 1;
  iVar1 = *(int *)(param_1 + 4);
  while (iVar2 = iVar2 + -1, iVar2 != 0) {
    FUN_0133c798(iVar1);
    iVar1 = iVar1 + 0x14;
  }
  return;
}

