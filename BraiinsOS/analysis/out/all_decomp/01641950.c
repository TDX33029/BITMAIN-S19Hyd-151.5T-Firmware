// FUN_01641950 @ 01641950 size=1152 calls_out=15 calls_in=1
// strings: A Tokio 1.x context was found; but IO is disabled. Call `enable_io` on the runtime builder to enable IO.

void FUN_01641950(ulonglong *param_1,short *param_2)

{
  bool bVar1;
  ushort uVar2;
  int iVar3;
  int iVar4;
  undefined4 *puVar5;
  int *piVar6;
  undefined4 uVar7;
  undefined4 extraout_r3;
  short *psVar8;
  int *piVar9;
  char *pcVar10;
  uint uVar11;
  int *piVar12;
  undefined4 uVar13;
  undefined2 uVar14;
  int *piVar15;
  int *piVar16;
  undefined4 extraout_r12;
  undefined8 uVar17;
  ulonglong uVar18;
  undefined4 local_40;
  int *local_3c;
  int *local_38;
  undefined4 local_34;
  undefined4 uStack_30;
  undefined4 local_2c;
  undefined4 local_28;
  
  if (*param_2 == 1) {
    uVar14 = 10;
    iVar3 = FUN_016d997a(10,0x80802,0);
    if (iVar3 < 0) {
LAB_01641a70:
      puVar5 = (undefined4 *)FUN_016d2bc8();
      uVar7 = *puVar5;
      goto LAB_01641a8c;
    }
    local_34 = *(undefined4 *)(param_2 + 4);
    uStack_30 = *(undefined4 *)(param_2 + 6);
    uVar7 = 0x1c;
    uVar2 = param_2[0xe] << 8 | (ushort)param_2[0xe] >> 8;
    piVar12 = *(int **)(param_2 + 2);
    local_2c = *(undefined4 *)(param_2 + 8);
    psVar8 = param_2 + 10;
    uVar17 = CONCAT44(*(undefined4 *)(param_2 + 0xc),iVar3);
  }
  else {
    uVar14 = 2;
    piVar12 = (int *)0x0;
    uVar17 = FUN_016d997a(2,0x80802,0);
    if ((int)uVar17 < 0) goto LAB_01641a70;
    psVar8 = param_2 + 1;
    uVar7 = 0x10;
    uVar2 = param_2[3] << 8 | (ushort)param_2[3] >> 8;
    local_34 = 0;
    local_2c = extraout_r3;
    uStack_30 = extraout_r12;
  }
  local_28 = (undefined4)((ulonglong)uVar17 >> 0x20);
  uVar13 = (undefined4)uVar17;
  local_3c = *(int **)psVar8;
  local_40 = CONCAT22(uVar2,uVar14);
  local_38 = piVar12;
  iVar3 = FUN_016d6eba(uVar13,&local_40,uVar7);
  if (iVar3 < 0) {
    puVar5 = (undefined4 *)FUN_016d2bc8();
    uVar7 = *puVar5;
    FUN_016dffb2(uVar13);
LAB_01641a8c:
    *(undefined1 *)((int)param_1 + 7) = 0;
    *(undefined2 *)((int)param_1 + 5) = 0;
    *(undefined1 *)((int)param_1 + 4) = 0;
    *(undefined4 *)param_1 = 2;
    *(undefined4 *)(param_1 + 1) = uVar7;
    return;
  }
  uVar18 = FUN_0164ec90(&DAT_018ac95c);
  piVar12 = (int *)(uVar18 >> 0x20);
  iVar3 = 0x180;
  if ((uVar18 & 1) != 0) {
    iVar3 = 0xb8;
  }
  if (*(int *)((int)piVar12 + iVar3 + 0x30) == -1) {
                    /* WARNING: Subroutine does not return */
    FUN_00fb74b8("A Tokio 1.x context was found, but IO is disabled. Call `enable_io` on the runtime builder to enable IO."
                 ,0x68,&DAT_018ac95c);
  }
  pcVar10 = (char *)((int)piVar12 + iVar3 + 0x3c);
  if (*pcVar10 == '\0') {
    bVar1 = (bool)hasExclusiveAccess(pcVar10);
    if (!bVar1) goto LAB_01641ac0;
    *pcVar10 = '\x01';
    DataMemoryBarrier(0xb);
  }
  else {
    ClearExclusiveLocal();
LAB_01641ac0:
    FUN_01280da8(pcVar10);
  }
  FUN_0128236c(pcVar10);
  FUN_0164736c(&local_40,(int)piVar12 + iVar3 + 0x40);
  piVar16 = local_3c;
  uVar11 = local_40;
  if ((char)local_40 == '\x04') {
    FUN_01282570(pcVar10);
    if (*pcVar10 == '\x01') {
      DataMemoryBarrier(0xb);
      do {
        bVar1 = (bool)hasExclusiveAccess(pcVar10);
        if (bVar1) {
          *pcVar10 = '\0';
          goto LAB_01641b2c;
        }
      } while (*pcVar10 == '\x01');
    }
    ClearExclusiveLocal();
    FUN_01280a5c(pcVar10);
LAB_01641b2c:
    local_34 = 0;
    local_40 = 0x80002005;
    piVar9 = piVar16 + 8;
    local_38 = piVar9;
    iVar4 = FUN_016d3742(*(undefined4 *)((int)piVar12 + iVar3 + 0x30),1,uVar13,&local_40);
    if (iVar4 < 0) {
      puVar5 = (undefined4 *)FUN_016d2bc8();
      piVar15 = (int *)*puVar5;
      local_40 = 0;
      local_3c = piVar15;
      if (*pcVar10 == '\0') {
        bVar1 = (bool)hasExclusiveAccess(pcVar10);
        if (!bVar1) goto LAB_01641c2c;
        *pcVar10 = '\x01';
        DataMemoryBarrier(0xb);
      }
      else {
        ClearExclusiveLocal();
LAB_01641c2c:
        FUN_01280da8(pcVar10);
      }
      FUN_0128236c(pcVar10);
      if (*piVar9 == 0) {
        if (*(int **)((int)piVar12 + iVar3 + 0x4c) == piVar9) {
          piVar6 = (int *)piVar16[9];
          *(int **)((int)piVar12 + iVar3 + 0x4c) = piVar6;
          goto joined_r0x01641cb4;
        }
      }
      else {
        piVar6 = (int *)piVar16[9];
        *(int **)(*piVar9 + 4) = piVar6;
joined_r0x01641cb4:
        if (piVar6 == (int *)0x0) {
          if (*(int **)((int)piVar12 + iVar3 + 0x50) != piVar9) goto LAB_01641cc4;
          *(int *)((int)piVar12 + iVar3 + 0x50) = *piVar9;
        }
        else {
          *piVar6 = *piVar9;
        }
        piVar16[8] = 0;
        piVar16[9] = 0;
        DataMemoryBarrier(0xb);
        do {
          iVar3 = *piVar16;
          bVar1 = (bool)hasExclusiveAccess(piVar16);
        } while (!bVar1);
        *piVar16 = iVar3 + -1;
        if (iVar3 == 1) {
          DataMemoryBarrier(0xb);
          FUN_01659660(piVar16);
        }
      }
LAB_01641cc4:
      FUN_01282570(pcVar10);
      if (*pcVar10 == '\x01') {
        DataMemoryBarrier(0xb);
        do {
          bVar1 = (bool)hasExclusiveAccess(pcVar10);
          if (bVar1) {
            *pcVar10 = '\0';
            goto LAB_01641d04;
          }
        } while (*pcVar10 == '\x01');
      }
      ClearExclusiveLocal();
      FUN_01280a5c(pcVar10);
LAB_01641d04:
      DataMemoryBarrier(0xb);
      do {
        iVar3 = *piVar16;
        bVar1 = (bool)hasExclusiveAccess(piVar16);
      } while (!bVar1);
      *piVar16 = iVar3 + -1;
      uVar11 = 0;
      if (iVar3 == 1) {
        DataMemoryBarrier(0xb);
        FUN_01659660(piVar16);
      }
      goto LAB_01641d34;
    }
LAB_01641bcc:
    if ((int)uVar18 != 2) {
      *(undefined4 *)((int)param_1 + 0xc) = uVar13;
      goto LAB_01641d90;
    }
  }
  else {
    FUN_01282570(pcVar10);
    if (*pcVar10 == '\x01') {
      DataMemoryBarrier(0xb);
      do {
        bVar1 = (bool)hasExclusiveAccess(pcVar10);
        if (bVar1) {
          *pcVar10 = '\0';
          goto LAB_01641bb8;
        }
      } while (*pcVar10 == '\x01');
    }
    ClearExclusiveLocal();
    FUN_01280a5c(pcVar10);
LAB_01641bb8:
    piVar15 = piVar16;
    if ((uVar11 & 0xff) == 4) goto LAB_01641bcc;
LAB_01641d34:
    DataMemoryBarrier(0xb);
    do {
      iVar3 = *piVar12;
      bVar1 = (bool)hasExclusiveAccess(piVar12);
    } while (!bVar1);
    *piVar12 = iVar3 + -1;
    piVar16 = piVar15;
    if ((int)uVar18 == 0) {
      uVar18 = CONCAT44(uVar11,2);
      if (iVar3 == 1) {
        DataMemoryBarrier(0xb);
        FUN_01659344(piVar12);
        uVar18 = CONCAT44(uVar11,2);
      }
    }
    else {
      uVar18 = CONCAT44(uVar11,2);
      if (iVar3 == 1) {
        DataMemoryBarrier(0xb);
        FUN_016586fc(piVar12);
        uVar18 = CONCAT44(uVar11,2);
      }
    }
  }
  FUN_016dffb2(uVar13);
LAB_01641d90:
  *param_1 = uVar18;
  *(int **)(param_1 + 1) = piVar16;
  return;
}

