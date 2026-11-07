// FUN_00b6fd3c @ 00b6fd3c size=156 calls_out=2 calls_in=2
// strings: 

void FUN_00b6fd3c(int param_1)

{
  bool bVar1;
  int *piVar2;
  int iVar3;
  
  piVar2 = *(int **)(param_1 + 0x3c);
  DataMemoryBarrier(0xb);
  do {
    iVar3 = *piVar2;
    bVar1 = (bool)hasExclusiveAccess(piVar2);
  } while (!bVar1);
  *piVar2 = iVar3 + -1;
  if (iVar3 == 1) {
    DataMemoryBarrier(0xb);
    FUN_019db648(*(undefined4 *)(param_1 + 0x3c));
  }
  if (*(int *)(param_1 + 0x18) != -0x80000000) {
    piVar2 = *(int **)(param_1 + 0x1c);
    if (*(int *)(param_1 + 0x18) == -0x7fffffff) {
      if (*piVar2 == 0xcc) {
        DataMemoryBarrier(0xb);
        bVar1 = (bool)hasExclusiveAccess(piVar2);
        if (bVar1) {
          *piVar2 = 0x84;
          goto LAB_00b6fdcc;
        }
      }
      else {
        ClearExclusiveLocal();
      }
      (**(code **)(piVar2[2] + 0x10))(piVar2);
    }
    else {
      FUN_019bb7e0();
    }
  }
LAB_00b6fdcc:
  FUN_019bb7e0(*(undefined4 *)(param_1 + 0x40),*(undefined4 *)(param_1 + 0x44));
  return;
}

