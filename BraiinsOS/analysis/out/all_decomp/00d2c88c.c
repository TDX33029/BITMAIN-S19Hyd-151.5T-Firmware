// FUN_00d2c88c @ 00d2c88c size=436 calls_out=6 calls_in=1
// strings: 

void FUN_00d2c88c(int *param_1)

{
  byte bVar1;
  bool bVar2;
  char cVar3;
  int iVar4;
  uint *puVar5;
  int *piVar6;
  uint uVar7;
  int iVar8;
  int *piVar9;
  
  iVar8 = param_1[0xc];
  DataMemoryBarrier(0xb);
  piVar6 = (int *)(iVar8 + 0x98);
  do {
    iVar4 = *piVar6;
    bVar2 = (bool)hasExclusiveAccess(piVar6);
  } while (!bVar2);
  *piVar6 = iVar4 + -1;
  DataMemoryBarrier(0xb);
  if (iVar4 == 1) {
    FUN_00c74cd4(iVar8 + 0x20);
    puVar5 = (uint *)(iVar8 + 0x48);
    DataMemoryBarrier(0xb);
    do {
      uVar7 = *puVar5;
      bVar2 = (bool)hasExclusiveAccess(puVar5);
    } while (!bVar2);
    *puVar5 = uVar7 | 2;
    DataMemoryBarrier(0xb);
    if (uVar7 == 0) {
      iVar4 = *(int *)(iVar8 + 0x40);
      *(undefined4 *)(iVar8 + 0x40) = 0;
      DataMemoryBarrier(0xb);
      do {
        bVar2 = (bool)hasExclusiveAccess(puVar5);
      } while (!bVar2);
      *puVar5 = 0;
      if (iVar4 != 0) {
        (**(code **)(iVar4 + 4))(*(undefined4 *)(iVar8 + 0x44));
      }
    }
  }
  piVar6 = (int *)param_1[0xc];
  DataMemoryBarrier(0xb);
  do {
    iVar8 = *piVar6;
    bVar2 = (bool)hasExclusiveAccess(piVar6);
  } while (!bVar2);
  *piVar6 = iVar8 + -1;
  if (iVar8 == 1) {
    DataMemoryBarrier(0xb);
    FUN_008f2028(param_1[0xc]);
  }
  piVar6 = (int *)param_1[0xd];
  FUN_00d2cb18(piVar6);
  DataMemoryBarrier(0xb);
  do {
    iVar8 = *piVar6;
    bVar2 = (bool)hasExclusiveAccess(piVar6);
  } while (!bVar2);
  *piVar6 = iVar8 + -1;
  if (iVar8 == 1) {
    DataMemoryBarrier(0xb);
    FUN_008f2220(param_1[0xd]);
  }
  piVar9 = (int *)param_1[10];
  piVar6 = piVar9 + 0x29;
  do {
    iVar8 = *piVar6;
    bVar2 = (bool)hasExclusiveAccess(piVar6);
  } while (!bVar2);
  *piVar6 = iVar8 + -1;
  if (iVar8 == 1) {
    FUN_0163b708(piVar9 + 0x22);
  }
  DataMemoryBarrier(0xb);
  do {
    iVar8 = *piVar9;
    bVar2 = (bool)hasExclusiveAccess(piVar9);
  } while (!bVar2);
  *piVar9 = iVar8 + -1;
  if (iVar8 == 1) {
    DataMemoryBarrier(0xb);
    FUN_00784894(param_1[10]);
  }
  if (*param_1 == 0) {
    bVar1 = *(byte *)(param_1 + 2);
    cVar3 = bVar1 - 4;
    if (bVar1 < 4) {
      cVar3 = '\x04';
    }
    iVar8 = 0xc;
    if ((cVar3 != '\x05') && (cVar3 != '\x04' || bVar1 != 3)) {
      return;
    }
  }
  else {
    iVar8 = 4;
    if (*param_1 != 2) {
      return;
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00d2ca10. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)**(undefined4 **)((int)param_1 + iVar8))();
  return;
}

