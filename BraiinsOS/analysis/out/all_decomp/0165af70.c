// FUN_0165af70 @ 0165af70 size=1048 calls_out=10 calls_in=5
// strings: 

void FUN_0165af70(undefined4 *param_1,int param_2,uint param_3,int param_4,undefined1 *param_5)

{
  bool bVar1;
  longlong lVar2;
  ulonglong uVar3;
  int *piVar4;
  int iVar5;
  undefined1 *puVar6;
  uint uVar7;
  int *piVar8;
  uint uVar9;
  uint *puVar10;
  uint uVar11;
  undefined1 *puVar12;
  uint uVar13;
  undefined4 *puVar15;
  undefined4 *puVar14;
  char *pcVar16;
  uint uVar17;
  uint uVar18;
  int *piVar19;
  undefined4 *puVar20;
  undefined4 local_40;
  int local_3c;
  undefined4 *local_34;
  undefined4 *local_30;
  undefined4 local_2c;
  undefined4 *local_28;
  
  DataMemoryBarrier(0xb);
  if (*(int *)(param_2 + 8) == 0) goto LAB_0165b060;
  pcVar16 = (char *)(param_2 + 0xc);
  if (*pcVar16 == '\0') {
    bVar1 = (bool)hasExclusiveAccess(pcVar16);
    if (!bVar1) goto LAB_0165b340;
    *pcVar16 = '\x01';
    DataMemoryBarrier(0xb);
  }
  else {
    ClearExclusiveLocal();
LAB_0165b340:
    FUN_01280da8(pcVar16);
  }
  FUN_0128236c(pcVar16);
  iVar5 = *(int *)(param_2 + 0x18);
  local_34 = *(undefined4 **)(param_2 + 0x14);
  local_2c = *(undefined4 *)(param_2 + 0x10);
  puVar20 = local_34 + iVar5;
  *(undefined4 *)(param_2 + 0x10) = 0;
  *(undefined4 *)(param_2 + 0x14) = 4;
  *(undefined4 *)(param_2 + 0x18) = 0;
  puVar14 = local_34;
  local_30 = local_34;
  local_28 = puVar20;
  if (iVar5 != 0) {
    do {
      puVar15 = puVar14 + 1;
      piVar19 = (int *)*puVar14;
      piVar4 = piVar19 + 8;
      local_30 = puVar15;
      if (*piVar4 == 0) {
        if (*(int **)(param_2 + 0x1c) == piVar4) {
          piVar8 = (int *)piVar19[9];
          *(int **)(param_2 + 0x1c) = piVar8;
          goto joined_r0x0165b1dc;
        }
      }
      else {
        piVar8 = (int *)piVar19[9];
        *(int **)(*piVar4 + 4) = piVar8;
joined_r0x0165b1dc:
        if (piVar8 == (int *)0x0) {
          if (*(int **)(param_2 + 0x20) != piVar4) goto LAB_0165b1ec;
          *(int *)(param_2 + 0x20) = *piVar4;
        }
        else {
          *piVar8 = *piVar4;
        }
        piVar19[8] = 0;
        piVar19[9] = 0;
        DataMemoryBarrier(0xb);
        do {
          iVar5 = *piVar19;
          bVar1 = (bool)hasExclusiveAccess(piVar19);
        } while (!bVar1);
        *piVar19 = iVar5 + -1;
        if (iVar5 == 1) {
          DataMemoryBarrier(0xb);
          FUN_01659660(piVar19);
        }
      }
LAB_0165b1ec:
      DataMemoryBarrier(0xb);
      do {
        iVar5 = *piVar19;
        bVar1 = (bool)hasExclusiveAccess(piVar19);
      } while (!bVar1);
      *piVar19 = iVar5 + -1;
      if (iVar5 == 1) {
        DataMemoryBarrier(0xb);
        FUN_01659660(piVar19);
      }
      puVar14 = puVar15;
    } while (puVar15 != puVar20);
  }
  FUN_01647280(&local_34);
  DataMemoryBarrier(0xb);
  *(undefined4 *)(param_2 + 8) = 0;
  FUN_01282570(pcVar16);
  if (*pcVar16 == '\x01') {
    DataMemoryBarrier(0xb);
    do {
      bVar1 = (bool)hasExclusiveAccess(pcVar16);
      if (bVar1) {
        *pcVar16 = '\0';
        goto LAB_0165b060;
      }
    } while (*pcVar16 == '\x01');
  }
  ClearExclusiveLocal();
  FUN_01280a5c(pcVar16);
LAB_0165b060:
  uVar11 = 0xffffffff;
  if (param_5 != &DAT_3b9aca00) {
    uVar11 = 999999;
    if ((undefined1 *)0x3b8b87c0 < param_5) {
      uVar11 = 0x783f;
    }
    if ((undefined1 *)0x3b8b87c0 < param_5) {
      uVar11 = uVar11 & 0xffff | 0xc4740000;
    }
    puVar12 = param_5 + uVar11;
    puVar6 = param_5;
    if (puVar12 != &DAT_3b9aca00) {
      puVar6 = puVar12;
    }
    uVar11 = (uint)(puVar12 != &DAT_3b9aca00 && (undefined1 *)0x3b8b87c0 < param_5);
    uVar3 = (ulonglong)(param_3 + uVar11) * 1000;
    uVar7 = (uint)uVar3;
    lVar2 = (ulonglong)(param_4 + (uint)CARRY4(param_3,uVar11)) * 1000 + (uVar3 >> 0x20);
    uVar18 = (uint)lVar2;
    uVar13 = (uint)((ulonglong)lVar2 >> 0x20);
    uVar17 = (uint)puVar6 / 1000000;
    uVar11 = uVar7 + uVar17;
    bVar1 = CARRY4(uVar18,(uint)CARRY4(uVar7,uVar17));
    if (0x7ffffffe < uVar11) {
      uVar11 = 0x7fffffff;
    }
    if (uVar18 + CARRY4(uVar7,uVar17) != 0) {
      uVar11 = 0x7fffffff;
    }
    if (uVar13 + bVar1 != 0 || CARRY4(uVar13,(uint)bVar1)) {
      uVar11 = 0x7fffffff;
    }
  }
  param_1[2] = 0;
  uVar11 = FUN_016d37a4(param_1[3],param_1[1],*param_1,uVar11);
  if ((int)uVar11 < 0) {
    piVar4 = (int *)FUN_016d2bc8();
    local_3c = *piVar4;
    if (local_3c != 4) {
      local_40 = 0;
      local_34 = &local_40;
      local_30 = (undefined4 *)&LAB_015f3dfc;
                    /* WARNING: Subroutine does not return */
      FUN_00faa478(&DAT_00591ac6,&local_34,&DAT_018ad364);
    }
  }
  else {
    param_1[2] = uVar11;
    if (uVar11 != 0) {
      uVar17 = 0;
      do {
        puVar10 = (uint *)(param_1[1] + uVar17 * 0x10);
        uVar7 = puVar10[2];
        if (uVar7 == 1) {
          *(undefined1 *)(param_1 + 4) = 1;
        }
        else if (uVar7 != 0) {
          uVar13 = *puVar10;
          uVar11 = uVar13 >> 1 & 2;
          if ((uVar13 & 3) != 0) {
            uVar11 = uVar11 | 1;
          }
          uVar18 = uVar11 | 4;
          uVar9 = uVar11;
          if ((~uVar13 & 0x2001) == 0) {
            uVar9 = uVar18;
          }
          if ((uVar13 & 0x10) == 0) {
            if (uVar13 != 8) {
              uVar18 = uVar13 & 0xc;
            }
            if (uVar13 == 8 || uVar18 == 0xc) {
              uVar9 = uVar9 | 8;
            }
          }
          else {
            uVar9 = uVar11 | 0xc;
          }
          DataMemoryBarrier(0xb);
          puVar10 = (uint *)(uVar7 + 8);
          uVar11 = *(uint *)(uVar7 + 8);
          do {
            while (uVar7 = *puVar10, uVar7 != uVar11) {
              ClearExclusiveLocal();
              DataMemoryBarrier(0xb);
              uVar11 = uVar7;
            }
            DataMemoryBarrier(0xb);
            bVar1 = (bool)hasExclusiveAccess(puVar10);
            if (bVar1) {
              *puVar10 = uVar11 + 0x10000 & 0x7fff0000 |
                         (uVar13 & 2) << 3 | (uVar13 & 8) << 2 | uVar9 | uVar11 & 0x3f;
            }
            DataMemoryBarrier(0xb);
            uVar11 = uVar7;
          } while (!bVar1);
          FUN_01639598();
          uVar11 = param_1[2];
        }
        uVar17 = uVar17 + 1;
      } while (uVar17 < uVar11);
    }
  }
  return;
}

