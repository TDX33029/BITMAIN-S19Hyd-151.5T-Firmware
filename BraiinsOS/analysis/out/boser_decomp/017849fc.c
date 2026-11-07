// FUN_017849fc @ 017849fc size=80 calls_out=4 calls_in=1
// strings: 

void FUN_017849fc(int param_1)

{
  bool bVar1;
  int *piVar2;
  int iVar3;
  
  FUN_017793c0();
  FUN_01784aac(param_1 + 0x40);
  FUN_017037a4(param_1 + 0x100);
  piVar2 = *(int **)(param_1 + 0x10c);
  DataMemoryBarrier(0xb);
  do {
    iVar3 = *piVar2;
    bVar1 = (bool)hasExclusiveAccess(piVar2);
  } while (!bVar1);
  *piVar2 = iVar3 + -1;
  if (iVar3 == 1) {
    DataMemoryBarrier(0xb);
    FUN_01784b8c(*(undefined4 *)(param_1 + 0x10c));
    return;
  }
  return;
}

