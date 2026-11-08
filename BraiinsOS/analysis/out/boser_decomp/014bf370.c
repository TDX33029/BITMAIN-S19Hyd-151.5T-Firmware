// FUN_014bf370 @ 014bf370 size=2100 calls_out=4 calls_in=2
// strings: 

/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_014bf370(int *param_1,undefined4 *param_2)

{
  undefined1 uVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  uint *puVar6;
  int iVar7;
  uint uVar8;
  uint uVar9;
  uint *puVar10;
  uint uVar11;
  uint uVar12;
  uint uVar13;
  uint *puVar14;
  uint *puVar15;
  uint *puVar16;
  uint local_234;
  uint local_230;
  uint local_22c;
  uint local_228;
  uint local_224;
  uint local_1f8;
  uint local_1f4;
  uint local_1f0;
  uint local_1ec;
  uint local_1e8;
  uint local_1e4;
  uint local_1e0;
  uint local_1dc;
  uint local_1d8;
  uint local_1c0;
  uint uStack_1bc;
  uint uStack_1b8;
  uint local_1b0;
  uint local_1ac;
  uint local_1a8;
  uint local_1a4;
  uint local_1a0;
  uint local_19c;
  uint local_198;
  uint local_194;
  uint local_190;
  uint local_18c;
  uint local_188;
  uint local_184;
  uint local_180;
  uint local_17c;
  uint uStack_178;
  uint uStack_174;
  uint local_170;
  uint local_16c;
  uint local_158;
  uint uStack_154;
  uint uStack_150;
  uint uStack_14c;
  uint uStack_148;
  uint uStack_144;
  uint local_140;
  uint uStack_13c;
  uint uStack_138;
  uint uStack_134;
  uint uStack_130;
  uint uStack_12c;
  uint local_128;
  uint uStack_124;
  uint uStack_120;
  uint uStack_11c;
  uint uStack_118;
  uint local_114;
  uint local_110;
  uint uStack_10c;
  uint uStack_108;
  uint uStack_104;
  int local_100;
  int local_fc;
  uint uStack_bc;
  uint local_b8;
  uint uStack_b4;
  uint uStack_b0;
  uint uStack_ac;
  uint local_a8;
  uint local_a4;
  uint uStack_a0;
  uint local_9c;
  uint uStack_98;
  uint uStack_94;
  uint local_90;
  uint local_8c;
  uint local_88;
  uint local_84;
  uint local_80;
  uint local_7c;
  uint local_78;
  uint local_74;
  uint uStack_70;
  uint uStack_6c;
  uint uStack_68;
  undefined1 local_64;
  uint local_60;
  uint uStack_5c;
  uint uStack_58;
  uint uStack_54;
  uint uStack_50;
  uint local_4c;
  uint local_48;
  uint uStack_44;
  uint uStack_40;
  uint uStack_3c;
  uint uStack_38;
  uint uStack_34;
  uint local_30;
  uint uStack_2c;
  uint uStack_28;
  
  if (param_2[1] == 0) {
    *param_1 = (int)&DAT_0056d238;
    param_1[1] = 0;
    param_1[2] = 0;
    param_1[3] = 0;
  }
  else {
    FUN_019790d4(&local_100,0xe8,4,param_2[1] + 1);
    puVar10 = (uint *)*param_2;
    FUN_01bed4e2(local_100,puVar10,local_fc + 5);
    iVar3 = param_2[3];
    if (iVar3 != 0) {
      puVar16 = puVar10 + 1;
      uVar8 = ~*puVar10 & 0x80808080;
      puVar6 = (uint *)((uint)&local_1b0 | 4);
      iVar7 = iVar3;
      puVar14 = puVar10;
      do {
        puVar15 = puVar16;
        if (uVar8 == 0) {
          do {
            puVar16 = puVar15 + 1;
            uVar8 = *puVar15;
            puVar14 = puVar14 + -0xe8;
            puVar15 = puVar16;
          } while ((uVar8 & 0x80808080) == 0x80808080);
          uVar8 = uVar8 & 0x80808080 ^ 0x80808080;
        }
        puVar15 = puVar14 + (short)-(short)((uint)LZCOUNT(uVar8 << 0x18 |
                                                          (uVar8 >> 8 & 0xff) << 0x10 |
                                                          (uVar8 >> 0x10 & 0xff) << 8 |
                                                          uVar8 >> 0x18) >> 3) * 0x3a;
        iVar4 = 2;
        uVar9 = puVar15[-0x39];
        uVar2 = puVar15[-0x3a];
        uVar1 = *(undefined1 *)((int)puVar15 + -0xe7);
        if (2 < uVar9) {
          iVar4 = uVar9 - 3;
        }
        if (iVar4 == 0) {
          uVar9 = 3;
        }
        else if (iVar4 == 1) {
          uVar9 = 4;
        }
        else {
          if (uVar9 == 2) {
            FUN_006666fc(&uStack_98,puVar15[-0x33],puVar15[-0x32]);
            local_88 = puVar15[-0x30];
            local_84 = puVar15[-0x2f];
            local_80 = puVar15[-0x2e];
            local_7c = puVar15[-0x2d];
            local_74 = puVar15[-0x2b];
            uStack_70 = puVar15[-0x2a];
            uStack_6c = puVar15[-0x29];
            uStack_68 = puVar15[-0x28];
            local_64 = (undefined1)puVar15[-0x27];
            local_78 = puVar15[-0x2c];
            local_8c = puVar15[-0x31];
            local_a8 = puVar15[-0x38];
            local_a4 = puVar15[-0x37];
            uStack_a0 = puVar15[-0x36];
            local_9c = puVar15[-0x35];
            uVar11 = puVar15[-0x22];
            local_1dc = 2;
            if (uVar11 != 2) {
              FUN_006666fc(&local_1a0,puVar15[-0x1d],puVar15[-0x1c]);
              local_190 = puVar15[-0x1a];
              local_18c = puVar15[-0x19];
              local_188 = puVar15[-0x18];
              local_184 = puVar15[-0x17];
              uStack_44 = puVar15[-0x15];
              uStack_40 = puVar15[-0x14];
              uStack_3c = puVar15[-0x13];
              local_230 = puVar15[-0x12];
              local_16c = CONCAT31(local_16c._1_3_,(char)puVar15[-0x11]);
              local_1ac = puVar15[-0x21];
              local_1a8 = puVar15[-0x20];
              local_1a4 = puVar15[-0x1f];
              local_194 = puVar15[-0x1b];
              local_180 = puVar15[-0x16];
              local_158 = *puVar6;
              uStack_154 = puVar6[1];
              uStack_150 = puVar6[2];
              local_228 = local_1a0;
              local_224 = local_19c;
              local_60 = local_198;
              local_22c = local_16c;
              local_1dc = uVar11;
              local_1b0 = uVar11;
              local_170 = local_230;
              uStack_5c = local_194;
              uStack_58 = local_190;
              uStack_54 = local_18c;
              uStack_50 = local_188;
              local_4c = local_184;
              local_48 = local_180;
              local_17c = uStack_44;
              uStack_178 = uStack_40;
              uStack_174 = uStack_3c;
            }
            uVar11 = puVar15[-0x26];
            if (uVar11 == 1) {
              FUN_0196172c(puVar6,puVar15 + -0x25);
            }
            local_1b0 = (uint)(uVar11 == 1);
            uStack_b4 = local_1ac;
            uStack_b0 = local_1a8;
            uStack_ac = local_1a4;
            local_b8 = local_1b0;
            FUN_01bed4e2(&local_100,&local_a8,0x48);
            local_30 = local_158;
            uStack_2c = uStack_154;
            uStack_28 = uStack_150;
            local_128 = local_60;
            uStack_124 = uStack_5c;
            uStack_120 = uStack_58;
            uStack_11c = uStack_54;
            uStack_118 = uStack_50;
            local_114 = local_4c;
            local_110 = local_48;
            uStack_10c = uStack_44;
            uStack_108 = uStack_40;
            uStack_104 = uStack_3c;
            local_1e0 = local_22c;
            local_1d8 = local_230;
            local_1e4 = local_224;
            local_1e8 = local_228;
          }
          else {
            FUN_006666fc(&uStack_98,puVar15[-0x34],puVar15[-0x33]);
            local_84 = puVar15[-0x30];
            local_80 = puVar15[-0x2f];
            local_88 = puVar15[-0x31];
            local_7c = puVar15[-0x2e];
            local_74 = puVar15[-0x2c];
            uStack_70 = puVar15[-0x2b];
            uStack_6c = puVar15[-0x2a];
            uStack_68 = puVar15[-0x29];
            local_64 = (undefined1)puVar15[-0x28];
            local_a4 = puVar15[-0x38];
            uStack_a0 = puVar15[-0x37];
            local_9c = puVar15[-0x36];
            local_8c = puVar15[-0x32];
            local_78 = puVar15[-0x2d];
            uVar11 = puVar15[-0x12];
            local_1d8 = 2;
            local_a8 = uVar9;
            if (uVar11 != 2) {
              FUN_006666fc(&local_1a0,puVar15[-0xd],puVar15[-0xc]);
              local_18c = puVar15[-9];
              local_188 = puVar15[-8];
              local_184 = puVar15[-7];
              local_190 = puVar15[-10];
              uStack_44 = puVar15[-5];
              uStack_40 = puVar15[-4];
              uStack_3c = puVar15[-3];
              local_170 = puVar15[-2];
              local_16c = CONCAT31(local_16c._1_3_,(char)puVar15[-1]);
              local_1f4 = puVar15[-0x10];
              local_234 = puVar15[-0x11];
              local_180 = puVar15[-6];
              local_1f8 = puVar15[-0xf];
              local_194 = puVar15[-0xb];
              local_1ec = local_1a0;
              local_1f0 = local_19c;
              local_60 = local_198;
              uStack_34 = local_16c;
              local_1d8 = uVar11;
              local_1b0 = uVar11;
              local_1ac = local_234;
              local_1a8 = local_1f4;
              local_1a4 = local_1f8;
              uStack_5c = local_194;
              uStack_58 = local_190;
              uStack_54 = local_18c;
              uStack_50 = local_188;
              local_4c = local_184;
              local_48 = local_180;
              uStack_38 = local_170;
              local_17c = uStack_44;
              uStack_178 = uStack_40;
              uStack_174 = uStack_3c;
            }
            uVar13 = puVar15[-0x27];
            uVar12 = puVar15[-0x26];
            uVar11 = puVar15[-0x17];
            if (puVar15[-0x25] == 0x80000000) {
              local_30 = 0x80000000;
            }
            else {
              FUN_006666fc(&local_30,puVar15[-0x24],puVar15[-0x23]);
            }
            if (puVar15[-0x22] == 0x80000000) {
              local_158 = 0x80000000;
            }
            else {
              FUN_006666fc(&local_158,puVar15[-0x21],puVar15[-0x20]);
            }
            local_190 = puVar15[-0x1f];
            local_18c = puVar15[-0x1e];
            local_188 = puVar15[-0x1d];
            local_184 = puVar15[-0x1c];
            local_180 = puVar15[-0x1b];
            local_17c = puVar15[-0x1a];
            uStack_178 = puVar15[-0x19];
            uStack_174 = puVar15[-0x18];
            local_1a8 = local_30;
            local_1a4 = uStack_2c;
            local_1a0 = uStack_28;
            local_19c = local_158;
            local_198 = uStack_154;
            local_194 = uStack_150;
            uVar5 = puVar15[-0x16];
            local_1b0 = uVar13;
            local_1ac = uVar12;
            local_170 = uVar11;
            if (uVar5 == 1) {
              FUN_0196172c((uint)&local_158 | 4,puVar15 + -0x15);
            }
            local_158 = (uint)(uVar5 == 1);
            uStack_10c = uStack_154;
            uStack_108 = uStack_150;
            uStack_104 = uStack_14c;
            local_110 = local_158;
            FUN_01bed4e2(&local_100,&local_a4,0x44);
            local_158 = local_60;
            uStack_154 = uStack_5c;
            uStack_150 = uStack_58;
            uStack_14c = uStack_54;
            uStack_148 = uStack_50;
            uStack_144 = local_4c;
            local_140 = local_48;
            uStack_13c = uStack_44;
            uStack_138 = uStack_40;
            uStack_134 = uStack_3c;
            uStack_130 = uStack_38;
            uStack_12c = uStack_34;
            uStack_bc = local_1b0;
            local_b8 = local_1ac;
            uStack_b4 = local_1a8;
            uStack_b0 = local_1a4;
            uStack_ac = local_1a0;
            local_1dc = local_19c;
            local_30 = local_198;
            uStack_2c = local_194;
            uStack_28 = local_190;
            local_1e8 = local_18c;
            local_1e4 = local_188;
            local_128 = local_184;
            uStack_124 = local_180;
            uStack_120 = local_17c;
            uStack_11c = uStack_178;
            uStack_118 = uStack_174;
            local_114 = local_170;
            local_1e0 = local_234;
          }
          FUN_01bed4e2(&local_1b0,&local_100,0x58);
          local_1c0 = local_30;
          uStack_1bc = uStack_2c;
          uStack_1b8 = uStack_28;
          local_60 = local_128;
          uStack_5c = uStack_124;
          uStack_58 = uStack_120;
          uStack_54 = uStack_11c;
          uStack_50 = uStack_118;
          local_4c = local_114;
          local_48 = local_110;
          uStack_44 = uStack_10c;
          uStack_40 = uStack_108;
          uStack_3c = uStack_104;
          local_a8 = local_158;
          local_a4 = uStack_154;
          uStack_a0 = uStack_150;
          local_9c = uStack_14c;
          uStack_98 = uStack_148;
          uStack_94 = uStack_144;
          local_90 = local_140;
          local_8c = uStack_13c;
          local_88 = uStack_138;
          local_84 = uStack_134;
          local_80 = uStack_130;
          local_7c = uStack_12c;
        }
        uVar8 = uVar8 - 1 & uVar8;
        iVar7 = iVar7 + -1;
        iVar4 = ((int)puVar10 - (int)puVar15 >> 3) * -8 + local_100;
        *(uint *)(iVar4 + -0xe4) = uVar9;
        *(undefined1 *)(iVar4 + -0xe7) = uVar1;
        *(char *)(iVar4 + -0xe8) = (char)uVar2;
        FUN_01bed4e2(iVar4 + -0xe0,&local_1b0,0x58);
        *(uint *)(iVar4 + -0x88) = local_1dc;
        *(uint *)(iVar4 + -0x84) = local_1c0;
        *(uint *)(iVar4 + -0x80) = uStack_1bc;
        *(uint *)(iVar4 + -0x7c) = uStack_1b8;
        *(uint *)(iVar4 + -0x78) = local_1e8;
        *(uint *)(iVar4 + -0x74) = local_1e4;
        *(uint *)(iVar4 + -0x70) = local_60;
        *(uint *)(iVar4 + -0x6c) = uStack_5c;
        *(uint *)(iVar4 + -0x68) = uStack_58;
        *(uint *)(iVar4 + -100) = uStack_54;
        *(uint *)(iVar4 + -0x60) = uStack_50;
        *(uint *)(iVar4 + -0x5c) = local_4c;
        *(uint *)(iVar4 + -0x58) = local_48;
        *(uint *)(iVar4 + -0x54) = uStack_44;
        *(uint *)(iVar4 + -0x50) = uStack_40;
        *(uint *)(iVar4 + -0x4c) = uStack_3c;
        *(uint *)(iVar4 + -0x48) = local_1d8;
        *(uint *)(iVar4 + -0x44) = local_1e0;
        *(uint *)(iVar4 + -0x40) = local_1f4;
        *(uint *)(iVar4 + -0x3c) = local_1f8;
        *(uint *)(iVar4 + -0x38) = local_1ec;
        *(uint *)(iVar4 + -0x34) = local_1f0;
        *(uint *)(iVar4 + -0x30) = local_a8;
        *(uint *)(iVar4 + -0x2c) = local_a4;
        *(uint *)(iVar4 + -0x28) = uStack_a0;
        *(uint *)(iVar4 + -0x24) = local_9c;
        *(uint *)(iVar4 + -0x20) = uStack_98;
        *(uint *)(iVar4 + -0x1c) = uStack_94;
        *(uint *)(iVar4 + -0x18) = local_90;
        *(uint *)(iVar4 + -0x14) = local_8c;
        *(uint *)(iVar4 + -0x10) = local_88;
        *(uint *)(iVar4 + -0xc) = local_84;
        *(uint *)(iVar4 + -8) = local_80;
        *(uint *)(iVar4 + -4) = local_7c;
      } while (iVar7 != 0);
    }
    iVar7 = param_2[2];
    *param_1 = local_100;
    param_1[1] = local_fc;
    param_1[2] = iVar7;
    param_1[3] = iVar3;
  }
  return;
}

