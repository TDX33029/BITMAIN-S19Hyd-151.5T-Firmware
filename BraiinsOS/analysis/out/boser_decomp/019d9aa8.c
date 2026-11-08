// FUN_019d9aa8 @ 019d9aa8 size=1812 calls_out=19 calls_in=0
// strings: num_idle_threads underflowed on thread exit

/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_019d9aa8(uint *param_1)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  int *piVar5;
  undefined1 *puVar6;
  uint uVar7;
  int iVar8;
  undefined4 uVar9;
  byte bVar10;
  uint *puVar11;
  undefined4 uVar12;
  uint uVar13;
  undefined1 uVar14;
  uint uVar15;
  uint uVar16;
  uint uVar17;
  uint uVar18;
  uint uVar19;
  int iVar20;
  int iVar21;
  uint *puVar22;
  int *piVar23;
  char *pcVar24;
  bool bVar25;
  undefined8 uVar26;
  ulonglong uVar27;
  uint local_68;
  uint local_64;
  int local_60;
  undefined1 auStack_5c [12];
  uint local_50;
  uint uStack_4c;
  int iStack_48;
  undefined4 local_40;
  undefined4 local_3c;
  uint local_38;
  uint local_34;
  int local_30;
  
  uVar15 = *param_1;
  uVar18 = param_1[1];
  FUN_019f5fcc(auStack_5c,uVar15,uVar18);
  iVar4 = 0x218;
  if ((uVar15 & 1) != 0) {
    iVar4 = 0x148;
  }
  uVar15 = param_1[3];
  iVar4 = *(int *)(uVar18 + iVar4);
  if (*(int *)(iVar4 + 0x80) != 0) {
    (**(code **)(*(int *)(iVar4 + 0x84) + 0x14))
              (*(int *)(iVar4 + 0x80) + (*(int *)(*(int *)(iVar4 + 0x84) + 8) - 1U & 0xfffffff8) + 8
              );
  }
  pcVar24 = (char *)(iVar4 + 0x28);
  if (*pcVar24 == '\0') {
    bVar25 = (bool)hasExclusiveAccess(pcVar24);
    if (bVar25) {
      *pcVar24 = '\x01';
      DataMemoryBarrier(0xb);
      goto LAB_019d9b50;
    }
  }
  else {
    ClearExclusiveLocal();
  }
  FUN_0164fba8(pcVar24);
LAB_019d9b50:
  FUN_0165098c(pcVar24);
  piVar5 = (int *)(iVar4 + 0x90);
  puVar22 = (uint *)(iVar4 + 0x9c);
  piVar23 = (int *)(iVar4 + 0xa0);
  local_50 = 0;
  do {
    while( true ) {
      uVar26 = FUN_019efd0c(iVar4 + 0x30);
      if (((uint)((ulonglong)uVar26 >> 0x20) & 0xff) == 2) break;
      do {
        bVar25 = (bool)hasExclusiveAccess(piVar23);
      } while (!bVar25);
      *piVar23 = *piVar23 + -1;
      FUN_01650a90(pcVar24);
      if (*pcVar24 == '\x01') {
        DataMemoryBarrier(0xb);
        do {
          bVar25 = (bool)hasExclusiveAccess(pcVar24);
          if (bVar25) {
            *pcVar24 = '\0';
            goto LAB_019d9bf8;
          }
        } while (*pcVar24 == '\x01');
      }
      ClearExclusiveLocal();
      FUN_0164f86c(pcVar24);
LAB_019d9bf8:
      FUN_019d881c((int)uVar26);
      if (*pcVar24 == '\0') {
        bVar25 = (bool)hasExclusiveAccess(pcVar24);
        if (!bVar25) goto LAB_019d9d54;
        *pcVar24 = '\x01';
        DataMemoryBarrier(0xb);
      }
      else {
        ClearExclusiveLocal();
LAB_019d9d54:
        FUN_0164fba8(pcVar24);
      }
      FUN_0165098c(pcVar24);
    }
    do {
      bVar25 = (bool)hasExclusiveAccess(puVar22);
    } while (!bVar25);
    *puVar22 = *puVar22 + 1;
    bVar10 = *(byte *)(iVar4 + 0x78);
    while( true ) {
      if ((bVar10 & 1) != 0) goto LAB_019d9d90;
      iVar20 = *(int *)(iVar4 + 0x18);
      uVar18 = *(uint *)(iVar4 + 0x10);
      uVar19 = *(uint *)(iVar4 + 0x14);
      FUN_019ac130(&local_38,1);
      uVar13 = local_38 + uVar18;
      uVar18 = local_34 + uVar19 + (uint)CARRY4(local_38,uVar18);
      if ((int)uVar19 < 0 == (int)((local_34 ^ uVar18) & ~(local_34 ^ uVar19)) < 0) {
        puVar6 = (undefined1 *)(local_30 + iVar20);
        if (&DAT_3b9aca00 <= puVar6) {
          bVar25 = 0xfffffffe < uVar13;
          uVar13 = uVar13 + 1;
          uVar19 = uVar18 + bVar25;
          puVar6 = puVar6 + -1000000000;
          if ((int)((uVar18 ^ uVar19) & ~uVar18) < 0) {
            puVar6 = &DAT_3b9aca00;
            uVar13 = local_64;
            uVar18 = local_68;
          }
          else {
            uVar18 = uVar19;
          }
        }
        local_64 = uVar13;
        local_68 = uVar18;
      }
      else {
        puVar6 = &DAT_3b9aca00;
      }
      iVar20 = FUN_0164f0b8(piVar5,pcVar24,local_64,local_68,puVar6);
      if (*(int *)(iVar4 + 0x60) != 0) break;
      bVar10 = *(byte *)(iVar4 + 0x78);
      if ((iVar20 != 0) && ((bVar10 & 1) == 0)) {
        uVar13 = FUN_01656218(*(undefined4 *)(iVar4 + 0x50),*(undefined4 *)(iVar4 + 0x54),
                              *(undefined4 *)(iVar4 + 0x58),*(undefined4 *)(iVar4 + 0x5c),uVar15);
        uVar18 = uVar13 >> 0x19;
        iVar20 = *(int *)(iVar4 + 0x40);
        uVar19 = *(uint *)(iVar4 + 0x44);
        local_60 = 0;
        goto LAB_019d9ebc;
      }
    }
    *(int *)(iVar4 + 0x60) = *(int *)(iVar4 + 0x60) + -1;
  } while (*(char *)(iVar4 + 0x78) != '\x01');
LAB_019d9d90:
  do {
    uVar27 = FUN_019efd0c(iVar4 + 0x30);
    if (((uint)(uVar27 >> 0x20) & 0xff) == 2) break;
    do {
      bVar25 = (bool)hasExclusiveAccess(piVar23);
    } while (!bVar25);
    *piVar23 = *piVar23 + -1;
    FUN_01650a90(pcVar24);
    if (*pcVar24 == '\x01') {
      DataMemoryBarrier(0xb);
      do {
        bVar25 = (bool)hasExclusiveAccess(pcVar24);
        if (bVar25) {
          *pcVar24 = '\0';
          goto LAB_019d9dfc;
        }
      } while (*pcVar24 == '\x01');
    }
    ClearExclusiveLocal();
    FUN_0164f86c(pcVar24);
LAB_019d9dfc:
    if ((uVar27 & 0x100000000) == 0) {
      FUN_019d881c((int)uVar27);
    }
    else {
      FUN_019d88bc((int)uVar27);
    }
    if (*pcVar24 == '\0') {
      bVar25 = (bool)hasExclusiveAccess(pcVar24);
      if (!bVar25) goto LAB_019d9e40;
      *pcVar24 = '\x01';
      DataMemoryBarrier(0xb);
    }
    else {
      ClearExclusiveLocal();
LAB_019d9e40:
      FUN_0164fba8(pcVar24);
    }
    FUN_0165098c(pcVar24);
  } while( true );
  do {
    bVar25 = (bool)hasExclusiveAccess(puVar22);
  } while (!bVar25);
  *puVar22 = *puVar22 + 1;
  goto LAB_019da038;
LAB_019d9ebc:
  uVar13 = uVar19 & uVar13;
  uVar7 = *(uint *)(iVar20 + uVar13);
  uVar16 = uVar7 ^ uVar18 * 0x1010101;
  uVar16 = ~uVar16 & 0x80808080 & uVar16 + 0xfefefeff;
  while (uVar16 != 0) {
    uVar17 = uVar16 >> 8;
    uVar1 = uVar16 >> 0x10;
    uVar2 = uVar16 >> 0x18;
    uVar3 = uVar16 << 0x18;
    uVar16 = uVar16 - 1 & uVar16;
    uVar17 = uVar13 + ((uint)LZCOUNT(uVar3 | (uVar17 & 0xff) << 0x10 | (uVar1 & 0xff) << 8 | uVar2)
                      >> 3) & uVar19;
    if (uVar15 == *(uint *)(iVar20 + -0x10 + uVar17 * -0x10)) {
      puVar11 = (uint *)(iVar20 + (uVar17 - 4 & uVar19));
      uVar15 = *puVar11;
      uVar18 = *(uint *)(iVar20 + uVar17) & 0x80808080 & *(uint *)(iVar20 + uVar17) << 1;
      iVar8 = iVar20 + uVar17 * -0x10;
      uVar14 = 0x80;
      if (((uint)LZCOUNT(uVar18 << 0x18 | (uVar18 >> 8 & 0xff) << 0x10 |
                         (uVar18 >> 0x10 & 0xff) << 8 | uVar18 >> 0x18) >> 3) +
          ((uint)LZCOUNT(uVar15 & 0x80808080 & uVar15 << 1) >> 3) < 4) {
        *(int *)(iVar4 + 0x48) = *(int *)(iVar4 + 0x48) + 1;
        uVar14 = 0xff;
      }
      *(undefined1 *)(iVar20 + uVar17) = uVar14;
      iVar20 = *(int *)(iVar4 + 0x4c);
      *(undefined1 *)(puVar11 + 1) = uVar14;
      iVar21 = *(int *)(iVar8 + -0xc);
      uVar12 = *(undefined4 *)(iVar8 + -8);
      uVar9 = *(undefined4 *)(iVar8 + -4);
      *(int *)(iVar4 + 0x4c) = iVar20 + -1;
      if (iVar21 == 0) {
        iVar21 = 0;
      }
      else {
        local_40 = uVar12;
        local_3c = uVar9;
      }
      goto LAB_019d9fe8;
    }
  }
  iVar21 = 0;
  if ((uVar7 & 0x80808080 & uVar7 << 1) != 0) goto LAB_019d9fe8;
  local_60 = local_60 + 4;
  uVar13 = uVar13 + local_60;
  goto LAB_019d9ebc;
LAB_019d9fe8:
  local_38 = *(uint *)(iVar4 + 0x68);
  local_34 = *(uint *)(iVar4 + 0x6c);
  local_30 = *(int *)(iVar4 + 0x70);
  *(int *)(iVar4 + 0x68) = iVar21;
  *(undefined4 *)(iVar4 + 0x6c) = local_40;
  *(undefined4 *)(iVar4 + 0x70) = local_3c;
  if (local_50 != 0) {
    FUN_01736438(&local_50);
  }
  local_50 = local_38;
  uStack_4c = local_34;
  iStack_48 = local_30;
LAB_019da038:
  piVar23 = (int *)(iVar4 + 0x98);
  do {
    bVar25 = (bool)hasExclusiveAccess(piVar23);
  } while (!bVar25);
  *piVar23 = *piVar23 + -1;
  do {
    uVar15 = *puVar22;
    bVar25 = (bool)hasExclusiveAccess(puVar22);
  } while (!bVar25);
  *puVar22 = uVar15 - 1;
  if (uVar15 < *puVar22) {
                    /* WARNING: Subroutine does not return */
    FUN_012fb100("num_idle_threads underflowed on thread exit",0x57,&DAT_01d297d0);
  }
  if (((*(char *)(iVar4 + 0x78) != '\0') && (*piVar23 == 0)) && (*piVar5 != 0)) {
    FUN_0164ed38(piVar5);
  }
  FUN_01650a90(pcVar24);
  if (*pcVar24 == '\x01') {
    DataMemoryBarrier(0xb);
    do {
      bVar25 = (bool)hasExclusiveAccess(pcVar24);
      if (bVar25) {
        *pcVar24 = '\0';
        goto LAB_019da0e0;
      }
    } while (*pcVar24 == '\x01');
  }
  ClearExclusiveLocal();
  FUN_0164f86c(pcVar24);
LAB_019da0e0:
  if (*(int *)(iVar4 + 0x88) != 0) {
    (**(code **)(*(int *)(iVar4 + 0x8c) + 0x14))
              (*(int *)(iVar4 + 0x88) + (*(int *)(*(int *)(iVar4 + 0x8c) + 8) - 1U & 0xfffffff8) + 8
              );
  }
  if (local_50 != 0) {
    FUN_019f6e6c(&local_50);
    FUN_012d40d0();
  }
  piVar5 = (int *)param_1[2];
  DataMemoryBarrier(0xb);
  do {
    iVar4 = *piVar5;
    bVar25 = (bool)hasExclusiveAccess(piVar5);
  } while (!bVar25);
  *piVar5 = iVar4 + -1;
  if (iVar4 == 1) {
    DataMemoryBarrier(0xb);
    FUN_019da320();
  }
  FUN_019da2d4(auStack_5c);
  FUN_014397e4(*param_1,param_1[1]);
  return;
}

