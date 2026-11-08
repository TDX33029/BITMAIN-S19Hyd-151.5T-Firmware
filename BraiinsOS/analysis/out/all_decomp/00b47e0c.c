// FUN_00b47e0c @ 00b47e0c size=288 calls_out=4 calls_in=2
// strings: 

void FUN_00b47e0c(int param_1)

{
  bool bVar1;
  uint *puVar2;
  int iVar3;
  int *piVar4;
  int iVar5;
  uint uVar6;
  
  if (*(char *)(param_1 + 0x684) == '\0') {
    FUN_00adbed4(param_1);
    FUN_00b40340(param_1 + 0x328);
    return;
  }
  if (*(char *)(param_1 + 0x684) != '\x03') {
    return;
  }
  iVar5 = *(int *)(param_1 + 0x680);
  if (iVar5 != 0) {
    puVar2 = (uint *)(iVar5 + 0x20);
    do {
      uVar6 = *puVar2;
      bVar1 = (bool)hasExclusiveAccess(puVar2);
    } while (!bVar1);
    *puVar2 = uVar6 | 4;
    DataMemoryBarrier(0xb);
    if ((uVar6 & 10) == 8) {
      (**(code **)(*(int *)(iVar5 + 0x10) + 8))(*(undefined4 *)(iVar5 + 0x14));
    }
    if ((uVar6 & 2) != 0) {
      iVar3 = *(int *)(iVar5 + 8);
      piVar4 = *(int **)(iVar5 + 0xc);
      *(undefined4 *)(iVar5 + 8) = 2;
      if (iVar3 != 2) {
        if (iVar3 == 0) {
          DataMemoryBarrier(0xb);
          do {
            iVar5 = *piVar4;
            bVar1 = (bool)hasExclusiveAccess(piVar4);
          } while (!bVar1);
          *piVar4 = iVar5 + -1;
          if (iVar5 == 1) {
            DataMemoryBarrier(0xb);
            FUN_008f1030(piVar4);
          }
        }
        else {
          (**(code **)*piVar4)(piVar4);
        }
      }
    }
    piVar4 = *(int **)(param_1 + 0x680);
    if (piVar4 != (int *)0x0) {
      DataMemoryBarrier(0xb);
      do {
        iVar5 = *piVar4;
        bVar1 = (bool)hasExclusiveAccess(piVar4);
      } while (!bVar1);
      *piVar4 = iVar5 + -1;
      if (iVar5 == 1) {
        DataMemoryBarrier(0xb);
        FUN_00d02bf8(*(undefined4 *)(param_1 + 0x680));
      }
    }
  }
  *(undefined4 *)(param_1 + 0x685) = 0;
  *(undefined2 *)(param_1 + 0x689) = 0;
  return;
}

