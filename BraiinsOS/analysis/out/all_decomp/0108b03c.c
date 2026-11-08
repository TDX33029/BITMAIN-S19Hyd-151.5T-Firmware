// FUN_0108b03c @ 0108b03c size=1152 calls_out=6 calls_in=2
// strings: 

void FUN_0108b03c(int *param_1)

{
  char cVar1;
  bool bVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  int *piVar6;
  int *piVar7;
  int *piVar8;
  int *piVar9;
  uint uVar10;
  int *local_34;
  int *local_30;
  int *local_2c;
  int local_28;
  undefined4 local_24;
  
  do {
    if (*param_1 != 0) {
      ClearExclusiveLocal();
      FUN_015bf680(param_1);
      goto LAB_0108b068;
    }
    bVar2 = (bool)hasExclusiveAccess(param_1);
  } while (!bVar2);
  *param_1 = 1;
  DataMemoryBarrier(0xb);
LAB_0108b068:
  uVar10 = 0;
  if ((DAT_018dd988 & 0x7fffffff) == 0) {
    cVar1 = (char)param_1[1];
  }
  else {
    uVar10 = FUN_015bf3f8();
    uVar10 = uVar10 ^ 1;
    cVar1 = (char)param_1[1];
  }
  if (cVar1 != '\0') {
    uVar3 = (uint)local_30 >> 8;
    local_30 = (int *)CONCAT31((int3)uVar3,(char)uVar10);
    local_34 = param_1;
                    /* WARNING: Subroutine does not return */
    FUN_00fb74f8(&DAT_00418ec6,0x2b,&local_34,&DAT_01883e40,&DAT_01883df0);
  }
  if ((char)param_1[0xe] == '\0') {
    iVar5 = param_1[4];
    piVar8 = (int *)param_1[3];
    *(undefined1 *)(param_1 + 0xe) = 1;
    if (iVar5 != 0) {
      piVar7 = piVar8;
      do {
        piVar9 = piVar7 + 3;
        piVar6 = (int *)(*piVar7 + 0x14);
        if (*piVar6 == 0) {
          DataMemoryBarrier(0xb);
LAB_0108b0f0:
          bVar2 = (bool)hasExclusiveAccess(piVar6);
          if (!bVar2) goto code_r0x0108b0fc;
          *piVar6 = 2;
          DataMemoryBarrier(0xb);
          DataMemoryBarrier(0xb);
          piVar7 = (int *)(*(int *)(*piVar7 + 0x10) + 0x18);
          do {
            iVar4 = *piVar7;
            bVar2 = (bool)hasExclusiveAccess(piVar7);
          } while (!bVar2);
          *piVar7 = 1;
          if (iVar4 == -1) {
            FUN_016d6968(0xf0,piVar7,0x81,1);
          }
          goto LAB_0108b0cc;
        }
LAB_0108b0c4:
        ClearExclusiveLocal();
        DataMemoryBarrier(0xb);
LAB_0108b0cc:
        piVar7 = piVar9;
      } while (piVar9 != piVar8 + iVar5 * 3);
    }
    local_34 = (int *)param_1[6];
    local_28 = param_1[7];
    param_1[7] = 0;
    local_24 = 0;
    local_2c = param_1 + 5;
    local_30 = local_34 + local_28 * 3;
    if (local_28 != 0) {
      do {
        piVar6 = (int *)*local_34;
        piVar8 = local_34 + 1;
        local_34 = local_34 + 3;
        piVar7 = piVar6 + 5;
        if (*piVar7 == 0) {
          DataMemoryBarrier(0xb);
LAB_0108b1b8:
          bVar2 = (bool)hasExclusiveAccess(piVar7);
          if (!bVar2) goto code_r0x0108b1c4;
          *piVar7 = *piVar8;
          DataMemoryBarrier(0xb);
          DataMemoryBarrier(0xb);
          piVar8 = (int *)(piVar6[4] + 0x18);
          do {
            iVar5 = *piVar8;
            bVar2 = (bool)hasExclusiveAccess(piVar8);
          } while (!bVar2);
          *piVar8 = 1;
          if (iVar5 == -1) {
            FUN_016d6968(0xf0,piVar8,0x81,1);
          }
          goto LAB_0108b1d8;
        }
LAB_0108b1d0:
        ClearExclusiveLocal();
        DataMemoryBarrier(0xb);
LAB_0108b1d8:
        DataMemoryBarrier(0xb);
        do {
          iVar5 = *piVar6;
          bVar2 = (bool)hasExclusiveAccess(piVar6);
        } while (!bVar2);
        *piVar6 = iVar5 + -1;
        if (iVar5 == 1) {
          DataMemoryBarrier(0xb);
          FUN_00fbaa00(piVar6);
        }
      } while (local_34 != local_30);
    }
    FUN_0063e6b8(&local_34);
    iVar5 = param_1[10];
    if (iVar5 != 0) {
      piVar7 = (int *)param_1[9];
      piVar8 = piVar7;
      do {
        piVar9 = piVar8 + 3;
        piVar6 = (int *)(*piVar8 + 0x14);
        if (*piVar6 == 0) {
          DataMemoryBarrier(0xb);
LAB_0108b29c:
          bVar2 = (bool)hasExclusiveAccess(piVar6);
          if (!bVar2) goto code_r0x0108b2a8;
          *piVar6 = 2;
          DataMemoryBarrier(0xb);
          DataMemoryBarrier(0xb);
          piVar8 = (int *)(*(int *)(*piVar8 + 0x10) + 0x18);
          do {
            iVar4 = *piVar8;
            bVar2 = (bool)hasExclusiveAccess(piVar8);
          } while (!bVar2);
          *piVar8 = 1;
          if (iVar4 == -1) {
            FUN_016d6968(0xf0,piVar8,0x81,1);
          }
          goto LAB_0108b278;
        }
LAB_0108b270:
        ClearExclusiveLocal();
        DataMemoryBarrier(0xb);
LAB_0108b278:
        piVar8 = piVar9;
      } while (piVar9 != piVar7 + iVar5 * 3);
    }
    local_34 = (int *)param_1[0xc];
    local_28 = param_1[0xd];
    param_1[0xd] = 0;
    local_24 = 0;
    local_2c = param_1 + 0xb;
    local_30 = local_34 + local_28 * 3;
    if (local_28 != 0) {
      do {
        piVar6 = (int *)*local_34;
        piVar8 = local_34 + 1;
        local_34 = local_34 + 3;
        piVar7 = piVar6 + 5;
        if (*piVar7 == 0) {
          DataMemoryBarrier(0xb);
LAB_0108b364:
          bVar2 = (bool)hasExclusiveAccess(piVar7);
          if (!bVar2) goto code_r0x0108b370;
          *piVar7 = *piVar8;
          DataMemoryBarrier(0xb);
          DataMemoryBarrier(0xb);
          piVar8 = (int *)(piVar6[4] + 0x18);
          do {
            iVar5 = *piVar8;
            bVar2 = (bool)hasExclusiveAccess(piVar8);
          } while (!bVar2);
          *piVar8 = 1;
          if (iVar5 == -1) {
            FUN_016d6968(0xf0,piVar8,0x81,1);
          }
          goto LAB_0108b384;
        }
LAB_0108b37c:
        ClearExclusiveLocal();
        DataMemoryBarrier(0xb);
LAB_0108b384:
        DataMemoryBarrier(0xb);
        do {
          iVar5 = *piVar6;
          bVar2 = (bool)hasExclusiveAccess(piVar6);
        } while (!bVar2);
        *piVar6 = iVar5 + -1;
        if (iVar5 == 1) {
          DataMemoryBarrier(0xb);
          FUN_00fbaa00(piVar6);
        }
      } while (local_34 != local_30);
    }
    FUN_0063e6b8(&local_34);
  }
  if (((uVar10 == 0) && ((DAT_018dd988 & 0x7fffffff) != 0)) && (iVar5 = FUN_015bf3f8(), iVar5 == 0))
  {
    *(undefined1 *)(param_1 + 1) = 1;
  }
  DataMemoryBarrier(0xb);
  do {
    iVar5 = *param_1;
    bVar2 = (bool)hasExclusiveAccess(param_1);
  } while (!bVar2);
  *param_1 = 0;
  if (iVar5 == 2) {
    FUN_016d6968(0xf0,param_1,0x81,1);
    return;
  }
  return;
code_r0x0108b0fc:
  if (*piVar6 != 0) goto LAB_0108b0c4;
  goto LAB_0108b0f0;
code_r0x0108b1c4:
  if (*piVar7 != 0) goto LAB_0108b1d0;
  goto LAB_0108b1b8;
code_r0x0108b2a8:
  if (*piVar6 != 0) goto LAB_0108b270;
  goto LAB_0108b29c;
code_r0x0108b370:
  if (*piVar7 != 0) goto LAB_0108b37c;
  goto LAB_0108b364;
}

