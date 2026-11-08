// FUN_0064bf9c @ 0064bf9c size=784 calls_out=5 calls_in=5
// strings: 

void FUN_0064bf9c(int *param_1)

{
  bool bVar1;
  code *pcVar2;
  int *piVar3;
  uint *puVar4;
  uint uVar5;
  uint uVar6;
  undefined4 *puVar7;
  int iVar8;
  int *piVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  
  if (*param_1 != 3 || param_1[1] != 0) {
    FUN_01015c1c(param_1);
  }
  piVar9 = (int *)param_1[0x39];
  if (piVar9 != (int *)0x0) {
    iVar11 = *piVar9;
    if (iVar11 != 0) {
      puVar7 = (undefined4 *)piVar9[1];
      pcVar2 = (code *)*puVar7;
      if (pcVar2 != (code *)0x0) {
        (*pcVar2)(iVar11);
      }
      if (puVar7[1] != 0) {
        thunk_FUN_016d3fb4(iVar11);
      }
    }
    thunk_FUN_016d3fb4(piVar9);
  }
  if (((*(byte *)(param_1 + 0x34) != 0xb) && (9 < *(byte *)(param_1 + 0x34))) &&
     (param_1[0x36] != 0)) {
    thunk_FUN_016d3fb4(param_1[0x35]);
  }
  iVar11 = param_1[0x2e];
  if (iVar11 != 0) {
    puVar7 = (undefined4 *)param_1[0x2f];
    pcVar2 = (code *)*puVar7;
    if (pcVar2 != (code *)0x0) {
      (*pcVar2)(iVar11);
    }
    if (puVar7[1] != 0) {
      thunk_FUN_016d3fb4(iVar11);
    }
  }
  piVar9 = (int *)param_1[0x30];
  if (piVar9 != (int *)0x0) {
    DataMemoryBarrier(0xb);
    do {
      iVar11 = *piVar9;
      bVar1 = (bool)hasExclusiveAccess(piVar9);
    } while (!bVar1);
    *piVar9 = iVar11 + -1;
    if (iVar11 == 1) {
      DataMemoryBarrier(0xb);
      FUN_0089ddfc(param_1[0x30],param_1[0x31]);
    }
  }
  piVar9 = (int *)param_1[0x32];
  if (piVar9 != (int *)0x0) {
    DataMemoryBarrier(0xb);
    do {
      iVar11 = *piVar9;
      bVar1 = (bool)hasExclusiveAccess(piVar9);
    } while (!bVar1);
    *piVar9 = iVar11 + -1;
    if (iVar11 == 1) {
      DataMemoryBarrier(0xb);
      FUN_015614d8(param_1[0x32],param_1[0x33]);
    }
  }
  if (((param_1[0x10] == 1 || param_1[0x10] == 2) && ((uint)param_1[0x12] < 2)) &&
     (param_1[0x1a] != 0)) {
    piVar9 = (int *)param_1[0x1d];
    if (((uint)piVar9 & 1) == 0) {
      piVar3 = piVar9 + 4;
      DataMemoryBarrier(0xb);
      do {
        iVar11 = *piVar3;
        bVar1 = (bool)hasExclusiveAccess(piVar3);
      } while (!bVar1);
      *piVar3 = iVar11 + -1;
      if (iVar11 != 1) goto LAB_0064c178;
      DataMemoryBarrier(0xb);
      if (*piVar9 != 0) {
        thunk_FUN_016d3fb4(piVar9[1]);
      }
    }
    else {
      if (param_1[0x1c] + ((uint)piVar9 >> 5) == 0) goto LAB_0064c178;
      piVar9 = (int *)(param_1[0x1a] - ((uint)piVar9 >> 5));
    }
    thunk_FUN_016d3fb4(piVar9);
  }
LAB_0064c178:
  if ((param_1[0x24] == 0) && (iVar11 = param_1[0x25], iVar11 != -0x80000000)) {
    iVar10 = param_1[0x26];
    iVar8 = param_1[0x27] + 1;
    iVar12 = 0;
    while (iVar8 = iVar8 + -1, iVar8 != 0) {
      piVar9 = (int *)(iVar10 + iVar12);
      iVar12 = iVar12 + 0x14;
      (**(code **)(*piVar9 + 0x10))(piVar9 + 3,piVar9[1],piVar9[2]);
    }
    if (iVar11 != 0) {
      thunk_FUN_016d3fb4(iVar10);
    }
  }
  iVar11 = 0;
  if (param_1[0x22] != 0) {
    iVar11 = param_1[0x23];
  }
  if (param_1[0x22] != 0 && iVar11 != 0) {
    puVar4 = (uint *)(iVar11 + 0x18);
    uVar6 = *(uint *)(iVar11 + 0x18);
    do {
      while( true ) {
        uVar5 = uVar6;
        if ((uVar5 & 4) != 0) goto LAB_0064c254;
        uVar6 = *puVar4;
        if (uVar6 == uVar5) break;
        ClearExclusiveLocal();
        DataMemoryBarrier(0xb);
      }
      DataMemoryBarrier(0xb);
      bVar1 = (bool)hasExclusiveAccess(puVar4);
      if (bVar1) {
        *puVar4 = uVar5 | 2;
      }
      DataMemoryBarrier(0xb);
    } while (!bVar1);
LAB_0064c254:
    if ((uVar5 & 5) == 1) {
      (**(code **)(*(int *)(iVar11 + 0x10) + 8))(*(undefined4 *)(iVar11 + 0x14));
    }
    piVar9 = (int *)param_1[0x23];
    if (piVar9 != (int *)0x0) {
      DataMemoryBarrier(0xb);
      do {
        iVar11 = *piVar9;
        bVar1 = (bool)hasExclusiveAccess(piVar9);
      } while (!bVar1);
      *piVar9 = iVar11 + -1;
      if (iVar11 == 1) {
        DataMemoryBarrier(0xb);
        FUN_010b50b8(param_1[0x23]);
        return;
      }
    }
  }
  return;
}

