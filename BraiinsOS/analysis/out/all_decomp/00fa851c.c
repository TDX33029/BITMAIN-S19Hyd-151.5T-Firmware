// FUN_00fa851c @ 00fa851c size=1800 calls_out=13 calls_in=2
// strings: 

/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_00fa851c(void)

{
  code *pcVar1;
  uint uVar2;
  int *piVar3;
  uint uVar4;
  uint *puVar5;
  undefined4 *puVar6;
  int *piVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  int iVar11;
  int *piVar12;
  int iVar13;
  char *pcVar14;
  uint uVar15;
  uint uVar16;
  uint uVar17;
  uint uVar18;
  bool bVar19;
  uint local_58;
  uint local_54;
  int *local_50;
  uint local_4c;
  uint local_48;
  uint local_44;
  uint local_40;
  uint local_3c;
  uint local_38;
  uint local_34;
  uint local_30;
  uint local_2c;
  uint local_28;
  
  local_38 = (uint)local_38._1_3_ << 8;
  uVar2 = thunk_FUN_016d4a50(0x50000);
  if (uVar2 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_00600af4(8,0x50000);
  }
  iVar13 = 0;
  local_50 = (int *)0x0;
  local_58 = 0x2000;
  local_54 = uVar2;
  do {
    piVar3 = local_50;
    bVar19 = local_50 < 0x2000;
    iVar11 = (int)local_50 - 0x2000;
    if (local_50 == (int *)local_58) {
      FUN_00fa903c(&local_58);
      uVar2 = local_54;
    }
    puVar6 = (undefined4 *)(uVar2 + iVar13);
    *puVar6 = 0;
    iVar13 = iVar13 + 0x28;
    *(undefined1 *)((int)puVar6 + 0x27) = 2;
    puVar6[1] = 0;
    puVar6[2] = iVar11;
    puVar6[3] = -(uint)bVar19;
    puVar6[4] = 0;
    local_50 = (int *)((int)piVar3 + 1);
  } while (piVar3 != (int *)0x1fff);
  if (local_58 < 0x2001) {
    uVar2 = local_54;
  }
  else {
    uVar2 = thunk_FUN_016d4ea4(local_54,0x50000);
    if (uVar2 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_00600af4(8,0x50000);
    }
  }
  piVar3 = (int *)thunk_FUN_016d4a50(0x50);
  if (piVar3 == (int *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_00600874(8,0x50);
  }
  piVar3[1] = 1;
  piVar3[2] = uVar2;
  piVar3[3] = 0x2000;
  piVar12 = piVar3 + 4;
  *piVar12 = 0;
  piVar3[0xc] = 0;
  *piVar3 = 1;
  *(undefined1 *)(piVar3 + 0xb) = 0;
  piVar3[5] = 0;
  piVar3[6] = 0;
  piVar3[7] = 0;
  piVar3[8] = 0;
  piVar3[9] = 0;
  piVar3[10] = 1;
  piVar3[0xd] = 0;
  piVar3[0xe] = 0;
  piVar3[0xf] = 0;
  piVar3[0x10] = 0x1fff;
  piVar3[0x11] = 1;
  piVar3[0x12] = 0;
  do {
    iVar13 = *piVar3;
    bVar19 = (bool)hasExclusiveAccess(piVar3);
  } while (!bVar19);
  *piVar3 = iVar13 + 1;
  if (iVar13 < 0) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)software_udf(0xfdee,0xfa8c34);
    (*pcVar1)();
  }
  if ((char)*piVar12 == '\0') {
    bVar19 = (bool)hasExclusiveAccess(piVar12);
    if (bVar19) {
      *(char *)piVar12 = '\x01';
      DataMemoryBarrier(0xb);
      goto LAB_00fa86ac;
    }
  }
  else {
    ClearExclusiveLocal();
  }
  FUN_01280da8(piVar12);
LAB_00fa86ac:
  FUN_0128236c(piVar12);
  uVar2 = piVar3[6];
  uVar4 = piVar3[7];
  iVar13 = piVar3[10];
  piVar3[10] = iVar13 + -1;
  if (iVar13 + -1 == 0) {
    FUN_0163b708(piVar3 + 0xc);
    *(undefined1 *)(piVar3 + 0xb) = 1;
  }
  FUN_01282570(piVar12);
  if ((char)*piVar12 == '\x01') {
    DataMemoryBarrier(0xb);
    do {
      bVar19 = (bool)hasExclusiveAccess(piVar12);
      if (bVar19) {
        *(char *)piVar12 = '\0';
        goto LAB_00fa872c;
      }
    } while ((char)*piVar12 == '\x01');
  }
  ClearExclusiveLocal();
  FUN_01280a5c(piVar12);
LAB_00fa872c:
  if (uVar2 != 0 || uVar4 != 0) {
    uVar15 = 0;
    uVar17 = 0;
    do {
      uVar10 = piVar3[0x10] & uVar17;
      if ((uint)piVar3[3] <= uVar10) {
                    /* WARNING: Subroutine does not return */
        FUN_00faa4a4(uVar10,piVar3[3],&DAT_01880ac4);
      }
      pcVar14 = (char *)(piVar3[2] + uVar10 * 0x28);
      if (*pcVar14 == '\0') {
        bVar19 = (bool)hasExclusiveAccess(pcVar14);
        if (!bVar19) goto LAB_00fa87b0;
        *pcVar14 = '\x01';
        DataMemoryBarrier(0xb);
      }
      else {
        ClearExclusiveLocal();
LAB_00fa87b0:
        FUN_01280da8(pcVar14);
      }
      FUN_0128236c(pcVar14);
      if (*(uint *)(pcVar14 + 8) == uVar17 && *(uint *)(pcVar14 + 0xc) == uVar15) {
LAB_00fa89bc:
        uVar18 = uVar17 + 1;
        piVar7 = (int *)(pcVar14 + 0x10);
        uVar16 = uVar15 + (0xfffffffe < uVar17);
        DataMemoryBarrier(0xb);
        do {
          iVar13 = *piVar7;
          bVar19 = (bool)hasExclusiveAccess(piVar7);
        } while (!bVar19);
        *piVar7 = iVar13 + -1;
        DataMemoryBarrier(0xb);
        if (iVar13 == 1) {
          pcVar14[0x27] = '\x02';
        }
        FUN_01282570(pcVar14);
        if (*pcVar14 == '\x01') {
          DataMemoryBarrier(0xb);
          do {
            bVar19 = (bool)hasExclusiveAccess(pcVar14);
            if (bVar19) {
              *pcVar14 = '\0';
              goto LAB_00fa8758;
            }
          } while (*pcVar14 == '\x01');
        }
        ClearExclusiveLocal();
        FUN_01280a5c(pcVar14);
      }
      else {
        FUN_01282570(pcVar14);
        if (*pcVar14 == '\x01') {
          DataMemoryBarrier(0xb);
          do {
            bVar19 = (bool)hasExclusiveAccess(pcVar14);
            if (bVar19) {
              *pcVar14 = '\0';
              goto LAB_00fa8810;
            }
          } while (*pcVar14 == '\x01');
        }
        ClearExclusiveLocal();
        FUN_01280a5c(pcVar14);
LAB_00fa8810:
        if ((char)*piVar12 == '\0') {
          bVar19 = (bool)hasExclusiveAccess(piVar12);
          if (!bVar19) goto LAB_00fa8834;
          *(char *)piVar12 = '\x01';
          DataMemoryBarrier(0xb);
        }
        else {
          ClearExclusiveLocal();
LAB_00fa8834:
          FUN_01280da8(piVar12);
        }
        FUN_0128236c(piVar12);
        if ((uint)piVar3[3] <= uVar10) {
                    /* WARNING: Subroutine does not return */
          FUN_00faa4a4(uVar10,piVar3[3],&DAT_01880ad4);
        }
        pcVar14 = (char *)(piVar3[2] + uVar10 * 0x28);
        if (*pcVar14 == '\0') {
          bVar19 = (bool)hasExclusiveAccess(pcVar14);
          if (!bVar19) goto LAB_00fa887c;
          *pcVar14 = '\x01';
          DataMemoryBarrier(0xb);
        }
        else {
          ClearExclusiveLocal();
LAB_00fa887c:
          FUN_01280da8(pcVar14);
        }
        FUN_0128236c(pcVar14);
        uVar10 = *(uint *)(pcVar14 + 8);
        if (uVar10 == uVar17 && *(uint *)(pcVar14 + 0xc) == uVar15) {
          FUN_01282570(piVar12);
          if ((char)*piVar12 == '\x01') {
            DataMemoryBarrier(0xb);
            do {
              bVar19 = (bool)hasExclusiveAccess(piVar12);
              if (bVar19) {
                *(char *)piVar12 = '\0';
                goto LAB_00fa89bc;
              }
            } while ((char)*piVar12 == '\x01');
          }
          ClearExclusiveLocal();
          FUN_01280a5c(piVar12);
          goto LAB_00fa89bc;
        }
        uVar16 = piVar3[3];
        uVar8 = uVar10 + uVar16 ^ uVar17;
        uVar10 = *(uint *)(pcVar14 + 0xc) + (uint)CARRY4(uVar10,uVar16) ^ uVar15;
        if (uVar8 == 0 && uVar10 == 0) {
          if ((char)piVar3[0xb] == '\0') {
            FUN_01282570(pcVar14);
            if (*pcVar14 != '\x01') goto LAB_00fa8bd0;
            DataMemoryBarrier(0xb);
            goto LAB_00fa8bb8;
          }
          FUN_01282570(piVar12);
          uVar18 = uVar17;
          uVar16 = uVar15;
          if ((char)*piVar12 == '\x01') {
            DataMemoryBarrier(0xb);
            do {
              bVar19 = (bool)hasExclusiveAccess(piVar12);
              if (bVar19) {
                *(char *)piVar12 = '\0';
                goto LAB_00fa8a3c;
              }
            } while ((char)*piVar12 == '\x01');
          }
          ClearExclusiveLocal();
          FUN_01280a5c(piVar12);
        }
        else {
          uVar9 = piVar3[6];
          uVar18 = uVar9 - uVar16;
          uVar16 = piVar3[7] - (uint)(uVar9 < uVar16);
          FUN_01282570(piVar12);
          if ((char)*piVar12 == '\x01') {
            DataMemoryBarrier(0xb);
            do {
              bVar19 = (bool)hasExclusiveAccess(piVar12);
              if (bVar19) {
                *(char *)piVar12 = '\0';
                goto LAB_00fa89ac;
              }
            } while ((char)*piVar12 == '\x01');
          }
          ClearExclusiveLocal();
          FUN_01280a5c(piVar12);
LAB_00fa89ac:
          if (uVar18 == uVar17 && uVar16 == uVar15) goto LAB_00fa89bc;
        }
LAB_00fa8a3c:
        FUN_01282570(pcVar14);
        if (*pcVar14 == '\x01') {
          DataMemoryBarrier(0xb);
          do {
            bVar19 = (bool)hasExclusiveAccess(pcVar14);
            if (bVar19) {
              *pcVar14 = '\0';
              goto LAB_00fa8a78;
            }
          } while (*pcVar14 == '\x01');
        }
        ClearExclusiveLocal();
        FUN_01280a5c(pcVar14);
LAB_00fa8a78:
        if (uVar8 == 0 && uVar10 == 0) break;
      }
LAB_00fa8758:
      uVar15 = uVar16;
      uVar17 = uVar18;
    } while (uVar16 <= uVar4 && (uint)(uVar2 <= uVar18) <= uVar16 - uVar4);
  }
  DataMemoryBarrier(0xb);
  do {
    iVar13 = *piVar3;
    bVar19 = (bool)hasExclusiveAccess(piVar3);
  } while (!bVar19);
  *piVar3 = iVar13 + -1;
  if (iVar13 == 1) {
    DataMemoryBarrier(0xb);
    FUN_0078205c(piVar3);
  }
  local_38 = local_38 & 0xffffff00;
  local_3c = 0;
  local_40 = 0;
  local_44 = 0;
  local_28 = 0;
  local_30 = 0;
  local_34 = 0x3ffffffe;
  local_48 = 0x1fffffff;
  local_4c = 100;
  local_54 = 1;
  local_58 = 1;
  local_2c = 2;
  local_50 = piVar3;
  puVar5 = (uint *)thunk_FUN_016d4a50(0x34);
  if (puVar5 == (uint *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_00600874(4,0x34);
  }
  *puVar5 = local_58;
  puVar5[1] = local_54;
  puVar5[2] = (uint)local_50;
  puVar5[3] = local_4c;
  puVar5[4] = local_48;
  puVar5[5] = local_44;
  puVar5[6] = local_40;
  puVar5[7] = local_3c;
  puVar5[8] = local_38;
  puVar5[9] = local_34;
  puVar5[10] = local_30;
  puVar5[0xb] = local_2c;
  puVar5[0xc] = local_28;
  return;
  while (*pcVar14 == '\x01') {
LAB_00fa8bb8:
    bVar19 = (bool)hasExclusiveAccess(pcVar14);
    if (bVar19) {
      *pcVar14 = '\0';
      goto LAB_00fa8bdc;
    }
  }
LAB_00fa8bd0:
  ClearExclusiveLocal();
  FUN_01280a5c(pcVar14);
LAB_00fa8bdc:
  FUN_01282570(piVar12);
  if ((char)*piVar12 == '\x01') {
    DataMemoryBarrier(0xb);
    do {
      bVar19 = (bool)hasExclusiveAccess(piVar12);
      if (bVar19) {
        *(char *)piVar12 = '\0';
        goto LAB_00fa8c1c;
      }
    } while ((char)*piVar12 == '\x01');
  }
  ClearExclusiveLocal();
  FUN_01280a5c(piVar12);
LAB_00fa8c1c:
                    /* WARNING: Subroutine does not return */
  FUN_00faa478(&DAT_0035e385,0x45,&DAT_01880ae4);
}

