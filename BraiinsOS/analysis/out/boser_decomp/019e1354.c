// FUN_019e1354 @ 019e1354 size=932 calls_out=6 calls_in=4
// strings: 

void FUN_019e1354(uint *param_1,int *param_2,int *param_3)

{
  code *pcVar1;
  bool bVar2;
  int iVar3;
  uint uVar4;
  int *piVar5;
  uint uVar6;
  uint uVar7;
  char *pcVar8;
  int iVar9;
  undefined4 *puVar10;
  int iVar11;
  int iVar12;
  int *piVar13;
  undefined8 uVar14;
  int *local_28;
  
  piVar13 = param_2 + 1;
  iVar11 = *param_2;
  pcVar8 = (char *)(iVar11 + 0xc);
LAB_019e1384:
  if ((char)param_2[7] == '\0') {
    uVar4 = *(uint *)(iVar11 + 8);
    DataMemoryBarrier(0xb);
    uVar6 = param_2[5];
    uVar7 = -(uVar6 & 1) & 5 | (uVar6 >> 1 & 1) << 1 | (uVar6 >> 1 & 1) << 3;
    if ((uVar6 & 0x10) != 0) {
      uVar7 = uVar7 | 0x14;
    }
    uVar7 = uVar7 | uVar6 & 0x20;
    uVar6 = uVar4 & uVar7;
    if (((int)uVar4 < 0) || (uVar6 != 0)) {
      *param_1 = uVar6;
      *(undefined1 *)(param_2 + 7) = 2;
      *(byte *)((int)param_1 + 5) = (byte)(uVar4 >> 0x1f);
      *(char *)(param_1 + 1) = (char)(uVar4 >> 0x10);
      return;
    }
    if (*pcVar8 == '\0') {
      bVar2 = (bool)hasExclusiveAccess(pcVar8);
      if (!bVar2) goto LAB_019e1554;
      *pcVar8 = '\x01';
      DataMemoryBarrier(0xb);
    }
    else {
      ClearExclusiveLocal();
LAB_019e1554:
      FUN_0164fba8(pcVar8);
    }
    FUN_0165098c(pcVar8);
    uVar4 = *(uint *)(iVar11 + 8);
    DataMemoryBarrier(0xb);
    uVar7 = (uVar4 | (int)uVar4 >> 0x1f) & uVar7;
    if ((-1 < (int)uVar4) && (uVar7 == 0)) goto code_r0x019e1494;
    *param_1 = uVar7;
    *(undefined1 *)(param_2 + 7) = 2;
    *(byte *)((int)param_1 + 5) = (byte)(uVar4 >> 0x1f);
    *(char *)(param_1 + 1) = (char)(uVar4 >> 0x10);
    FUN_01650a90(pcVar8);
    if (*pcVar8 == '\x01') {
      DataMemoryBarrier(0xb);
      do {
        bVar2 = (bool)hasExclusiveAccess(pcVar8);
        if (bVar2) {
          *pcVar8 = '\0';
          return;
        }
      } while (*pcVar8 == '\x01');
    }
  }
  else {
    if ((char)param_2[7] != '\x01') {
      uVar4 = *(uint *)(iVar11 + 8);
      DataMemoryBarrier(0xb);
      uVar6 = param_2[5];
      *(byte *)((int)param_1 + 5) = (byte)(uVar4 >> 0x1f);
      *(char *)(param_1 + 1) = (char)(uVar4 >> 0x10);
      uVar7 = -(uVar6 & 1) & 5 | (uVar6 >> 1 & 1) << 1 | (uVar6 >> 1 & 1) << 3;
      if ((uVar6 & 0x10) != 0) {
        uVar7 = uVar7 | 0x14;
      }
      *param_1 = uVar4 & (uVar7 | uVar6 & 0x20);
      return;
    }
    if (*pcVar8 == '\0') {
      bVar2 = (bool)hasExclusiveAccess(pcVar8);
      if (!bVar2) goto LAB_019e1544;
      *pcVar8 = '\x01';
      DataMemoryBarrier(0xb);
    }
    else {
      ClearExclusiveLocal();
LAB_019e1544:
      FUN_0164fba8(pcVar8);
    }
    FUN_0165098c(pcVar8);
    if ((char)param_2[6] == '\x01') {
      *(undefined1 *)(param_2 + 7) = 2;
      FUN_01650a90(pcVar8);
      if (*pcVar8 == '\x01') {
        DataMemoryBarrier(0xb);
        do {
          bVar2 = (bool)hasExclusiveAccess(pcVar8);
          if (bVar2) {
            *pcVar8 = '\0';
            goto LAB_019e1384;
          }
        } while (*pcVar8 == '\x01');
      }
      goto LAB_019e1530;
    }
    puVar10 = (undefined4 *)param_2[3];
    if (puVar10 == (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_012fb0cc(&DAT_01d2901c);
    }
    iVar11 = param_2[4];
    if (iVar11 != param_3[1] || puVar10 != (undefined4 *)*param_3) {
      uVar14 = (**(code **)*param_3)(param_3[1]);
      (*(code *)puVar10[3])(iVar11);
      *(undefined8 *)(param_2 + 3) = uVar14;
    }
    *(undefined1 *)((int)param_1 + 5) = 2;
    FUN_01650a90(pcVar8);
    if (*pcVar8 == '\x01') {
      DataMemoryBarrier(0xb);
      do {
        bVar2 = (bool)hasExclusiveAccess(pcVar8);
        if (bVar2) {
          *pcVar8 = '\0';
          return;
        }
      } while (*pcVar8 == '\x01');
    }
  }
  ClearExclusiveLocal();
  FUN_0164f86c(pcVar8);
  return;
code_r0x019e1494:
  uVar14 = (**(code **)*param_3)(param_3[1]);
  iVar12 = param_2[3];
  iVar9 = param_2[4];
  *(undefined8 *)(param_2 + 3) = uVar14;
  piVar5 = *(int **)(iVar11 + 0x10);
  local_28 = piVar13;
  if (piVar13 == piVar5) {
    FUN_019f158c((int *)(iVar11 + 0x10),&local_28);
                    /* WARNING: Does not return */
    pcVar1 = (code *)software_udf(0xfdee,0x19e16f4);
    (*pcVar1)();
  }
  iVar3 = *(int *)(iVar11 + 0x14);
  param_2[1] = 0;
  param_2[2] = (int)piVar5;
  if (piVar5 != (int *)0x0) {
    *piVar5 = (int)piVar13;
  }
  if (iVar3 == 0) {
    *(int **)(iVar11 + 0x14) = piVar13;
  }
  *(int **)(iVar11 + 0x10) = piVar13;
  *(undefined1 *)(param_2 + 7) = 1;
  if (iVar12 != 0) {
    (**(code **)(iVar12 + 0xc))(iVar9);
  }
  FUN_01650a90(pcVar8);
  if (*pcVar8 == '\x01') {
    DataMemoryBarrier(0xb);
    do {
      bVar2 = (bool)hasExclusiveAccess(pcVar8);
      if (bVar2) {
        *pcVar8 = '\0';
        goto LAB_019e1384;
      }
    } while (*pcVar8 == '\x01');
  }
LAB_019e1530:
  ClearExclusiveLocal();
  FUN_0164f86c(pcVar8);
  goto LAB_019e1384;
}

