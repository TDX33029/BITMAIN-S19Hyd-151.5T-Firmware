// FUN_016531b0 @ 016531b0 size=344 calls_out=4 calls_in=2
// strings: 

void FUN_016531b0(int param_1,undefined4 *param_2)

{
  bool bVar1;
  bool bVar2;
  int iVar3;
  int *piVar4;
  code *pcVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 *puVar9;
  int iVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  undefined4 uVar14;
  int iVar15;
  bool bVar16;
  undefined8 uVar17;
  
  uVar17 = thunk_FUN_016de0ee(param_1,0x40);
  iVar10 = (int)uVar17 + (int)((ulonglong)uVar17 >> 0x20);
  iVar15 = *(int *)(param_1 + 0x10);
  uVar11 = *(undefined4 *)(param_1 + 0x14);
  if (*(char *)(iVar10 + 0x38) != '\x01') {
    uVar13 = 0;
    uVar14 = 0;
    if (*(char *)(iVar10 + 0x38) == '\x02') {
      iVar3 = *(int *)(param_1 + 0x18);
      goto joined_r0x01653278;
    }
    FUN_015e8e6c(iVar10,FUN_01655ec4);
    *(undefined1 *)(iVar10 + 0x38) = 1;
  }
  uVar13 = *(undefined4 *)(iVar10 + 0x18);
  uVar14 = *(undefined4 *)(iVar10 + 0x1c);
  *(int *)(iVar10 + 0x18) = iVar15;
  *(undefined4 *)(iVar10 + 0x1c) = uVar11;
  iVar3 = *(int *)(param_1 + 0x18);
joined_r0x01653278:
  if (iVar3 == 1) {
    bVar1 = *(int *)(param_1 + 0x20) == 0;
    bVar2 = *(int *)(param_1 + 0x24) == 0;
    bVar16 = bVar1 && bVar2;
    if (!bVar1 || !bVar2) {
      iVar15 = *(int *)(param_1 + 0x28);
      bVar16 = iVar15 == 0;
    }
    if (!bVar16) {
      puVar9 = *(undefined4 **)(param_1 + 0x2c);
      pcVar5 = (code *)*puVar9;
      if (pcVar5 != (code *)0x0) {
        (*pcVar5)(iVar15);
      }
      if (puVar9[1] != 0) {
        thunk_FUN_016d3fb4(iVar15);
      }
    }
  }
  else if ((iVar3 == 0) && (piVar4 = *(int **)(param_1 + 0x20), piVar4 != (int *)0x0)) {
    DataMemoryBarrier(0xb);
    do {
      iVar15 = *piVar4;
      bVar1 = (bool)hasExclusiveAccess(piVar4);
    } while (!bVar1);
    *piVar4 = iVar15 + -1;
    if (iVar15 == 1) {
      DataMemoryBarrier(0xb);
      FUN_01659540(*(undefined4 *)(param_1 + 0x20));
    }
  }
  uVar11 = param_2[1];
  uVar6 = param_2[2];
  uVar7 = param_2[3];
  uVar8 = param_2[4];
  uVar12 = param_2[5];
  *(undefined4 *)(param_1 + 0x18) = *param_2;
  *(undefined4 *)(param_1 + 0x1c) = uVar11;
  *(undefined4 *)(param_1 + 0x20) = uVar6;
  *(undefined4 *)(param_1 + 0x24) = uVar7;
  *(undefined4 *)(param_1 + 0x28) = uVar8;
  *(undefined4 *)(param_1 + 0x2c) = uVar12;
  if (*(char *)(iVar10 + 0x38) != '\x01') {
    if (*(char *)(iVar10 + 0x38) == '\x02') {
      return;
    }
    FUN_015e8e6c(iVar10,FUN_01655ec4);
    *(undefined1 *)(iVar10 + 0x38) = 1;
  }
  *(undefined4 *)(iVar10 + 0x18) = uVar13;
  *(undefined4 *)(iVar10 + 0x1c) = uVar14;
  return;
}

