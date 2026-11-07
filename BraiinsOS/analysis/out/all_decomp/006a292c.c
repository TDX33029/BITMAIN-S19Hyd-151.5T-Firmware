// FUN_006a292c @ 006a292c size=204 calls_out=3 calls_in=1
// strings: 

void FUN_006a292c(int *param_1)

{
  bool bVar1;
  int *piVar2;
  int *piVar3;
  code *pcVar4;
  uint *puVar5;
  uint uVar6;
  uint uVar7;
  undefined4 unaff_r4;
  undefined4 unaff_r5;
  undefined4 *puVar8;
  int iVar9;
  undefined4 unaff_r6;
  int iVar10;
  int iVar11;
  int iVar12;
  
  FUN_006931e0(param_1 + 0x40);
  piVar2 = (int *)param_1[0x5a];
  if (((uint)piVar2 & 1) == 0) {
    piVar3 = piVar2 + 4;
    DataMemoryBarrier(0xb);
    do {
      iVar11 = *piVar3;
      bVar1 = (bool)hasExclusiveAccess(piVar3);
    } while (!bVar1);
    *piVar3 = iVar11 + -1;
    if (iVar11 == 1) {
      DataMemoryBarrier(0xb);
      if (*piVar2 != 0) {
        thunk_FUN_016d3fb4(piVar2[1]);
      }
      goto LAB_006a29b4;
    }
  }
  else if (param_1[0x59] + ((uint)piVar2 >> 5) != 0) {
    piVar2 = (int *)(param_1[0x57] - ((uint)piVar2 >> 5));
LAB_006a29b4:
    thunk_FUN_016d3fb4(piVar2);
  }
  if (param_1[0x4a] != 0) {
    thunk_FUN_016d3fb4(param_1[0x4b]);
  }
  FUN_014f059c(param_1 + 0x4e);
  if (param_1[0x4e] != 0) {
    thunk_FUN_016d3fb4(param_1[0x4f]);
  }
  if (*param_1 != 3 || param_1[1] != 0) {
    FUN_01015c1c(param_1);
  }
  piVar2 = (int *)param_1[0x39];
  if (piVar2 != (int *)0x0) {
    iVar11 = *piVar2;
    if (iVar11 != 0) {
      puVar8 = (undefined4 *)piVar2[1];
      pcVar4 = (code *)*puVar8;
      if (pcVar4 != (code *)0x0) {
        (*pcVar4)(iVar11);
      }
      if (puVar8[1] != 0) {
        thunk_FUN_016d3fb4(iVar11);
      }
    }
    thunk_FUN_016d3fb4(piVar2);
  }
  if (((*(byte *)(param_1 + 0x34) != 0xb) && (9 < *(byte *)(param_1 + 0x34))) &&
     (param_1[0x36] != 0)) {
    thunk_FUN_016d3fb4(param_1[0x35]);
  }
  iVar11 = param_1[0x2e];
  if (iVar11 != 0) {
    puVar8 = (undefined4 *)param_1[0x2f];
    pcVar4 = (code *)*puVar8;
    if (pcVar4 != (code *)0x0) {
      (*pcVar4)(iVar11);
    }
    if (puVar8[1] != 0) {
      thunk_FUN_016d3fb4(iVar11);
    }
  }
  piVar2 = (int *)param_1[0x30];
  if (piVar2 != (int *)0x0) {
    DataMemoryBarrier(0xb);
    do {
      iVar11 = *piVar2;
      bVar1 = (bool)hasExclusiveAccess(piVar2);
    } while (!bVar1);
    *piVar2 = iVar11 + -1;
    if (iVar11 == 1) {
      DataMemoryBarrier(0xb);
      FUN_0089ddfc(param_1[0x30],param_1[0x31],0,0,unaff_r4,unaff_r5,unaff_r6);
    }
  }
  piVar2 = (int *)param_1[0x32];
  if (piVar2 != (int *)0x0) {
    DataMemoryBarrier(0xb);
    do {
      iVar11 = *piVar2;
      bVar1 = (bool)hasExclusiveAccess(piVar2);
    } while (!bVar1);
    *piVar2 = iVar11 + -1;
    if (iVar11 == 1) {
      DataMemoryBarrier(0xb);
      FUN_015614d8(param_1[0x32],param_1[0x33]);
    }
  }
  if (((param_1[0x10] == 1 || param_1[0x10] == 2) && ((uint)param_1[0x12] < 2)) &&
     (param_1[0x1a] != 0)) {
    piVar2 = (int *)param_1[0x1d];
    if (((uint)piVar2 & 1) == 0) {
      piVar3 = piVar2 + 4;
      DataMemoryBarrier(0xb);
      do {
        iVar11 = *piVar3;
        bVar1 = (bool)hasExclusiveAccess(piVar3);
      } while (!bVar1);
      *piVar3 = iVar11 + -1;
      if (iVar11 != 1) goto LAB_006a2d04;
      DataMemoryBarrier(0xb);
      if (*piVar2 != 0) {
        thunk_FUN_016d3fb4(piVar2[1]);
      }
    }
    else {
      if (param_1[0x1c] + ((uint)piVar2 >> 5) == 0) goto LAB_006a2d04;
      piVar2 = (int *)(param_1[0x1a] - ((uint)piVar2 >> 5));
    }
    thunk_FUN_016d3fb4(piVar2);
  }
LAB_006a2d04:
  if ((param_1[0x24] == 0) && (iVar11 = param_1[0x25], iVar11 != -0x80000000)) {
    iVar10 = param_1[0x26];
    iVar9 = param_1[0x27] + 1;
    iVar12 = 0;
    while (iVar9 = iVar9 + -1, iVar9 != 0) {
      piVar2 = (int *)(iVar10 + iVar12);
      iVar12 = iVar12 + 0x14;
      (**(code **)(*piVar2 + 0x10))(piVar2 + 3,piVar2[1],piVar2[2]);
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
    puVar5 = (uint *)(iVar11 + 0x18);
    uVar7 = *(uint *)(iVar11 + 0x18);
    do {
      while( true ) {
        uVar6 = uVar7;
        if ((uVar6 & 4) != 0) goto LAB_006a2de0;
        uVar7 = *puVar5;
        if (uVar7 == uVar6) break;
        ClearExclusiveLocal();
        DataMemoryBarrier(0xb);
      }
      DataMemoryBarrier(0xb);
      bVar1 = (bool)hasExclusiveAccess(puVar5);
      if (bVar1) {
        *puVar5 = uVar6 | 2;
      }
      DataMemoryBarrier(0xb);
    } while (!bVar1);
LAB_006a2de0:
    if ((uVar6 & 5) == 1) {
      (**(code **)(*(int *)(iVar11 + 0x10) + 8))(*(undefined4 *)(iVar11 + 0x14));
    }
    piVar2 = (int *)param_1[0x23];
    if (piVar2 != (int *)0x0) {
      DataMemoryBarrier(0xb);
      do {
        iVar11 = *piVar2;
        bVar1 = (bool)hasExclusiveAccess(piVar2);
      } while (!bVar1);
      *piVar2 = iVar11 + -1;
      if (iVar11 == 1) {
        DataMemoryBarrier(0xb);
        FUN_010b50b8(param_1[0x23]);
        return;
      }
    }
  }
  return;
}

