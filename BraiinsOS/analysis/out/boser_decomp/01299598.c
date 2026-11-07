// FUN_01299598 @ 01299598 size=1664 calls_out=12 calls_in=4
// strings: 

void FUN_01299598(uint *param_1,undefined4 *param_2,uint param_3)

{
  undefined1 uVar1;
  undefined8 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  undefined4 uVar14;
  undefined4 uVar15;
  undefined4 *puVar16;
  undefined4 extraout_r1;
  undefined4 uVar17;
  undefined4 uVar18;
  uint uVar19;
  undefined4 uVar20;
  uint uVar21;
  int iVar22;
  int iVar23;
  undefined4 uVar24;
  undefined4 *puVar25;
  undefined4 uVar26;
  undefined4 uVar27;
  undefined8 uVar28;
  uint local_280;
  uint local_27c;
  uint local_250;
  undefined8 uStack_24c;
  uint uStack_244;
  undefined8 uStack_240;
  undefined4 local_238;
  undefined4 uStack_234;
  undefined4 uStack_230;
  undefined4 local_228;
  undefined4 uStack_224;
  undefined4 uStack_220;
  undefined4 local_218;
  undefined4 uStack_214;
  undefined4 uStack_210;
  undefined4 local_208;
  undefined4 uStack_204;
  undefined4 uStack_200;
  undefined4 local_1f8;
  undefined4 uStack_1f4;
  undefined4 uStack_1f0;
  undefined4 local_1e8;
  undefined4 uStack_1e4;
  undefined4 uStack_1e0;
  undefined4 local_1d8;
  undefined4 uStack_1d4;
  undefined4 uStack_1d0;
  undefined4 local_1c8;
  undefined4 uStack_1c4;
  undefined4 uStack_1c0;
  undefined4 local_1b8;
  undefined4 uStack_1b4;
  undefined4 uStack_1b0;
  undefined4 local_1a8;
  undefined4 uStack_1a4;
  undefined4 uStack_1a0;
  undefined4 local_198;
  undefined4 uStack_194;
  undefined4 uStack_190;
  undefined4 local_188;
  undefined4 uStack_184;
  undefined4 uStack_180;
  undefined4 local_178;
  undefined4 uStack_174;
  undefined4 uStack_170;
  undefined4 local_168;
  undefined4 uStack_164;
  undefined4 uStack_160;
  undefined4 local_158;
  undefined4 uStack_154;
  undefined4 uStack_150;
  undefined4 local_148;
  undefined4 uStack_144;
  undefined4 uStack_140;
  uint local_138;
  undefined8 local_134;
  undefined4 local_128;
  undefined4 uStack_124;
  undefined4 uStack_120;
  undefined4 local_118;
  undefined4 uStack_114;
  undefined4 uStack_110;
  undefined4 local_108;
  undefined4 uStack_104;
  undefined4 uStack_100;
  undefined4 local_f8;
  undefined4 uStack_f4;
  undefined4 uStack_f0;
  undefined4 local_e8;
  undefined4 uStack_e4;
  undefined4 uStack_e0;
  undefined4 local_d8;
  undefined4 uStack_d4;
  undefined4 uStack_d0;
  undefined4 local_c8;
  undefined4 uStack_c4;
  undefined4 uStack_c0;
  undefined4 local_b8;
  undefined4 uStack_b4;
  undefined4 uStack_b0;
  undefined4 local_a8;
  undefined4 uStack_a4;
  undefined4 uStack_a0;
  undefined4 local_98;
  undefined4 uStack_94;
  undefined4 uStack_90;
  undefined4 local_88;
  undefined4 uStack_84;
  undefined4 uStack_80;
  undefined4 local_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 local_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  uint local_48;
  undefined8 uStack_44;
  uint local_30;
  undefined8 uStack_2c;
  
  iVar22 = param_3 * 0x134;
  uVar18 = 0;
  if (0x6a63bd < param_3) {
LAB_012995c8:
                    /* WARNING: Subroutine does not return */
    FUN_00664620(uVar18,iVar22);
  }
  if (iVar22 == 0) {
    local_27c = 4;
    local_280 = 0;
  }
  else {
    uVar18 = 4;
    uVar28 = FUN_01298504(iVar22,4);
    uVar15 = (undefined4)((ulonglong)uVar28 >> 0x20);
    local_27c = (uint)uVar28;
    if (local_27c == 0) goto LAB_012995c8;
    iVar23 = 0;
    local_280 = param_3;
    if (param_3 != 0) {
      uVar21 = 0;
      puVar25 = param_2;
      uVar28 = CONCAT44(uStack_2c._4_4_,(undefined4)uStack_2c);
      uStack_44 = CONCAT44(uStack_44._4_4_,(undefined4)uStack_44);
      uVar2 = CONCAT44(uStack_24c._4_4_,(undefined4)uStack_24c);
      uStack_240 = CONCAT44(uStack_240._4_4_,(undefined4)uStack_240);
      do {
        if (iVar22 == iVar23) break;
        uVar18 = puVar25[0x45];
        uVar26 = puVar25[0x46];
        uStack_2c = uVar28;
        uStack_24c = uVar2;
        if (puVar25[0x3f] == -0x80000000) {
          local_158 = 0x80000000;
        }
        else {
          FUN_006666fc(&local_158,*(undefined4 *)((int)param_2 + iVar23 + 0x100),
                       *(undefined4 *)((int)param_2 + iVar23 + 0x104));
          uVar15 = extraout_r1;
        }
        if (puVar25[0x42] == -0x80000000) {
          uVar28 = CONCAT44(uVar15,0x80000000);
          local_148 = 0x80000000;
        }
        else {
          uVar28 = FUN_006666fc(&local_148,*(undefined4 *)((int)param_2 + iVar23 + 0x10c),
                                *(undefined4 *)((int)param_2 + iVar23 + 0x110));
        }
        uVar19 = puVar25[10];
        uVar1 = *(undefined1 *)(puVar25 + 0x4c);
        if (uVar19 == 5) {
          local_138 = 5;
          uVar28 = local_134;
        }
        else {
          if (3 < uVar19) {
            uVar28 = (**(code **)(*(int *)((int)param_2 + iVar23 + 0x30) + 0x1c))
                               (*(undefined4 *)((int)param_2 + iVar23 + 0x2c));
          }
          local_138 = uVar19;
        }
        local_134 = uVar28;
        FUN_012993c4(&local_128,puVar25[0x10],puVar25[0x11]);
        uVar20 = puVar25[0x47];
        FUN_012993c4(&local_118,puVar25[0x13],puVar25[0x14]);
        FUN_012993c4(&local_108,puVar25[0x16],puVar25[0x17]);
        FUN_012994e4(&local_f8,puVar25[0x19],puVar25[0x1a]);
        FUN_01299174(&local_e8,puVar25[0x1c],puVar25[0x1d]);
        FUN_01299174(&local_d8,puVar25[0x1f],puVar25[0x20]);
        FUN_012993c4(&local_c8,puVar25[0x22],puVar25[0x23]);
        FUN_012993c4(&local_b8,puVar25[0x25],puVar25[0x26]);
        uVar3 = puVar25[0xd];
        uVar4 = puVar25[0x48];
        uVar5 = puVar25[0x49];
        FUN_01299e64(&local_a8,puVar25[0x28],puVar25[0x29]);
        FUN_016c0ed4(&local_98,puVar25[0x2b],puVar25[0x2c]);
        uVar17 = *puVar25;
        uVar6 = puVar25[1];
        FUN_01299f10(&local_88,puVar25[0x2e],puVar25[0x2f]);
        uVar7 = puVar25[2];
        uVar8 = puVar25[3];
        uVar9 = puVar25[4];
        uVar10 = puVar25[0xe];
        FUN_01299f10(&local_78,puVar25[0x31],puVar25[0x32]);
        FUN_01299228(&local_68,puVar25[0x34],puVar25[0x35]);
        FUN_01299f10(&local_58,puVar25[0x37],puVar25[0x38]);
        uVar11 = puVar25[6];
        uVar12 = puVar25[7];
        uVar13 = puVar25[8];
        uVar14 = puVar25[0x4a];
        uVar15 = puVar25[0x4b];
        uVar27 = puVar25[5];
        uVar24 = puVar25[9];
        FUN_01299fb0(&local_30,puVar25[0x3a],puVar25[0x3b]);
        FUN_0129a030(&local_250,puVar25[0x3d],puVar25[0x3e]);
        uVar19 = local_30;
        uStack_244 = local_250;
        uVar21 = uVar21 + 1;
        puVar25 = puVar25 + 0x4d;
        local_48 = local_30;
        local_30 = local_138;
        local_168 = local_128;
        uStack_164 = uStack_124;
        uStack_160 = uStack_120;
        local_178 = local_118;
        uStack_174 = uStack_114;
        uStack_170 = uStack_110;
        local_188 = local_108;
        uStack_184 = uStack_104;
        uStack_180 = uStack_100;
        local_198 = local_f8;
        uStack_194 = uStack_f4;
        uStack_190 = uStack_f0;
        local_1a8 = local_e8;
        uStack_1a4 = uStack_e4;
        uStack_1a0 = uStack_e0;
        local_1b8 = local_d8;
        uStack_1b4 = uStack_d4;
        uStack_1b0 = uStack_d0;
        local_1c8 = local_c8;
        uStack_1c4 = uStack_c4;
        uStack_1c0 = uStack_c0;
        local_1d8 = local_b8;
        uStack_1d4 = uStack_b4;
        uStack_1d0 = uStack_b0;
        local_1e8 = local_a8;
        uStack_1e4 = uStack_a4;
        uStack_1e0 = uStack_a0;
        local_1f8 = local_98;
        uStack_1f4 = uStack_94;
        uStack_1f0 = uStack_90;
        local_208 = local_88;
        uStack_204 = uStack_84;
        uStack_200 = uStack_80;
        local_218 = local_78;
        uStack_214 = uStack_74;
        uStack_210 = uStack_70;
        local_228 = local_68;
        uStack_224 = uStack_64;
        uStack_220 = uStack_60;
        local_238 = local_58;
        uStack_234 = uStack_54;
        uStack_230 = uStack_50;
        local_250 = uVar19;
        puVar16 = (undefined4 *)(local_27c + iVar23);
        *puVar16 = uVar17;
        puVar16[1] = uVar6;
        puVar16[2] = uVar7;
        puVar16[3] = uVar8;
        puVar16[4] = uVar9;
        puVar16[6] = uVar11;
        puVar16[7] = uVar12;
        puVar16[8] = uVar13;
        puVar16[9] = uVar24;
        puVar16[5] = uVar27;
        puVar16[10] = local_138;
        *(undefined8 *)(puVar16 + 0xb) = local_134;
        puVar16[0xd] = uVar3;
        puVar16[0xe] = uVar10;
        puVar16[0xf] = local_128;
        puVar16[0x10] = uStack_124;
        puVar16[0x11] = uStack_120;
        puVar16[0x12] = local_118;
        puVar16[0x13] = uStack_114;
        puVar16[0x14] = uStack_110;
        puVar16[0x15] = local_108;
        puVar16[0x16] = uStack_104;
        puVar16[0x17] = uStack_100;
        puVar16[0x18] = local_f8;
        puVar16[0x19] = uStack_f4;
        puVar16[0x1a] = uStack_f0;
        puVar16[0x1b] = local_e8;
        puVar16[0x1c] = uStack_e4;
        puVar16[0x1d] = uStack_e0;
        puVar16[0x1e] = local_d8;
        puVar16[0x1f] = uStack_d4;
        puVar16[0x20] = uStack_d0;
        puVar16[0x21] = local_c8;
        puVar16[0x22] = uStack_c4;
        puVar16[0x23] = uStack_c0;
        puVar16[0x24] = local_b8;
        puVar16[0x25] = uStack_b4;
        puVar16[0x26] = uStack_b0;
        puVar16[0x27] = local_a8;
        puVar16[0x28] = uStack_a4;
        puVar16[0x29] = uStack_a0;
        puVar16[0x2a] = local_98;
        puVar16[0x2b] = uStack_94;
        puVar16[0x2c] = uStack_90;
        puVar16[0x2d] = local_88;
        puVar16[0x2e] = uStack_84;
        puVar16[0x2f] = uStack_80;
        puVar16[0x30] = local_78;
        puVar16[0x31] = uStack_74;
        puVar16[0x32] = uStack_70;
        puVar16[0x33] = local_68;
        puVar16[0x34] = uStack_64;
        puVar16[0x35] = uStack_60;
        puVar16[0x36] = local_58;
        puVar16[0x37] = uStack_54;
        puVar16[0x38] = uStack_50;
        puVar16[0x39] = uVar19;
        *(undefined8 *)(puVar16 + 0x3a) = uStack_2c;
        puVar16[0x3c] = uStack_244;
        *(undefined8 *)(puVar16 + 0x3d) = uStack_24c;
        puVar16[0x3f] = local_158;
        puVar16[0x40] = uStack_154;
        puVar16[0x41] = uStack_150;
        puVar16[0x42] = local_148;
        puVar16[0x43] = uStack_144;
        puVar16[0x44] = uStack_140;
        iVar23 = iVar23 + 0x134;
        *(undefined1 *)(puVar16 + 0x4c) = uVar1;
        puVar16[0x45] = uVar18;
        puVar16[0x46] = uVar26;
        puVar16[0x47] = uVar20;
        puVar16[0x48] = uVar4;
        puVar16[0x49] = uVar5;
        puVar16[0x4a] = uVar14;
        puVar16[0x4b] = uVar15;
        uVar28 = local_134;
        uStack_44 = uStack_2c;
        uVar2 = uStack_2c;
        uStack_240 = uStack_24c;
      } while (param_3 != uVar21);
    }
  }
  *param_1 = local_280;
  param_1[1] = local_27c;
  param_1[2] = param_3;
  return;
}

