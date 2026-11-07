// FUN_015283fc @ 015283fc size=72 calls_out=2 calls_in=0
// strings: 

void FUN_015283fc(int param_1)

{
  bool bVar1;
  int *piVar2;
  int iVar3;
  
  FUN_00db4764();
  FUN_00db4764(param_1 + 0x18);
  piVar2 = *(int **)(param_1 + 0x30);
  DataMemoryBarrier(0xb);
  do {
    iVar3 = *piVar2;
    bVar1 = (bool)hasExclusiveAccess(piVar2);
  } while (!bVar1);
  *piVar2 = iVar3 + -1;
  if (iVar3 == 1) {
    DataMemoryBarrier(0xb);
    FUN_0070451c(*(undefined4 *)(param_1 + 0x30),*(undefined4 *)(param_1 + 0x34));
    return;
  }
  return;
}

