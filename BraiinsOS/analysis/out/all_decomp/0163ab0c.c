// FUN_0163ab0c @ 0163ab0c size=936 calls_out=6 calls_in=5
// strings: 

void FUN_0163ab0c(uint *param_1,int *param_2,int *param_3)

{
  code *pcVar1;
  bool bVar2;
  undefined4 *puVar3;
  int iVar4;
  uint uVar5;
  undefined4 *puVar6;
  int *piVar7;
  uint uVar8;
  uint uVar9;
  char *pcVar10;
  int iVar11;
  int iVar12;
  int *piVar13;
  int iVar14;
  undefined8 uVar15;
  int *local_28;
  
  piVar13 = param_2 + 1;
  iVar14 = *param_2;
  puVar3 = (undefined4 *)*param_3;
  pcVar10 = (char *)(iVar14 + 0xc);
LAB_0163ab54:
  if ((char)param_2[7] == '\0') {
    uVar5 = *(uint *)(iVar14 + 8);
    DataMemoryBarrier(0xb);
    uVar8 = param_2[5];
    uVar9 = -(uVar8 & 1) & 5 | (uVar8 >> 1 & 1) << 1 | (uVar8 >> 1 & 1) << 3;
    if ((uVar8 & 0x10) != 0) {
      uVar9 = uVar9 | 0x14;
    }
    uVar9 = uVar9 | uVar8 & 0x20;
    if ((uVar5 & (uVar9 | 0x80000000)) != 0) {
      *param_1 = uVar9 & uVar5;
      *(undefined1 *)(param_2 + 7) = 2;
      *(byte *)((int)param_1 + 5) = (byte)(uVar5 >> 0x1f);
      *(char *)(param_1 + 1) = (char)(uVar5 >> 0x10);
      return;
    }
    if (*pcVar10 == '\0') {
      bVar2 = (bool)hasExclusiveAccess(pcVar10);
      if (!bVar2) goto LAB_0163ad0c;
      *pcVar10 = '\x01';
      DataMemoryBarrier(0xb);
    }
    else {
      ClearExclusiveLocal();
LAB_0163ad0c:
      FUN_01280da8(pcVar10);
    }
    FUN_0128236c(pcVar10);
    uVar5 = *(uint *)(iVar14 + 8);
    DataMemoryBarrier(0xb);
    uVar9 = uVar9 & (uVar5 | (int)uVar5 >> 0x1f);
    if ((-1 < (int)uVar5) && (uVar9 == 0)) goto code_r0x0163ac58;
    *param_1 = uVar9;
    *(undefined1 *)(param_2 + 7) = 2;
    *(byte *)((int)param_1 + 5) = (byte)(uVar5 >> 0x1f);
    *(char *)(param_1 + 1) = (char)(uVar5 >> 0x10);
    FUN_01282570(pcVar10);
    if (*pcVar10 == '\x01') {
      DataMemoryBarrier(0xb);
      do {
        bVar2 = (bool)hasExclusiveAccess(pcVar10);
        if (bVar2) {
          *pcVar10 = '\0';
          return;
        }
      } while (*pcVar10 == '\x01');
    }
  }
  else {
    if ((char)param_2[7] != '\x01') {
      uVar5 = *(uint *)(iVar14 + 8);
      DataMemoryBarrier(0xb);
      uVar8 = param_2[5];
      *(byte *)((int)param_1 + 5) = (byte)(uVar5 >> 0x1f);
      *(char *)(param_1 + 1) = (char)(uVar5 >> 0x10);
      uVar9 = -(uVar8 & 1) & 5 | (uVar8 >> 1 & 1) << 1 | (uVar8 >> 1 & 1) << 3;
      if ((uVar8 & 0x10) != 0) {
        uVar9 = uVar9 | 0x14;
      }
      *param_1 = uVar5 & (uVar9 | uVar8 & 0x20);
      return;
    }
    if (*pcVar10 == '\0') {
      bVar2 = (bool)hasExclusiveAccess(pcVar10);
      if (!bVar2) goto LAB_0163acfc;
      *pcVar10 = '\x01';
      DataMemoryBarrier(0xb);
    }
    else {
      ClearExclusiveLocal();
LAB_0163acfc:
      FUN_01280da8(pcVar10);
    }
    FUN_0128236c(pcVar10);
    if ((char)param_2[6] != '\0') {
      *(undefined1 *)(param_2 + 7) = 2;
      FUN_01282570(pcVar10);
      if (*pcVar10 == '\x01') {
        DataMemoryBarrier(0xb);
        do {
          bVar2 = (bool)hasExclusiveAccess(pcVar10);
          if (bVar2) {
            *pcVar10 = '\0';
            goto LAB_0163ab54;
          }
        } while (*pcVar10 == '\x01');
      }
      goto LAB_0163ab48;
    }
    puVar3 = (undefined4 *)param_2[3];
    if (puVar3 == (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_00faa444(&DAT_018ac64c);
    }
    iVar11 = param_2[4];
    puVar6 = *(undefined4 **)*param_3;
    iVar14 = ((int *)*param_3)[1];
    if (puVar3 != puVar6 || iVar11 != iVar14) {
      uVar15 = (*(code *)*puVar6)(iVar14);
      (*(code *)puVar3[3])(iVar11);
      *(undefined8 *)(param_2 + 3) = uVar15;
    }
    *(undefined1 *)((int)param_1 + 5) = 2;
    FUN_01282570(pcVar10);
    if (*pcVar10 == '\x01') {
      DataMemoryBarrier(0xb);
      do {
        bVar2 = (bool)hasExclusiveAccess(pcVar10);
        if (bVar2) {
          *pcVar10 = '\0';
          return;
        }
      } while (*pcVar10 == '\x01');
    }
  }
  ClearExclusiveLocal();
  FUN_01280a5c(pcVar10);
  return;
code_r0x0163ac58:
  uVar15 = (**(code **)*puVar3)(puVar3[1]);
  iVar12 = param_2[3];
  iVar11 = param_2[4];
  *(undefined8 *)(param_2 + 3) = uVar15;
  piVar7 = *(int **)(iVar14 + 0x10);
  local_28 = piVar13;
  if (piVar7 == piVar13) {
    FUN_0165831c((int *)(iVar14 + 0x10),&local_28);
                    /* WARNING: Does not return */
    pcVar1 = (code *)software_udf(0xfdee,0x163aeb0);
    (*pcVar1)();
  }
  iVar4 = *(int *)(iVar14 + 0x14);
  param_2[1] = 0;
  param_2[2] = (int)piVar7;
  if (piVar7 != (int *)0x0) {
    *piVar7 = (int)piVar13;
  }
  if (iVar4 == 0) {
    *(int **)(iVar14 + 0x14) = piVar13;
  }
  *(int **)(iVar14 + 0x10) = piVar13;
  *(undefined1 *)(param_2 + 7) = 1;
  if (iVar12 != 0) {
    (**(code **)(iVar12 + 0xc))(iVar11);
  }
  FUN_01282570(pcVar10);
  if (*pcVar10 == '\x01') {
    DataMemoryBarrier(0xb);
    do {
      bVar2 = (bool)hasExclusiveAccess(pcVar10);
      if (bVar2) {
        *pcVar10 = '\0';
        goto LAB_0163ab54;
      }
    } while (*pcVar10 == '\x01');
  }
LAB_0163ab48:
  ClearExclusiveLocal();
  FUN_01280a5c(pcVar10);
  goto LAB_0163ab54;
}

