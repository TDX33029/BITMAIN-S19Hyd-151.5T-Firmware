// FUN_013db19c @ 013db19c size=2116 calls_out=14 calls_in=1
// strings: 

void FUN_013db19c(undefined4 *param_1,int *param_2,uint param_3)

{
  code *pcVar1;
  byte bVar2;
  bool bVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  uint uVar8;
  undefined4 uVar9;
  undefined4 *puVar10;
  uint *puVar11;
  uint uVar12;
  uint uVar13;
  int unaff_r4;
  uint *puVar14;
  int iVar15;
  int iVar16;
  uint *puVar17;
  int iVar18;
  uint uVar19;
  uint uVar20;
  uint *puVar21;
  uint *puVar22;
  uint uVar23;
  uint uVar24;
  uint *puVar25;
  undefined8 uVar26;
  uint *local_58;
  int local_44;
  uint local_40;
  undefined4 local_3c;
  undefined4 local_38;
  uint local_34;
  undefined4 local_30;
  undefined4 local_2c;
  undefined4 uStack_28;
  
  iVar16 = *param_2;
  puVar11 = (uint *)param_2[2];
  puVar22 = (uint *)(iVar16 + 0x50);
  puVar21 = (uint *)*puVar22;
  if (puVar21 == puVar11) {
    local_40 = *puVar22;
    local_3c = *(undefined4 *)(iVar16 + 0x54);
    local_38 = *(undefined4 *)(iVar16 + 0x58);
    iVar16 = param_2[1];
    local_34 = local_40;
    local_30 = local_3c;
    local_2c = local_38;
    if ((int)puVar21 < 0) {
                    /* WARNING: Subroutine does not return */
      FUN_00600af4(0,puVar21);
    }
    if (puVar21 == (uint *)0x0) {
      puVar11 = (uint *)0x0;
      iVar6 = 1;
    }
    else {
      iVar6 = thunk_FUN_016d4a50(puVar21);
      puVar11 = puVar21;
      if (iVar6 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_00600af4(1,puVar21);
      }
    }
    FUN_016dd1aa(iVar6,iVar16,puVar21);
    param_1[10] = local_40;
    param_1[0xb] = local_3c;
    param_1[0xc] = local_38;
    param_1[0xd] = local_34;
    param_1[0xe] = local_30;
    param_1[0xf] = local_2c;
    param_1[7] = puVar11;
    param_1[8] = iVar6;
    param_1[9] = puVar21;
    *param_1 = 0x14;
    return;
  }
  puVar25 = (uint *)(iVar16 + 0x54);
  uVar19 = *puVar25;
  uVar24 = *(uint *)(iVar16 + 0x58);
  do {
    iVar6 = FUN_013d2518(param_2);
    if (iVar6 == 0x3e) break;
    uVar26 = FUN_013d2518(param_2);
    uVar12 = (uint)((ulonglong)uVar26 >> 0x20);
    uVar23 = (uint)uVar26;
    puVar14 = (uint *)*puVar22;
    if (puVar14 == puVar21) {
      uVar12 = *puVar25;
    }
    if ((puVar14 == puVar21 && uVar12 == uVar19) && (*(uint *)(iVar16 + 0x58) == uVar24)) {
      if ((uVar23 != 0x5f) && (0x19 < (uVar23 & 0xffffffdf) - 0x41)) {
        if (0xa9 < uVar23) {
          iVar6 = FUN_00fb7558();
joined_r0x013db318:
          if (iVar6 != 0) goto LAB_013db228;
        }
LAB_013db31c:
        uVar24 = FUN_013d2518(param_2);
        uVar19 = 1;
        if (0x7f < uVar24) {
          uVar19 = 2;
        }
        if ((0x7ff < uVar24) && (uVar19 = 4, uVar24 < 0x10000)) {
          uVar19 = 3;
        }
        if (CARRY4(uVar19,(uint)puVar14)) {
                    /* WARNING: Subroutine does not return */
          FUN_00faa444(&DAT_01894f38);
        }
        iVar6 = *(int *)(iVar16 + 0x58);
        if (iVar6 == -1) goto LAB_013db990;
        uVar24 = *puVar25;
        iVar4 = FUN_013d2518(param_2);
        local_40 = *puVar22;
        local_3c = *(undefined4 *)(iVar16 + 0x54);
        local_38 = *(undefined4 *)(iVar16 + 0x58);
        iVar16 = param_2[1];
        puVar22 = puVar11;
        if ((int)puVar11 < 0) goto LAB_013db4f0;
        if (puVar11 == (uint *)0x0) {
          puVar21 = (uint *)0x0;
          iVar5 = 1;
        }
        else {
          iVar5 = thunk_FUN_016d4a50(puVar11);
          puVar21 = puVar11;
          if (iVar5 == 0) goto LAB_013db9d4;
        }
        FUN_016dd1aa(iVar5,iVar16,puVar11);
        iVar6 = iVar6 + 1;
        if (iVar4 == 10) {
          uVar24 = uVar24 + 1;
          iVar6 = 1;
        }
        param_1[0xf] = iVar6;
        param_1[10] = local_40;
        param_1[0xb] = local_3c;
        param_1[0xc] = local_38;
        param_1[0xd] = uVar19 + (int)puVar14;
        param_1[7] = puVar21;
        param_1[8] = iVar5;
        param_1[9] = puVar11;
        param_1[0xe] = uVar24;
        *param_1 = 0x13;
        return;
      }
    }
    else if (((4 < uVar23 - 0x5b) || ((1 << (uVar23 - 0x5b & 0xff) & 0x15U) == 0)) &&
            (uVar23 != 0x2e)) {
      if (uVar23 < 0x80) {
        if ((uVar23 - 0x30 < 10) || ((uVar23 & 0x5f) - 0x41 < 0x1a)) goto LAB_013db228;
      }
      else if (0xa9 < uVar23) {
        iVar6 = FUN_00fb7558();
        if (iVar6 != 0) goto LAB_013db228;
        if (0xb1 < uVar23) {
          iVar6 = FUN_00fb7a34();
          goto joined_r0x013db318;
        }
      }
      goto LAB_013db31c;
    }
LAB_013db228:
    iVar6 = FUN_013d2d20(param_2);
  } while (iVar6 != 0);
  puVar14 = (uint *)*puVar22;
  if (puVar14 == puVar11) {
    iVar6 = param_2[1];
    local_40 = *puVar22;
    local_3c = *(undefined4 *)(iVar16 + 0x54);
    local_38 = *(undefined4 *)(iVar16 + 0x58);
    local_34 = local_40;
    local_30 = local_3c;
    local_2c = local_38;
    if ((int)puVar11 < 0) {
                    /* WARNING: Subroutine does not return */
      FUN_00600af4(0);
    }
    if (puVar11 == (uint *)0x0) {
      puVar21 = (uint *)0x0;
      iVar16 = 1;
    }
    else {
      iVar16 = thunk_FUN_016d4a50(puVar11);
      puVar21 = puVar11;
      if (iVar16 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_00600af4(1,puVar11);
      }
    }
    FUN_016dd1aa(iVar16,iVar6,puVar11);
    param_1[10] = local_40;
    param_1[0xb] = local_3c;
    param_1[0xc] = local_38;
    param_1[0xd] = local_34;
    param_1[0xe] = local_30;
    param_1[0xf] = local_2c;
    param_1[7] = puVar21;
    param_1[8] = iVar16;
    param_1[9] = puVar11;
    *param_1 = 0x14;
    return;
  }
  uVar23 = *puVar25;
  uVar12 = *(uint *)(iVar16 + 0x58);
  local_44 = FUN_013d2518(param_2);
  if (local_44 != 0x3e) {
    FUN_013ff7ac(&local_44,&DAT_005682f8,&DAT_01894d08);
LAB_013db990:
                    /* WARNING: Subroutine does not return */
    FUN_00faa444(&DAT_01894f28);
  }
  FUN_013d2d20(param_2);
  iVar6 = param_2[1];
  if (((puVar14 < puVar21) ||
      ((puVar21 != (uint *)0x0 &&
       ((puVar11 <= puVar21 || (*(char *)(iVar6 + (int)puVar21) < -0x40)))))) ||
     ((puVar14 != (uint *)0x0 && ((puVar11 <= puVar14 || (*(char *)(iVar6 + (int)puVar14) < -0x40)))
      ))) {
                    /* WARNING: Subroutine does not return */
    FUN_00faa8ac(iVar6,puVar11,puVar21,puVar14,&DAT_01894cf8);
  }
  puVar22 = (uint *)((int)puVar14 - (int)puVar21);
  if (puVar22 == (uint *)0x0) {
    if ((int)puVar11 < 0) {
                    /* WARNING: Subroutine does not return */
      FUN_00600af4(0,puVar11);
    }
    if (puVar11 == (uint *)0x0) {
      puVar22 = (uint *)0x0;
      iVar16 = 1;
    }
    else {
      iVar16 = thunk_FUN_016d4a50(puVar11);
      puVar22 = puVar11;
      if (iVar16 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_00600af4(1,puVar11);
      }
    }
    FUN_016dd1aa(iVar16,iVar6);
    param_1[0xf] = uVar24;
    param_1[7] = puVar22;
    param_1[8] = iVar16;
    param_1[9] = puVar11;
    param_1[10] = puVar21;
    param_1[0xb] = uVar19;
    param_1[0xc] = uVar24;
    param_1[0xd] = puVar21;
    param_1[0xe] = uVar19;
    *param_1 = 0x12;
    return;
  }
  if ((int)puVar22 < 0) {
LAB_013db4f0:
                    /* WARNING: Subroutine does not return */
    FUN_00600af4(0,puVar22);
  }
  iVar4 = thunk_FUN_016d4a50(puVar22);
  if (iVar4 == 0) {
LAB_013db9d4:
                    /* WARNING: Subroutine does not return */
    FUN_00600af4(1,puVar22);
  }
  FUN_016dd1aa(iVar4,iVar6 + (int)puVar21,puVar22);
  if (*(int *)(iVar16 + 0x30) != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_00fb715c(&DAT_01894cc8);
  }
  uVar13 = *(uint *)(iVar16 + 0x3c);
  iVar5 = *(int *)(iVar16 + 0x38);
  *(undefined4 *)(iVar16 + 0x30) = 0xffffffff;
  uVar20 = 0;
  if (uVar13 != 0) {
    iVar15 = 0;
    if (uVar13 != 1) {
      uVar20 = uVar13;
      iVar18 = 0;
      do {
        iVar15 = iVar18 + (uVar20 >> 1);
        iVar7 = iVar5 + iVar15 * 0x28;
        puVar17 = *(uint **)(iVar7 + 8);
        puVar25 = puVar22;
        if (puVar17 < puVar22) {
          puVar25 = puVar17;
        }
        iVar7 = FUN_016dd50a(*(undefined4 *)(iVar7 + 4),iVar4,puVar25);
        uVar20 = uVar20 - (uVar20 >> 1);
        if (iVar7 == 0) {
          iVar7 = (int)puVar17 - (int)puVar22;
        }
        if (0 < iVar7) {
          iVar15 = iVar18;
        }
        iVar18 = iVar15;
      } while (1 < uVar20);
    }
    iVar18 = iVar5 + iVar15 * 0x28;
    puVar17 = *(uint **)(iVar18 + 8);
    puVar25 = puVar22;
    if (puVar17 < puVar22) {
      puVar25 = puVar17;
    }
    iVar7 = FUN_016dd50a(*(undefined4 *)(iVar18 + 4),iVar4,puVar25);
    if (iVar7 == 0) {
      iVar7 = (int)puVar17 - (int)puVar22;
    }
    if (iVar7 == 0) {
      local_40 = *(uint *)(iVar18 + 0xc);
      local_3c = *(undefined4 *)(iVar18 + 0x10);
      local_38 = *(undefined4 *)(iVar18 + 0x14);
      local_34 = *(undefined4 *)(iVar18 + 0x18);
      local_30 = *(undefined4 *)(iVar18 + 0x1c);
      local_2c = *(undefined4 *)(iVar18 + 0x20);
      if (-1 < (int)puVar11) {
        if (puVar11 == (uint *)0x0) {
          iVar5 = 1;
          local_58 = (uint *)0x0;
        }
        else {
          iVar5 = thunk_FUN_016d4a50(puVar11);
          if (iVar5 == 0) {
            uVar9 = 1;
            goto LAB_013db844;
          }
          local_58 = puVar11;
        }
        FUN_016dd1aa(iVar5,iVar6,puVar11);
        param_1[1] = local_40;
        param_1[2] = local_3c;
        param_1[3] = local_38;
        param_1[4] = local_34;
        param_1[5] = local_30;
        param_1[6] = local_2c;
        param_1[0xe] = uVar23;
        param_1[0xf] = uVar12;
        param_1[7] = local_58;
        param_1[0xb] = uVar19;
        param_1[0xc] = uVar24;
        param_1[0xd] = puVar14;
        iVar6 = *(int *)(iVar16 + 0x30);
        param_1[8] = iVar5;
        *(int *)(iVar16 + 0x30) = iVar6 + 1;
        param_1[9] = puVar11;
        param_1[10] = puVar21;
        *param_1 = 0x11;
        if (iVar4 == 0) {
          return;
        }
        iVar16 = FUN_016d3bc8();
        uVar19 = *(byte *)(iVar4 + -3) & 0x1f;
        if (((*(byte *)(iVar16 + 0x14) & 0x1f) != 0) ||
           (uVar24 = *(uint *)(iVar16 + 0x14) & 0xfffff000, iVar6 = uVar24 - 0x10, uVar24 == 0)) {
          iVar6 = (uint)*(ushort *)(&DAT_0042567c + ((*(ushort *)(iVar16 + 0x14) & 0xfff) >> 6) * 2)
                  << 4;
        }
        uVar24 = (uint)(*(byte *)(iVar4 + -3) >> 5);
        iVar15 = *(int *)(iVar16 + 8) + 0x10;
        iVar5 = iVar6 * uVar19 + iVar6 + -4;
        iVar6 = iVar15 + iVar5;
        if (4 < uVar24) {
          if (uVar24 != 5) {
                    /* WARNING: Does not return */
            pcVar1 = (code *)software_udf(0xff,0x16d4018);
            (*pcVar1)();
          }
          uVar24 = *(uint *)(iVar6 + -4);
          if (uVar24 < 5) {
                    /* WARNING: Does not return */
            pcVar1 = (code *)software_udf(0xff,0x16d4022);
            (*pcVar1)();
          }
          if (*(char *)(iVar6 + -5) != '\0') {
                    /* WARNING: Does not return */
            pcVar1 = (code *)software_udf(0xff,0x16d402a);
            (*pcVar1)();
          }
        }
        if ((uint)(iVar6 - iVar4) < uVar24) {
                    /* WARNING: Does not return */
          pcVar1 = (code *)software_udf(0xff,0x16d4032);
          (*pcVar1)();
        }
        if (*(char *)(iVar6 - uVar24) != '\0') {
                    /* WARNING: Does not return */
          pcVar1 = (code *)software_udf(0xff,0x16d403a);
          (*pcVar1)();
        }
        if (*(char *)(iVar15 + iVar5) != '\0') {
                    /* WARNING: Does not return */
          pcVar1 = (code *)software_udf(0xff,0x16d4040);
          (*pcVar1)();
        }
        bVar2 = *(byte *)(iVar16 + 0x14);
        uVar24 = 1 << uVar19;
        *(undefined1 *)(iVar4 + -3) = 0xff;
        *(undefined2 *)(iVar4 + -2) = 0;
        do {
          uVar23 = *(uint *)(iVar16 + 0x10);
          uVar12 = *(uint *)(iVar16 + 0xc) | uVar23;
          if ((uVar24 & uVar12) != 0) {
                    /* WARNING: Does not return */
            pcVar1 = (code *)software_udf(0xff,0x16d4074);
            (*pcVar1)();
          }
          if ((uVar23 == 0) || (uVar12 + uVar24 == (2 << (bVar2 & 0x1f)) + -1)) {
            if (DAT_018ddb0b != '\0') {
              FUN_016ddcc0(&DAT_018ddd48);
            }
            FUN_016d3ca8(&uStack_28,iVar16,uVar19);
            FUN_016dddc0(&DAT_018ddd48);
            if (unaff_r4 == 0) {
              return;
            }
            puVar10 = (undefined4 *)FUN_016d2bc8();
            uVar9 = *puVar10;
            FUN_016d6ac4(uStack_28,unaff_r4);
            *puVar10 = uVar9;
            return;
          }
          if (DAT_018ddb0b == '\0') {
            *(uint *)(iVar16 + 0x10) = uVar24 + uVar23;
            return;
          }
          puVar11 = (uint *)(iVar16 + 0x10);
          DataMemoryBarrier(0x1b);
          do {
            ExclusiveAccess(puVar11);
            uVar12 = *puVar11;
            if (uVar23 != uVar12) goto LAB_016d409c;
            bVar3 = (bool)hasExclusiveAccess(puVar11);
          } while (!bVar3);
          *puVar11 = uVar24 + uVar23;
LAB_016d409c:
          DataMemoryBarrier(0x1b);
          if (uVar23 == uVar12) {
            return;
          }
        } while( true );
      }
      uVar9 = 0;
      puVar11 = &local_40;
      goto LAB_013db844;
    }
    uVar20 = iVar15 - (iVar7 >> 0x1f);
  }
  uVar8 = thunk_FUN_016d4a50(puVar22);
  if (uVar8 != 0) {
    FUN_016dd1aa(uVar8,iVar4,puVar22);
    if (uVar13 == *(uint *)(iVar16 + 0x34)) {
      FUN_014013f4((uint *)(iVar16 + 0x34));
      iVar5 = *(int *)(iVar16 + 0x38);
    }
    puVar11 = (uint *)(iVar5 + uVar20 * 0x28);
    if (uVar20 < uVar13) {
      FUN_016dd52c(puVar11 + 10,puVar11,(uVar13 - uVar20) * 0x28);
    }
    puVar11[1] = uVar8;
    puVar11[2] = (uint)puVar22;
    puVar11[9] = param_3;
    *puVar11 = (uint)puVar22;
    puVar11[3] = (uint)puVar21;
    puVar11[4] = uVar19;
    puVar11[5] = uVar24;
    puVar11[6] = (uint)puVar14;
    puVar11[7] = uVar23;
    puVar11[8] = uVar12;
    *(uint *)(iVar16 + 0x3c) = uVar13 + 1;
    *(int *)(iVar16 + 0x30) = *(int *)(iVar16 + 0x30) + 1;
    param_1[10] = param_3;
    param_1[8] = uVar23;
    param_1[9] = uVar12;
    *param_1 = 0x22;
    param_1[1] = puVar22;
    param_1[2] = iVar4;
    param_1[3] = puVar22;
    param_1[4] = puVar21;
    param_1[5] = uVar19;
    param_1[6] = uVar24;
    param_1[7] = puVar14;
    return;
  }
  uVar9 = 1;
  puVar11 = puVar22;
LAB_013db844:
                    /* WARNING: Subroutine does not return */
  FUN_00600af4(uVar9,puVar11);
}

