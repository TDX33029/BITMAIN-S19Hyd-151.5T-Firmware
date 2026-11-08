// FUN_012f50bc @ 012f50bc size=3368 calls_out=14 calls_in=2
// strings: path sub | path sub

void FUN_012f50bc(int *param_1,char *param_2,int *param_3,int param_4)

{
  bool bVar1;
  int iVar2;
  int iVar3;
  undefined1 uVar4;
  char *pcVar5;
  undefined4 *puVar6;
  undefined4 *puVar7;
  undefined4 *puVar8;
  int *piVar9;
  int *piVar10;
  int iVar11;
  byte bVar12;
  uint uVar13;
  uint uVar14;
  undefined1 *puVar15;
  byte *pbVar16;
  int iVar17;
  int iVar18;
  undefined4 uVar19;
  uint uVar20;
  undefined4 uVar21;
  uint uVar22;
  byte *pbVar23;
  byte *pbVar24;
  undefined4 uVar25;
  char *pcVar26;
  undefined4 *puVar27;
  int *piVar28;
  undefined8 uVar29;
  longlong lVar30;
  ulonglong uVar31;
  undefined4 local_1d4;
  undefined4 local_1d0;
  undefined *local_1cc;
  char *local_1c8;
  char *local_1b4;
  int local_1a0;
  char *pcStack_19c;
  int *piStack_198;
  undefined4 uStack_194;
  int *local_190;
  undefined4 local_18c;
  undefined4 local_188;
  undefined4 local_184;
  int *local_180;
  undefined4 local_17c;
  undefined8 local_178;
  uint local_170;
  undefined4 local_16c;
  undefined4 uStack_168;
  undefined3 uStack_164;
  undefined1 local_161;
  undefined4 local_160;
  undefined4 uStack_15c;
  undefined4 local_158;
  int local_14c;
  int local_148;
  uint local_144;
  int local_140;
  int local_13c;
  uint local_138;
  undefined4 local_134;
  int local_130;
  int local_12c;
  undefined4 local_128;
  int local_124;
  int local_120;
  undefined4 local_11c;
  int local_118;
  char *pcStack_114;
  int *piStack_110;
  undefined4 uStack_10c;
  int *piStack_108;
  undefined4 local_104;
  undefined4 uStack_100;
  undefined4 uStack_fc;
  int *piStack_f8;
  undefined4 uStack_f4;
  int local_f0;
  int local_ec;
  uint local_e8;
  undefined4 local_e4;
  undefined4 uStack_e0;
  int local_c0 [12];
  int local_90 [12];
  int local_60 [13];
  undefined4 uStack_2c;
  undefined3 uStack_28;
  
  local_17c = CONCAT22(local_17c._2_2_,1);
  local_188 = CONCAT31(local_188._1_3_,1);
  uVar22 = 0;
  local_18c = 0x3b;
  local_1a0 = 0x3b;
  uStack_194 = 0;
  local_184 = 0;
  pcStack_19c = param_2;
  piStack_198 = param_3;
  local_190 = param_3;
  local_180 = param_3;
  uVar29 = FUN_01a5c3e4(&local_1a0);
  uVar20 = (uint)((ulonglong)uVar29 >> 0x20);
  iVar17 = (int)uVar29;
  if (iVar17 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_0130739c(&DAT_004214ae,0x26,&DAT_01ce42a4);
  }
  do {
    uVar14 = uVar20 - uVar22;
    if (uVar14 < 8) {
      uVar13 = 0;
      if (uVar14 == 0) {
        uVar31 = 0;
      }
      else {
        do {
          if (*(char *)(iVar17 + uVar22 + uVar13) == '=') {
            uVar31 = CONCAT44(uVar13,1);
            goto LAB_012f5184;
          }
          uVar13 = uVar13 + 1;
        } while (uVar14 != uVar13);
        uVar31 = (ulonglong)uVar14 << 0x20;
      }
    }
    else {
      uVar31 = FUN_01307168(0x3d,iVar17 + uVar22);
    }
LAB_012f5184:
    if ((uVar31 & 1) == 0) break;
    uVar22 = (int)(uVar31 >> 0x20) + uVar22;
    if ((uVar22 < uVar20) && (*(char *)(iVar17 + uVar22) == '=')) {
      uVar29 = FUN_013245a0(iVar17,uVar22);
      iVar11 = (int)((ulonglong)uVar29 >> 0x20);
      pcVar26 = (char *)uVar29;
      uVar22 = uVar22 + 1;
      if ((uVar22 < uVar20) && (*(char *)(iVar17 + uVar22) < -0x40)) {
                    /* WARNING: Subroutine does not return */
        FUN_012fb514(iVar17,uVar20,uVar22,uVar20,&DAT_01ce42b4);
      }
      uVar29 = FUN_013245a0((char *)(iVar17 + uVar22),uVar20 - uVar22);
      iVar17 = (int)((ulonglong)uVar29 >> 0x20);
      pcVar5 = (char *)uVar29;
      if (iVar11 == 0) {
        param_1[3] = 2;
        *(undefined1 *)(param_1 + 1) = 3;
        return;
      }
      if (param_4 != 0) {
        FUN_01655afc(&local_178,pcVar26,pcVar26 + iVar11);
        uVar20 = local_170;
        iVar2 = local_178._4_4_;
        iVar18 = (int)local_178;
        iVar3 = local_178._4_4_;
        local_144 = local_170;
        if ((int)local_178 != -0x7fffffff) {
          FUN_01655afc(&local_178,pcVar5,pcVar5 + iVar17);
          if ((int)local_178 != -0x7fffffff) {
            local_118 = (int)local_178;
            pcStack_114 = (char *)local_178._4_4_;
            piStack_110 = (int *)local_170;
            if (iVar18 == -0x80000000 && (int)local_178 == -0x80000000) {
LAB_012f5cc0:
              if ((pcVar26 < param_2) || ((char *)((int)param_3 + (int)param_2) < pcVar26 + iVar11))
              {
LAB_012f5d5c:
                    /* WARNING: Subroutine does not return */
                FUN_0130739c(&DAT_00570dc0,8,&DAT_01ce4304);
              }
              if ((pcVar5 < param_2) || ((char *)((int)param_3 + (int)param_2) < pcVar5 + iVar17)) {
LAB_012f5d90:
                    /* WARNING: Subroutine does not return */
                FUN_0130739c(&DAT_004214ff,9,&DAT_01ce4314);
              }
              goto LAB_012f52a0;
            }
            local_178._0_4_ = iVar18;
            local_178._4_4_ = iVar2;
            local_170 = uVar20;
            FUN_00666914(&local_f0,&local_178);
            local_144 = local_e8;
            iVar18 = local_f0;
            FUN_00666914(&local_178,&local_118);
            if (iVar18 == -0x7ffffffe) goto LAB_012f5cc0;
            if (iVar18 == -0x7ffffffd) goto LAB_012f5244;
            local_13c = local_178._4_4_;
            local_140 = (int)local_178;
            local_138 = local_170;
            goto LAB_012f52c0;
          }
          iVar3 = local_178._4_4_;
          local_144 = local_170;
          if (iVar18 != -0x80000000) {
            FUN_0134bd64(iVar18,iVar2);
            iVar3 = local_178._4_4_;
          }
        }
        local_ec = iVar3;
LAB_012f5244:
        *param_1 = local_ec;
        param_1[1] = local_144;
        param_1[3] = 2;
        return;
      }
      if ((pcVar26 < param_2) || ((char *)((int)param_3 + (int)param_2) < pcVar26 + iVar11))
      goto LAB_012f5d5c;
      if ((pcVar5 < param_2) || ((char *)((int)param_3 + (int)param_2) < pcVar5 + iVar17))
      goto LAB_012f5d90;
LAB_012f52a0:
      local_140 = -0x7fffffff;
      iVar18 = -0x7fffffff;
      local_ec = (int)pcVar26 - (int)param_2;
      local_13c = (int)pcVar5 - (int)param_2;
      local_138 = local_13c + iVar17;
      local_144 = local_ec + iVar11;
LAB_012f52c0:
      local_1b4 = (char *)((int)param_3 + (int)param_2);
      local_158 = 0x80000001;
      local_161 = 2;
      local_128 = 0x80000002;
      local_134 = 0x80000002;
      local_16c = 1;
      local_11c = 0x3020202;
      local_118 = local_1a0;
      pcStack_114 = pcStack_19c;
      piStack_110 = piStack_198;
      uStack_10c = uStack_194;
      piStack_108 = local_190;
      local_104 = local_18c;
      uStack_100 = local_188;
      uStack_fc = local_184;
      piStack_f8 = local_180;
      uStack_f4 = local_17c;
      puVar6 = (undefined4 *)((uint)&local_f0 | 4);
      puVar27 = (undefined4 *)((uint)local_c0 | 4);
      puVar7 = (undefined4 *)((uint)local_90 | 4);
      puVar8 = (undefined4 *)((uint)local_60 | 4);
      local_1cc = &DAT_01ce42d4;
      local_1c8 = "path sub";
      piVar9 = local_180;
      local_14c = iVar18;
      local_148 = local_ec;
      goto LAB_012f5378;
    }
    uVar22 = uVar22 + 1;
  } while (uVar22 <= uVar20);
  param_1[3] = 2;
  *(undefined1 *)(param_1 + 1) = 2;
  return;
LAB_012f5378:
  uVar29 = FUN_01a5c3e4(&local_118);
  uVar20 = (uint)((ulonglong)uVar29 >> 0x20);
  iVar17 = (int)uVar29;
  if (iVar17 == 0) {
    FUN_01bed4e2(param_1,&local_178,0x60);
    return;
  }
  uVar22 = 0;
  do {
    uVar14 = uVar20 - uVar22;
    if (uVar14 < 8) {
      uVar13 = 0;
      if (uVar14 == 0) {
        uVar31 = 0;
      }
      else {
        do {
          if (*(char *)(iVar17 + uVar22 + uVar13) == '=') {
            uVar31 = CONCAT44(uVar13,1);
            goto LAB_012f53f0;
          }
          uVar13 = uVar13 + 1;
        } while (uVar14 != uVar13);
        uVar31 = (ulonglong)uVar14 << 0x20;
      }
    }
    else {
      uVar31 = FUN_01307168(0x3d,iVar17 + uVar22);
    }
LAB_012f53f0:
    if ((uVar31 & 1) == 0) break;
    uVar22 = (int)(uVar31 >> 0x20) + uVar22;
    if ((uVar22 < uVar20) && (*(char *)(iVar17 + uVar22) == '=')) {
      lVar30 = FUN_013245a0(iVar17,uVar22);
      uVar22 = uVar22 + 1;
      if ((uVar22 < uVar20) && (*(char *)(iVar17 + uVar22) < -0x40)) {
                    /* WARNING: Subroutine does not return */
        FUN_012fb514(iVar17,uVar20,uVar22,uVar20,&DAT_01ce42c4);
      }
      uVar31 = FUN_013245a0((char *)(iVar17 + uVar22),uVar20 - uVar22);
      goto LAB_012f5434;
    }
    uVar22 = uVar22 + 1;
  } while (uVar22 <= uVar20);
  lVar30 = FUN_013245a0(iVar17,uVar20);
  uVar31 = (ulonglong)uVar20 << 0x20;
LAB_012f5434:
  iVar17 = (int)(uVar31 >> 0x20);
  pcVar26 = (char *)uVar31;
  piVar28 = (int *)((ulonglong)lVar30 >> 0x20);
  uVar19 = 0;
  if (lVar30 < 0) {
LAB_012f5d4c:
                    /* WARNING: Subroutine does not return */
    FUN_00664620(uVar19,piVar9);
  }
  if (piVar28 == (int *)0x0) {
    piVar9 = (int *)&DAT_00000001;
    FUN_01bed4e2(1,(int)lVar30,0);
    piVar28 = (int *)0x0;
    goto switchD_012f5650_caseD_5;
  }
  uVar19 = 1;
  piVar9 = (int *)FUN_01298504(piVar28,1);
  if (piVar9 == (int *)0x0) {
    piVar9 = piVar28;
    goto LAB_012f5d4c;
  }
  FUN_01bed4e2(piVar9,(int)lVar30,piVar28);
  piVar10 = (int *)0x0;
  do {
    bVar12 = *(byte *)((int)piVar9 + (int)piVar10);
    if (bVar12 - 0x41 < 0x1a) {
      bVar12 = bVar12 | 0x20;
    }
    *(byte *)((int)piVar9 + (int)piVar10) = bVar12;
    piVar10 = (int *)((int)piVar10 + 1);
  } while (piVar28 != piVar10);
  if (piVar28 == (int *)&DAT_00000007) {
    iVar11 = thunk_FUN_01bed842(piVar9,&DAT_004214da,7);
    if (iVar11 == 0) {
      if (pcVar26 != (char *)0x0) {
        if (iVar17 == 0) {
          bVar1 = false;
          uVar31 = uVar31 & 0xffffffff;
        }
        else {
          bVar1 = false;
          if (*pcVar26 == '-') {
            if ((iVar17 != 1) && (pcVar26[1] < -0x40)) {
                    /* WARNING: Subroutine does not return */
              FUN_012fb514(pcVar26,iVar17,1,iVar17,&DAT_01ce42f4);
            }
            uVar31 = CONCAT44(iVar17 + -1,pcVar26 + 1);
            bVar1 = true;
          }
        }
        iVar17 = (int)(uVar31 >> 0x20);
        pbVar16 = (byte *)uVar31;
        pbVar23 = pbVar16;
        do {
          if (pbVar23 == pbVar16 + iVar17) {
LAB_012f55d8:
            uVar20 = 0;
            local_178 = 0;
            if (bVar1) goto LAB_012f5614;
            if (iVar17 == 0) goto LAB_012f560c;
            if (iVar17 == 1) {
              bVar12 = *pbVar16;
              if ((bVar12 == 0x2b) || (bVar12 == 0x2d)) goto LAB_012f560c;
            }
            else {
              bVar12 = *pbVar16;
            }
            if (bVar12 == 0x2d) {
              iVar17 = iVar17 + -1;
              pbVar16 = pbVar16 + 1;
              if (0x10ffffffff < uVar31) {
                uVar22 = 0;
                goto LAB_012f5a30;
              }
              if (iVar17 != 0) {
                uVar22 = 0;
                goto LAB_012f5768;
              }
            }
            else {
              if (bVar12 == 0x2b) {
                uVar31 = CONCAT44(iVar17 + -1,pbVar16 + 1);
              }
              if (0xfffffffff < uVar31) {
                uVar22 = 0;
                goto LAB_012f57a4;
              }
              if ((int)(uVar31 >> 0x20) != 0) {
                local_178 = 0;
                goto LAB_012f56fc;
              }
            }
            local_178 = 0;
            goto LAB_012f5614;
          }
          pbVar24 = pbVar23 + 1;
          puVar15 = (undefined1 *)(uint)*pbVar23;
          if (0x7fffffff < (uint)(int)(char)*pbVar23) {
            if (puVar15 < (undefined1 *)0xe0) {
              puVar15 = (undefined1 *)(pbVar23[1] & 0x3f | ((uint)puVar15 & 0x1f) << 6);
              pbVar24 = pbVar23 + 2;
            }
            else {
              uVar20 = pbVar23[2] & 0x3f | (pbVar23[1] & 0x3f) << 6;
              if (puVar15 < (undefined1 *)0xf0) {
                puVar15 = (undefined1 *)(uVar20 | ((uint)puVar15 & 0x1f) << 0xc);
                pbVar24 = pbVar23 + 3;
              }
              else {
                puVar15 = (undefined1 *)
                          (pbVar23[3] & 0x3f | uVar20 << 6 | ((uint)puVar15 & 7) << 0x12);
                if (puVar15 == &DAT_00110000) goto LAB_012f55d8;
                pbVar24 = pbVar23 + 4;
              }
            }
          }
          pbVar23 = pbVar24;
        } while ((undefined1 *)0xfffffff5 < puVar15 + -0x3a);
      }
    }
    else {
      iVar11 = thunk_FUN_01bed842(piVar9,"exp",7);
      if ((iVar11 == 0) && (pcVar26 != (char *)0x0)) {
        FUN_012f5f9c(local_60,pcVar26,iVar17,&DAT_01ce4324,0xe);
        if (local_60[0] == 10) {
          uVar19 = puVar8[1];
          uVar21 = puVar8[2];
          uVar25 = puVar8[3];
          *puVar7 = *puVar8;
          puVar7[1] = uVar19;
          puVar7[2] = uVar21;
          puVar7[3] = uVar25;
LAB_012f5ad4:
          uVar19 = puVar7[1];
          uVar21 = puVar7[2];
          uVar25 = puVar7[3];
          *puVar27 = *puVar7;
          puVar27[1] = uVar19;
          puVar27[2] = uVar21;
          puVar27[3] = uVar25;
LAB_012f5ae4:
          uVar19 = puVar27[1];
          uVar21 = puVar27[2];
          uVar25 = puVar27[3];
          *puVar6 = *puVar27;
          puVar6[1] = uVar19;
          puVar6[2] = uVar21;
          puVar6[3] = uVar25;
          local_f0 = 10;
        }
        else {
          FUN_012f5f9c(local_90,pcVar26,iVar17,&DAT_01ce43cc,0xe);
          FUN_012f6c18(local_60);
          if (local_90[0] == 10) goto LAB_012f5ad4;
          FUN_012f5f9c(local_c0,pcVar26,iVar17,&DAT_01ce4474,0xd);
          FUN_012f6c18(local_90);
          if (local_c0[0] == 10) goto LAB_012f5ae4;
          FUN_012f5f9c(&local_f0,pcVar26,iVar17,&DAT_01ce4510,0xe);
          FUN_012f6c18(local_c0);
          if (local_f0 != 10) {
            FUN_012f6c18(&local_f0);
            goto switchD_012f5650_caseD_5;
          }
        }
        local_161 = (local_e8 & 0x1000000) != 0;
        if (!(bool)local_161) {
          local_1d0 = local_e4;
          local_1d4 = uStack_e0;
          uStack_2c = *puVar6;
          uStack_28 = (undefined3)((uint)*(undefined4 *)((int)puVar6 + 3) >> 8);
        }
        uStack_164 = uStack_28;
        uStack_168 = uStack_2c;
        local_160 = local_1d0;
        uStack_15c = local_1d4;
      }
    }
  }
  else {
    switch(piVar28) {
    case (int *)0x4:
      if ((*piVar9 == 0x68746170) && (pcVar26 != (char *)0x0)) {
        uVar19 = 8;
        if ((pcVar26 < param_2) || (local_1b4 < pcVar26 + iVar17)) {
LAB_012f5e04:
                    /* WARNING: Subroutine does not return */
          FUN_0130739c(local_1c8,uVar19,local_1cc);
        }
        local_128 = 0x80000001;
        local_124 = (int)pcVar26 - (int)param_2;
        local_120 = local_124 + iVar17;
      }
      break;
    case (int *)0x6:
      iVar11 = thunk_FUN_01bed842(piVar9,&DAT_004214d4,6);
      if (iVar11 == 0) {
        local_11c = CONCAT31(local_11c._1_3_,1);
      }
      else {
        iVar11 = thunk_FUN_01bed842(piVar9,&DAT_0051d1a9,6);
        if ((iVar11 == 0) && (pcVar26 != (char *)0x0 && iVar17 != 0)) {
          uVar19 = 10;
          if ((pcVar26 < param_2) || (local_1b4 < pcVar26 + iVar17)) {
            local_1c8 = &DAT_004214f5;
            local_1cc = &DAT_01ce42e4;
            goto LAB_012f5e04;
          }
          local_134 = 0x80000001;
          local_130 = (int)pcVar26 - (int)param_2;
          local_12c = local_130 + iVar17;
        }
      }
      break;
    case (int *)0x8:
      iVar11 = thunk_FUN_01bed842(piVar9,&DAT_00570808,8);
      if (iVar11 == 0) {
        local_11c._0_2_ = CONCAT11(1,(undefined1)local_11c);
      }
      else {
        iVar11 = thunk_FUN_01bed842(piVar9,&DAT_0056fbe0,8);
        if ((iVar11 == 0) && (pcVar26 != (char *)0x0)) {
          if (iVar17 == 6) {
            iVar11 = 0;
            do {
              if (iVar11 == 6) {
                uVar4 = 0;
                goto LAB_012f5be8;
              }
              uVar20 = (uint)(byte)pcVar26[iVar11];
              uVar22 = (uint)(byte)(&DAT_004214ec)[iVar11];
              if (uVar20 - 0x41 < 0x1a) {
                uVar20 = uVar20 | 0x20;
              }
              iVar11 = iVar11 + 1;
              if (uVar22 - 0x41 < 0x1a) {
                uVar22 = uVar22 | 0x20;
              }
            } while (uVar20 == uVar22);
          }
          if (iVar17 == 3) {
            iVar11 = 0;
            do {
              if (iVar11 == 3) {
                uVar4 = 1;
                goto LAB_012f5be8;
              }
              uVar20 = (uint)(byte)pcVar26[iVar11];
              uVar22 = (uint)(byte)(&DAT_004214f2)[iVar11];
              if (uVar20 - 0x41 < 0x1a) {
                uVar20 = uVar20 | 0x20;
              }
              iVar11 = iVar11 + 1;
              if (uVar22 - 0x41 < 0x1a) {
                uVar22 = uVar22 | 0x20;
              }
            } while (uVar20 == uVar22);
          }
          if (iVar17 == 4) {
            iVar17 = 0;
LAB_012f595c:
            if (iVar17 != 4) goto code_r0x012f5964;
            uVar4 = 2;
LAB_012f5be8:
            local_11c = CONCAT13(uVar4,(undefined3)local_11c);
            break;
          }
        }
      }
      break;
    case (int *)0xb:
      iVar17 = thunk_FUN_01bed842(piVar9,&DAT_004214e1,0xb);
      if (iVar17 == 0) {
        local_11c._0_3_ = CONCAT12(1,(undefined2)local_11c);
      }
    }
  }
  goto switchD_012f5650_caseD_5;
  while( true ) {
    uVar22 = uVar14 - uVar20;
    uVar20 = uVar13 - (uVar14 < uVar20);
    local_178 = CONCAT44(uVar20,uVar22);
    if ((int)(uVar13 & (uVar13 ^ uVar20)) < 0) goto LAB_012f560c;
    iVar17 = iVar17 + -1;
    pbVar16 = pbVar16 + 1;
    if (iVar17 == 0) break;
LAB_012f5a30:
    uVar14 = (uint)((ulonglong)uVar22 * 10);
    lVar30 = (longlong)(int)uVar20 * 10 + ((ulonglong)uVar22 * 10 >> 0x20);
    uVar13 = (uint)lVar30;
    uVar20 = (uint)((ulonglong)lVar30 >> 0x20);
    if ((uVar20 != (int)uVar13 >> 0x1f || (int)(uVar20 ^ uVar13) < 0) ||
       (uVar20 = *pbVar16 - 0x30, 9 < uVar20)) goto LAB_012f560c;
  }
  goto LAB_012f5614;
  while( true ) {
    uVar31 = (ulonglong)uVar22;
    uVar13 = (uint)(uVar31 * 10);
    pbVar16 = pbVar16 + 1;
    uVar22 = uVar13 - uVar14;
    uVar20 = ((int)(uVar31 * 10 >> 0x20) + uVar20 * 10) - (uint)(uVar13 < uVar14);
    local_178 = CONCAT44(uVar20,uVar22);
    iVar17 = iVar17 + -1;
    if (iVar17 == 0) break;
LAB_012f5768:
    uVar14 = *pbVar16 - 0x30;
    if (9 < uVar14) goto LAB_012f560c;
  }
  goto LAB_012f5614;
  while( true ) {
    uVar22 = uVar14 + uVar20;
    uVar20 = uVar13 + CARRY4(uVar14,uVar20);
    local_178 = CONCAT44(uVar20,uVar22);
    if ((int)((uVar13 ^ uVar20) & ~uVar13) < 0) goto LAB_012f560c;
    iVar17 = (int)(uVar31 >> 0x20) + -1;
    uVar31 = CONCAT44(iVar17,(byte *)uVar31 + 1);
    if (iVar17 == 0) break;
LAB_012f57a4:
    uVar14 = (uint)((ulonglong)uVar22 * 10);
    lVar30 = (longlong)(int)uVar20 * 10 + ((ulonglong)uVar22 * 10 >> 0x20);
    uVar13 = (uint)lVar30;
    uVar20 = (uint)((ulonglong)lVar30 >> 0x20);
    if ((uVar20 != (int)uVar13 >> 0x1f || (int)(uVar20 ^ uVar13) < 0) ||
       (uVar20 = *(byte *)uVar31 - 0x30, 9 < uVar20)) goto LAB_012f560c;
  }
  goto LAB_012f5614;
  while( true ) {
    iVar17 = (int)(uVar31 >> 0x20) + -1;
    uVar31 = CONCAT44(iVar17,(byte *)uVar31 + 1);
    local_178 = (local_178 & 0xffffffff) * 10 + CONCAT44((int)(local_178 >> 0x20) * 10,uVar20);
    if (iVar17 == 0) break;
LAB_012f56fc:
    uVar20 = *(byte *)uVar31 - 0x30;
    if (9 < uVar20) goto LAB_012f560c;
  }
LAB_012f5614:
  local_16c = 0;
  local_170 = 0;
switchD_012f5650_caseD_5:
  FUN_0134bd64(piVar28,piVar9);
  goto LAB_012f5378;
LAB_012f560c:
  local_178 = 0x7fffffffffffffff;
  goto LAB_012f5614;
code_r0x012f5964:
  uVar20 = (uint)(byte)pcVar26[iVar17];
  uVar22 = (uint)(byte)(&DAT_0056d26c)[iVar17];
  if (uVar20 - 0x41 < 0x1a) {
    uVar20 = uVar20 | 0x20;
  }
  iVar17 = iVar17 + 1;
  if (uVar22 - 0x41 < 0x1a) {
    uVar22 = uVar22 | 0x20;
  }
  if (uVar20 != uVar22) goto switchD_012f5650_caseD_5;
  goto LAB_012f595c;
}

