// FUN_006562fc @ 006562fc size=300 calls_out=7 calls_in=2
// strings: 

void FUN_006562fc(int param_1)

{
  bool bVar1;
  int *piVar2;
  int iVar3;
  
  if (*(char *)(param_1 + 0x498) != '\0') {
    if (*(char *)(param_1 + 0x498) != '\x03') {
      return;
    }
    FUN_0065652c(param_1 + 0xb0);
    piVar2 = *(int **)(param_1 + 0x38);
    if (piVar2 != (int *)0x0) {
      DataMemoryBarrier(0xb);
      do {
        iVar3 = *piVar2;
        bVar1 = (bool)hasExclusiveAccess(piVar2);
      } while (!bVar1);
      *piVar2 = iVar3 + -1;
      if (iVar3 == 1) {
        DataMemoryBarrier(0xb);
        FUN_0089ddfc(*(undefined4 *)(param_1 + 0x38),*(undefined4 *)(param_1 + 0x3c));
      }
    }
    piVar2 = *(int **)(param_1 + 0xa0);
    if (piVar2 != (int *)0x0) {
      DataMemoryBarrier(0xb);
      do {
        iVar3 = *piVar2;
        bVar1 = (bool)hasExclusiveAccess(piVar2);
      } while (!bVar1);
      *piVar2 = iVar3 + -1;
      if (iVar3 == 1) {
        DataMemoryBarrier(0xb);
        FUN_0089ddfc(*(undefined4 *)(param_1 + 0xa0),*(undefined4 *)(param_1 + 0xa4));
      }
    }
    *(undefined2 *)(param_1 + 0x499) = 0;
    return;
  }
  FUN_005e6cdc(param_1);
  if (*(int *)(param_1 + 0xc) != -1) {
    FUN_016dffb2();
  }
  FUN_00a414e8(param_1);
  piVar2 = *(int **)(param_1 + 0x490);
  DataMemoryBarrier(0xb);
  do {
    iVar3 = *piVar2;
    bVar1 = (bool)hasExclusiveAccess(piVar2);
  } while (!bVar1);
  *piVar2 = iVar3 + -1;
  if (iVar3 == 1) {
    DataMemoryBarrier(0xb);
    FUN_012c0f04(*(undefined4 *)(param_1 + 0x490));
  }
  piVar2 = *(int **)(param_1 + 0x494);
  DataMemoryBarrier(0xb);
  do {
    iVar3 = *piVar2;
    bVar1 = (bool)hasExclusiveAccess(piVar2);
  } while (!bVar1);
  *piVar2 = iVar3 + -1;
  if (iVar3 == 1) {
    DataMemoryBarrier(0xb);
    FUN_0078f120(*(undefined4 *)(param_1 + 0x494));
    return;
  }
  return;
}

