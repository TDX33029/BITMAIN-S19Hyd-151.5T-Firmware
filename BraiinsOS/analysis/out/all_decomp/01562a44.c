// FUN_01562a44 @ 01562a44 size=3692 calls_out=24 calls_in=0
// strings: 

void FUN_01562a44(uint *param_1,uint *param_2,int *param_3,uint *param_4)

{
  byte *pbVar1;
  byte bVar2;
  char cVar3;
  undefined1 uVar4;
  uint uVar5;
  int iVar6;
  char *pcVar7;
  int iVar8;
  uint *puVar9;
  undefined1 *puVar10;
  code *pcVar11;
  undefined4 uVar12;
  byte *pbVar13;
  short sVar14;
  int *piVar15;
  int iVar16;
  undefined4 *puVar17;
  uint uVar18;
  short sVar19;
  uint uVar20;
  ushort *puVar21;
  byte *pbVar22;
  uint *extraout_r12;
  bool bVar23;
  ulonglong uVar24;
  uint local_304;
  uint uStack_2dc;
  uint uStack_2d8;
  undefined2 local_2d4 [2];
  undefined4 local_2d0;
  undefined4 uStack_2cc;
  undefined4 uStack_2c8;
  undefined4 local_2c4;
  undefined4 uStack_2c0;
  undefined4 uStack_2bc;
  undefined4 uStack_2b8;
  uint local_2b0;
  uint uStack_2ac;
  uint uStack_2a8;
  uint uStack_2a4;
  uint local_2a0;
  uint local_29c;
  uint uStack_298;
  uint uStack_294;
  uint local_290;
  uint uStack_28c;
  uint local_288;
  uint uStack_284;
  uint local_280;
  uint uStack_27c;
  uint uStack_278;
  uint uStack_274;
  uint local_270;
  uint uStack_26c;
  uint *puStack_268;
  uint uStack_264;
  uint uStack_260;
  uint local_25c;
  uint uStack_258;
  uint uStack_254;
  uint uStack_250;
  uint uStack_24c;
  uint local_248;
  uint uStack_244;
  uint uStack_240;
  uint uStack_23c;
  uint uStack_238;
  uint local_230;
  uint uStack_22c;
  uint uStack_228;
  uint uStack_224;
  uint uStack_220;
  undefined4 local_218;
  undefined4 uStack_214;
  undefined4 uStack_210;
  undefined4 local_20c;
  undefined4 uStack_208;
  undefined4 uStack_204;
  undefined4 uStack_200;
  uint local_1f8;
  uint uStack_1f4;
  uint uStack_1f0;
  uint local_1e8;
  uint uStack_1e4;
  uint uStack_1e0;
  uint local_1dc;
  uint uStack_1d8;
  uint uStack_1d4;
  uint uStack_1d0;
  uint local_1c8;
  uint uStack_1c4;
  uint uStack_1c0;
  uint uStack_1bc;
  uint local_1b8;
  uint uStack_1b4;
  uint *puStack_1b0;
  uint uStack_1ac;
  undefined4 uStack_1a8;
  undefined4 local_1a4;
  undefined4 uStack_1a0;
  undefined4 uStack_19c;
  undefined4 uStack_198;
  undefined4 uStack_194;
  uint local_190;
  uint uStack_18c;
  uint *puStack_188;
  uint uStack_184;
  uint local_180;
  uint uStack_17c;
  uint uStack_178;
  uint uStack_174;
  uint uStack_170;
  uint local_168;
  uint uStack_164;
  uint *puStack_160;
  uint uStack_15c;
  uint local_158;
  uint local_154;
  uint uStack_150;
  uint uStack_14c;
  uint uStack_148;
  uint uStack_144;
  uint local_140;
  uint uStack_13c;
  uint uStack_138;
  uint uStack_134;
  uint local_130;
  uint local_12c;
  uint *puStack_128;
  uint uStack_124;
  undefined4 uStack_120;
  undefined4 local_11c;
  undefined4 uStack_118;
  undefined4 uStack_114;
  undefined4 uStack_110;
  undefined4 uStack_10c;
  uint local_100;
  uint local_fc;
  uint local_f8;
  uint uStack_f4;
  uint local_f0;
  uint local_ec;
  uint uStack_e8;
  uint uStack_e4;
  uint uStack_e0;
  uint uStack_dc;
  uint local_d8;
  uint local_d4;
  uint uStack_d0;
  uint uStack_cc;
  uint uStack_c8;
  uint uStack_c4;
  uint local_c0;
  uint local_bc;
  uint *puStack_b8;
  uint uStack_b4;
  uint local_b0;
  uint uStack_ac;
  uint uStack_a8;
  uint uStack_a4;
  uint uStack_a0;
  uint local_9c;
  uint local_98;
  uint uStack_94;
  uint uStack_90;
  uint uStack_8c;
  uint local_88;
  uint uStack_84;
  uint *puStack_80;
  uint uStack_7c;
  undefined4 uStack_78;
  undefined4 local_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined4 uStack_68;
  undefined4 uStack_64;
  uint local_60;
  uint local_5c;
  uint uStack_58;
  uint uStack_54;
  uint uStack_50;
  uint uStack_4c;
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 local_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined1 local_2c;
  
  if ((0x80000000 < *param_4) || (param_4[3] != 0x80000002)) {
    FUN_015622b4(&local_100,param_4,&DAT_0040c784,1,&DAT_0040c784,1);
    param_1[2] = local_f8;
    param_1[3] = uStack_f4;
    param_1[4] = local_f0;
    param_1[5] = local_ec;
    param_1[6] = uStack_e8;
    param_1[7] = uStack_e4;
    *param_1 = local_100;
    param_1[1] = local_fc;
LAB_01562b70:
    bVar23 = true;
    goto LAB_01562c4c;
  }
  uVar5 = param_2[0x39];
  uVar20 = 0;
  bVar23 = *(int *)(uVar5 + 0xb0) != 0;
  iVar8 = 0;
  piVar15 = param_3;
  if (bVar23) {
    iVar8 = *(int *)(uVar5 + 0x9c);
    piVar15 = *(int **)(iVar8 + 0x10);
  }
  if (bVar23 && piVar15 != (int *)0x0) {
    iVar16 = (int)piVar15 * 8;
    puVar9 = *(uint **)(iVar8 + 0xc);
    do {
      iVar16 = iVar16 + -8;
      uVar20 = *puVar9;
      if (uVar20 != 0) break;
      puVar9 = puVar9 + 2;
    } while (iVar16 != 0);
  }
  sVar19 = (short)param_4[7];
  if (sVar19 == 4) {
    sVar19 = 4;
    if (param_4[6] != 0) {
      iVar8 = param_4[6] * 0x14;
      bVar2 = *(byte *)param_4[5];
      pbVar22 = (byte *)param_4[5];
      do {
        uVar18 = (uint)bVar2;
        iVar8 = iVar8 + -0x14;
        if ((10 < uVar18) && (3 < uVar18 - 0xc)) {
          if (uVar18 != 0x10) {
            sVar19 = *(short *)(pbVar22 + 2);
            goto LAB_01562bac;
          }
          if (*(short *)(pbVar22 + 0x10) == 0x1a) break;
        }
        if (iVar8 == 0) break;
        bVar2 = pbVar22[0x14];
        pbVar22 = pbVar22 + 0x14;
      } while( true );
    }
LAB_01562bd0:
    puVar10 = (undefined1 *)0x8000000e;
    bVar23 = *(int *)(uVar5 + 0xac) != 0;
    iVar8 = 0;
    if (bVar23) {
      uVar5 = *(uint *)(uVar5 + 0x9c);
      iVar8 = *(int *)(uVar5 + 0x10);
    }
    if (bVar23 && iVar8 != 0) {
      piVar15 = *(int **)(uVar5 + 0xc);
      iVar8 = iVar8 << 3;
      do {
        if (*piVar15 != 1) {
          if ((*(byte *)(param_3[1] + 4) - 1 < 2) && (*(char *)(*param_3 + 0x254) != '\0')) {
            *(undefined1 *)(param_1 + 1) = 0x24;
            *param_1 = (uint)&DAT_8000001c;
            goto LAB_01562b70;
          }
          if (param_4[6] == 0) goto LAB_01562e2c;
          iVar8 = param_4[6] * 0x14;
          bVar2 = *(byte *)param_4[5];
          pbVar22 = (byte *)param_4[5] + 0x10;
          goto joined_r0x01562de8;
        }
        piVar15 = piVar15 + 2;
        iVar8 = iVar8 + -8;
      } while (iVar8 != 0);
    }
  }
  else {
LAB_01562bac:
    if (sVar19 == 4) goto LAB_01562bd0;
    puVar10 = &DAT_8000000c;
    if ((sVar19 == 5) && (puVar10 = (undefined1 *)0x8000000e, (uVar20 & 1) != 0)) {
LAB_01562e2c:
      if ((char)param_4[0x1a] == '\0') {
        puVar21 = (ushort *)(param_4[5] + 0x10);
        local_f8 = 0;
        local_100 = 0;
        iVar8 = param_4[6] * 0x14;
        do {
          iVar16 = iVar8;
          if (iVar16 == 0) break;
          uVar12 = 0;
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
          switch((char)puVar21[-8]) {
          case '\0':
            uVar12 = 0xb;
            break;
          case '\x02':
            uVar12 = 0x23;
            break;
          case '\x03':
            uVar12 = 0xff01;
            break;
          case '\x04':
            uVar12 = 0x10;
            break;
          case '\x05':
            uVar12 = 0x33;
            break;
          case '\x06':
            uVar12 = 0x29;
            break;
          case '\a':
            uVar12 = 0x17;
            break;
          case '\b':
            uVar12 = 5;
            break;
          case '\t':
            uVar12 = 0x14;
            break;
          case '\n':
            uVar12 = 0x13;
            break;
          case '\v':
            uVar12 = 0x2b;
            break;
          case '\f':
            uVar12 = 0x39;
            break;
          case '\r':
            uVar12 = 0xffa5;
            break;
          case '\x0e':
            uVar12 = 0x2a;
            break;
          case '\x0f':
            uVar12 = 0xfe0d;
            break;
          case '\x10':
                    /* WARNING: Could not recover jumptable at 0x01562f28. Too many branches */
                    /* WARNING: Treating indirect jump as call */
            (*(code *)(&DAT_01562f2c + *(int *)(&DAT_01562f2c + (uint)*puVar21 * 4)))();
            return;
          }
          iVar6 = FUN_0156a7f8(&local_100,uVar12);
          puVar21 = puVar21 + 10;
          iVar8 = iVar16 + -0x14;
        } while (iVar6 == 0);
        FUN_0156bc34(&local_100);
        if (iVar16 == 0) {
          local_2d4[0] = 0x26;
          iVar8 = FUN_01550cc0(param_2[0x28],param_2[0x29],param_4[5],param_4[6],local_2d4);
          iVar16 = *param_3;
          if (iVar8 == 0) {
            *(short *)(iVar16 + 0x240) = sVar19;
            if (sVar19 != 5) {
              pbVar22 = (byte *)0x0;
              if (param_4[6] != 0) {
                iVar8 = param_4[6] * 0x14;
                pbVar13 = (byte *)param_4[5];
                do {
                  uVar5 = (uint)*pbVar13;
                  if ((10 < uVar5 - 5 && 3 < uVar5) &&
                     ((uVar5 != 0x10 || (*(short *)(pbVar13 + 0x10) == 0x10)))) {
                    pbVar22 = (byte *)0x0;
                    if (uVar5 == 4) {
                      pbVar22 = pbVar13 + 4;
                    }
                    break;
                  }
                  iVar8 = iVar8 + -0x14;
                  pbVar13 = pbVar13 + 0x14;
                } while (iVar8 != 0);
              }
              FUN_01563e2c(&local_100,iVar16,param_2[0x25],param_2[0x26],pbVar22);
              if (local_100 != 0x80000029) {
                *param_1 = local_100;
                param_1[1] = local_fc;
                param_1[2] = local_f8;
                param_1[3] = uStack_f4;
                param_1[4] = local_f0;
                param_1[5] = local_ec;
                param_1[6] = uStack_e8;
                param_1[7] = uStack_e4;
                goto LAB_01562b70;
              }
            }
            if (param_4[6] != 0) {
              pbVar22 = (byte *)param_4[5];
              iVar8 = param_4[6] * 0x14 + -0x14;
              pbVar13 = pbVar22 + 0x14;
              uVar5 = (uint)*pbVar22;
              if (0xe < uVar5 - 1) goto LAB_0156333c;
              while (pbVar22 = pbVar13, iVar8 != 0) {
                while( true ) {
                  iVar8 = iVar8 + -0x14;
                  pbVar13 = pbVar22 + 0x14;
                  uVar5 = (uint)*pbVar22;
                  if (uVar5 - 1 < 0xf) break;
LAB_0156333c:
                  if (uVar5 != 0x10) {
                    iVar8 = *(int *)(pbVar22 + 0xc) << 1;
                    pcVar7 = *(char **)(pbVar22 + 8);
                    goto LAB_01563730;
                  }
                  pbVar1 = pbVar22 + 0x10;
                  pbVar22 = pbVar13;
                  if (*(short *)pbVar1 == 0xb || iVar8 == 0) goto LAB_01563358;
                }
              }
            }
            goto LAB_01563358;
          }
          local_fc = 0x1a0001;
          local_100 = 0x80000001;
          local_88 = CONCAT22(local_88._2_2_,4);
          FUN_01525ed4(iVar16,&local_100,*(char *)(iVar16 + 0x31) == '\x02');
          bVar23 = true;
          *(undefined1 *)(param_1 + 1) = 0x48;
          *(undefined1 *)(iVar16 + 0x255) = 1;
          *param_1 = (uint)&DAT_8000001c;
          goto LAB_01562c4c;
        }
        iVar8 = *param_3;
        local_fc = 0x100001;
        local_100 = 0x80000001;
        local_88 = CONCAT22(local_88._2_2_,4);
        FUN_01525ed4(iVar8,&local_100,*(char *)(iVar8 + 0x31) == '\x02');
        uVar4 = 7;
      }
      else {
        iVar8 = *param_3;
        local_fc = 0xd0001;
        local_100 = 0x80000001;
        local_88 = CONCAT22(local_88._2_2_,4);
        FUN_01525ed4(iVar8,&local_100,*(char *)(iVar8 + 0x31) == '\x02');
        uVar4 = 0x35;
      }
LAB_01563130:
      bVar23 = true;
      *(undefined1 *)(iVar8 + 0x255) = 1;
      *(undefined1 *)(param_1 + 1) = uVar4;
      *param_1 = (uint)&DAT_8000001c;
      goto LAB_01562c4c;
    }
  }
  iVar8 = *param_3;
  local_fc = 0x130001;
  local_100 = 0x80000001;
  local_88 = CONCAT22(local_88._2_2_,4);
  FUN_01525ed4(iVar8,&local_100,*(char *)(iVar8 + 0x31) == '\x02');
  bVar23 = true;
  *(undefined1 *)(iVar8 + 0x255) = 1;
  *param_1 = 0x8000001b;
  param_1[1] = (uint)puVar10;
  param_1[2] = uStack_2dc;
  param_1[3] = uStack_2d8;
  goto LAB_01562c4c;
joined_r0x01562de8:
  uVar5 = (uint)bVar2;
  iVar8 = iVar8 + -0x14;
  if ((10 < uVar5) && (3 < uVar5 - 0xc)) {
    if (uVar5 != 0x10) {
      iVar8 = *param_3;
      local_fc = 0xd0001;
      local_100 = 0x80000001;
      local_88 = CONCAT22(local_88._2_2_,4);
      FUN_01525ed4(iVar8,&local_100,*(char *)(iVar8 + 0x31) == '\x02');
      uVar4 = 0x31;
      goto LAB_01563130;
    }
    if (*(short *)pbVar22 == 0x1a) goto LAB_01562e2c;
  }
  if (iVar8 == 0) goto LAB_01562e2c;
  bVar2 = pbVar22[4];
  pbVar22 = pbVar22 + 0x14;
  goto joined_r0x01562de8;
  while( true ) {
    cVar3 = *pcVar7;
    iVar8 = iVar8 + -2;
    pcVar7 = pcVar7 + 2;
    if (cVar3 == '\0') break;
LAB_01563730:
    if (iVar8 == 0) {
      local_fc = 0x60001;
      local_100 = 0x80000001;
      local_88 = CONCAT22(local_88._2_2_,4);
      FUN_01525ed4(iVar16,&local_100,*(char *)(iVar16 + 0x31) == '\x02');
      uVar4 = 0x3a;
      goto LAB_015635d4;
    }
  }
LAB_01563358:
  uVar24 = FUN_0152dd18(*(undefined4 *)(*(int *)(param_2[0x39] + 0x9c) + 0xc),
                        *(undefined4 *)(*(int *)(param_2[0x39] + 0x9c) + 0x10),(short)param_4[8],
                        *(undefined2 *)((int)param_4 + 0x22));
  iVar8 = (int)(uVar24 >> 0x20);
  if ((uint)uVar24 == 2) {
    local_fc = 0x60001;
    local_100 = 0x80000001;
    local_88 = CONCAT22(local_88._2_2_,4);
    FUN_01525ed4(iVar16,&local_100,*(char *)(iVar16 + 0x31) == '\x02');
    bVar23 = true;
    *(undefined1 *)(iVar16 + 0x255) = 1;
    *param_1 = (uint)&DAT_8000001c;
    param_1[1] = 0x34;
  }
  else {
    sVar14 = 4;
    if ((uVar24 & 1) != 0) {
      sVar14 = 5;
    }
    if (sVar19 == sVar14) {
      if (param_2[0x44] == 2) {
LAB_015633fc:
        *(ulonglong *)(param_2 + 0x44) = uVar24;
        *(ulonglong *)(iVar16 + 0x1d0) = uVar24;
        local_100 = param_2[0x46];
        local_fc = param_2[0x47];
        local_f8 = param_2[0x48];
        uStack_f4 = param_2[0x49];
        FUN_0151f000(&local_2d0,&local_100,*(undefined4 *)(iVar8 + 0x18),
                     *(undefined4 *)(iVar8 + 0x1c));
        uVar5 = 0x1563464;
        FUN_0151eddc(&local_2d0,param_4);
        puVar9 = &local_2b0;
        local_2b0 = param_2[0x1c];
        uStack_2ac = param_2[0x1d];
        uStack_2a8 = param_2[0x1e];
        uStack_2a4 = param_2[0x1f];
        local_2a0 = param_2[0x20];
        local_29c = param_2[0x21];
        uStack_298 = param_2[0x22];
        uStack_294 = param_2[0x23];
        local_290 = param_4[9];
        uStack_28c = param_4[10];
        local_288 = param_4[0xb];
        uStack_284 = param_4[0xc];
        local_280 = param_4[0xd];
        uStack_27c = param_4[0xe];
        uStack_278 = param_4[0xf];
        uStack_274 = param_4[0x10];
        if ((uVar24 & 1) == 0) {
          uVar5 = *param_2;
          uVar18 = param_2[1];
          if (uVar5 == 2 && uVar18 == 0) {
            if (param_2[0x42] == 0) {
              local_304 = 0x80000000;
            }
            else {
              iVar6 = FUN_0156404c(param_2 + 0x3a,param_4 + 0x11);
              if (iVar6 != 0) {
                local_fc = 0xd0001;
                local_100 = 0x80000001;
                local_88 = CONCAT22(local_88._2_2_,4);
                FUN_01525ed4(iVar16,&local_100,*(char *)(iVar16 + 0x31) == '\x02');
                *(undefined1 *)(iVar16 + 0x255) = 1;
                *(undefined1 *)(param_1 + 1) = 0x39;
                *param_1 = (uint)&DAT_8000001c;
                FUN_0151b7fc(&local_2d0);
                bVar23 = false;
                goto LAB_01562c4c;
              }
              uVar5 = *param_2;
              uVar18 = param_2[1];
              FUN_016dd1aa(&local_168,param_2 + 2,0x68);
              local_304 = 0x80000000;
              if (uVar5 != 2 || uVar18 != 0) goto LAB_015636a4;
            }
          }
          else {
            FUN_016dd1aa(&local_168,param_2 + 2,0x68);
LAB_015636a4:
            FUN_016dd1aa(&local_f8,&local_168,0x68);
            if ((uVar5 & 1) == 0) {
              local_304 = 0x80000000;
              local_100 = uVar5;
              local_fc = uVar18;
              FUN_015640c4(&local_100);
            }
            else {
              local_190 = local_168;
              uStack_18c = uStack_164;
              puStack_188 = puStack_160;
              uStack_184 = uStack_15c;
              local_180 = local_158;
              uStack_17c = local_154;
              uStack_178 = uStack_150;
              uStack_174 = uStack_14c;
              uStack_170 = uStack_148;
              local_304 = local_d4;
              local_1c8 = local_140;
              uStack_1c4 = uStack_13c;
              uStack_1c0 = uStack_138;
              uStack_1bc = uStack_134;
              local_1b8 = local_130;
              uStack_1b4 = local_12c;
              puStack_1b0 = puStack_128;
              uStack_1ac = uStack_124;
              uStack_1a8 = uStack_120;
              local_1a4 = local_11c;
              uStack_1a0 = uStack_118;
              uStack_19c = uStack_114;
              uStack_198 = uStack_110;
              uStack_194 = uStack_10c;
            }
          }
          local_60 = param_2[0x39];
          local_5c = param_2[0x34];
          uStack_58 = param_2[0x35];
          uStack_54 = param_2[0x36];
          uStack_50 = param_2[0x37];
          uStack_4c = param_2[0x38];
          local_2c = (undefined1)param_2[0x43];
          local_48 = local_2d0;
          uStack_44 = uStack_2cc;
          uStack_40 = uStack_2c8;
          local_3c = local_2c4;
          uStack_38 = uStack_2c0;
          uStack_34 = uStack_2bc;
          uStack_30 = uStack_2b8;
          local_c0 = local_190;
          local_bc = uStack_18c;
          puStack_b8 = puStack_188;
          uStack_b4 = uStack_184;
          local_b0 = local_180;
          uStack_ac = uStack_17c;
          uStack_a8 = uStack_178;
          uStack_a4 = uStack_174;
          uStack_a0 = uStack_170;
          local_9c = local_304;
          local_98 = local_1c8;
          uStack_94 = uStack_1c4;
          uStack_90 = uStack_1c0;
          uStack_8c = uStack_1bc;
          local_88 = local_1b8;
          uStack_84 = uStack_1b4;
          puStack_80 = puStack_1b0;
          uStack_7c = uStack_1ac;
          uStack_78 = uStack_1a8;
          local_74 = local_1a4;
          uStack_70 = uStack_1a0;
          uStack_6c = uStack_19c;
          uStack_68 = uStack_198;
          uStack_64 = uStack_194;
          local_100 = local_2b0;
          local_fc = uStack_2ac;
          local_f8 = uStack_2a8;
          uStack_f4 = uStack_2a4;
          local_f0 = local_2a0;
          local_ec = local_29c;
          uStack_e8 = uStack_298;
          uStack_e4 = uStack_294;
          uStack_e0 = local_290;
          uStack_dc = uStack_28c;
          local_d8 = local_288;
          local_d4 = uStack_284;
          uStack_d0 = local_280;
          uStack_cc = uStack_27c;
          uStack_c8 = uStack_278;
          uStack_c4 = uStack_274;
          FUN_0153fae0(param_1,&local_100,iVar16,iVar8,param_4 + 4,uVar20 & 1);
          FUN_01563d94(param_4);
          FUN_01564124(param_2 + 0x24);
        }
        else {
          uVar18 = *param_2;
          uVar20 = param_2[1];
          if (uVar18 == 2 && uVar20 == 0) {
LAB_015634f8:
            local_12c = 0x80000000;
            puStack_128 = puVar9;
            uStack_124 = uVar5;
          }
          else {
            FUN_016dd1aa(&local_f8,param_2 + 2,0x68);
            local_100 = uVar18;
            local_fc = uVar20;
            if ((uVar18 & 1) != 0) {
              uVar5 = 0x15634f8;
              FUN_015640c4(&local_100);
              puVar9 = extraout_r12;
              goto LAB_015634f8;
            }
            local_270 = param_2[2];
            uStack_26c = param_2[3];
            puStack_268 = (uint *)param_2[4];
            uStack_264 = param_2[5];
            uStack_260 = param_2[6];
            local_25c = param_2[7];
            uStack_258 = param_2[8];
            uStack_254 = param_2[9];
            uStack_250 = param_2[10];
            uStack_24c = param_2[0xb];
            local_248 = param_2[0xc];
            uStack_244 = param_2[0xd];
            uStack_240 = param_2[0xe];
            uStack_23c = param_2[0xf];
            uStack_238 = param_2[0x10];
            local_12c = local_bc;
            puStack_128 = puStack_b8;
            uStack_124 = uStack_b4;
          }
          uVar20 = param_2[0x39];
          local_168 = local_270;
          uStack_164 = uStack_26c;
          puStack_160 = puStack_268;
          uStack_15c = uStack_264;
          local_158 = uStack_260;
          local_154 = local_25c;
          uStack_150 = uStack_258;
          uStack_14c = uStack_254;
          uStack_148 = uStack_250;
          uStack_144 = uStack_24c;
          local_140 = local_248;
          uStack_13c = uStack_244;
          uStack_138 = uStack_240;
          uStack_134 = uStack_23c;
          local_130 = uStack_238;
          local_230 = param_2[0x34];
          uStack_22c = param_2[0x35];
          uStack_228 = param_2[0x36];
          uStack_224 = param_2[0x37];
          uStack_220 = param_2[0x38];
          local_218 = local_2d0;
          uStack_214 = uStack_2cc;
          uStack_210 = uStack_2c8;
          local_20c = local_2c4;
          uStack_208 = uStack_2c0;
          uStack_204 = uStack_2bc;
          uStack_200 = uStack_2b8;
          local_1f8 = param_2[0x70];
          uStack_1f4 = param_2[0x71];
          uStack_1f0 = param_2[0x72];
          local_1e8 = param_2[0x24];
          uStack_1e4 = param_2[0x25];
          uStack_1e0 = param_2[0x26];
          local_1dc = param_2[0x27];
          uStack_1d8 = param_2[0x28];
          uStack_1d4 = param_2[0x29];
          uStack_1d0 = param_2[0x2a];
          uVar5 = param_2[0x6e];
          if (uVar5 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_00faa444(&DAT_018a8ef4);
          }
          uVar18 = param_2[0x6f];
          uVar4 = *(undefined1 *)((int)param_2 + 0x10d);
          FUN_016dd1aa(&local_100,param_2 + 0x4a,0x90);
          FUN_0154f194(param_1,uVar20,iVar16,param_3[1],param_4 + 4,&local_168,&local_230,&local_2b0
                       ,iVar8,&local_218,&local_1f8,&local_1e8,uVar5,uVar18,uVar4,param_4,&local_100
                      );
          FUN_01563d94(param_4);
        }
        if ((undefined1 *)param_2[0x2b] != &DAT_80000018) {
          FUN_01564190();
        }
        if ((uVar24 & 1) == 0) {
          FUN_00e92fdc(param_2[0x70],param_2[0x71]);
          FUN_00e92fdc(param_2[0x6e],param_2[0x6f]);
          FUN_0156447c(param_2 + 0x4a);
        }
        goto LAB_01562d48;
      }
      if (param_2[0x44] == (uint)uVar24) {
        sVar19 = *(short *)(param_2[0x45] + 0x28);
        if ((sVar19 == *(short *)(iVar8 + 0x28)) &&
           ((sVar19 != 0x178 || (*(short *)(param_2[0x45] + 0x2a) == *(short *)(iVar8 + 0x2a)))))
        goto LAB_015633fc;
      }
      local_fc = 0xd0001;
      local_100 = 0x80000001;
      local_88 = CONCAT22(local_88._2_2_,4);
      FUN_01525ed4(iVar16,&local_100,*(char *)(iVar16 + 0x31) == '\x02');
      uVar4 = 0x2f;
    }
    else {
      local_fc = 0xd0001;
      local_100 = 0x80000001;
      local_88 = CONCAT22(local_88._2_2_,4);
      FUN_01525ed4(iVar16,&local_100,*(char *)(iVar16 + 0x31) == '\x02');
      uVar4 = 0x38;
    }
LAB_015635d4:
    bVar23 = true;
    *(undefined1 *)(iVar16 + 0x255) = 1;
    *(undefined1 *)(param_1 + 1) = uVar4;
    *param_1 = (uint)&DAT_8000001c;
  }
LAB_01562c4c:
  iVar8 = 1;
  if (0x80000000 < *param_4) {
    iVar8 = *param_4 + 0x7fffffff;
  }
  switch(iVar8) {
  case 0:
  case 3:
    goto switchD_01562c6c_caseD_0;
  case 1:
    FUN_0156480c(param_4 + 3);
    uVar5 = *param_4;
    break;
  default:
    param_4 = param_4 + 1;
    uVar5 = *param_4;
  }
  if (uVar5 != 0x80000000 && uVar5 != 0) {
    thunk_FUN_016d3fb4(param_4[1]);
  }
switchD_01562c6c_caseD_0:
  uVar5 = FUN_01564684(param_2);
  if (bVar23) {
    uVar5 = param_2[0x46];
  }
  if (bVar23 && uVar5 != 0) {
    thunk_FUN_016d3fb4(param_2[0x47]);
    uVar5 = param_2[0x70];
  }
  else {
    uVar5 = param_2[0x70];
  }
  if (uVar5 != 0) {
    puVar17 = (undefined4 *)param_2[0x71];
    pcVar11 = (code *)*puVar17;
    if (pcVar11 != (code *)0x0) {
      (*pcVar11)(uVar5);
    }
    if (puVar17[1] != 0) {
      thunk_FUN_016d3fb4(uVar5);
    }
  }
  uVar5 = param_2[0x6e];
  if (uVar5 != 0) {
    puVar17 = (undefined4 *)param_2[0x6f];
    pcVar11 = (code *)*puVar17;
    if (pcVar11 != (code *)0x0) {
      (*pcVar11)(uVar5);
    }
    if (puVar17[1] != 0) {
      thunk_FUN_016d3fb4(uVar5);
    }
  }
  FUN_0156447c(param_2 + 0x4a);
LAB_01562d48:
  thunk_FUN_016d3fb4(param_2);
  return;
}

