// FUN_00b21a9c @ 00b21a9c size=40 calls_out=1 calls_in=1
// strings: 

void FUN_00b21a9c(int param_1)

{
  int iVar1;
  int iVar2;
  
  iVar2 = *(int *)(param_1 + 8) + 1;
  iVar1 = *(int *)(param_1 + 4);
  while (iVar2 = iVar2 + -1, iVar2 != 0) {
    FUN_00b21af0(iVar1);
    iVar1 = iVar1 + 0x2e0;
  }
  return;
}

