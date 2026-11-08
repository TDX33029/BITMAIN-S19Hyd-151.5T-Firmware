// FUN_013e4770 @ 013e4770 size=1768 calls_out=14 calls_in=3
// strings: 

/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_013e4770(uint *param_1,ushort *param_2,uint param_3)

{
  byte bVar1;
  ushort uVar2;
  ushort uVar3;
  uint uVar4;
  ushort uVar5;
  uint uVar6;
  undefined2 uVar7;
  undefined2 uVar8;
  undefined2 uVar9;
  uint uVar10;
  uint uVar11;
  uint uVar12;
  uint uVar13;
  ushort uVar14;
  uint uVar15;
  uint uVar16;
  ushort uVar17;
  ushort uVar18;
  uint uVar19;
  undefined2 uVar20;
  uint uVar21;
  uint uVar22;
  uint local_1e0;
  ushort *local_198;
  uint local_194;
  ushort *local_190;
  int local_18c;
  uint local_188;
  uint local_184;
  uint local_180;
  uint local_178;
  uint uStack_174;
  uint uStack_170;
  undefined4 uStack_154;
  undefined4 local_150;
  undefined4 uStack_14c;
  undefined4 uStack_148;
  undefined4 uStack_144;
  undefined4 uStack_140;
  ushort local_138;
  undefined2 local_136;
  undefined4 local_134;
  undefined4 local_130;
  uint uStack_12c;
  uint uStack_128;
  uint uStack_124;
  uint uStack_120;
  undefined4 local_11c;
  uint uStack_118;
  uint uStack_114;
  uint uStack_110;
  undefined4 uStack_10c;
  undefined4 local_108;
  undefined4 uStack_104;
  undefined4 uStack_100;
  undefined4 uStack_fc;
  undefined4 uStack_f8;
  undefined2 local_f0;
  undefined2 local_ee;
  uint local_e8;
  uint uStack_e4;
  uint uStack_e0;
  uint local_d8;
  uint uStack_d4;
  uint uStack_d0;
  undefined2 local_cc;
  uint local_c8;
  uint uStack_c4;
  uint uStack_c0;
  undefined1 local_b8 [8];
  uint local_b0;
  uint local_ac;
  uint uStack_a8;
  uint uStack_a4;
  uint local_a0;
  undefined4 local_9c;
  uint uStack_98;
  uint uStack_94;
  uint uStack_90;
  undefined4 uStack_8c;
  undefined4 local_88;
  undefined4 uStack_84;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  undefined4 uStack_78;
  ushort local_70;
  undefined2 uStack_6e;
  undefined2 uStack_6c;
  undefined2 uStack_6a;
  uint local_68;
  uint local_64;
  uint local_60;
  uint uStack_5c;
  uint local_58;
  undefined4 local_54;
  uint local_50;
  uint uStack_4c;
  uint uStack_48;
  undefined4 uStack_44;
  undefined4 local_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  
  local_198 = param_2;
  local_194 = param_3;
  if (1 < param_3) {
    if (param_3 == 2) goto LAB_013e4808;
    uVar5 = param_2[1];
    uVar16 = (uint)(byte)uVar5;
    local_18c = param_3 - 3;
    local_190 = (ushort *)((int)param_2 + 3);
    uVar2 = *param_2;
    uVar19 = 4;
    uVar13 = (uVar16 & 0x7f) >> 3;
    if (uVar13 < 6) {
      uVar19 = *(uint *)(&DAT_00536c60 + uVar13 * 4);
    }
    if (local_18c == 0) goto LAB_013e4808;
    bVar1 = *(byte *)local_190;
    uVar22 = (uint)bVar1;
    uVar10 = param_3 & 0x7ffffffe;
    uVar12 = uVar22 & 0xf;
    local_1e0._0_2_ = (undefined2)uVar12;
    uVar21 = uVar12;
    if (10 < uVar12) {
      uVar21 = 0x14;
    }
    uVar20 = (undefined2)uVar21;
    if ((uVar10 != 4 && uVar10 != 6) && (uVar10 != 8 && uVar10 != 10)) {
      uVar17 = param_2[2];
      local_18c = param_3 - 0xc;
      uVar4 = (uint)uVar17 << 0x18 | (uint)(uVar17 >> 8) << 0x10;
      local_190 = param_2 + 6;
      uVar10 = uVar4 >> 0x10;
      uVar14 = param_2[3];
      uVar18 = param_2[4];
      uVar3 = param_2[5];
      if (uVar17 == 0) {
        local_180 = 0;
        local_184 = 4;
        local_188 = 0;
      }
      else {
        uVar11 = FUN_01298504(uVar10 * 0x4c,4);
        if (uVar11 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_00664620(4,uVar10 * 0x4c);
        }
        local_180 = 0;
        local_188 = uVar10;
        local_184 = uVar11;
        do {
          uVar6 = local_180;
          FUN_013c7bc4(&local_70,&local_198);
          uVar7 = uStack_6e;
          uVar17 = local_70;
          if (local_70 == 2) {
            uVar13 = CONCAT22(uStack_6a,uStack_6c);
LAB_013e4b94:
            *param_1 = 0x80000000;
            param_1[1] = uVar13;
            goto LAB_013e4c48;
          }
          local_b0 = local_68;
          local_ac = local_64;
          uStack_a8 = local_60;
          uStack_a4 = uStack_5c;
          local_a0 = local_58;
          local_9c = local_54;
          uStack_98 = local_50;
          uStack_94 = uStack_4c;
          uStack_90 = uStack_48;
          uStack_8c = uStack_44;
          local_88 = local_40;
          uStack_84 = uStack_3c;
          uStack_80 = uStack_38;
          uStack_7c = uStack_34;
          uStack_78 = uStack_30;
          FUN_013d96e4(&local_70,&local_198);
          uVar9 = uStack_6c;
          uVar8 = uStack_6e;
          if ((local_70 != 0) || (FUN_013d3a18(&local_70,&local_198), local_70 == 1)) {
            uVar13 = CONCAT22(uStack_6a,uStack_6c);
            FUN_013cb16c(local_b8);
            goto LAB_013e4b94;
          }
          uStack_170 = uStack_a8;
          uStack_154 = uStack_8c;
          local_150 = local_88;
          uStack_14c = uStack_84;
          uStack_148 = uStack_80;
          uStack_144 = uStack_7c;
          uStack_140 = uStack_78;
          uStack_12c = local_ac;
          uStack_128 = uStack_a8;
          uStack_124 = uStack_a4;
          uStack_120 = local_a0;
          local_11c = local_9c;
          uStack_118 = uStack_98;
          uStack_114 = uStack_94;
          uStack_110 = uStack_90;
          uStack_10c = uStack_8c;
          local_108 = local_88;
          uStack_104 = uStack_84;
          uStack_100 = uStack_80;
          uStack_fc = uStack_7c;
          uStack_f8 = uStack_78;
          local_ee = uVar9;
          local_f0 = uVar8;
          local_138 = uVar17;
          local_136 = uVar7;
          if (uVar6 == local_188) {
            FUN_013e6294(&local_188);
            uVar11 = local_184;
          }
          uVar15 = uVar6 + 1;
          FUN_01bed4e2(uVar6 * 0x4c + uVar11,&local_138,0x4c);
          local_180 = uVar15;
        } while (uVar15 != uVar10);
      }
      uVar17 = uVar14 << 8 | uVar14 >> 8;
      FUN_013e26e0(&local_70,&local_198,uVar17,0);
      local_e8 = CONCAT22(uStack_6e,local_70);
      uStack_e4 = CONCAT22(uStack_6a,uStack_6c);
      if (local_e8 == 0x80000000) {
        *param_1 = 0x80000000;
        param_1[1] = uStack_e4;
      }
      else {
        local_b0 = local_68;
        local_ac = local_64;
        uStack_a8 = local_60;
        uStack_a4 = uStack_5c;
        local_a0 = local_58;
        local_9c = local_54;
        uStack_98 = local_50;
        uStack_94 = uStack_4c;
        uStack_90 = uStack_48;
        uStack_e0 = local_68;
        if (local_64 != 0x80000000) {
          FUN_013d1214(&local_ac);
        }
        FUN_013e3148(&uStack_98);
        uVar14 = uVar18 << 8 | uVar18 >> 8;
        FUN_013e26e0(&local_70,&local_198,uVar14,0);
        local_178 = CONCAT22(uStack_6e,local_70);
        uStack_174 = CONCAT22(uStack_6a,uStack_6c);
        if (local_178 == 0x80000000) {
          *param_1 = 0x80000000;
          param_1[1] = uStack_174;
        }
        else {
          local_b0 = local_68;
          local_ac = local_64;
          uStack_a8 = local_60;
          uStack_a4 = uStack_5c;
          local_a0 = local_58;
          local_9c = local_54;
          uStack_98 = local_50;
          uStack_94 = uStack_4c;
          uStack_90 = uStack_48;
          uStack_170 = local_68;
          if (local_64 != 0x80000000) {
            FUN_013d1214(&local_ac);
          }
          FUN_013e3148(&uStack_98);
          uVar18 = uVar3 << 8 | uVar3 >> 8;
          FUN_013e26e0(&local_70,&local_198,uVar18,1);
          if (CONCAT22(uStack_6e,local_70) != 0x80000000) {
            local_d8 = local_60;
            uStack_d4 = uStack_5c;
            uStack_d0 = local_58;
            local_cc = (undefined2)local_54;
            local_c8 = local_50;
            uStack_c4 = uStack_4c;
            uStack_c0 = uStack_48;
            if (local_64 != 0x80000000) {
              uVar21 = FUN_013e5f44(uVar21,uVar12);
              uVar20 = 0x14;
              local_1e0 = uVar21 & 0xf | (uint)local_54._2_1_ << 4;
              if ((local_1e0 < 0x18) &&
                 ((0xff07ffU >> (uVar21 & 0xf | (uint)local_54._2_1_ << 4 & 0xff) & 1) != 0)) {
                uVar20 = *(undefined2 *)(&DAT_00536ca8 + local_1e0 * 2);
                local_1e0 = (uint)*(ushort *)(&DAT_00536c78 + local_1e0 * 2);
              }
            }
            *param_1 = local_188;
            param_1[1] = local_184;
            param_1[2] = local_180;
            param_1[3] = local_e8;
            param_1[4] = uStack_e4;
            param_1[5] = uStack_e0;
            param_1[6] = local_178;
            param_1[7] = uStack_174;
            param_1[8] = uStack_170;
            param_1[10] = CONCAT22(uStack_6a,uStack_6c);
            param_1[0xb] = local_68;
            param_1[9] = CONCAT22(uStack_6e,local_70);
            param_1[0xc] = local_c8;
            param_1[0xd] = uStack_c4;
            param_1[0xe] = uStack_c0;
            param_1[0xf] = local_64;
            param_1[0x10] = local_d8;
            param_1[0x11] = uStack_d4;
            param_1[0x12] = uStack_d0;
            param_1[0x18] =
                 ((uVar16 & 7) >> 2) << 8 | (uint)(byte)((byte)uVar5 >> 7) |
                 ((uVar16 & 3) >> 1) << 0x10 | (uVar16 & 1) << 0x18;
            param_1[0x19] =
                 (uint)(bVar1 >> 7) | ((uVar22 & 0x3f) >> 5) << 8 | ((uVar22 & 0x1f) >> 4) << 0x10;
            *(ushort *)((int)param_1 + 0x5e) = uVar18;
            *(ushort *)(param_1 + 0x17) = uVar14;
            *(ushort *)((int)param_1 + 0x5a) = uVar17;
            *(short *)(param_1 + 0x16) = (short)(uVar4 >> 0x10);
            *(undefined2 *)((int)param_1 + 0x52) = (undefined2)local_1e0;
            *(undefined1 *)((int)param_1 + 0x4f) = local_54._3_1_;
            param_1[0x15] =
                 uVar19 | uVar13 << 8 | ((uVar2 & 0xff) << 8 | (uint)(uVar2 >> 8)) << 0x10;
            *(undefined2 *)(param_1 + 0x14) = uVar20;
            *(byte *)((int)param_1 + 0x4e) = local_54._2_1_;
            *(undefined2 *)(param_1 + 0x13) = local_cc;
            return;
          }
          *param_1 = 0x80000000;
          param_1[1] = CONCAT22(uStack_6a,uStack_6c);
          FUN_013e3148(&local_178);
        }
        FUN_013e3148(&local_e8);
      }
LAB_013e4c48:
      FUN_013e2690(&local_188);
      return;
    }
  }
  local_130 = 2;
  local_134 = 0;
LAB_013e4808:
  local_138 = local_138 & 0xff00;
  uVar13 = FUN_013e677c(&local_138);
  *param_1 = 0x80000000;
  param_1[1] = uVar13;
  return;
}

