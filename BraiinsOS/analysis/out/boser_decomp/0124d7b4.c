// FUN_0124d7b4 @ 0124d7b4 size=4164 calls_out=29 calls_in=1
// strings: frequency | voltage | enabled

/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_0124d7b4(undefined4 *param_1,int *param_2)

{
  ushort uVar1;
  undefined8 uVar2;
  undefined1 uVar3;
  char cVar4;
  int **ppiVar5;
  uint uVar6;
  int iVar7;
  int **ppiVar8;
  int ***pppiVar9;
  int **ppiVar10;
  int **ppiVar11;
  int **ppiVar12;
  int *piVar13;
  char *pcVar14;
  undefined4 uVar15;
  int iVar16;
  undefined4 *puVar17;
  uint uVar18;
  int *piVar19;
  int **ppiVar20;
  int **ppiVar21;
  uint uVar22;
  int iVar23;
  int **ppiVar24;
  undefined1 uVar25;
  int *piVar26;
  int *piVar27;
  int **ppiVar28;
  uint uVar29;
  int iVar30;
  ushort *puVar31;
  ushort *puVar32;
  int **ppiVar33;
  int **ppiVar34;
  int **ppiVar35;
  bool bVar36;
  undefined8 unaff_d8;
  undefined8 unaff_d9;
  int **local_294;
  int **local_24c;
  int local_244;
  int **local_23c;
  int **local_238;
  int *local_230;
  undefined4 local_228 [4];
  int **local_218;
  int **local_214;
  int local_210;
  int **local_20c;
  int local_208;
  undefined4 local_200;
  undefined4 uStack_1fc;
  undefined4 uStack_1f8;
  undefined8 local_1f0;
  undefined4 local_1e8;
  int **local_1e0;
  int *piStack_1dc;
  int **ppiStack_1d8;
  int **ppiStack_1d4;
  int *local_1d0;
  int *piStack_1cc;
  int *piStack_1c8;
  int *piStack_1c4;
  int **local_1c0;
  int **local_1bc;
  int *local_1b8;
  int *piStack_1b4;
  int **ppiStack_1b0;
  int **local_1ac;
  int *local_1a8;
  int *piStack_1a4;
  int *piStack_1a0;
  int *piStack_19c;
  int **local_194;
  int **local_190;
  int **local_18c;
  int **local_188;
  undefined4 local_184;
  int **local_180;
  int **ppiStack_17c;
  int **ppiStack_178;
  int **ppiStack_174;
  int **local_170;
  int **local_16c;
  int **local_168;
  int **local_164;
  int local_160;
  int **local_158;
  int **ppiStack_154;
  int **ppiStack_150;
  int **ppiStack_14c;
  int *local_148;
  int *piStack_144;
  int **ppiStack_140;
  int **ppiStack_13c;
  int **local_128 [4];
  int **local_118;
  int **ppiStack_114;
  int **ppiStack_110;
  int **local_10c;
  int **local_108;
  undefined4 local_104;
  int **local_100;
  int **local_f8;
  int **local_f4;
  int **local_f0;
  int **local_ec;
  undefined8 local_e8;
  int **local_e0;
  int **local_dc;
  undefined8 local_d8;
  int *local_d0;
  int *piStack_cc;
  int **ppiStack_c8;
  int **ppiStack_c4;
  int **local_c0;
  int **local_bc;
  int **local_b8;
  int **ppiStack_b4;
  int *local_b0;
  int *piStack_ac;
  int **ppiStack_a8;
  int **ppiStack_a4;
  int **local_a0;
  int **local_9c;
  int **local_98;
  int **local_90;
  undefined4 local_8c;
  int **local_88;
  int **local_84;
  int *local_80;
  int *piStack_7c;
  int **local_78;
  int **local_74;
  int *piStack_70;
  int *local_6c;
  int *piStack_68;
  int *piStack_64;
  int **ppiStack_60;
  int **ppiStack_5c;
  int **local_58;
  int iStack_54;
  int **ppiStack_50;
  int local_4c;
  int **local_48 [2];
  int **local_40 [2];
  
  local_210 = *param_2;
  if (local_210 < 0) {
    FUN_012223f8(param_1,param_2,&local_a0,&DAT_01c24604);
    return;
  }
  local_228[0] = 0x80000015;
  iVar16 = (int)&local_8c + 1;
  puVar17 = (undefined4 *)((uint)&local_f8 | 4);
  uVar18 = (uint)&local_f8 | 5;
  piVar19 = (int *)((uint)local_128 | 4);
  local_218 = (int **)param_2[1];
  ppiVar10 = local_218 + param_2[2] * 8;
  local_244 = 0;
  local_208 = 0;
  local_1e8 = 0;
  local_1f0._0_4_ = (int **)0x0;
  ppiVar5 = local_218;
  local_214 = local_218;
  local_20c = ppiVar10;
LAB_0124d8bc:
  ppiVar11 = ppiVar10;
  if (ppiVar5 != ppiVar10) {
    local_24c = ppiVar5 + 8;
    ppiVar11 = (int **)*ppiVar5;
    local_214 = local_24c;
  }
  if (ppiVar5 == ppiVar10 || ppiVar11 == (int **)0x80000015) goto LAB_0124e64c;
  local_244 = local_244 + 1;
  piVar26 = ppiVar5[2];
  piVar27 = ppiVar5[3];
  *puVar17 = ppiVar5[1];
  puVar17[1] = piVar26;
  puVar17[2] = piVar27;
  local_118 = (int **)ppiVar5[4];
  ppiStack_114 = (int **)ppiVar5[5];
  ppiStack_110 = (int **)ppiVar5[6];
  local_10c = (int **)ppiVar5[7];
  local_208 = local_244;
  local_f8 = ppiVar11;
  FUN_01243f48(&local_90,&local_f8);
  ppiVar33 = local_78;
  piVar26 = piStack_7c;
  ppiVar20 = local_84;
  ppiVar8 = local_88;
  ppiVar34 = local_8c;
  ppiVar11 = local_90;
  ppiVar5 = local_118;
  if (local_90 != (int **)0x2) {
    local_230 = local_80;
    local_1e0 = local_74;
    piStack_1dc = piStack_70;
    ppiStack_1d8 = (int **)local_6c;
    ppiStack_1d4 = (int **)piStack_68;
    local_1d0 = piStack_64;
    FUN_012222e0(&local_118);
    goto LAB_0124e750;
  }
  uVar6 = 0x15;
  local_c0 = local_118;
  local_bc = ppiStack_114;
  local_b8 = ppiStack_110;
  ppiStack_b4 = local_10c;
  if ((int)local_118 < 0) {
    uVar6 = (uint)local_118 ^ 0x80000000;
  }
  if (uVar6 == 0x14) {
    local_184 = 0;
    local_18c = ppiStack_114;
    local_188 = ppiStack_110 + (int)local_10c * 4;
    local_190 = ppiStack_110;
    local_194 = ppiStack_110;
    FUN_012232c4(&local_90,&local_194);
    ppiVar11 = local_90;
    cVar4 = (char)local_8c;
    if (local_90 == (int **)0x2) {
      if ((char)local_8c != '\x03') {
        FUN_012231a8(&local_90,&local_194);
        ppiVar33 = local_84;
        ppiVar11 = local_88;
        if (local_90 == (int **)0x2) {
          if (local_88 == (int **)0x2 && local_84 == (int **)0x0) {
            uVar15 = 1;
            goto LAB_0124e624;
          }
          unaff_d8 = CONCAT44(piStack_7c,local_80);
          FUN_012231a8(&local_90,&local_194);
          if (local_90 != (int **)0x2) {
            local_e8 = CONCAT44(piStack_7c,local_80);
            local_d8 = CONCAT44(local_d8._4_4_,piStack_70);
            goto LAB_0124dd14;
          }
          if (local_88 == (int **)0x2 && local_84 == (int **)0x0) {
            uVar15 = 2;
            goto LAB_0124e624;
          }
          local_d8 = CONCAT44(piStack_7c,local_80);
          local_f0 = ppiVar11;
          local_ec = ppiVar33;
          local_d0 = (int *)CONCAT31(local_d0._1_3_,cVar4);
          local_e0 = local_88;
          local_dc = local_84;
          local_e8 = unaff_d8;
          goto LAB_0124dbf4;
        }
        local_e8 = CONCAT44(piStack_7c,local_80);
        local_d8 = CONCAT44(local_d8._4_4_,piStack_70);
LAB_0124dd14:
        local_f8 = local_90;
        local_f4 = local_8c;
        local_f0 = local_88;
        local_ec = local_84;
        local_e0 = local_78;
        local_dc = local_74;
        local_d0 = piStack_68;
        piStack_cc = piStack_64;
        goto LAB_0124dd2c;
      }
      uVar15 = 0;
LAB_0124e624:
      FUN_0123c028(&local_f8,uVar15,&DAT_01c248e4,&DAT_01d064b8);
      if (local_f8 != (int **)0x2) goto LAB_0124dd2c;
LAB_0124dbf4:
      FUN_01222e2c(&local_90,&local_194);
      if (local_90 == (int **)0x2) {
LAB_0124dc8c:
        local_f8 = (int **)0x2;
      }
      else {
        local_f8 = local_90;
        local_f4 = local_8c;
        local_f0 = local_88;
        local_ec = local_84;
        local_e8 = CONCAT44(piStack_7c,local_80);
        local_e0 = local_78;
        local_dc = local_74;
        local_d8 = CONCAT44(local_6c,piStack_70);
        local_d0 = piStack_68;
        piStack_cc = piStack_64;
      }
    }
    else {
      FUN_01bed4e2(uVar18,iVar16,0x2b);
      local_f4 = (int **)CONCAT31(local_f4._1_3_,cVar4);
      local_f8 = ppiVar11;
LAB_0124dd2c:
      FUN_01264ff4(&local_194);
    }
    goto LAB_0124dd34;
  }
  if (uVar6 == 0x15) {
    ppiVar33 = (int **)0x0;
    local_180 = (int **)0x80000015;
    local_164 = ppiStack_114 + (int)ppiStack_110 * 8;
    uVar6 = 3;
    ppiVar11 = (int **)0x0;
    local_168 = local_118;
    local_16c = ppiStack_114;
    local_170 = ppiStack_114;
    local_160 = 0;
    local_238 = (int **)0x2;
    local_23c = (int **)0x2;
LAB_0124d9b4:
    ppiVar21 = local_16c;
    uVar25 = (undefined1)uVar6;
    bVar36 = local_16c == local_164;
    ppiVar12 = local_164;
    if (!bVar36) {
      ppiVar12 = (int **)*local_16c;
      local_16c = local_16c + 8;
    }
    if (bVar36 || ppiVar12 == (int **)0x80000015) {
switchD_0124da48_caseD_4:
      if (local_23c == (int **)0x2 && ppiVar11 == (int **)0x0) {
        local_23c = (int **)0x0;
        ppiVar11 = (int **)0x0;
      }
      if (local_238 == (int **)0x2 && ppiVar33 == (int **)0x0) {
        local_238 = (int **)0x0;
        ppiVar33 = (int **)0x0;
      }
      if (uVar6 == 3) {
        uVar25 = 2;
      }
      local_d0 = (int *)CONCAT31(local_d0._1_3_,uVar25);
      local_f0 = local_23c;
      local_ec = ppiVar11;
      local_e8 = unaff_d9;
      local_e0 = local_238;
      local_dc = ppiVar33;
      local_d8 = unaff_d8;
    }
    else {
      local_160 = local_160 + 1;
      piVar26 = ppiVar21[2];
      piVar27 = ppiVar21[3];
      *piVar19 = (int)ppiVar21[1];
      piVar19[1] = (int)piVar26;
      piVar19[2] = (int)piVar27;
      local_90 = (int **)ppiVar21[4];
      local_8c = (int **)ppiVar21[5];
      local_88 = (int **)ppiVar21[6];
      local_84 = (int **)ppiVar21[7];
      local_128[0] = ppiVar12;
      if (local_180 != (int **)0x80000015) {
        FUN_012222e0(&local_180);
      }
      local_180 = local_90;
      ppiStack_17c = local_8c;
      ppiStack_178 = local_88;
      ppiStack_174 = local_84;
      FUN_012234d4(&local_90,local_128);
      ppiVar12 = local_90;
      uVar3 = (char)local_8c;
      if (local_90 != (int **)0x2) {
        FUN_01bed4e2(&local_158,iVar16,0x2b);
        FUN_01bed4e2(uVar18,&local_158,0x2b);
        local_f8 = ppiVar12;
        local_f4 = (int **)CONCAT31(local_f4._1_3_,uVar3);
        goto LAB_0124e5a0;
      }
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
      switch((uint)local_8c & 0xff) {
      case 0:
        if (uVar6 == 3) {
          FUN_01222d6c(&local_90,&local_180);
          ppiVar12 = local_90;
          uVar25 = (char)local_8c;
          uVar6 = (uint)local_8c & 0xff;
          if (local_90 != (int **)0x2) {
            FUN_01bed4e2(uVar18,iVar16,0x2b);
            local_f4 = (int **)CONCAT31(local_f4._1_3_,uVar25);
            local_f8 = ppiVar12;
            goto LAB_0124e5a0;
          }
          goto LAB_0124d9b4;
        }
        uVar15 = 7;
        pcVar14 = "enabled";
        break;
      case 1:
        if (!(local_23c != (int **)0x2 || ppiVar11 != (int **)0x0)) {
          FUN_01223148(&local_90,&local_180);
          if (local_90 != (int **)0x2) {
            local_e8 = CONCAT44(piStack_7c,local_80);
            local_d8 = CONCAT44(local_d8._4_4_,piStack_70);
LAB_0124e58c:
            local_f8 = local_90;
            local_f4 = local_8c;
            local_f0 = local_88;
            local_ec = local_84;
            local_e0 = local_78;
            local_dc = local_74;
            local_d0 = piStack_68;
            piStack_cc = piStack_64;
            goto LAB_0124e5a0;
          }
          unaff_d9 = CONCAT44(piStack_7c,local_80);
          local_23c = local_88;
          ppiVar11 = local_84;
          goto LAB_0124d9b4;
        }
        uVar15 = 9;
        pcVar14 = "frequency";
        break;
      case 2:
        if (!(local_238 != (int **)0x2 || ppiVar33 != (int **)0x0)) {
          FUN_01223148(&local_90,&local_180);
          if (local_90 != (int **)0x2) {
            local_e8 = CONCAT44(piStack_7c,local_80);
            local_d8 = CONCAT44(local_d8._4_4_,piStack_70);
            goto LAB_0124e58c;
          }
          unaff_d8 = CONCAT44(piStack_7c,local_80);
          local_238 = local_88;
          ppiVar33 = local_84;
          goto LAB_0124d9b4;
        }
        uVar15 = 7;
        pcVar14 = "voltage";
        break;
      case 3:
        goto switchD_0124da48_caseD_3;
      case 4:
        goto switchD_0124da48_caseD_4;
      }
      FUN_0123c090(&local_f8,pcVar14,uVar15);
      if (local_f8 != (int **)0x2) goto LAB_0124e5a0;
    }
    FUN_01222c98(&local_90,&local_180);
    if (local_90 == (int **)0x2) goto LAB_0124dc8c;
    local_f8 = local_90;
    local_f4 = local_8c;
    local_f0 = local_88;
    local_ec = local_84;
    local_e8 = CONCAT44(piStack_7c,local_80);
    local_e0 = local_78;
    local_dc = local_74;
    local_d8 = CONCAT44(local_6c,piStack_70);
    local_d0 = piStack_68;
    piStack_cc = piStack_64;
    goto LAB_0124dd34;
  }
  FUN_012223f8(&local_f8,&local_118,&local_a0,&DAT_01c24674);
  goto LAB_0124dd50;
switchD_0124da48_caseD_3:
  FUN_012230dc(&local_90,&local_180);
  if (local_90 != (int **)0x2) goto LAB_0124e50c;
  goto LAB_0124d9b4;
LAB_0124e50c:
  *puVar17 = local_8c;
  puVar17[1] = local_88;
  puVar17[2] = local_84;
  puVar17[3] = local_80;
  puVar17[4] = piStack_7c;
  puVar17[5] = local_78;
  puVar17[6] = local_74;
  puVar17[7] = piStack_70;
  puVar17[8] = local_6c;
  puVar17[9] = piStack_68;
  puVar17[10] = piStack_64;
  local_f8 = local_90;
LAB_0124e5a0:
  FUN_01222c4c(&local_180);
LAB_0124dd34:
  if (((int **)0x7fffffff < ppiVar5) &&
     ((undefined1 *)((uint)ppiVar5 & 0xfffffffe) != &DAT_80000014)) {
    FUN_012222e0(&local_c0);
  }
LAB_0124dd50:
  ppiVar33 = local_e0;
  ppiVar21 = local_ec;
  ppiVar12 = local_f0;
  ppiVar5 = local_f4;
  ppiVar11 = local_f8;
  piVar26 = local_e8._4_4_;
  if (local_f8 != (int **)0x2) {
    local_230 = (int *)local_e8;
    local_1e0 = local_dc;
    piStack_1dc = (int *)local_d8;
    ppiStack_1d8 = (int **)local_d8._4_4_;
    ppiStack_1d4 = (int **)local_d0;
    local_1d0 = piStack_cc;
    FUN_019bb7e0(ppiVar34,ppiVar8);
    ppiVar8 = ppiVar12;
    ppiVar34 = ppiVar5;
    ppiVar20 = ppiVar21;
LAB_0124e750:
    param_1[2] = ppiVar8;
    param_1[1] = ppiVar34;
    *param_1 = ppiVar11;
    param_1[3] = ppiVar20;
    param_1[4] = local_230;
    param_1[5] = piVar26;
    param_1[6] = ppiVar33;
    param_1[7] = local_1e0;
    param_1[8] = piStack_1dc;
    param_1[9] = ppiStack_1d8;
    param_1[10] = ppiStack_1d4;
    param_1[0xb] = local_1d0;
    FUN_0124f320(&local_1f0);
    FUN_01222c4c(local_228);
    return;
  }
  local_1e0 = (int **)(int *)local_e8;
  piStack_1dc = local_e8._4_4_;
  ppiStack_1d8 = local_e0;
  ppiStack_1d4 = local_dc;
  local_1d0 = (int *)local_d8;
  piStack_1cc = local_d8._4_4_;
  piStack_1c8 = local_d0;
  piStack_1c4 = piStack_cc;
  if (local_f0 == (int **)0x2 && local_ec == (int **)0x0) {
LAB_0124e64c:
    param_1[1] = (int **)local_1f0;
    param_1[2] = local_1f0._4_4_;
    param_1[3] = local_1e8;
    *param_1 = 2;
    local_200 = param_1[1];
    uStack_1fc = param_1[2];
    uStack_1f8 = param_1[3];
    FUN_01222c98(&local_90,local_228);
    if (local_90 == (int **)0x2) {
      *param_1 = 2;
      return;
    }
    *param_1 = local_90;
    param_1[1] = local_8c;
    param_1[2] = local_88;
    param_1[3] = local_84;
    param_1[4] = local_80;
    param_1[5] = piStack_7c;
    param_1[6] = local_78;
    param_1[7] = local_74;
    param_1[8] = piStack_70;
    param_1[9] = local_6c;
    param_1[10] = piStack_68;
    param_1[0xb] = piStack_64;
    FUN_0124f320(&local_200);
    return;
  }
  local_1b8 = (int *)local_e8;
  piStack_1b4 = local_e8._4_4_;
  ppiStack_1b0 = local_e0;
  local_1ac = local_dc;
  local_1a8 = (int *)local_d8;
  piStack_1a4 = local_d8._4_4_;
  piStack_1a0 = local_d0;
  piStack_19c = piStack_cc;
  ppiVar5 = local_24c;
  local_1c0 = local_f0;
  local_1bc = local_ec;
  if ((int **)local_1f0 != (int **)0x0) {
    iVar30 = local_1f0._4_4_;
    ppiVar11 = (int **)local_1f0;
    do {
      ppiVar12 = ppiVar11 + 0x6f;
      uVar1 = *(ushort *)((int)ppiVar11 + 0x242);
      ppiVar33 = (int **)&DAT_ffffffff;
      iVar23 = (int)(uint)uVar1 * 0xc;
      do {
        if (iVar23 == 0) {
          ppiVar33 = (int **)(uint)uVar1;
          goto LAB_0124de40;
        }
        ppiVar28 = (int **)ppiVar12[2];
        ppiVar21 = ppiVar28;
        if (ppiVar20 < ppiVar28) {
          ppiVar21 = ppiVar20;
        }
        iVar7 = FUN_01bed842(ppiVar8,ppiVar12[1],ppiVar21);
        if (iVar7 == 0) {
          iVar7 = (int)ppiVar20 - (int)ppiVar28;
        }
        iVar23 = iVar23 + -0xc;
        ppiVar33 = (int **)((int)ppiVar33 + 1);
        ppiVar12 = ppiVar12 + 3;
      } while ((char)((0 < iVar7) - (iVar7 < 0)) == '\x01');
      if (0 < iVar7 == iVar7 < 0) {
        FUN_019bb7e0(ppiVar34,ppiVar8);
        goto LAB_0124de84;
      }
LAB_0124de40:
      if (iVar30 == 0) goto LAB_0124df5c;
      iVar30 = iVar30 + -1;
      ppiVar11 = (int **)ppiVar11[(int)((int)ppiVar33 + 0x92)];
    } while( true );
  }
  ppiVar11 = (int **)0x0;
LAB_0124de6c:
  if (ppiVar34 == (int **)&DAT_80000000) {
    ppiVar33 = (int **)&local_1f0;
    ppiVar11 = ppiVar8;
LAB_0124de84:
    ppiVar11 = ppiVar11 + (int)ppiVar33 * 10;
    *ppiVar11 = (int *)local_1c0;
    ppiVar11[1] = (int *)local_1bc;
    ppiVar11[2] = local_1b8;
    ppiVar11[3] = piStack_1b4;
    ppiVar11[4] = (int *)ppiStack_1b0;
    ppiVar11[5] = (int *)local_1ac;
    ppiVar11[6] = local_1a8;
    ppiVar11[7] = piStack_1a4;
    ppiVar11[8] = piStack_1a0;
    ppiVar11[9] = piStack_19c;
    goto LAB_0124d8bc;
  }
  local_10c = (int **)&local_1f0;
  local_100 = local_294;
  local_104 = 0;
  local_118 = ppiVar34;
  ppiStack_114 = ppiVar8;
  ppiStack_110 = ppiVar20;
  local_108 = ppiVar11;
  if (ppiVar11 == (int **)0x0) {
    local_1f0._0_4_ = (int **)FUN_0124a0c4(&local_90);
    *(undefined2 *)((int)(int **)local_1f0 + 0x242) = 0;
    ((int **)local_1f0)[0x6e] = (int *)0x0;
    local_1f0._4_4_ = 0;
    FUN_0124eb5c(&local_a0,(int **)local_1f0,&local_118,&local_1c0);
  }
  else {
    puVar31 = (ushort *)((int)ppiVar11 + 0x242);
    if (*puVar31 < 0xb) {
      FUN_0124ed24(&local_90,&local_108,&local_118,&local_1c0);
    }
    else {
      bVar36 = false;
      ppiVar33 = local_294;
      if (&SUB_00000004 < local_294) {
        ppiVar34 = local_294;
        if (local_294 != (int **)&DAT_00000005) {
          if (local_294 == (int **)&DAT_00000006) {
            ppiVar34 = (int **)&DAT_00000005;
            ppiVar33 = (int **)0x0;
          }
          else {
            ppiVar33 = (int **)((int)local_294 + -7);
            ppiVar34 = (int **)&DAT_00000006;
          }
          bVar36 = true;
        }
      }
      else {
        ppiVar34 = (int **)&SUB_00000004;
      }
      ppiVar8 = (int **)FUN_0124a0c4();
      *(undefined2 *)((int)ppiVar8 + 0x242) = 0;
      ppiVar8[0x6e] = (int *)0x0;
      ppiVar12 = ppiVar11 + (int)ppiVar34 * 3 + 0x6f;
      ppiVar20 = (int **)*ppiVar12;
      ppiVar28 = (int **)ppiVar12[2];
      uVar6 = ~(uint)ppiVar34 + (uint)*puVar31;
      ppiVar21 = (int **)ppiVar12[1];
      *(undefined2 *)((int)ppiVar8 + 0x242) = (short)uVar6;
      ppiVar12 = ppiVar11 + (int)ppiVar34 * 10;
      piVar26 = *ppiVar12;
      piVar27 = ppiVar12[1];
      local_90 = (int **)ppiVar12[2];
      local_8c = (int **)ppiVar12[3];
      local_88 = (int **)ppiVar12[4];
      local_84 = (int **)ppiVar12[5];
      local_80 = ppiVar12[6];
      piStack_7c = ppiVar12[7];
      local_78 = (int **)ppiVar12[8];
      local_74 = (int **)ppiVar12[9];
      if (0xb < uVar6) {
                    /* WARNING: Subroutine does not return */
        FUN_012faff4(0,uVar6,0xb,&DAT_01d2ff10);
      }
      FUN_01bed4e2(ppiVar8 + 0x6f,ppiVar11 + ((int)ppiVar34 + 1) * 3 + 0x6f,uVar6 * 0xc);
      FUN_01bed4e2(ppiVar8,ppiVar11 + (int)((int)ppiVar34 + 1) * 10,uVar6 * 0x28);
      *puVar31 = (ushort)ppiVar34;
      local_158 = local_90;
      ppiStack_154 = local_8c;
      ppiStack_150 = local_88;
      ppiStack_14c = local_84;
      local_148 = local_80;
      piStack_144 = piStack_7c;
      ppiStack_140 = local_78;
      ppiStack_13c = local_74;
      local_f4 = (int **)0x0;
      local_f8 = ppiVar8;
      if (!bVar36) {
        local_f8 = ppiVar11;
      }
      local_f0 = ppiVar33;
      FUN_0124ed24(&local_90,&local_f8,&local_118,&local_1c0);
      ppiVar12 = local_88;
      ppiVar34 = local_8c;
      ppiVar33 = local_90;
      if (piVar26 != (int *)0x2 || piVar27 != (int *)0x0) {
        local_e8 = CONCAT44(local_e8._4_4_,piVar26);
        local_e0 = local_158;
        local_dc = ppiStack_154;
        local_d8 = CONCAT44(local_d8._4_4_,ppiStack_150);
        local_d0 = local_148;
        piStack_cc = piStack_144;
        ppiStack_c8 = ppiStack_140;
        ppiStack_c4 = ppiStack_13c;
        ppiVar24 = (int **)ppiVar11[0x6e];
        local_f8 = ppiVar20;
        local_f4 = ppiVar21;
        local_f0 = ppiVar28;
        if (ppiVar24 == (int **)0x0) {
          iVar30 = 0;
        }
        else {
          iVar30 = 0;
          do {
            uVar6 = (uint)*(ushort *)(ppiVar11 + 0x90);
            local_a0 = local_f8;
            local_9c = local_f4;
            local_98 = local_f0;
            puVar31 = (ushort *)((int)ppiVar24 + 0x242);
            uVar1 = *puVar31;
            if (uVar1 < 0xb) {
              FUN_0124ee00(ppiVar24,uVar6,&local_a0,&local_e8,ppiVar8);
LAB_0124e4e8:
              local_98 = ppiVar12;
              local_9c = ppiVar34;
              local_a0 = ppiVar33;
              ppiVar11 = (int **)&local_1f0;
              goto LAB_0124e504;
            }
            pppiVar9 = local_40;
            uVar22 = 4;
            if (4 < uVar6) {
              if (uVar6 == 5) {
                uVar22 = 5;
              }
              else if (uVar6 == 6) {
                pppiVar9 = local_48;
                uVar6 = 0;
                uVar22 = 5;
              }
              else {
                uVar6 = uVar6 - 7;
                pppiVar9 = local_48;
                uVar22 = 6;
              }
            }
            ppiVar11 = (int **)FUN_0124a0e4();
            puVar32 = (ushort *)((int)ppiVar11 + 0x242);
            *puVar32 = 0;
            ppiVar11[0x6e] = (int *)0x0;
            ppiVar28 = ppiVar24 + uVar22 * 3 + 0x6f;
            ppiVar20 = (int **)*ppiVar28;
            uVar29 = ~uVar22 + (uint)*puVar31;
            ppiVar21 = (int **)ppiVar28[1];
            ppiVar35 = (int **)ppiVar28[2];
            *puVar32 = (ushort)uVar29;
            ppiVar28 = ppiVar24 + uVar22 * 10;
            piVar26 = *ppiVar28;
            piVar27 = ppiVar28[1];
            local_90 = (int **)ppiVar28[2];
            local_8c = (int **)ppiVar28[3];
            local_88 = (int **)ppiVar28[4];
            local_84 = (int **)ppiVar28[5];
            local_80 = ppiVar28[6];
            piStack_7c = ppiVar28[7];
            local_78 = (int **)ppiVar28[8];
            local_74 = (int **)ppiVar28[9];
            if (0xb < uVar29) {
                    /* WARNING: Subroutine does not return */
              FUN_012faff4(0,uVar29,0xb,&DAT_01d2ff10);
            }
            FUN_01bed4e2(ppiVar11 + 0x6f,ppiVar24 + (uVar22 + 1) * 3 + 0x6f,uVar29 * 0xc);
            FUN_01bed4e2(ppiVar11,ppiVar24 + (uVar22 + 1) * 10,uVar29 * 0x28);
            *puVar31 = (ushort)uVar22;
            local_158 = local_90;
            ppiStack_154 = local_8c;
            ppiStack_150 = local_88;
            ppiStack_14c = local_84;
            local_148 = local_80;
            piStack_144 = piStack_7c;
            ppiStack_140 = local_78;
            ppiStack_13c = local_74;
            uVar29 = (uint)*puVar32;
            iVar23 = uVar29 + 1;
            if (0xb < uVar29) {
                    /* WARNING: Subroutine does not return */
              FUN_012faff4(0,iVar23,0xc,&DAT_01d2ff20);
            }
            if (uVar1 - uVar22 != iVar23) {
                    /* WARNING: Subroutine does not return */
              FUN_012fb0ec(&DAT_00533a71,0x28,&DAT_01d305f8);
            }
            iVar30 = iVar30 + 1;
            FUN_01bed4e2(ppiVar11 + 0x92,ppiVar24 + uVar22 + 0x93,iVar23 * 4);
            uVar22 = 0;
            do {
              piVar13 = (ppiVar11 + 0x92)[uVar22];
              *(short *)(piVar13 + 0x90) = (short)uVar22;
              piVar13[0x6e] = (int)ppiVar11;
              if (uVar29 <= uVar22) break;
              uVar22 = uVar22 + 1;
            } while (uVar22 <= uVar29);
            local_90 = local_158;
            local_8c = ppiStack_154;
            local_88 = ppiStack_150;
            local_84 = ppiStack_14c;
            local_80 = local_148;
            piStack_7c = piStack_144;
            local_78 = ppiStack_140;
            local_74 = ppiStack_13c;
            local_48[0] = ppiVar11;
            local_40[0] = ppiVar24;
            FUN_0124ee00(*pppiVar9,uVar6,&local_a0,&local_e8,ppiVar8);
            local_c0 = local_90;
            local_bc = local_8c;
            local_b8 = local_88;
            ppiStack_b4 = local_84;
            local_b0 = local_80;
            piStack_ac = piStack_7c;
            ppiStack_a8 = local_78;
            ppiStack_a4 = local_74;
            if (piVar26 == (int *)0x2 && piVar27 == (int *)0x0) goto LAB_0124e4e8;
            local_e8 = CONCAT44(local_e8._4_4_,piVar26);
            local_e0 = local_90;
            local_dc = local_8c;
            local_d8 = CONCAT44(local_d8._4_4_,local_88);
            local_d0 = local_80;
            piStack_cc = piStack_7c;
            ppiStack_c8 = local_78;
            ppiStack_c4 = local_74;
            ppiVar24 = (int **)local_40[0][0x6e];
            ppiVar11 = local_40[0];
            ppiVar8 = local_48[0];
            local_f8 = ppiVar20;
            local_f4 = ppiVar21;
            local_f0 = ppiVar35;
          } while (ppiVar24 != (int **)0x0);
        }
        local_90 = local_f8;
        local_8c = local_f4;
        local_88 = local_f0;
        local_84 = local_ec;
        local_80 = (int *)local_e8;
        piStack_7c = local_e8._4_4_;
        local_78 = local_e0;
        local_74 = local_dc;
        piStack_70 = (int *)local_d8;
        local_6c = local_d8._4_4_;
        piStack_68 = local_d0;
        piStack_64 = piStack_cc;
        ppiStack_60 = ppiStack_c8;
        ppiStack_5c = ppiStack_c4;
        local_58 = ppiVar11;
        iStack_54 = iVar30;
        ppiStack_50 = ppiVar8;
        local_4c = iVar30;
        if ((int **)local_1f0 == (int **)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_012fb0cc(&DAT_01d2fee0);
        }
        local_1f0 = FUN_0124ecbc((int **)local_1f0,local_1f0._4_4_);
        local_158 = local_f8;
        ppiStack_154 = local_f4;
        ppiStack_150 = local_f0;
        FUN_0124ebec((int)local_1f0,(int)((ulonglong)local_1f0 >> 0x20),&local_158,&local_80,ppiVar8
                     ,iVar30);
        local_98 = ppiVar12;
        local_9c = ppiVar34;
        local_a0 = ppiVar33;
        ppiVar11 = local_10c;
LAB_0124e504:
        local_98 = ppiVar12;
        local_9c = ppiVar34;
        local_a0 = ppiVar33;
        uVar2 = local_1f0;
        goto LAB_0124e10c;
      }
    }
    local_a0 = local_90;
    local_9c = local_8c;
    local_98 = local_88;
  }
  ppiVar11 = (int **)&local_1f0;
  uVar2 = CONCAT44(local_1f0._4_4_,(int **)local_1f0);
LAB_0124e10c:
  local_1f0._4_4_ = (int)((ulonglong)uVar2 >> 0x20);
  local_1f0._0_4_ = (int **)uVar2;
  ppiVar11[2] = (int *)((int)ppiVar11[2] + 1);
  goto LAB_0124d8bc;
LAB_0124df5c:
  local_294 = ppiVar33;
  goto LAB_0124de6c;
}

