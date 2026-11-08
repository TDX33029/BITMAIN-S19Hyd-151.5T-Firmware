// FUN_0146c550 @ 0146c550 size=416 calls_out=2 calls_in=3
// strings: 

void FUN_0146c550(undefined4 *param_1)

{
  bool bVar1;
  uint *puVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  int *piVar6;
  
  if (*(char *)(param_1 + 9) == '\0') {
    FUN_0146c798(*param_1,param_1[1]);
    piVar6 = (int *)param_1[2];
    if (piVar6 != (int *)0x0) {
      puVar2 = (uint *)(piVar6 + 0x1c);
      uVar5 = piVar6[0x1c];
      do {
        while( true ) {
          uVar4 = uVar5;
          if ((uVar4 & 4) != 0) goto LAB_0146c6a0;
          uVar5 = *puVar2;
          if (uVar5 == uVar4) break;
          ClearExclusiveLocal();
          DataMemoryBarrier(0xb);
        }
        DataMemoryBarrier(0xb);
        bVar1 = (bool)hasExclusiveAccess(puVar2);
        if (bVar1) {
          *puVar2 = uVar4 | 2;
        }
        DataMemoryBarrier(0xb);
      } while (!bVar1);
LAB_0146c6a0:
      if ((uVar4 & 5) == 1) {
        (**(code **)(piVar6[0x1a] + 8))(piVar6[0x1b]);
      }
      DataMemoryBarrier(0xb);
      do {
        iVar3 = *piVar6;
        bVar1 = (bool)hasExclusiveAccess(piVar6);
      } while (!bVar1);
      *piVar6 = iVar3 + -1;
      if (iVar3 == 1) {
        DataMemoryBarrier(0xb);
        FUN_014a545c(param_1[2]);
        return;
      }
      return;
    }
  }
  else if (*(char *)(param_1 + 9) == '\x03') {
    FUN_0146c798(param_1[4],param_1[5]);
    piVar6 = (int *)param_1[3];
    if (piVar6 != (int *)0x0) {
      puVar2 = (uint *)(piVar6 + 0x1c);
      uVar5 = piVar6[0x1c];
      do {
        while( true ) {
          uVar4 = uVar5;
          if ((uVar4 & 4) != 0) goto LAB_0146c5dc;
          uVar5 = *puVar2;
          if (uVar5 == uVar4) break;
          ClearExclusiveLocal();
          DataMemoryBarrier(0xb);
        }
        DataMemoryBarrier(0xb);
        bVar1 = (bool)hasExclusiveAccess(puVar2);
        if (bVar1) {
          *puVar2 = uVar4 | 2;
        }
        DataMemoryBarrier(0xb);
      } while (!bVar1);
LAB_0146c5dc:
      if ((uVar4 & 5) == 1) {
        (**(code **)(piVar6[0x1a] + 8))(piVar6[0x1b]);
      }
      DataMemoryBarrier(0xb);
      do {
        iVar3 = *piVar6;
        bVar1 = (bool)hasExclusiveAccess(piVar6);
      } while (!bVar1);
      *piVar6 = iVar3 + -1;
      if (iVar3 == 1) {
        DataMemoryBarrier(0xb);
        FUN_014a545c(param_1[3]);
      }
    }
    *(undefined1 *)((int)param_1 + 0x25) = 0;
    return;
  }
  return;
}

