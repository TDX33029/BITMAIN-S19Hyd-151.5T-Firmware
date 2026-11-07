// FUN_012a7230 @ 012a7230 size=64 calls_out=2 calls_in=3
// strings: 

void FUN_012a7230(int param_1)

{
  int iVar1;
  int iVar2;
  
  FUN_012a48d4(param_1,1);
  if (*(int *)(param_1 + 100) != 0) {
    iVar1 = *(int *)(param_1 + 0x60);
    iVar2 = *(int *)(param_1 + 100) * 0x16c;
    do {
      FUN_012a7230(iVar1);
      iVar1 = iVar1 + 0x16c;
      iVar2 = iVar2 + -0x16c;
    } while (iVar2 != 0);
  }
  return;
}

