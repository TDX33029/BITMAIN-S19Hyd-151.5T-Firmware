// FUN_01928dac @ 01928dac size=3180 calls_out=32 calls_in=0
// strings: 

void FUN_01928dac(uint *param_1,uint *param_2,uint *param_3,uint *param_4)

{
  undefined1 uVar1;
  short sVar2;
  short sVar3;
  int iVar4;
  undefined1 *puVar5;
  uint *puVar6;
  undefined4 uVar7;
  int iVar8;
  char *pcVar9;
  int iVar10;
  uint *puVar11;
  int *piVar12;
  uint *extraout_r2;
  uint *puVar13;
  uint uVar14;
  uint uVar15;
  uint uVar16;
  uint uVar17;
  uint *puVar18;
  uint uVar19;
  uint extraout_r12;
  bool bVar20;
  undefined8 uVar21;
  ulonglong uVar22;
  undefined1 *local_2c0 [3];
  undefined2 local_2b4 [2];
  undefined4 local_2b0;
  undefined4 uStack_2ac;
  undefined4 uStack_2a8;
  undefined4 local_2a4;
  undefined4 uStack_2a0;
  undefined4 uStack_29c;
  undefined4 uStack_298;
  uint local_290;
  uint *puStack_28c;
  uint uStack_288;
  uint uStack_284;
  uint local_280;
  uint local_27c;
  uint uStack_278;
  uint uStack_274;
  uint local_270;
  uint uStack_26c;
  uint local_268;
  uint uStack_264;
  uint local_260;
  uint uStack_25c;
  uint uStack_258;
  uint uStack_254;
  uint local_250;
  uint uStack_24c;
  uint uStack_248;
  uint uStack_244;
  uint uStack_240;
  uint local_23c;
  uint uStack_238;
  uint uStack_234;
  uint uStack_230;
  uint uStack_22c;
  uint local_228;
  uint uStack_224;
  uint uStack_220;
  uint uStack_21c;
  uint uStack_218;
  uint local_210;
  uint uStack_20c;
  uint uStack_208;
  uint uStack_204;
  uint uStack_200;
  uint local_1fc;
  uint uStack_1f8;
  uint uStack_1f4;
  uint uStack_1f0;
  uint uStack_1ec;
  uint local_1e8;
  uint uStack_1e4;
  uint uStack_1e0;
  uint uStack_1dc;
  uint uStack_1d8;
  uint local_1d4;
  uint local_1d0;
  uint local_1cc;
  uint local_1c8;
  uint uStack_1c4;
  uint uStack_1c0;
  uint uStack_1bc;
  uint uStack_1b8;
  undefined4 local_1b0;
  undefined4 uStack_1ac;
  undefined4 uStack_1a8;
  undefined4 local_1a4;
  undefined4 uStack_1a0;
  undefined4 uStack_19c;
  undefined4 uStack_198;
  uint local_190;
  uint uStack_18c;
  uint uStack_188;
  uint local_180;
  uint uStack_17c;
  uint uStack_178;
  uint local_174;
  uint uStack_170;
  uint uStack_16c;
  uint uStack_168;
  uint local_160;
  uint uStack_15c;
  uint uStack_158;
  uint uStack_154;
  uint local_150;
  uint uStack_14c;
  uint uStack_148;
  uint uStack_144;
  uint uStack_140;
  uint local_13c;
  uint uStack_138;
  uint uStack_134;
  uint uStack_130;
  uint uStack_12c;
  uint local_128;
  uint uStack_124;
  uint uStack_120;
  uint uStack_11c;
  uint local_118;
  uint uStack_114;
  uint uStack_110;
  uint uStack_10c;
  uint uStack_108;
  uint local_100;
  uint *local_fc;
  uint local_f8;
  uint uStack_f4;
  uint local_f0;
  uint local_ec;
  uint local_e8;
  uint local_e4;
  uint uStack_e0;
  uint uStack_dc;
  uint local_d8;
  uint local_d4;
  uint local_d0;
  uint uStack_cc;
  uint uStack_c8;
  uint uStack_c4;
  uint local_c0;
  uint local_bc;
  uint local_b8;
  uint local_b4;
  uint local_b0;
  uint local_ac;
  uint uStack_a8;
  uint uStack_a4;
  uint local_a0;
  uint local_9c;
  uint local_98;
  uint local_94;
  uint uStack_90;
  uint uStack_8c;
  uint local_88;
  uint uStack_84;
  uint uStack_80;
  uint uStack_7c;
  uint uStack_78;
  uint local_74;
  uint uStack_70;
  uint uStack_6c;
  uint uStack_68;
  uint uStack_64;
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
  
  if ((*param_4 < 0x80000001) && (param_4[3] == 0x80000002)) {
    puVar11 = param_2;
    puVar13 = param_3;
    puVar18 = param_4 + 4;
LAB_01928e50:
    uVar16 = param_2[0x39];
    uVar17 = 0;
    bVar20 = *(int *)(uVar16 + 0xb0) != 0;
    iVar4 = 0;
    if (bVar20) {
      iVar4 = *(int *)(uVar16 + 0x9c);
      puVar11 = *(uint **)(iVar4 + 0x10);
    }
    if (bVar20 && puVar11 != (uint *)0x0) {
      puVar6 = *(uint **)(iVar4 + 0xc);
      puVar11 = (uint *)((int)puVar11 * 8 + -8);
      do {
        uVar17 = *puVar6;
        if (uVar17 != 0) break;
        puVar13 = puVar11 + -2;
        bVar20 = puVar11 != (uint *)0x0;
        puVar6 = puVar6 + 2;
        puVar11 = puVar13;
      } while (bVar20);
    }
    sVar2 = (short)puVar18[3];
    if (sVar2 == 4) {
      sVar2 = FUN_018eb8cc(puVar18[1],puVar18[2]);
      puVar13 = extraout_r2;
      sVar3 = 4;
      if (sVar2 != 10) goto LAB_01928e98;
LAB_01928f58:
      sVar2 = sVar3;
      puVar5 = (undefined1 *)0x8000000e;
      bVar20 = *(int *)(uVar16 + 0xac) != 0;
      iVar4 = 0;
      if (bVar20) {
        iVar4 = *(int *)(uVar16 + 0x9c);
        puVar13 = *(uint **)(iVar4 + 0x10);
      }
      if (bVar20 && puVar13 != (uint *)0x0) {
        piVar12 = *(int **)(iVar4 + 0xc);
        iVar4 = (int)puVar13 << 3;
        do {
          if (*piVar12 != 1) {
            if ((*(byte *)(param_3[1] + 4) - 1 < 2) && (*(char *)(*param_3 + 0x254) != '\0')) {
              bVar20 = true;
              *(undefined1 *)(param_1 + 1) = 0x24;
              *param_1 = (uint)&DAT_8000001c;
              goto LAB_01928fac;
            }
            sVar3 = FUN_018eb8cc(puVar18[1],puVar18[2]);
            if (sVar3 == 10) goto LAB_01928eb8;
            uVar17 = *param_3;
            local_88 = CONCAT22(local_88._2_2_,4);
            local_fc = (uint *)0xd0001;
            local_100 = 0x80000001;
            FUN_018f1fc4(uVar17,&local_100,*(char *)(uVar17 + 0x31) == '\x02');
            uVar1 = 0x31;
            goto LAB_019291a8;
          }
          piVar12 = piVar12 + 2;
          iVar4 = iVar4 + -8;
        } while (iVar4 != 0);
      }
LAB_01928f74:
      local_2c0[0] = puVar5;
      FUN_018f1eac(&local_100,*param_3,0x13,local_2c0);
      *param_1 = local_100;
      param_1[1] = (uint)local_fc;
      param_1[2] = local_f8;
      param_1[3] = uStack_f4;
      param_1[4] = local_f0;
      param_1[5] = local_ec;
      param_1[6] = local_e8;
      param_1[7] = local_e4;
      goto LAB_01928fa4;
    }
LAB_01928e98:
    sVar3 = sVar2;
    if (sVar2 == 4) goto LAB_01928f58;
    puVar5 = &DAT_8000000c;
    if ((sVar2 != 5) || (puVar5 = (undefined1 *)0x8000000e, (uVar17 & 1) == 0)) goto LAB_01928f74;
LAB_01928eb8:
    if ((char)puVar18[0x16] == '\0') {
      uVar16 = puVar18[1];
      local_f8 = 0;
      local_100 = 0;
      iVar4 = puVar18[2] * 0x14;
      do {
        iVar10 = iVar4;
        if (iVar10 == 0) break;
        FUN_018eb4c8(uVar16);
        uVar7 = FUN_018eb328();
        iVar8 = FUN_01930aa8(&local_100,uVar7);
        uVar16 = uVar16 + 0x14;
        iVar4 = iVar10 + -0x14;
      } while (iVar8 != 0);
      FUN_0192f740(&local_100);
      if (iVar10 != 0) {
        uVar17 = *param_3;
        local_88 = CONCAT22(local_88._2_2_,4);
        local_fc = (uint *)0x100001;
        local_100 = 0x80000001;
        FUN_018f1fc4(uVar17,&local_100,*(char *)(uVar17 + 0x31) == '\x02');
        uVar1 = 7;
        goto LAB_019291a8;
      }
      local_2b4[0] = 0x26;
      iVar4 = FUN_019258ac(param_2[0x28],param_2[0x29],puVar18[1],puVar18[2],local_2b4,1);
      uVar16 = *param_3;
      if (iVar4 == 0) {
        *(short *)(uVar16 + 0x240) = sVar2;
        if (sVar2 != 5) {
          uVar14 = param_2[0x25];
          uVar15 = param_2[0x26];
          uVar7 = FUN_018eb920(puVar18[1],puVar18[2]);
          FUN_01929e8c(&local_100,uVar16,uVar14,uVar15,uVar7);
          if (local_100 != 0x80000029) {
            puVar11 = (uint *)((uint)&local_100 | 4);
            uVar17 = puVar11[1];
            uVar16 = puVar11[2];
            param_1[1] = *puVar11;
            param_1[2] = uVar17;
            param_1[3] = uVar16;
            uVar17 = puVar11[4];
            uVar16 = puVar11[5];
            uVar14 = puVar11[6];
            param_1[4] = puVar11[3];
            param_1[5] = uVar17;
            param_1[6] = uVar16;
            param_1[7] = uVar14;
            *param_1 = local_100;
            goto LAB_01928fa4;
          }
        }
        uVar21 = FUN_018eb874(puVar18[1],puVar18[2]);
        iVar4 = (int)((ulonglong)uVar21 >> 0x20);
        pcVar9 = (char *)uVar21;
        if (pcVar9 != (char *)0x0) {
          if (iVar4 != 0) {
            iVar4 = iVar4 << 1;
            do {
              if (*pcVar9 == '\0') goto LAB_01929320;
              pcVar9 = pcVar9 + 2;
              iVar4 = iVar4 + -2;
            } while (iVar4 != 0);
          }
          local_88 = CONCAT22(local_88._2_2_,4);
          local_fc = (uint *)0x60001;
          local_100 = 0x80000001;
          FUN_018f1fc4(uVar16,&local_100,*(char *)(uVar16 + 0x31) == '\x02');
          uVar1 = 0x3a;
          goto LAB_01929494;
        }
LAB_01929320:
        uVar22 = FUN_0190b1f8(*(undefined4 *)(*(int *)(param_2[0x39] + 0x9c) + 0xc),
                              *(undefined4 *)(*(int *)(param_2[0x39] + 0x9c) + 0x10),
                              (short)puVar18[4],*(undefined2 *)((int)puVar18 + 0x12));
        iVar4 = (int)(uVar22 >> 0x20);
        if ((int)uVar22 == 2) {
          local_88 = CONCAT22(local_88._2_2_,4);
          local_fc = (uint *)0x60001;
          local_100 = 0x80000001;
          FUN_018f1fc4(uVar16,&local_100,*(char *)(uVar16 + 0x31) == '\x02');
          *param_1 = (uint)&DAT_8000001c;
          param_1[1] = 0x34;
          goto LAB_019294a0;
        }
        sVar3 = 4;
        if ((uVar22 & 1) != 0) {
          sVar3 = 5;
        }
        if (sVar2 != sVar3) {
          local_88 = CONCAT22(local_88._2_2_,4);
          local_fc = (uint *)0xd0001;
          local_100 = 0x80000001;
          FUN_018f1fc4(uVar16,&local_100,*(char *)(uVar16 + 0x31) == '\x02');
          uVar1 = 0x38;
          goto LAB_01929494;
        }
        if ((param_2[0x44] != 2) &&
           (iVar10 = FUN_01929fec(param_2[0x44],param_2[0x45],(int)uVar22,iVar4), iVar10 != 0)) {
          local_88 = CONCAT22(local_88._2_2_,4);
          local_fc = (uint *)0xd0001;
          local_100 = 0x80000001;
          FUN_018f1fc4(uVar16,&local_100,*(char *)(uVar16 + 0x31) == '\x02');
          uVar1 = 0x2f;
          goto LAB_01929494;
        }
        *(ulonglong *)(param_2 + 0x44) = uVar22;
        *(ulonglong *)(uVar16 + 0x1d0) = uVar22;
        local_100 = param_2[0x46];
        local_fc = (uint *)param_2[0x47];
        local_f8 = param_2[0x48];
        uStack_f4 = param_2[0x49];
        FUN_0191e300(&local_2b0,&local_100,*(undefined4 *)(iVar4 + 0x18),
                     *(undefined4 *)(iVar4 + 0x1c));
        FUN_0191e124(&local_2b0,param_4);
        local_290 = param_2[0x1c];
        puStack_28c = (uint *)param_2[0x1d];
        uStack_288 = param_2[0x1e];
        uStack_284 = param_2[0x1f];
        local_280 = param_2[0x20];
        local_27c = param_2[0x21];
        uStack_278 = param_2[0x22];
        uStack_274 = param_2[0x23];
        local_270 = puVar18[5];
        uStack_26c = puVar18[6];
        local_268 = puVar18[7];
        uStack_264 = puVar18[8];
        local_260 = puVar18[9];
        uStack_25c = puVar18[10];
        uStack_258 = puVar18[0xb];
        uStack_254 = puVar18[0xc];
        if ((uVar22 & 1) != 0) {
          uVar14 = *param_2;
          puVar11 = (uint *)param_2[1];
          if (uVar14 == 2 && puVar11 == (uint *)0x0) {
            local_1d4 = 0x80000000;
            uVar15 = extraout_r12;
          }
          else {
            local_1d4 = param_2[0x11];
            uVar17 = param_2[0x12];
            uVar15 = param_2[0x13];
            local_f8 = param_2[2];
            uStack_f4 = param_2[3];
            local_f0 = param_2[4];
            local_ec = param_2[5];
            local_e8 = param_2[6];
            local_e4 = param_2[7];
            uStack_e0 = param_2[8];
            uStack_dc = param_2[9];
            local_d8 = param_2[10];
            local_d4 = param_2[0xb];
            local_d0 = param_2[0xc];
            uStack_cc = param_2[0xd];
            uStack_c8 = param_2[0xe];
            uStack_c4 = param_2[0xf];
            local_c0 = param_2[0x10];
            local_b0 = param_2[0x14];
            local_ac = param_2[0x15];
            uStack_a8 = param_2[0x16];
            uStack_a4 = param_2[0x17];
            local_a0 = param_2[0x18];
            local_9c = param_2[0x19];
            local_98 = param_2[0x1a];
            local_94 = param_2[0x1b];
            local_100 = uVar14;
            local_fc = puVar11;
            local_bc = local_1d4;
            local_b8 = uVar17;
            local_b4 = uVar15;
            if ((uVar14 & 1) == 0) {
              local_250 = param_2[2];
              uStack_24c = param_2[3];
              uStack_248 = param_2[4];
              uStack_244 = param_2[5];
              uStack_240 = param_2[6];
              local_23c = param_2[7];
              uStack_238 = param_2[8];
              uStack_234 = param_2[9];
              uStack_230 = param_2[10];
              uStack_22c = param_2[0xb];
              local_228 = param_2[0xc];
              uStack_224 = param_2[0xd];
              uStack_220 = param_2[0xe];
              uStack_21c = param_2[0xf];
              uStack_218 = param_2[0x10];
            }
            else {
              FUN_0192a03c(&local_100);
              local_1d4 = 0x80000000;
              uVar17 = 0;
            }
          }
          uVar19 = param_2[0x39];
          local_210 = local_250;
          uStack_20c = uStack_24c;
          uStack_208 = uStack_248;
          uStack_204 = uStack_244;
          uStack_200 = uStack_240;
          local_1fc = local_23c;
          uStack_1f8 = uStack_238;
          uStack_1f4 = uStack_234;
          uStack_1f0 = uStack_230;
          uStack_1ec = uStack_22c;
          local_1e8 = local_228;
          uStack_1e4 = uStack_224;
          uStack_1e0 = uStack_220;
          uStack_1dc = uStack_21c;
          uStack_1d8 = uStack_218;
          local_1c8 = param_2[0x34];
          uStack_1c4 = param_2[0x35];
          uStack_1c0 = param_2[0x36];
          uStack_1bc = param_2[0x37];
          uStack_1b8 = param_2[0x38];
          local_1b0 = local_2b0;
          uStack_1ac = uStack_2ac;
          uStack_1a8 = uStack_2a8;
          local_1a4 = local_2a4;
          uStack_1a0 = uStack_2a0;
          uStack_19c = uStack_29c;
          uStack_198 = uStack_298;
          local_190 = param_2[0x70];
          uStack_18c = param_2[0x71];
          uStack_188 = param_2[0x72];
          local_180 = param_2[0x24];
          uStack_17c = param_2[0x25];
          uStack_178 = param_2[0x26];
          local_174 = param_2[0x27];
          uStack_170 = param_2[0x28];
          uStack_16c = param_2[0x29];
          uStack_168 = param_2[0x2a];
          uVar14 = param_2[0x6e];
          local_1d0 = uVar17;
          local_1cc = uVar15;
          if (uVar14 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_012fb0cc(&DAT_01d25548);
          }
          uVar17 = param_2[0x6f];
          uVar1 = *(undefined1 *)((int)param_2 + 0x10d);
          FUN_01bed4e2(&local_100,param_2 + 0x4a,0x90);
          FUN_0192710c(param_1,uVar19,uVar16,param_3[1],puVar18,&local_210,&local_1c8,&local_290,
                       iVar4,&local_1b0,&local_190,&local_180,uVar14,uVar17,uVar1,param_4,&local_100
                      );
          FUN_01929e04(param_4);
LAB_019299b8:
          if ((undefined1 *)param_2[0x2b] != &DAT_80000018) {
            FUN_0192a054();
          }
          if ((uVar22 & 1) == 0) {
            if (param_2[0x70] != 0) {
              FUN_018244e0(param_2[0x70],param_2[0x71]);
            }
            if (param_2[0x6e] != 0) {
              FUN_00f80320(param_2[0x6e],param_2[0x6f]);
            }
            FUN_0192a1bc(param_2 + 0x4a);
          }
          goto LAB_01929000;
        }
        uVar15 = *param_2;
        uVar14 = param_2[1];
        if (uVar15 != 2 || uVar14 != 0) {
LAB_01929810:
          local_94 = param_2[0x1b];
          local_98 = param_2[0x1a];
          uVar19 = param_2[0xb];
          local_f8 = param_2[2];
          uStack_f4 = param_2[3];
          local_f0 = param_2[4];
          local_ec = param_2[5];
          local_e8 = param_2[6];
          local_e4 = param_2[7];
          uStack_e0 = param_2[8];
          uStack_dc = param_2[9];
          local_d8 = param_2[10];
          local_d0 = param_2[0xc];
          uStack_cc = param_2[0xd];
          uStack_c8 = param_2[0xe];
          uStack_c4 = param_2[0xf];
          local_c0 = param_2[0x10];
          local_bc = param_2[0x11];
          local_b8 = param_2[0x12];
          local_b4 = param_2[0x13];
          local_b0 = param_2[0x14];
          local_ac = param_2[0x15];
          uStack_a8 = param_2[0x16];
          uStack_a4 = param_2[0x17];
          local_a0 = param_2[0x18];
          local_9c = param_2[0x19];
          if ((uVar15 & 1) == 0) {
            local_100 = uVar15;
            local_fc = (uint *)uVar14;
            local_d4 = uVar19;
            FUN_0192a03c(&local_100);
            uVar19 = 0x80000000;
          }
          else {
            local_128 = param_2[2];
            uStack_124 = param_2[3];
            uStack_120 = param_2[4];
            uStack_11c = param_2[5];
            local_118 = param_2[6];
            uStack_114 = param_2[7];
            uStack_110 = param_2[8];
            uStack_10c = param_2[9];
            uStack_108 = param_2[10];
            local_160 = param_2[0xc];
            uStack_15c = param_2[0xd];
            uStack_158 = param_2[0xe];
            uStack_154 = param_2[0xf];
            local_150 = param_2[0x10];
            uStack_14c = param_2[0x11];
            uStack_148 = param_2[0x12];
            uStack_144 = param_2[0x13];
            uStack_140 = param_2[0x14];
            local_13c = param_2[0x15];
            uStack_138 = param_2[0x16];
            uStack_134 = param_2[0x17];
            uStack_130 = param_2[0x18];
            uStack_12c = param_2[0x19];
          }
LAB_019298f0:
          local_60 = param_2[0x39];
          local_5c = param_2[0x34];
          uStack_58 = param_2[0x35];
          uStack_54 = param_2[0x36];
          uStack_50 = param_2[0x37];
          uStack_4c = param_2[0x38];
          local_2c = (undefined1)param_2[0x43];
          local_48 = local_2b0;
          uStack_44 = uStack_2ac;
          uStack_40 = uStack_2a8;
          local_3c = local_2a4;
          uStack_38 = uStack_2a0;
          uStack_34 = uStack_29c;
          uStack_30 = uStack_298;
          local_c0 = local_128;
          local_bc = uStack_124;
          local_b8 = uStack_120;
          local_b4 = uStack_11c;
          local_b0 = local_118;
          local_ac = uStack_114;
          uStack_a8 = uStack_110;
          uStack_a4 = uStack_10c;
          local_a0 = uStack_108;
          local_98 = local_160;
          local_94 = uStack_15c;
          uStack_90 = uStack_158;
          uStack_8c = uStack_154;
          local_88 = local_150;
          uStack_84 = uStack_14c;
          uStack_80 = uStack_148;
          uStack_7c = uStack_144;
          uStack_78 = uStack_140;
          local_74 = local_13c;
          uStack_70 = uStack_138;
          uStack_6c = uStack_134;
          uStack_68 = uStack_130;
          uStack_64 = uStack_12c;
          local_100 = local_290;
          local_fc = puStack_28c;
          local_f8 = uStack_288;
          uStack_f4 = uStack_284;
          local_f0 = local_280;
          local_ec = local_27c;
          local_e8 = uStack_278;
          local_e4 = uStack_274;
          uStack_e0 = local_270;
          uStack_dc = uStack_26c;
          local_d8 = local_268;
          local_d4 = uStack_264;
          local_d0 = local_260;
          uStack_cc = uStack_25c;
          uStack_c8 = uStack_258;
          uStack_c4 = uStack_254;
          local_9c = uVar19;
          FUN_01914544(param_1,&local_100,uVar16,iVar4,puVar18,uVar17 & 1);
          FUN_01929e04(param_4);
          FUN_01925dc4(param_2 + 0x24);
          goto LAB_019299b8;
        }
        uVar19 = 0x80000000;
        if (param_2[0x42] == 0) goto LAB_019298f0;
        iVar10 = FUN_018ed954(param_2 + 0x3a,puVar18 + 0xd);
        if (iVar10 == 0) {
          uVar15 = *param_2;
          uVar14 = param_2[1];
          if (uVar15 != 2 || uVar14 != 0) goto LAB_01929810;
          goto LAB_019298f0;
        }
        local_88 = CONCAT22(local_88._2_2_,4);
        local_fc = (uint *)0xd0001;
        local_100 = 0x80000001;
        FUN_018f1fc4(uVar16,&local_100,*(char *)(uVar16 + 0x31) == '\x02');
        *(undefined1 *)(param_1 + 1) = 0x39;
        *param_1 = (uint)&DAT_8000001c;
        *(undefined1 *)(uVar16 + 0x255) = 1;
        FUN_01902274(&local_2b0);
        bVar20 = false;
      }
      else {
        local_88 = CONCAT22(local_88._2_2_,4);
        local_fc = (uint *)0x1a0001;
        local_100 = 0x80000001;
        FUN_018f1fc4(uVar16,&local_100,*(char *)(uVar16 + 0x31) == '\x02');
        uVar1 = 0x48;
LAB_01929494:
        *(undefined1 *)(param_1 + 1) = uVar1;
        *param_1 = (uint)&DAT_8000001c;
LAB_019294a0:
        bVar20 = true;
        *(undefined1 *)(uVar16 + 0x255) = 1;
      }
    }
    else {
      uVar17 = *param_3;
      local_88 = CONCAT22(local_88._2_2_,4);
      local_fc = (uint *)0xd0001;
      local_100 = 0x80000001;
      FUN_018f1fc4(uVar17,&local_100,*(char *)(uVar17 + 0x31) == '\x02');
      uVar1 = 0x35;
LAB_019291a8:
      *(undefined1 *)(param_1 + 1) = uVar1;
      bVar20 = true;
      *param_1 = (uint)&DAT_8000001c;
      *(undefined1 *)(uVar17 + 0x255) = 1;
    }
  }
  else {
    FUN_0191d9a0(&local_100,param_4,&DAT_0052389f,1,&DAT_0052389f,1);
    puVar11 = &local_f8;
    puVar13 = &local_210;
    local_210 = local_f8;
    uStack_20c = uStack_f4;
    uStack_208 = local_f0;
    uStack_204 = local_ec;
    uStack_200 = local_e8;
    local_1fc = local_e4;
    puVar18 = local_fc;
    if (local_100 == 0x80000029) goto LAB_01928e50;
    param_1[2] = local_f8;
    param_1[3] = uStack_f4;
    param_1[4] = local_f0;
    param_1[5] = local_ec;
    param_1[6] = local_e8;
    param_1[7] = local_e4;
    *param_1 = local_100;
    param_1[1] = (uint)local_fc;
LAB_01928fa4:
    bVar20 = true;
  }
LAB_01928fac:
  FUN_01929e04(param_4);
  FUN_0192a2cc(param_2);
  if (bVar20) {
    FUN_0134bd64(param_2[0x46],param_2[0x47]);
  }
  if (param_2[0x70] != 0) {
    FUN_018244e0(param_2[0x70],param_2[0x71]);
  }
  if (param_2[0x6e] != 0) {
    FUN_00f80320(param_2[0x6e],param_2[0x6f]);
  }
  FUN_0192a1bc(param_2 + 0x4a);
LAB_01929000:
  thunk_FUN_01be4678(param_2);
  return;
}

