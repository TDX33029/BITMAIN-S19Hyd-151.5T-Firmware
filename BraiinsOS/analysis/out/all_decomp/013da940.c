// FUN_013da940 @ 013da940 size=2048 calls_out=9 calls_in=1
// strings: 

/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_013da940(uint *param_1,int *param_2)

{
  code *pcVar1;
  byte bVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  byte *pbVar6;
  undefined4 uVar7;
  undefined4 *puVar8;
  uint uVar9;
  int iVar10;
  undefined *puVar11;
  int unaff_r4;
  bool bVar12;
  uint uVar13;
  uint uVar14;
  uint *puVar15;
  uint *puVar16;
  undefined1 uVar17;
  int iVar18;
  uint uVar19;
  uint uVar20;
  int iVar21;
  uint uVar22;
  uint *puVar23;
  uint local_f4;
  uint local_f0;
  uint local_dc;
  uint local_d0;
  uint local_cc;
  uint local_c8;
  uint local_c4;
  uint local_c0;
  uint local_bc;
  uint local_b8;
  uint uStack_b4;
  uint local_b0;
  uint uStack_ac;
  uint uStack_a8;
  uint local_a0;
  undefined4 uStack_9c;
  undefined4 uStack_98;
  uint local_90;
  uint local_8c;
  uint local_88;
  uint local_80;
  uint uStack_7c;
  uint uStack_78;
  uint local_70;
  undefined4 local_6c;
  uint uStack_68;
  uint local_64;
  uint uStack_60;
  uint uStack_5c;
  uint local_30;
  uint uStack_2c;
  uint uStack_28;
  
  iVar10 = *param_2;
  iVar21 = 0;
  local_b8 = *(uint *)(iVar10 + 0x54);
  uStack_b4 = *(uint *)(iVar10 + 0x58);
  puVar23 = (uint *)(iVar10 + 0x50);
  local_bc = *puVar23;
  local_d0 = 4;
  local_cc = 0;
  bVar12 = false;
  local_c0 = 0;
  local_c4 = 4;
  local_c8 = 0;
  local_b0 = local_bc;
  uStack_ac = local_b8;
  uStack_a8 = uStack_b4;
  local_70 = local_bc;
  local_6c = local_b8;
  uStack_68 = uStack_b4;
  local_64 = local_bc;
  uStack_60 = local_b8;
  uStack_5c = uStack_b4;
  do {
    iVar3 = FUN_013d2518(param_2);
    if ((iVar3 == 0x3a) || (iVar3 = FUN_013d2518(param_2), iVar3 == 0x29)) {
      if (!bVar12) {
        uVar9 = *puVar23;
        uVar4 = *(uint *)(iVar10 + 0x54);
        uVar13 = *(uint *)(iVar10 + 0x58);
        param_1[1] = local_c8;
        param_1[2] = local_c4;
        param_1[3] = local_c0;
        param_1[4] = local_bc;
        param_1[5] = local_b8;
        param_1[6] = uStack_b4;
        param_1[7] = uVar9;
        param_1[8] = uVar4;
        param_1[9] = uVar13;
        *param_1 = 0x22;
        return;
      }
      uVar9 = param_2[2];
      if ((int)uVar9 < 0) goto LAB_013dae30;
      iVar10 = param_2[1];
      if (uVar9 == 0) {
        uVar13 = 1;
        uVar4 = 0;
      }
      else {
        uVar13 = thunk_FUN_016d4a50(uVar9);
        if (uVar13 == 0) goto LAB_013db120;
        uVar4 = uVar9;
      }
      FUN_016dd1aa(uVar13,iVar10,uVar9);
      param_1[0xf] = local_f4;
      *param_1 = 0xc;
      param_1[7] = uVar4;
      param_1[8] = uVar13;
      param_1[9] = uVar9;
      param_1[10] = local_90;
      param_1[0xb] = local_8c;
      param_1[0xc] = local_88;
      param_1[0xd] = local_f0;
      param_1[0xe] = local_dc;
      goto LAB_013dafd0;
    }
    iVar3 = FUN_013d2518(param_2);
    if (iVar3 == 0x2d) {
      uVar13 = *puVar23;
      uVar4 = FUN_013d2518(param_2);
      uVar9 = 1;
      if (0x7f < uVar4) {
        uVar9 = 2;
      }
      if ((0x7ff < uVar4) && (uVar9 = 4, uVar4 < 0x10000)) {
        uVar9 = 3;
      }
      if (CARRY4(uVar9,uVar13)) {
        puVar11 = &DAT_01894f38;
        goto LAB_013db114;
      }
      local_f0 = uVar9 + uVar13;
      iVar18 = *(int *)(iVar10 + 0x58);
      if (iVar18 != -1) {
        local_dc = *(uint *)(iVar10 + 0x54);
        iVar5 = FUN_013d2518(param_2);
        uVar9 = *puVar23;
        if (iVar5 == 10) {
          local_dc = local_dc + 1;
        }
        local_f4 = iVar18 + 1;
        local_8c = *(uint *)(iVar10 + 0x54);
        local_88 = *(uint *)(iVar10 + 0x58);
        if (iVar5 == 10) {
          local_f4 = 1;
        }
        local_90 = uVar9;
        uVar13 = FUN_013d2518(param_2);
        uVar4 = 1;
        if (0x7f < uVar13) {
          uVar4 = 2;
        }
        if ((0x7ff < uVar13) && (uVar4 = 4, uVar13 < 0x10000)) {
          uVar4 = 3;
        }
        if (CARRY4(uVar4,uVar9)) {
          puVar11 = &DAT_01894f38;
          goto LAB_013db114;
        }
        uVar4 = uVar4 + uVar9;
        iVar18 = *(int *)(iVar10 + 0x58);
        if (iVar18 != -1) {
          uVar9 = *(uint *)(iVar10 + 0x54);
          iVar5 = FUN_013d2518(param_2);
          uVar13 = local_c4;
          local_d0 = local_c4;
          uVar20 = iVar18 + 1;
          if (iVar5 == 10) {
            uVar9 = uVar9 + 1;
            uVar20 = 1;
          }
          local_a0 = *puVar23;
          uStack_9c = *(undefined4 *)(iVar10 + 0x54);
          uStack_98 = *(undefined4 *)(iVar10 + 0x58);
          if (local_cc != 0) {
            iVar18 = 0;
            uVar14 = 0;
            do {
              if (*(char *)(local_c4 + 0x18 + iVar18) == '\a') {
                uVar20 = *puVar23;
                uVar9 = FUN_013d2518(param_2);
                uVar4 = 1;
                puVar11 = &DAT_01894f38;
                if (0x7f < uVar9) {
                  uVar4 = 2;
                }
                if ((0x7ff < uVar9) && (uVar4 = 4, uVar9 < 0x10000)) {
                  uVar4 = 3;
                }
                if (CARRY4(uVar4,uVar20)) goto LAB_013db114;
                iVar21 = *(int *)(iVar10 + 0x58);
                puVar11 = &DAT_01894f28;
                if (iVar21 == -1) goto LAB_013db114;
                uVar19 = *(uint *)(iVar10 + 0x54);
                iVar3 = FUN_013d2518(param_2);
                local_30 = *puVar23;
                uStack_2c = *(uint *)(iVar10 + 0x54);
                uStack_28 = *(uint *)(iVar10 + 0x58);
                uVar22 = iVar21 + 1;
                if (iVar3 == 10) {
                  uVar19 = uVar19 + 1;
                  uVar22 = 1;
                }
                if (local_cc <= uVar14) {
                  puVar11 = &DAT_01894b28;
                  goto LAB_013db13c;
                }
                puVar23 = (uint *)(uVar13 + uVar14 * 0x1c);
                local_70 = *puVar23;
                local_6c = puVar23[1];
                uStack_68 = puVar23[2];
                local_64 = puVar23[3];
                uStack_60 = puVar23[4];
                uStack_5c = puVar23[5];
                uVar9 = param_2[2];
                if ((int)uVar9 < 0) goto LAB_013dae30;
                iVar10 = param_2[1];
                if (uVar9 == 0) {
                  uVar13 = 1;
                  local_d0 = 0;
                }
                else {
                  uVar13 = thunk_FUN_016d4a50(uVar9);
                  if (uVar13 == 0) goto LAB_013db120;
                  local_d0 = uVar9;
                }
                FUN_016dd1aa(uVar13,iVar10,uVar9);
                param_1[1] = local_70;
                param_1[2] = local_6c;
                param_1[3] = uStack_68;
                param_1[4] = local_64;
                param_1[5] = uStack_60;
                param_1[6] = uStack_5c;
                param_1[7] = local_d0;
                param_1[10] = local_30;
                param_1[0xb] = uStack_2c;
                param_1[0xc] = uStack_28;
                param_1[0xd] = uVar4 + uVar20;
                uVar4 = 0xe;
                goto LAB_013dafbc;
              }
              iVar18 = iVar18 + 0x1c;
              uVar14 = uVar14 + 1;
            } while (iVar21 != iVar18);
          }
          puVar15 = &local_a0;
          uVar17 = 7;
          if (local_cc == local_c8) {
            FUN_01401574(&local_c8);
            goto LAB_013dac0c;
          }
          goto LAB_013dac18;
        }
      }
LAB_013db0f4:
      puVar11 = &DAT_01894f28;
LAB_013db114:
                    /* WARNING: Subroutine does not return */
      FUN_00faa444(puVar11);
    }
    uVar13 = *puVar23;
    uVar9 = FUN_013d2518(param_2);
    uVar4 = 1;
    if (0x7f < uVar9) {
      uVar4 = 2;
    }
    if ((0x7ff < uVar9) && (uVar4 = 4, uVar9 < 0x10000)) {
      uVar4 = 3;
    }
    if (CARRY4(uVar4,uVar13)) {
      puVar11 = &DAT_01894f38;
      goto LAB_013db114;
    }
    uVar4 = uVar4 + uVar13;
    iVar18 = *(int *)(iVar10 + 0x58);
    if (iVar18 == -1) goto LAB_013db0f4;
    uVar9 = *(uint *)(iVar10 + 0x54);
    iVar5 = FUN_013d2518(param_2);
    local_30 = *puVar23;
    uStack_2c = *(uint *)(iVar10 + 0x54);
    uStack_28 = *(uint *)(iVar10 + 0x58);
    uVar20 = iVar18 + 1;
    if (iVar5 == 10) {
      uVar9 = uVar9 + 1;
      uVar20 = 1;
    }
    FUN_013dba50(&local_70,param_2);
    uVar13 = local_70;
    uVar17 = (undefined1)local_6c;
    if (local_70 != 0x22) {
      FUN_016dd1aa((int)param_1 + 5,(int)&local_6c + 1,0x3b);
      *(undefined1 *)(param_1 + 1) = uVar17;
      *param_1 = uVar13;
      goto LAB_013dafd0;
    }
    local_80 = local_30;
    uStack_7c = uStack_2c;
    uStack_78 = uStack_28;
    if (local_cc != 0) {
      uVar14 = 0;
      pbVar6 = (byte *)(local_d0 + 0x18);
      iVar18 = iVar21;
LAB_013dabd8:
      if ((uint)*pbVar6 != (local_6c & 0xff)) goto code_r0x013dabe4;
      uVar20 = *puVar23;
      uVar9 = FUN_013d2518(param_2);
      uVar4 = 1;
      puVar11 = &DAT_01894f38;
      if (0x7f < uVar9) {
        uVar4 = 2;
      }
      if ((0x7ff < uVar9) && (uVar4 = 4, uVar9 < 0x10000)) {
        uVar4 = 3;
      }
      if (CARRY4(uVar4,uVar20)) goto LAB_013db114;
      iVar21 = *(int *)(iVar10 + 0x58);
      puVar11 = &DAT_01894f28;
      if (iVar21 == -1) goto LAB_013db114;
      uVar19 = *(uint *)(iVar10 + 0x54);
      iVar3 = FUN_013d2518(param_2);
      local_30 = *puVar23;
      uStack_2c = *(uint *)(iVar10 + 0x54);
      uStack_28 = *(uint *)(iVar10 + 0x58);
      uVar22 = iVar21 + 1;
      if (iVar3 == 10) {
        uVar19 = uVar19 + 1;
        uVar22 = 1;
      }
      if (local_cc <= uVar14) {
        puVar11 = &DAT_01894b38;
LAB_013db13c:
                    /* WARNING: Subroutine does not return */
        FUN_00faa4a4(uVar14,local_cc,puVar11);
      }
      puVar23 = (uint *)(local_c4 + uVar14 * 0x1c);
      local_70 = *puVar23;
      local_6c = puVar23[1];
      uStack_68 = puVar23[2];
      local_64 = puVar23[3];
      uStack_60 = puVar23[4];
      uStack_5c = puVar23[5];
      uVar9 = param_2[2];
      if ((int)uVar9 < 0) goto LAB_013dae30;
      iVar10 = param_2[1];
      if (uVar9 == 0) {
        uVar13 = 1;
        local_d0 = 0;
      }
      else {
        uVar13 = thunk_FUN_016d4a50(uVar9);
        if (uVar13 == 0) goto LAB_013db120;
        local_d0 = uVar9;
      }
      FUN_016dd1aa(uVar13,iVar10,uVar9);
      param_1[1] = local_70;
      param_1[2] = local_6c;
      param_1[3] = uStack_68;
      param_1[4] = local_64;
      param_1[5] = uStack_60;
      param_1[6] = uStack_5c;
      param_1[7] = local_d0;
      param_1[10] = local_30;
      param_1[0xb] = uStack_2c;
      param_1[0xc] = uStack_28;
      param_1[0xd] = uVar4 + uVar20;
      uVar4 = 0xd;
LAB_013dafbc:
      param_1[0xf] = uVar22;
      param_1[8] = uVar13;
      param_1[9] = uVar9;
      param_1[0xe] = uVar19;
      goto LAB_013dafcc;
    }
LAB_013dabf0:
    puVar15 = &local_80;
    if (local_cc == local_c8) {
      FUN_01401574(&local_c8);
LAB_013dac0c:
      local_d0 = local_c4;
    }
    else {
LAB_013dac18:
    }
    uVar13 = puVar15[1];
    uVar14 = puVar15[2];
    puVar16 = (uint *)(local_d0 + local_cc * 0x1c);
    *puVar16 = *puVar15;
    puVar16[1] = uVar13;
    puVar16[2] = uVar14;
    puVar16[3] = uVar4;
    puVar16[4] = uVar9;
    *(undefined1 *)(puVar16 + 6) = uVar17;
    puVar16[5] = uVar20;
    local_c0 = local_cc + 1;
    iVar18 = FUN_013d2d20(param_2);
    iVar21 = iVar21 + 0x1c;
    bVar12 = iVar3 == 0x2d;
    local_cc = local_cc + 1;
  } while (iVar18 != 0);
  local_70 = *puVar23;
  local_6c = *(uint *)(iVar10 + 0x54);
  uStack_68 = *(uint *)(iVar10 + 0x58);
  uVar9 = param_2[2];
  iVar10 = param_2[1];
  local_64 = local_70;
  uStack_60 = local_6c;
  uStack_5c = uStack_68;
  if ((int)uVar9 < 0) {
LAB_013dae30:
    uVar7 = 0;
LAB_013dae34:
                    /* WARNING: Subroutine does not return */
    FUN_00600af4(uVar7,uVar9);
  }
  if (uVar9 == 0) {
    uVar20 = 1;
    uVar13 = 0;
  }
  else {
    uVar20 = thunk_FUN_016d4a50(uVar9);
    if (uVar20 == 0) {
LAB_013db120:
      uVar7 = 1;
      goto LAB_013dae34;
    }
    uVar13 = uVar9;
  }
  FUN_016dd1aa(uVar20,iVar10,uVar9);
  param_1[10] = local_70;
  param_1[0xb] = local_6c;
  param_1[0xc] = uStack_68;
  param_1[0xd] = local_64;
  param_1[0xe] = uStack_60;
  param_1[0xf] = uStack_5c;
  uVar4 = 0xf;
  param_1[7] = uVar13;
  param_1[8] = uVar20;
  param_1[9] = uVar9;
LAB_013dafcc:
  *param_1 = uVar4;
LAB_013dafd0:
  uVar9 = local_c4;
  if (local_c8 == 0) {
    return;
  }
  if (local_c4 == 0) {
    return;
  }
  iVar10 = FUN_016d3bc8();
  uVar4 = *(byte *)(uVar9 - 3) & 0x1f;
  if (((*(byte *)(iVar10 + 0x14) & 0x1f) != 0) ||
     (uVar13 = *(uint *)(iVar10 + 0x14) & 0xfffff000, iVar21 = uVar13 - 0x10, uVar13 == 0)) {
    iVar21 = (uint)*(ushort *)(&DAT_0042567c + ((*(ushort *)(iVar10 + 0x14) & 0xfff) >> 6) * 2) << 4
    ;
  }
  uVar13 = (uint)(*(byte *)(uVar9 - 3) >> 5);
  iVar18 = *(int *)(iVar10 + 8) + 0x10;
  iVar3 = iVar21 * uVar4 + iVar21 + -4;
  iVar21 = iVar18 + iVar3;
  if (4 < uVar13) {
    if (uVar13 != 5) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)software_udf(0xff,0x16d4018);
      (*pcVar1)();
    }
    uVar13 = *(uint *)(iVar21 + -4);
    if (uVar13 < 5) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)software_udf(0xff,0x16d4022);
      (*pcVar1)();
    }
    if (*(char *)(iVar21 + -5) != '\0') {
                    /* WARNING: Does not return */
      pcVar1 = (code *)software_udf(0xff,0x16d402a);
      (*pcVar1)();
    }
  }
  if (iVar21 - uVar9 < uVar13) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)software_udf(0xff,0x16d4032);
    (*pcVar1)();
  }
  if (*(char *)(iVar21 - uVar13) != '\0') {
                    /* WARNING: Does not return */
    pcVar1 = (code *)software_udf(0xff,0x16d403a);
    (*pcVar1)();
  }
  if (*(char *)(iVar18 + iVar3) != '\0') {
                    /* WARNING: Does not return */
    pcVar1 = (code *)software_udf(0xff,0x16d4040);
    (*pcVar1)();
  }
  bVar2 = *(byte *)(iVar10 + 0x14);
  uVar13 = 1 << uVar4;
  *(undefined1 *)(uVar9 - 3) = 0xff;
  *(undefined2 *)(uVar9 - 2) = 0;
  do {
    uVar20 = *(uint *)(iVar10 + 0x10);
    uVar9 = *(uint *)(iVar10 + 0xc) | uVar20;
    if ((uVar13 & uVar9) != 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)software_udf(0xff,0x16d4074);
      (*pcVar1)();
    }
    if ((uVar20 == 0) || (uVar9 + uVar13 == (2 << (bVar2 & 0x1f)) + -1)) {
      if (DAT_018ddb0b != '\0') {
        FUN_016ddcc0(&DAT_018ddd48);
      }
      FUN_016d3ca8(&uStack_28,iVar10,uVar4);
      FUN_016dddc0(&DAT_018ddd48);
      if (unaff_r4 == 0) {
        return;
      }
      puVar8 = (undefined4 *)FUN_016d2bc8();
      uVar7 = *puVar8;
      FUN_016d6ac4(uStack_28,unaff_r4);
      *puVar8 = uVar7;
      return;
    }
    if (DAT_018ddb0b == '\0') {
      *(uint *)(iVar10 + 0x10) = uVar13 + uVar20;
      return;
    }
    puVar23 = (uint *)(iVar10 + 0x10);
    DataMemoryBarrier(0x1b);
    do {
      ExclusiveAccess(puVar23);
      uVar9 = *puVar23;
      if (uVar20 != uVar9) goto LAB_016d409c;
      bVar12 = (bool)hasExclusiveAccess(puVar23);
    } while (!bVar12);
    *puVar23 = uVar13 + uVar20;
LAB_016d409c:
    DataMemoryBarrier(0x1b);
    if (uVar20 == uVar9) {
      return;
    }
  } while( true );
code_r0x013dabe4:
  uVar14 = uVar14 + 1;
  iVar18 = iVar18 + -0x1c;
  pbVar6 = pbVar6 + 0x1c;
  if (iVar18 == 0) goto LAB_013dabf0;
  goto LAB_013dabd8;
}

