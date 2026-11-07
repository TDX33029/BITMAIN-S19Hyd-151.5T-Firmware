// FUN_0133c6f0 @ 0133c6f0 size=40 calls_out=1 calls_in=2
// strings: 

void FUN_0133c6f0(int param_1)

{
  int iVar1;
  int iVar2;
  
  iVar2 = *(int *)(param_1 + 8) + 1;
  iVar1 = *(int *)(param_1 + 4);
  while (iVar2 = iVar2 + -1, iVar2 != 0) {
    FUN_0133634c(iVar1);
    iVar1 = iVar1 + 0x24;
  }
  return;
}

