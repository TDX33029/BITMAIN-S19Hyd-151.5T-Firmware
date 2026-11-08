// FUN_00cef01c @ 00cef01c size=916 calls_out=11 calls_in=1
// strings: 

void FUN_00cef01c(int param_1)

{
  bool bVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  uint *puVar5;
  code *pcVar6;
  uint uVar7;
  undefined4 *puVar8;
  undefined4 uVar9;
  
  piVar2 = *(int **)(param_1 + 0x178);
  DataMemoryBarrier(0xb);
  do {
    iVar3 = *piVar2;
    bVar1 = (bool)hasExclusiveAccess(piVar2);
  } while (!bVar1);
  *piVar2 = iVar3 + -1;
  if (iVar3 == 1) {
    DataMemoryBarrier(0xb);
    FUN_008f305c(*(undefined4 *)(param_1 + 0x178));
  }
  iVar3 = *(int *)(param_1 + 0x164);
  if (iVar3 != 0) {
    piVar2 = (int *)(iVar3 + 0x14);
    DataMemoryBarrier(0xb);
    do {
      iVar4 = *piVar2;
      bVar1 = (bool)hasExclusiveAccess(piVar2);
    } while (!bVar1);
    *piVar2 = iVar4 + -1;
    DataMemoryBarrier(0xb);
    if (iVar4 == 1) {
      DataMemoryBarrier(0xb);
      if (0x7fffffff < *(uint *)(iVar3 + 0x10)) {
        puVar5 = (uint *)(iVar3 + 0x10);
        DataMemoryBarrier(0xb);
        do {
          bVar1 = (bool)hasExclusiveAccess(puVar5);
        } while (!bVar1);
        *puVar5 = *puVar5 & 0x7fffffff;
        DataMemoryBarrier(0xb);
      }
      puVar5 = (uint *)(iVar3 + 0x20);
      DataMemoryBarrier(0xb);
      do {
        uVar7 = *puVar5;
        bVar1 = (bool)hasExclusiveAccess(puVar5);
      } while (!bVar1);
      *puVar5 = uVar7 | 2;
      DataMemoryBarrier(0xb);
      if (uVar7 == 0) {
        iVar4 = *(int *)(iVar3 + 0x18);
        *(undefined4 *)(iVar3 + 0x18) = 0;
        DataMemoryBarrier(0xb);
        do {
          bVar1 = (bool)hasExclusiveAccess(puVar5);
        } while (!bVar1);
        *puVar5 = *puVar5 & 0xfffffffd;
        if (iVar4 != 0) {
          (**(code **)(iVar4 + 4))(*(undefined4 *)(iVar3 + 0x1c));
        }
      }
    }
    piVar2 = *(int **)(param_1 + 0x164);
    DataMemoryBarrier(0xb);
    do {
      iVar3 = *piVar2;
      bVar1 = (bool)hasExclusiveAccess(piVar2);
    } while (!bVar1);
    *piVar2 = iVar3 + -1;
    if (iVar3 == 1) {
      DataMemoryBarrier(0xb);
      FUN_008f23b4(*(undefined4 *)(param_1 + 0x164));
    }
  }
  piVar2 = *(int **)(param_1 + 0x17c);
  DataMemoryBarrier(0xb);
  do {
    iVar3 = *piVar2;
    bVar1 = (bool)hasExclusiveAccess(piVar2);
  } while (!bVar1);
  *piVar2 = iVar3 + -1;
  if (iVar3 == 1) {
    DataMemoryBarrier(0xb);
    FUN_008f1a50(*(undefined4 *)(param_1 + 0x17c));
  }
  piVar2 = *(int **)(param_1 + 0x180);
  DataMemoryBarrier(0xb);
  do {
    iVar3 = *piVar2;
    bVar1 = (bool)hasExclusiveAccess(piVar2);
  } while (!bVar1);
  *piVar2 = iVar3 + -1;
  if (iVar3 == 1) {
    DataMemoryBarrier(0xb);
    FUN_009ba6ec(*(undefined4 *)(param_1 + 0x180));
  }
  piVar2 = *(int **)(param_1 + 0x184);
  DataMemoryBarrier(0xb);
  do {
    iVar3 = *piVar2;
    bVar1 = (bool)hasExclusiveAccess(piVar2);
  } while (!bVar1);
  *piVar2 = iVar3 + -1;
  if (iVar3 == 1) {
    DataMemoryBarrier(0xb);
    FUN_00790cd0(*(undefined4 *)(param_1 + 0x184));
  }
  piVar2 = *(int **)(param_1 + 0x188);
  DataMemoryBarrier(0xb);
  do {
    iVar3 = *piVar2;
    bVar1 = (bool)hasExclusiveAccess(piVar2);
  } while (!bVar1);
  *piVar2 = iVar3 + -1;
  if (iVar3 == 1) {
    DataMemoryBarrier(0xb);
    FUN_00790cd0(*(undefined4 *)(param_1 + 0x188));
  }
  FUN_00ac9b04(param_1 + 0x1a0);
  if (*(int *)(param_1 + 0xa0) != 0) {
    thunk_FUN_016d3fb4(*(undefined4 *)(param_1 + 0xa4));
  }
  if (*(int *)(param_1 + 0x38) != 0) {
    thunk_FUN_016d3fb4(*(undefined4 *)(param_1 + 0x3c));
  }
  if ((*(uint *)(param_1 + 0x20) & 0x7fffffff) == 0) {
    iVar3 = *(int *)(param_1 + 0x120);
  }
  else {
    thunk_FUN_016d3fb4(*(undefined4 *)(param_1 + 0x24));
    iVar3 = *(int *)(param_1 + 0x120);
  }
  if (iVar3 != 0) {
    thunk_FUN_016d3fb4(*(undefined4 *)(param_1 + 0x124));
  }
  piVar2 = *(int **)(param_1 + 0x18c);
  DataMemoryBarrier(0xb);
  do {
    iVar3 = *piVar2;
    bVar1 = (bool)hasExclusiveAccess(piVar2);
  } while (!bVar1);
  *piVar2 = iVar3 + -1;
  if (iVar3 == 1) {
    DataMemoryBarrier(0xb);
    FUN_008f2e10(*(undefined4 *)(param_1 + 0x18c));
  }
  puVar8 = (undefined4 *)(param_1 + 0x170);
  piVar2 = (int *)*puVar8;
  if (piVar2 != (int *)0x0) {
    FUN_016af0b0(puVar8);
    DataMemoryBarrier(0xb);
    do {
      iVar3 = *piVar2;
      bVar1 = (bool)hasExclusiveAccess(piVar2);
    } while (!bVar1);
    *piVar2 = iVar3 + -1;
    if (iVar3 == 1) {
      DataMemoryBarrier(0xb);
      FUN_008f4138(*puVar8);
    }
  }
  puVar8 = *(undefined4 **)(param_1 + 0x154);
  uVar9 = *(undefined4 *)(param_1 + 0x150);
  pcVar6 = (code *)*puVar8;
  if (pcVar6 != (code *)0x0) {
    (*pcVar6)(uVar9);
  }
  if (puVar8[1] != 0) {
    thunk_FUN_016d3fb4(uVar9);
  }
  puVar8 = *(undefined4 **)(param_1 + 0x15c);
  uVar9 = *(undefined4 *)(param_1 + 0x158);
  pcVar6 = (code *)*puVar8;
  if (pcVar6 != (code *)0x0) {
    (*pcVar6)(uVar9);
  }
  if (puVar8[1] != 0) {
    thunk_FUN_016d3fb4(uVar9);
  }
  piVar2 = *(int **)(param_1 + 400);
  DataMemoryBarrier(0xb);
  do {
    iVar3 = *piVar2;
    bVar1 = (bool)hasExclusiveAccess(piVar2);
  } while (!bVar1);
  *piVar2 = iVar3 + -1;
  if (iVar3 == 1) {
    DataMemoryBarrier(0xb);
    FUN_00784894(*(undefined4 *)(param_1 + 400));
  }
  piVar2 = *(int **)(param_1 + 0x194);
  DataMemoryBarrier(0xb);
  do {
    iVar3 = *piVar2;
    bVar1 = (bool)hasExclusiveAccess(piVar2);
  } while (!bVar1);
  *piVar2 = iVar3 + -1;
  if (iVar3 == 1) {
    DataMemoryBarrier(0xb);
    FUN_00784894(*(undefined4 *)(param_1 + 0x194));
    return;
  }
  return;
}

