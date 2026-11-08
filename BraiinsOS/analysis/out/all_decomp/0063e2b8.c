// FUN_0063e2b8 @ 0063e2b8 size=456 calls_out=3 calls_in=0
// strings: 

void FUN_0063e2b8(int param_1)

{
  int iVar1;
  int *piVar2;
  uint *puVar3;
  int *piVar4;
  uint uVar5;
  int iVar6;
  int unaff_r6;
  int iVar7;
  int iVar8;
  bool bVar9;
  
  iVar7 = *(int *)(param_1 + 0x1c);
  iVar8 = *(int *)(param_1 + 0x18);
  if (iVar7 != 0) {
    iVar6 = 0;
    do {
      iVar7 = iVar7 + -1;
      bVar9 = *(int *)(iVar8 - iVar6) != 0;
      iVar1 = 0;
      if (bVar9) {
        unaff_r6 = iVar8 - iVar6;
        iVar1 = *(int *)(unaff_r6 + 4);
      }
      if (bVar9 && iVar1 != 0) {
        (**(code **)(iVar1 + 0xc))(*(undefined4 *)(unaff_r6 + 8));
      }
      iVar6 = iVar6 + -0xc;
    } while (iVar7 != 0);
  }
  if (*(int *)(param_1 + 0x14) != 0) {
    thunk_FUN_016d3fb4(iVar8);
  }
  piVar2 = (int *)(param_1 + 0x28);
  if (*(char *)(param_1 + 0x30) == '\x03' || *(char *)(param_1 + 0x30) == '\x02') {
    return;
  }
  iVar7 = *piVar2;
  DataMemoryBarrier(0xb);
  piVar4 = (int *)(iVar7 + 0x20);
  do {
    iVar8 = *piVar4;
    bVar9 = (bool)hasExclusiveAccess(piVar4);
  } while (!bVar9);
  *piVar4 = iVar8 + -1;
  DataMemoryBarrier(0xb);
  if (iVar8 == 1) {
    DataMemoryBarrier(0xb);
    if (0x7fffffff < *(uint *)(iVar7 + 0x1c)) {
      puVar3 = (uint *)(iVar7 + 0x1c);
      DataMemoryBarrier(0xb);
      do {
        bVar9 = (bool)hasExclusiveAccess(puVar3);
      } while (!bVar9);
      *puVar3 = *puVar3 & 0x7fffffff;
      DataMemoryBarrier(0xb);
    }
    puVar3 = (uint *)(iVar7 + 0x2c);
    DataMemoryBarrier(0xb);
    do {
      uVar5 = *puVar3;
      bVar9 = (bool)hasExclusiveAccess(puVar3);
    } while (!bVar9);
    *puVar3 = uVar5 | 2;
    DataMemoryBarrier(0xb);
    if (uVar5 == 0) {
      iVar8 = *(int *)(iVar7 + 0x24);
      *(undefined4 *)(iVar7 + 0x24) = 0;
      DataMemoryBarrier(0xb);
      do {
        bVar9 = (bool)hasExclusiveAccess(puVar3);
      } while (!bVar9);
      *puVar3 = *puVar3 & 0xfffffffd;
      if (iVar8 != 0) {
        (**(code **)(iVar8 + 4))(*(undefined4 *)(iVar7 + 0x28));
      }
    }
  }
  piVar4 = (int *)*piVar2;
  DataMemoryBarrier(0xb);
  do {
    iVar7 = *piVar4;
    bVar9 = (bool)hasExclusiveAccess(piVar4);
  } while (!bVar9);
  *piVar4 = iVar7 + -1;
  if (iVar7 == 1) {
    DataMemoryBarrier(0xb);
    FUN_0105aee4(*piVar2);
  }
  piVar2 = *(int **)(param_1 + 0x2c);
  DataMemoryBarrier(0xb);
  do {
    iVar7 = *piVar2;
    bVar9 = (bool)hasExclusiveAccess(piVar2);
  } while (!bVar9);
  *piVar2 = iVar7 + -1;
  if (iVar7 == 1) {
    DataMemoryBarrier(0xb);
    FUN_010b4e7c(*(undefined4 *)(param_1 + 0x2c));
    return;
  }
  return;
}

