// FUN_013d4528 @ 013d4528 size=1220 calls_out=13 calls_in=0
// strings: internal error: entered unreachable code

/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_013d4528(int *param_1)

{
  code *pcVar1;
  char cVar2;
  undefined *puVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  int *piVar7;
  undefined *puVar8;
  int *piVar9;
  char *pcVar10;
  int iVar11;
  int iVar12;
  uint uVar13;
  bool bVar14;
  undefined8 uVar15;
  uint local_a0;
  undefined *local_48;
  int local_44;
  uint local_40;
  int local_3c;
  
  do {
    if (param_1[1] == 0) {
      return;
    }
    iVar12 = *param_1;
    pcVar10 = (char *)(iVar12 + 8);
    if (*pcVar10 == '\0') {
      bVar14 = (bool)hasExclusiveAccess(pcVar10);
      if (!bVar14) goto LAB_013d48f8;
      *pcVar10 = '\x01';
      DataMemoryBarrier(0xb);
    }
    else {
      ClearExclusiveLocal();
LAB_013d48f8:
      FUN_0164fba8(pcVar10);
    }
    FUN_0165098c(pcVar10);
    puVar8 = *(undefined **)(iVar12 + 0x1c);
    if (puVar8 == (undefined *)0x0) {
      uVar15 = FUN_01348fb0(0);
LAB_013d45e8:
      *(undefined8 *)(iVar12 + 0x1c) = uVar15;
    }
    else {
      puVar3 = *(undefined **)(iVar12 + 0x20);
      bVar14 = puVar3 == (undefined *)0x0;
      if (bVar14) {
        puVar3 = &DAT_01ce6c90;
      }
      if (!bVar14 || puVar8 != puVar3) {
        uVar15 = FUN_01348fb0(0);
        (**(code **)(puVar8 + 0xc))(*(undefined4 *)(iVar12 + 0x20));
        goto LAB_013d45e8;
      }
    }
    iVar11 = *(int *)(iVar12 + 0x10);
    if (iVar11 == 0) {
      FUN_01650a90(pcVar10);
      if (*pcVar10 == '\x01') {
        DataMemoryBarrier(0xb);
        do {
          bVar14 = (bool)hasExclusiveAccess(pcVar10);
          if (bVar14) {
            *pcVar10 = '\0';
            return;
          }
        } while (*pcVar10 == '\x01');
      }
      ClearExclusiveLocal();
      FUN_0164f86c(pcVar10);
      return;
    }
    iVar4 = *(int *)(iVar11 + 4);
    piVar9 = (int *)(iVar11 + -8);
    *(int *)(iVar12 + 0x10) = iVar4;
    if (iVar4 == 0) {
      *(undefined4 *)(iVar12 + 0xc) = 0;
    }
    else {
      *(undefined4 *)(iVar4 + 8) = 0;
    }
    *(undefined4 *)(iVar11 + 4) = 0;
    *(undefined4 *)(iVar11 + 8) = 0;
    do {
      iVar4 = *piVar9;
      bVar14 = (bool)hasExclusiveAccess(piVar9);
    } while (!bVar14);
    *piVar9 = iVar4 + 1;
    if (iVar4 < 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)software_udf(0xfdee,0x13d49ec);
      (*pcVar1)();
    }
    FUN_013d5a8c(iVar12 + 0x14,piVar9);
    *(undefined1 *)(iVar11 + 0x10) = 1;
    FUN_01650a90(pcVar10);
    if (*pcVar10 == '\x01') {
      DataMemoryBarrier(0xb);
      do {
        bVar14 = (bool)hasExclusiveAccess(pcVar10);
        if (bVar14) {
          *pcVar10 = '\0';
          goto LAB_013d4698;
        }
      } while (*pcVar10 == '\x01');
    }
    ClearExclusiveLocal();
    FUN_0164f86c(pcVar10);
LAB_013d4698:
    local_40 = 1;
    local_48 = &DAT_01cf2c28;
    local_3c = 0;
    local_44 = iVar11;
    uVar5 = FUN_019ec670(&local_48);
    uVar13 = 0;
    if ((uVar5 & 0xff) != 2) {
      if ((uVar5 & 1) != 0) goto LAB_013d4990;
      local_a0 = (uVar5 & 0xffffff) >> 0x10;
      uVar13 = (uVar5 & 0xffffff) >> 8;
    }
    (**(code **)(*(int *)(*(int *)(iVar11 + 0xc) + 8) + 0xc))
              (*(int *)(iVar11 + 0xc),&local_40,&local_48);
    uVar5 = local_40;
    uVar6 = 0;
    if (local_40 != 0 || local_3c != 0) {
      uVar6 = uVar13;
    }
    FUN_019edbc4(uVar6,local_a0);
    if ((uVar5 & 1) != 0) {
LAB_013d4990:
      DataMemoryBarrier(0xb);
      do {
        iVar12 = *piVar9;
        bVar14 = (bool)hasExclusiveAccess(piVar9);
      } while (!bVar14);
      *piVar9 = iVar12 + -1;
      if (iVar12 == 1) {
        DataMemoryBarrier(0xb);
        FUN_013cf470(piVar9);
        return;
      }
      return;
    }
    iVar12 = *param_1;
    param_1[1] = param_1[1] + -1;
    pcVar10 = (char *)(iVar12 + 8);
    if (*pcVar10 == '\0') {
      bVar14 = (bool)hasExclusiveAccess(pcVar10);
      if (!bVar14) goto LAB_013d4788;
      *pcVar10 = '\x01';
      DataMemoryBarrier(0xb);
    }
    else {
      ClearExclusiveLocal();
LAB_013d4788:
      FUN_0164fba8(pcVar10);
    }
    FUN_0165098c(pcVar10);
    cVar2 = *(char *)(iVar11 + 0x10);
    *(undefined1 *)(iVar11 + 0x10) = 2;
    iVar4 = 0xc;
    if (cVar2 != '\0') {
      if (cVar2 != '\x01') {
                    /* WARNING: Subroutine does not return */
        FUN_012fb0ec("internal error: entered unreachable code",0x28,&DAT_01cf2fc8);
      }
      iVar4 = 0x14;
    }
    piVar7 = (int *)FUN_013d5adc(iVar12 + iVar4,iVar11);
    if (piVar7 == (int *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_012fb0cc(&DAT_01cf2fb8);
    }
    DataMemoryBarrier(0xb);
    do {
      iVar12 = *piVar7;
      bVar14 = (bool)hasExclusiveAccess(piVar7);
    } while (!bVar14);
    *piVar7 = iVar12 + -1;
    if (iVar12 == 1) {
      DataMemoryBarrier(0xb);
      FUN_013cf470();
    }
    FUN_01650a90(pcVar10);
    if (*pcVar10 == '\x01') {
      DataMemoryBarrier(0xb);
      do {
        bVar14 = (bool)hasExclusiveAccess(pcVar10);
        if (bVar14) {
          *pcVar10 = '\0';
          goto LAB_013d4834;
        }
      } while (*pcVar10 == '\x01');
    }
    ClearExclusiveLocal();
    FUN_0164f86c(pcVar10);
LAB_013d4834:
    piVar7 = *(int **)(iVar11 + 0xc);
    DataMemoryBarrier(0xb);
    do {
      iVar12 = *piVar9;
      bVar14 = (bool)hasExclusiveAccess(piVar9);
    } while (!bVar14);
    *piVar9 = iVar12 + -1;
    if (iVar12 == 1) {
      DataMemoryBarrier(0xb);
      FUN_013cf470(piVar9);
    }
    if (*piVar7 == 0xcc) {
      DataMemoryBarrier(0xb);
      bVar14 = (bool)hasExclusiveAccess(piVar7);
      if (!bVar14) goto LAB_013d48a0;
      *piVar7 = 0x84;
    }
    else {
      ClearExclusiveLocal();
LAB_013d48a0:
      (**(code **)(piVar7[2] + 0x10))(piVar7);
    }
    FUN_013d4b28();
  } while( true );
}

