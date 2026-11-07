// FUN_00f8df5c @ 00f8df5c size=64 calls_out=2 calls_in=4
// strings: 

void FUN_00f8df5c(int param_1)

{
  int iVar1;
  int iVar2;
  
  FUN_00f8a844(param_1,1);
  if (*(int *)(param_1 + 100) != 0) {
    iVar1 = *(int *)(param_1 + 0x60);
    iVar2 = *(int *)(param_1 + 100) * 0x16c;
    do {
      FUN_00f8df5c(iVar1);
      iVar1 = iVar1 + 0x16c;
      iVar2 = iVar2 + -0x16c;
    } while (iVar2 != 0);
  }
  return;
}

