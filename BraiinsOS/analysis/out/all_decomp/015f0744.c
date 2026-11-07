// FUN_015f0744 @ 015f0744 size=4068 calls_out=26 calls_in=2
// strings: internal error: entered unreachable code: the thread info setup logic isn't recursive

/* WARNING: Removing unreachable block (ram,0x015f0820) */

uint FUN_015f0744(int param_1)

{
  ushort uVar1;
  bool bVar2;
  char cVar3;
  undefined4 uVar4;
  int iVar5;
  uint *puVar6;
  uint uVar7;
  uint uVar8;
  int iVar9;
  int iVar10;
  int *piVar11;
  int iVar12;
  int *piVar13;
  int iVar14;
  int iVar15;
  int extraout_r2;
  int iVar16;
  int iVar17;
  int extraout_r3;
  ushort *puVar18;
  int iVar19;
  int iVar20;
  int iVar21;
  undefined *puVar22;
  uint uVar23;
  undefined4 *puVar24;
  uint uVar25;
  int iVar26;
  int *piVar27;
  int unaff_r9;
  int *piVar28;
  uint uVar29;
  bool bVar30;
  undefined8 uVar31;
  int local_bc;
  int local_b8;
  int local_b4;
  int local_b0;
  int *local_ac;
  int local_a8;
  int local_a4;
  int local_7c;
  uint local_78;
  uint local_74;
  uint local_68;
  undefined4 *local_64;
  uint local_60;
  int local_44;
  int local_40;
  int local_3c [3];
  undefined4 local_30;
  int *local_2c;
  code *local_28;
  
  DataMemoryBarrier(0xb);
  if (DAT_018dd943 == '\0') {
    return 0;
  }
  if (param_1 != 0) goto LAB_015f0c4c;
  FUN_016dd606(&local_68,0,0x24);
  uVar4 = FUN_016df688();
  iVar5 = FUN_016deab0(uVar4,&local_68);
  if (iVar5 != 0) goto LAB_015f0c4c;
  local_44 = 0;
  local_40 = FUN_016de214(&local_68,&local_44);
  if (local_40 != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_015f3600(&local_40,&DAT_00568f30,0,&DAT_018aacf0);
  }
  if (local_44 == 0) {
    local_44 = DAT_018dd974;
  }
  local_3c[0] = 0;
  local_3c[1] = 0;
  local_3c[2] = FUN_016de21e(&local_68,local_3c,local_3c + 1);
  iVar9 = local_3c[0];
  iVar5 = local_44;
  if (local_3c[2] != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_015f3600(local_3c + 2,&DAT_00568f30,0,&DAT_018aace0);
  }
  local_2c = (int *)FUN_016de210(&local_68);
  if (local_2c != (int *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_015f3600(&local_2c,&DAT_00568f30,0,&DAT_018aacd0);
  }
  iVar10 = FUN_016d6968(0xe0);
  uVar31 = thunk_FUN_016de0ee(iVar10,0x248);
  puVar6 = *(uint **)((int)uVar31 + (int)((ulonglong)uVar31 >> 0x20));
  if (puVar6 < (uint *)0x3) {
    ClearExclusiveLocal();
    uVar31 = thunk_FUN_016de0ee(&DAT_018dd9a0,DAT_018dd9a0 | DAT_018dd9a4);
    unaff_r9 = 4;
    puVar24 = (undefined4 *)0x0;
    if (((int)((ulonglong)uVar31 >> 0x20) != 0) &&
       (*(int *)((int)uVar31 + 0x240) == extraout_r2 && *(int *)((int)uVar31 + 0x244) == extraout_r3
       )) {
      puVar24 = (undefined4 *)thunk_FUN_016d4a50(4);
      if (puVar24 == (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_00600874(1,4);
      }
      *puVar24 = 0x6e69616d;
    }
  }
  else {
    puVar22 = (undefined *)puVar6[2];
    if (puVar22 == (undefined *)0x0) {
      puVar24 = (undefined4 *)0x0;
      ClearExclusiveLocal();
      if ((DAT_018dd9a0 != 0 || DAT_018dd9a4 != 0) &&
         (DAT_018dd9a0 == *puVar6 && DAT_018dd9a4 == puVar6[1])) {
        unaff_r9 = 4;
        puVar22 = &DAT_00569764;
        goto LAB_015f090c;
      }
    }
    else {
      unaff_r9 = puVar6[3] - 1;
      if (unaff_r9 == 0) {
        puVar24 = (undefined4 *)&DAT_00000001;
        unaff_r9 = 0;
      }
      else {
LAB_015f090c:
        puVar24 = (undefined4 *)thunk_FUN_016d4a50(unaff_r9);
        if (puVar24 == (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_00600874(1,unaff_r9);
        }
      }
      FUN_016dd1aa(puVar24,puVar22,unaff_r9);
    }
  }
  iVar5 = iVar9 - iVar5;
  uVar7 = FUN_016d2bc8();
  do {
    if (DAT_018dd990 != 0) {
      ClearExclusiveLocal();
      FUN_015bf680(&DAT_018dd990);
      goto LAB_015f0970;
    }
    bVar2 = (bool)hasExclusiveAccess(0x18dd990);
  } while (!bVar2);
  DAT_018dd990 = 1;
  DataMemoryBarrier(0xb);
LAB_015f0970:
  uVar29 = 0;
  if ((DAT_018dd988 & 0x7fffffff) != 0) {
    uVar29 = FUN_015bf3f8();
    uVar29 = uVar29 ^ 1;
  }
  cVar3 = DAT_018dd994;
  local_60 = CONCAT31(local_60._1_3_,(char)uVar29);
  local_64 = &DAT_018dd990;
  local_68 = (uint)(DAT_018dd994 != '\0');
  do {
    if (DAT_018dd96c != 0) {
      do {
        ClearExclusiveLocal();
        if (DAT_018dd96c == uVar7) {
                    /* WARNING: Subroutine does not return */
          FUN_00faa478("internal error: entered unreachable code: the thread info setup logic isn\'t recursive"
                       ,0xab,&DAT_018aacc0);
        }
        FUN_016e0196();
        while (DAT_018dd96c == 0) {
          bVar2 = (bool)hasExclusiveAccess(0x18dd96c);
          if (bVar2) goto LAB_015f0a58;
        }
      } while( true );
    }
    bVar2 = (bool)hasExclusiveAccess(0x18dd96c);
  } while (!bVar2);
LAB_015f0a58:
  DataMemoryBarrier(0xb);
  iVar14 = iVar10 >> 0x1f;
  DAT_018dd96c = uVar7;
  if (DAT_018dd960 != (int *)0x0) {
    uVar8 = DAT_018dd964;
    piVar28 = DAT_018dd960;
    do {
      uVar1 = *(ushort *)((int)piVar28 + 0x13a);
      uVar25 = (uint)uVar1;
      iVar16 = uVar25 << 2;
      iVar19 = 0x43;
      do {
        iVar12 = iVar19;
        if (iVar16 == 0) {
          uVar23 = uVar25;
          goto LAB_015f0ae8;
        }
        iVar16 = iVar16 + -4;
        bVar30 = uVar7 < (uint)piVar28[iVar12];
        bVar2 = !bVar30 && uVar7 != piVar28[iVar12];
        iVar19 = iVar12 + 1;
      } while ((char)(bVar2 - bVar30) == '\x01');
      if (bVar2 == bVar30) {
        piVar28 = piVar28 + (iVar12 + -0x43) * 6;
        *piVar28 = iVar10;
        piVar28[1] = iVar14;
        iVar10 = piVar28[2];
        iVar14 = piVar28[3];
        piVar28[2] = (int)puVar24;
        piVar28[3] = unaff_r9;
        piVar28[4] = iVar5;
        piVar28[5] = iVar9;
        if (iVar10 != 0 && iVar14 != 0) {
          thunk_FUN_016d3fb4();
        }
        goto LAB_015f0bcc;
      }
      uVar23 = iVar12 - 0x43;
LAB_015f0ae8:
      if (uVar8 == 0) goto LAB_015f0d04;
      uVar8 = uVar8 - 1;
      piVar28 = (int *)piVar28[uVar23 + 0x50];
    } while( true );
  }
  piVar28 = (int *)thunk_FUN_016d4a50(0x140);
  if (piVar28 == (int *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_00600874(8,0x140);
  }
  *(undefined2 *)((int)piVar28 + 0x13a) = 1;
  *piVar28 = iVar10;
  piVar28[1] = iVar14;
  piVar28[2] = (int)puVar24;
  piVar28[3] = unaff_r9;
  piVar28[4] = iVar5;
  DAT_018dd960 = piVar28;
  piVar28[0x42] = 0;
  piVar28[0x43] = uVar7;
  piVar28[5] = iVar9;
  DAT_018dd964 = 0;
  goto LAB_015f0bc0;
LAB_015f0d04:
  puVar18 = (ushort *)((int)piVar28 + 0x13a);
  if (uVar25 < 0xb) {
    puVar6 = (uint *)(piVar28 + uVar23 + 0x43);
    if (uVar23 < uVar25) {
      FUN_016dd52c(puVar6 + 1,puVar6,(uVar25 - uVar23) * 4);
      piVar28[uVar23 + 0x43] = uVar7;
      FUN_016dd52c(piVar28 + uVar23 * 6 + 6,piVar28 + uVar23 * 6,(uVar25 - uVar23) * 0x18);
    }
    else {
      *puVar6 = uVar7;
    }
    piVar28 = piVar28 + uVar23 * 6;
    *piVar28 = iVar10;
    piVar28[1] = iVar14;
    piVar28[2] = (int)puVar24;
    piVar28[3] = unaff_r9;
    piVar28[5] = iVar9;
    piVar28[4] = iVar5;
    *puVar18 = uVar1 + 1;
  }
  else {
    if (uVar23 < 5) {
      uVar8 = 4;
      bVar2 = false;
    }
    else if (uVar23 == 5) {
      bVar2 = false;
      uVar8 = 5;
    }
    else {
      if (uVar23 == 6) {
        uVar8 = 5;
        uVar23 = 0;
      }
      else {
        uVar23 = uVar23 - 7;
        uVar8 = 6;
      }
      bVar2 = true;
    }
    piVar11 = (int *)thunk_FUN_016d4a50(0x140);
    if (piVar11 == (int *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_00600874(8,0x140);
    }
    piVar11[0x42] = 0;
    uVar25 = (uint)*puVar18 + ~uVar8;
    piVar13 = piVar28 + uVar8 * 6;
    iVar16 = piVar13[2];
    iVar19 = piVar13[3];
    *(short *)((int)piVar11 + 0x13a) = (short)uVar25;
    if (0xb < uVar25) {
                    /* WARNING: Subroutine does not return */
      FUN_00faa36c(0,uVar25,0xb,&DAT_018ab358);
    }
    iVar15 = piVar28[uVar8 + 0x43];
    iVar26 = *piVar13;
    iVar20 = piVar13[1];
    iVar21 = piVar13[4];
    iVar12 = piVar13[5];
    FUN_016dd1aa(piVar11 + 0x43,piVar28 + uVar8 + 0x44,uVar25 * 4);
    FUN_016dd1aa(piVar11,piVar28 + (uVar8 + 1) * 6,uVar25 * 0x18);
    *puVar18 = (ushort)uVar8;
    piVar13 = piVar11;
    if (!bVar2) {
      piVar13 = piVar28;
    }
    puVar6 = (uint *)(piVar13 + uVar23 + 0x43);
    uVar1 = *(ushort *)((int)piVar13 + 0x13a);
    if (uVar23 < uVar1) {
      iVar17 = uVar1 - uVar23;
      FUN_016dd52c(puVar6 + 1,puVar6,iVar17 * 4);
      piVar13[uVar23 + 0x43] = uVar7;
      FUN_016dd52c(piVar13 + uVar23 * 6 + 6,piVar13 + uVar23 * 6,iVar17 * 0x18);
    }
    else {
      *puVar6 = uVar7;
    }
    piVar27 = piVar13 + uVar23 * 6;
    *piVar27 = iVar10;
    piVar27[1] = iVar14;
    piVar27[3] = unaff_r9;
    piVar27[2] = (int)puVar24;
    piVar27[4] = iVar5;
    *(ushort *)((int)piVar13 + 0x13a) = uVar1 + 1;
    piVar13 = (int *)piVar28[0x42];
    piVar27[5] = iVar9;
    if (piVar13 == (int *)0x0) {
      local_78 = 0;
    }
    else {
      local_78 = 0;
      local_bc = iVar15;
      local_b8 = iVar26;
      local_b4 = iVar20;
      local_b0 = iVar21;
      local_ac = piVar11;
      local_a8 = iVar12;
      local_a4 = iVar16;
      local_7c = iVar19;
      do {
        piVar27 = piVar13;
        uVar7 = (uint)*(ushort *)(piVar28 + 0x4e);
        puVar18 = (ushort *)((int)piVar27 + 0x13a);
        uVar8 = (uint)*puVar18;
        if (uVar8 < 0xb) {
          if (uVar7 < uVar8) {
            FUN_016dd52c(piVar27 + uVar7 + 0x44,piVar27 + uVar7 + 0x43,(uVar8 - uVar7) * 4);
            piVar27[uVar7 + 0x43] = local_bc;
            FUN_016dd52c(piVar27 + (uVar7 + 1) * 6,piVar27 + uVar7 * 6,(uVar8 - uVar7) * 0x18);
          }
          else {
            piVar27[uVar7 + 0x43] = local_bc;
          }
          piVar28 = piVar27 + uVar7 * 6;
          *piVar28 = local_b8;
          piVar28[2] = local_a4;
          piVar28[1] = local_b4;
          piVar28[3] = local_7c;
          piVar28[4] = local_b0;
          piVar28[5] = local_a8;
          if (uVar7 < uVar8) {
            FUN_016dd52c(piVar27 + uVar7 + 0x52,piVar27 + uVar7 + 0x51,(uVar8 - uVar7) * 4);
          }
          piVar27[uVar7 + 0x51] = (int)local_ac;
          *puVar18 = (ushort)(uVar8 + 1);
          if (uVar7 + 1 < uVar8 + 2) {
            do {
              iVar5 = piVar27[uVar7 + 0x51];
              uVar7 = uVar7 + 1;
              *(short *)(iVar5 + 0x138) = (short)uVar7;
              *(int **)(iVar5 + 0x108) = piVar27;
            } while (uVar8 + 1 != uVar7);
          }
          goto LAB_015f0bc0;
        }
        if (uVar7 < 5) {
          local_74 = 4;
          bVar2 = false;
        }
        else if (uVar7 == 5) {
          bVar2 = false;
          local_74 = 5;
        }
        else {
          if (uVar7 == 6) {
            uVar7 = 0;
            local_74 = 5;
          }
          else {
            uVar7 = uVar7 - 7;
            local_74 = 6;
          }
          bVar2 = true;
        }
        piVar11 = (int *)thunk_FUN_016d4a50(0x170);
        if (piVar11 == (int *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_00600874(8,0x170);
        }
        piVar11[0x42] = 0;
        uVar25 = (uint)*puVar18 + ~local_74;
        piVar28 = piVar27 + local_74 * 6;
        iVar16 = piVar28[2];
        iVar19 = piVar28[3];
        *(ushort *)((int)piVar11 + 0x13a) = (ushort)uVar25;
        if (0xb < uVar25) {
                    /* WARNING: Subroutine does not return */
          FUN_00faa36c(0,uVar25,0xb,&DAT_018ab358);
        }
        iVar26 = *piVar28;
        iVar15 = piVar27[local_74 + 0x43];
        iVar20 = piVar28[1];
        iVar21 = piVar28[4];
        iVar12 = piVar28[5];
        FUN_016dd1aa(piVar11 + 0x43,piVar27 + local_74 + 0x44,uVar25 * 4);
        FUN_016dd1aa(piVar11,piVar27 + (local_74 + 1) * 6,uVar25 * 0x18);
        *puVar18 = (ushort)local_74;
        uVar25 = (uint)*(ushort *)((int)piVar11 + 0x13a);
        iVar5 = uVar25 + 1;
        if (0xb < uVar25) {
                    /* WARNING: Subroutine does not return */
          FUN_00faa36c(0,iVar5,0xc,&DAT_018ab368);
        }
        if (uVar8 - local_74 != iVar5) {
                    /* WARNING: Subroutine does not return */
          FUN_00faa464(&DAT_004194bf,0x28,&DAT_018ab348);
        }
        local_78 = local_78 + 1;
        FUN_016dd1aa(piVar11 + 0x50,piVar27 + local_74 + 0x51,iVar5 * 4);
        uVar8 = 0;
        do {
          iVar5 = (piVar11 + 0x50)[uVar8];
          *(short *)(iVar5 + 0x138) = (short)uVar8;
          *(int **)(iVar5 + 0x108) = piVar11;
          if (uVar25 <= uVar8) break;
          uVar8 = uVar8 + 1;
        } while (uVar8 <= uVar25);
        piVar28 = piVar11;
        if (!bVar2) {
          piVar28 = piVar27;
        }
        uVar8 = (uint)*(ushort *)((int)piVar28 + 0x13a);
        if (uVar7 < uVar8) {
          FUN_016dd52c(piVar28 + uVar7 + 0x44);
          piVar28[uVar7 + 0x43] = local_bc;
          piVar13 = piVar28 + uVar7 * 6;
          FUN_016dd52c(piVar28 + (uVar7 + 1) * 6,piVar13,(uVar8 - uVar7) * 0x18);
          piVar28[uVar7 * 6] = local_b8;
          piVar13[1] = local_b4;
          piVar13[2] = local_a4;
          piVar13[3] = local_7c;
          piVar13[4] = local_b0;
          piVar13[5] = local_a8;
          FUN_016dd52c(piVar28 + uVar7 + 0x52,piVar28 + uVar7 + 0x51,(uVar8 - uVar7) * 4);
        }
        else {
          piVar28[uVar7 + 0x43] = local_bc;
          piVar13 = piVar28 + uVar7 * 6;
          *piVar13 = local_b8;
          piVar13[1] = local_b4;
          piVar13[2] = local_a4;
          piVar13[3] = local_7c;
          piVar13[4] = local_b0;
          piVar13[5] = local_a8;
        }
        *(ushort *)((int)piVar28 + 0x13a) = (ushort)(uVar8 + 1);
        piVar28[uVar7 + 0x51] = (int)local_ac;
        if (uVar7 + 1 < uVar8 + 2) {
          do {
            uVar25 = uVar7 + 1;
            iVar5 = piVar28[uVar7 + 0x51];
            *(short *)(iVar5 + 0x138) = (short)uVar25;
            *(int **)(iVar5 + 0x108) = piVar28;
            uVar7 = uVar25;
          } while (uVar8 + 1 != uVar25);
        }
        piVar13 = (int *)piVar27[0x42];
        piVar28 = piVar27;
        local_bc = iVar15;
        local_b8 = iVar26;
        local_b4 = iVar20;
        local_b0 = iVar21;
        local_ac = piVar11;
        local_a8 = iVar12;
        local_a4 = iVar16;
        local_7c = iVar19;
      } while ((int *)piVar27[0x42] != (int *)0x0);
    }
    uVar7 = DAT_018dd964;
    piVar28 = DAT_018dd960;
    if (DAT_018dd960 == (int *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_00faa444(&DAT_018ab2e8);
    }
    piVar13 = (int *)thunk_FUN_016d4a50(0x170);
    if (piVar13 == (int *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_00600874(8,0x170);
    }
    piVar13[0x42] = 0;
    piVar13[0x50] = (int)piVar28;
    *(undefined2 *)((int)piVar13 + 0x13a) = 0;
    if (0xfffffffe < uVar7) {
                    /* WARNING: Subroutine does not return */
      FUN_00faa444(&DAT_018ab318);
    }
    DAT_018dd960 = piVar13;
    *(undefined2 *)(piVar28 + 0x4e) = 0;
    piVar28[0x42] = (int)piVar13;
    DAT_018dd964 = uVar7 + 1;
    if (local_78 != uVar7) {
                    /* WARNING: Subroutine does not return */
      FUN_00faa464(&DAT_00413115,0x30,&DAT_018ab308);
    }
    *(undefined2 *)((int)piVar13 + 0x13a) = 1;
    piVar13[1] = iVar20;
    piVar13[2] = iVar16;
    *(undefined2 *)(piVar11 + 0x4e) = 1;
    piVar13[3] = iVar19;
    piVar13[4] = iVar21;
    piVar13[0x43] = iVar15;
    piVar13[0x51] = (int)piVar11;
    piVar11[0x42] = (int)piVar13;
    *piVar13 = iVar26;
    piVar13[5] = iVar12;
  }
LAB_015f0bc0:
  DAT_018dd968 = DAT_018dd968 + 1;
LAB_015f0bcc:
  DataMemoryBarrier(0xb);
  DAT_018dd96c = 0;
  if (cVar3 == '\0') {
    if (((uVar29 == 0) && ((DAT_018dd988 & 0x7fffffff) != 0)) &&
       (iVar5 = FUN_015bf3f8(), iVar5 == 0)) {
      DAT_018dd994 = '\x01';
    }
    DataMemoryBarrier(0xb);
    do {
      bVar2 = (bool)hasExclusiveAccess(0x18dd990);
      iVar5 = DAT_018dd990;
    } while (!bVar2);
  }
  else {
    if (((uVar29 == 0) && ((DAT_018dd988 & 0x7fffffff) != 0)) &&
       (iVar5 = FUN_015bf3f8(), iVar5 == 0)) {
      DAT_018dd994 = '\x01';
    }
    DataMemoryBarrier(0xb);
    do {
      bVar2 = (bool)hasExclusiveAccess(0x18dd990);
      iVar5 = DAT_018dd990;
    } while (!bVar2);
  }
  DAT_018dd990 = 0;
  if (iVar5 == 2) {
    FUN_016d6968(0xf0,&DAT_018dd990,0x81,1);
  }
LAB_015f0c4c:
  local_60 = 0;
  local_64 = (undefined4 *)0x0;
  local_68 = 0;
  FUN_016da6ea(0,&local_68);
  if (((uint)local_64 & 2) == 0) {
    return 0;
  }
  uVar7 = FUN_016d636c(0x33);
  iVar5 = DAT_018dd974;
  if (uVar7 < 0x2001) {
    uVar7 = 0x2000;
  }
  iVar9 = FUN_016d69b4(0,uVar7 + DAT_018dd974,3,0x20022,0xffffffff);
  if (iVar9 == -1) {
    puVar24 = (undefined4 *)FUN_016d2bc8();
    local_30 = *puVar24;
    local_2c = local_3c + 2;
    local_3c[2] = local_3c[2] & 0xffffff00;
    local_28 = FUN_015ef5b4;
                    /* WARNING: Subroutine does not return */
    FUN_00faa478(&DAT_0058ad72,&local_2c,&DAT_018aad10);
  }
  iVar10 = FUN_016d6a40(iVar9,iVar5,0);
  if (iVar10 != 0) {
    puVar24 = (undefined4 *)FUN_016d2bc8();
    local_30 = *puVar24;
    local_2c = local_3c + 2;
    local_3c[2] = local_3c[2] & 0xffffff00;
    local_28 = FUN_015ef5b4;
                    /* WARNING: Subroutine does not return */
    FUN_00faa478(&DAT_00589a92,&local_2c,&DAT_018aad00);
  }
  local_68 = iVar9 + iVar5;
  local_64 = (undefined4 *)0x0;
  local_60 = uVar7;
  FUN_016da6ea(&local_68,0);
  return local_68;
}

