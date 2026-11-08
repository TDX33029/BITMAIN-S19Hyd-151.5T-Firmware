// FUN_013d4a54 @ 013d4a54 size=1768 calls_out=16 calls_in=1
// strings: 

/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_013d4a54(uint *param_1,int *param_2)

{
  code *pcVar1;
  byte bVar2;
  bool bVar3;
  uint *puVar4;
  int iVar5;
  int iVar6;
  undefined4 *puVar7;
  uint uVar8;
  undefined4 uVar9;
  uint uVar10;
  int unaff_r4;
  int iVar11;
  uint uVar12;
  uint uVar13;
  int iVar14;
  uint uVar15;
  uint uVar16;
  uint *puVar17;
  undefined *local_1fc;
  undefined *local_1f8;
  int local_1d4;
  uint local_1d0;
  uint local_1cc;
  uint local_1c8;
  uint local_1c4;
  uint local_1c0;
  uint uStack_1bc;
  uint uStack_1b8;
  uint uStack_1b4;
  uint uStack_1b0;
  uint local_1a8;
  uint uStack_1a4;
  uint uStack_1a0;
  uint uStack_19c;
  uint local_198;
  uint local_194;
  uint uStack_190;
  uint uStack_18c;
  uint local_180;
  uint uStack_17c;
  uint uStack_178;
  uint uStack_174;
  uint uStack_170;
  uint uStack_16c;
  uint local_168;
  uint local_164;
  uint uStack_160;
  uint local_15c;
  uint local_158;
  uint local_154;
  uint local_150;
  uint uStack_14c;
  uint uStack_148;
  uint uStack_144;
  uint local_140;
  uint local_13c;
  uint uStack_138;
  uint uStack_134;
  uint uStack_130;
  uint uStack_12c;
  uint uStack_128;
  uint local_124;
  uint uStack_120;
  uint uStack_11c;
  uint uStack_118;
  uint uStack_114;
  uint uStack_110;
  uint local_10c;
  undefined4 uStack_108;
  undefined4 uStack_104;
  undefined4 uStack_100;
  undefined4 uStack_fc;
  undefined4 uStack_f8;
  uint local_f0;
  uint uStack_ec;
  uint uStack_e8;
  uint uStack_e4;
  uint uStack_e0;
  uint uStack_dc;
  uint local_d8;
  undefined4 uStack_d4;
  undefined4 uStack_d0;
  undefined4 uStack_cc;
  undefined4 uStack_c8;
  undefined4 uStack_c4;
  uint local_c0;
  uint uStack_bc;
  uint uStack_b8;
  uint local_b4;
  uint local_b0;
  uint local_ac;
  undefined4 uStack_a8;
  uint uStack_a4;
  uint uStack_a0;
  uint local_7c;
  uint local_78;
  uint uStack_74;
  uint uStack_70;
  uint uStack_6c;
  uint uStack_68;
  uint local_64;
  uint uStack_60;
  uint uStack_5c;
  uint uStack_58;
  uint uStack_54;
  uint local_50;
  uint uStack_4c;
  uint uStack_48;
  uint uStack_44;
  uint uStack_40;
  uint uStack_3c;
  uint local_38;
  uint uStack_34;
  uint uStack_30;
  uint uStack_2c;
  uint uStack_28;
  
  local_1d4 = FUN_013d2518(param_2);
  if (local_1d4 != 0x5b) {
    FUN_013ff7ac(&local_1d4,&DAT_0056738c,&DAT_01894c98);
LAB_013d50dc:
    local_1f8 = &DAT_003cede9;
    local_1fc = &DAT_01894c68;
LAB_013d510c:
                    /* WARNING: Subroutine does not return */
    FUN_00faa464(local_1f8,0x24,local_1fc);
  }
  iVar11 = *param_2;
  local_1c0 = *(uint *)(iVar11 + 0x54);
  uStack_1bc = *(uint *)(iVar11 + 0x58);
  puVar17 = (uint *)(iVar11 + 0x50);
  local_1c4 = *puVar17;
  local_1c8 = 0;
  local_1d0 = 0;
  local_1cc = 4;
  puVar4 = (uint *)((uint)&local_168 | 4);
  iVar5 = param_2[1];
  uVar16 = param_2[2];
  local_1fc = &DAT_01894c88;
  local_1f8 = &DAT_003cee31;
  uStack_1b8 = local_1c4;
  uStack_1b4 = local_1c0;
  uStack_1b0 = uStack_1bc;
  local_168 = local_1c4;
  local_164 = local_1c0;
  uStack_160 = uStack_1bc;
  local_15c = local_1c4;
  local_158 = local_1c0;
  local_154 = uStack_1bc;
LAB_013d4b6c:
  do {
    uVar8 = 0x110009;
    FUN_013d2168(param_2);
    if (*puVar17 == uVar16) {
      FUN_013d7644(&local_168,param_2);
      param_1[1] = local_168;
      param_1[2] = local_164;
      param_1[3] = uStack_160;
      param_1[4] = local_15c;
      param_1[5] = local_158;
      param_1[6] = local_154;
      param_1[7] = local_150;
      param_1[8] = uStack_14c;
      param_1[9] = uStack_148;
      param_1[10] = uStack_144;
      param_1[0xb] = local_140;
      param_1[0xc] = local_13c;
      param_1[0xd] = uStack_138;
      param_1[0xe] = uStack_134;
      param_1[0xf] = uStack_130;
      param_1[0x10] = uStack_12c;
      *param_1 = 0x110009;
LAB_013d4fc4:
      uVar16 = local_1cc;
      iVar5 = local_1c8 + 1;
      uVar8 = local_1cc;
      while (iVar5 = iVar5 + -1, iVar5 != 0) {
        FUN_013e7308(uVar8);
        uVar8 = uVar8 + 0x58;
      }
      if (local_1d0 == 0) {
        return;
      }
      if (uVar16 == 0) {
        return;
      }
      iVar5 = FUN_016d3bc8();
      uVar8 = *(byte *)(uVar16 - 3) & 0x1f;
      if (((*(byte *)(iVar5 + 0x14) & 0x1f) != 0) ||
         (uVar10 = *(uint *)(iVar5 + 0x14) & 0xfffff000, iVar11 = uVar10 - 0x10, uVar10 == 0)) {
        iVar11 = (uint)*(ushort *)(&DAT_0042567c + ((*(ushort *)(iVar5 + 0x14) & 0xfff) >> 6) * 2)
                 << 4;
      }
      uVar10 = (uint)(*(byte *)(uVar16 - 3) >> 5);
      iVar14 = *(int *)(iVar5 + 8) + 0x10;
      iVar6 = iVar11 * uVar8 + iVar11 + -4;
      iVar11 = iVar14 + iVar6;
      if (4 < uVar10) {
        if (uVar10 != 5) {
                    /* WARNING: Does not return */
          pcVar1 = (code *)software_udf(0xff,0x16d4018);
          (*pcVar1)();
        }
        uVar10 = *(uint *)(iVar11 + -4);
        if (uVar10 < 5) {
                    /* WARNING: Does not return */
          pcVar1 = (code *)software_udf(0xff,0x16d4022);
          (*pcVar1)();
        }
        if (*(char *)(iVar11 + -5) != '\0') {
                    /* WARNING: Does not return */
          pcVar1 = (code *)software_udf(0xff,0x16d402a);
          (*pcVar1)();
        }
      }
      if (iVar11 - uVar16 < uVar10) {
                    /* WARNING: Does not return */
        pcVar1 = (code *)software_udf(0xff,0x16d4032);
        (*pcVar1)();
      }
      if (*(char *)(iVar11 - uVar10) != '\0') {
                    /* WARNING: Does not return */
        pcVar1 = (code *)software_udf(0xff,0x16d403a);
        (*pcVar1)();
      }
      if (*(char *)(iVar14 + iVar6) != '\0') {
                    /* WARNING: Does not return */
        pcVar1 = (code *)software_udf(0xff,0x16d4040);
        (*pcVar1)();
      }
      bVar2 = *(byte *)(iVar5 + 0x14);
      uVar10 = 1 << uVar8;
      *(undefined1 *)(uVar16 - 3) = 0xff;
      *(undefined2 *)(uVar16 - 2) = 0;
      do {
        uVar12 = *(uint *)(iVar5 + 0x10);
        uVar16 = *(uint *)(iVar5 + 0xc) | uVar12;
        if ((uVar10 & uVar16) != 0) {
                    /* WARNING: Does not return */
          pcVar1 = (code *)software_udf(0xff,0x16d4074);
          (*pcVar1)();
        }
        if ((uVar12 == 0) || (uVar16 + uVar10 == (2 << (bVar2 & 0x1f)) + -1)) {
          if (DAT_018ddb0b != '\0') {
            FUN_016ddcc0(&DAT_018ddd48);
          }
          FUN_016d3ca8(&uStack_28,iVar5,uVar8);
          FUN_016dddc0(&DAT_018ddd48);
          if (unaff_r4 == 0) {
            return;
          }
          puVar7 = (undefined4 *)FUN_016d2bc8();
          uVar9 = *puVar7;
          FUN_016d6ac4(uStack_28,unaff_r4);
          *puVar7 = uVar9;
          return;
        }
        if (DAT_018ddb0b == '\0') {
          *(uint *)(iVar5 + 0x10) = uVar10 + uVar12;
          return;
        }
        puVar4 = (uint *)(iVar5 + 0x10);
        DataMemoryBarrier(0x1b);
        do {
          ExclusiveAccess(puVar4);
          uVar16 = *puVar4;
          if (uVar12 != uVar16) goto LAB_016d409c;
          bVar3 = (bool)hasExclusiveAccess(puVar4);
        } while (!bVar3);
        *puVar4 = uVar10 + uVar12;
LAB_016d409c:
        DataMemoryBarrier(0x1b);
        if (uVar12 == uVar16) {
          return;
        }
      } while( true );
    }
    iVar6 = FUN_013d2518(param_2);
    if (iVar6 < 0x5b) {
      if (iVar6 == 0x26) {
        iVar6 = FUN_013d82f4(param_2);
        if (iVar6 == 0x26) {
          uVar8 = *puVar17;
          if (uVar8 != 0) {
            if (uVar8 < uVar16) {
              if (*(char *)(iVar5 + uVar8) < -0x40) goto LAB_013d5120;
            }
            else if (uVar16 != uVar8) goto LAB_013d5120;
          }
          if ((1 < uVar16 - uVar8) && (*(short *)(iVar5 + uVar8) == 0x2626)) {
            FUN_013d2d20(param_2);
            FUN_013d2d20(param_2);
            local_168 = local_1d0;
            local_164 = local_1cc;
            uStack_160 = local_1c8;
            local_15c = local_1c4;
            local_158 = local_1c0;
            local_154 = uStack_1bc;
            local_150 = uStack_1b8;
            uStack_14c = uStack_1b4;
            uStack_148 = uStack_1b0;
            uVar9 = 0;
            goto LAB_013d4b54;
          }
          goto LAB_013d50dc;
        }
      }
      else if ((iVar6 == 0x2d) && (iVar6 = FUN_013d82f4(param_2), iVar6 == 0x2d)) {
        uVar8 = *puVar17;
        if (uVar8 != 0) {
          if (uVar8 < uVar16) {
            if (*(char *)(iVar5 + uVar8) < -0x40) goto LAB_013d5120;
          }
          else if (uVar16 != uVar8) {
LAB_013d5120:
                    /* WARNING: Subroutine does not return */
            FUN_00faa8ac(iVar5,uVar16,uVar8,uVar16,&DAT_01894e88);
          }
        }
        if ((uVar16 - uVar8 < 2) || (*(short *)(iVar5 + uVar8) != 0x2d2d)) {
          local_1f8 = &DAT_003cee0d;
          local_1fc = &DAT_01894c78;
          goto LAB_013d510c;
        }
        FUN_013d2d20(param_2);
        FUN_013d2d20(param_2);
        local_168 = local_1d0;
        local_164 = local_1cc;
        uStack_160 = local_1c8;
        local_15c = local_1c4;
        local_158 = local_1c0;
        local_154 = uStack_1bc;
        local_150 = uStack_1b8;
        uStack_14c = uStack_1b4;
        uStack_148 = uStack_1b0;
        uVar9 = 1;
LAB_013d4b54:
        local_1d0 = local_168;
        local_1cc = local_164;
        local_1c8 = uStack_160;
        local_1c4 = local_15c;
        local_1c0 = local_158;
        uStack_1bc = local_154;
        uStack_1b8 = local_150;
        uStack_1b4 = uStack_14c;
        uStack_1b0 = uStack_148;
        FUN_013d8b1c(&local_1d0,iVar11,uVar9);
        goto LAB_013d4b6c;
      }
LAB_013d4d94:
      FUN_013d7790(&local_168,param_2);
      local_c0 = local_164;
      uStack_bc = uStack_160;
      uStack_b8 = local_15c;
      local_b4 = local_158;
      local_b0 = local_154;
      local_ac = local_150;
      uStack_a8 = uStack_14c;
      uStack_a4 = uStack_148;
      uStack_a0 = uStack_144;
      if (local_168 == 0x110008) {
        param_1[1] = local_164;
        param_1[2] = uStack_160;
        param_1[3] = local_15c;
        param_1[4] = local_158;
        param_1[5] = local_154;
        param_1[6] = local_150;
        param_1[7] = uStack_14c;
        param_1[8] = uStack_148;
        param_1[9] = uStack_144;
        param_1[10] = local_140;
        param_1[0xb] = local_13c;
        param_1[0xc] = uStack_138;
        param_1[0xd] = uStack_134;
        param_1[0xe] = uStack_130;
        param_1[0xf] = uStack_12c;
        param_1[0x10] = uStack_128;
        *param_1 = 0x110009;
        goto LAB_013d4fc4;
      }
      local_38 = local_124;
      uStack_34 = uStack_120;
      uStack_30 = uStack_11c;
      uStack_2c = uStack_118;
      uStack_28 = uStack_114;
      local_7c = local_168;
      local_78 = local_164;
      uStack_74 = uStack_160;
      uStack_70 = local_15c;
      uStack_6c = local_158;
      uStack_68 = local_154;
      local_64 = local_150;
      uStack_60 = uStack_14c;
      uStack_5c = uStack_148;
      uStack_58 = uStack_144;
      uStack_54 = local_140;
      local_50 = local_13c;
      uStack_4c = uStack_138;
      uStack_48 = uStack_134;
      uStack_44 = uStack_130;
      uStack_40 = uStack_12c;
      uStack_3c = uStack_128;
      FUN_013f53b4(&local_1d0,&local_7c);
      goto LAB_013d4b6c;
    }
    if (iVar6 != 0x5b) {
      if (iVar6 != 0x5d) {
        if ((iVar6 != 0x7e) || (iVar6 = FUN_013d82f4(param_2), iVar6 != 0x7e)) goto LAB_013d4d94;
        uVar8 = *puVar17;
        if (uVar8 != 0) {
          if (uVar8 < uVar16) {
            if (*(char *)(iVar5 + uVar8) < -0x40) goto LAB_013d5120;
          }
          else if (uVar16 != uVar8) goto LAB_013d5120;
        }
        if ((1 < uVar16 - uVar8) && (*(short *)(iVar5 + uVar8) == 0x7e7e)) {
          FUN_013d2d20(param_2);
          FUN_013d2d20(param_2);
          local_168 = local_1d0;
          local_164 = local_1cc;
          uStack_160 = local_1c8;
          local_15c = local_1c4;
          local_158 = local_1c0;
          local_154 = uStack_1bc;
          local_150 = uStack_1b8;
          uStack_14c = uStack_1b4;
          uStack_148 = uStack_1b0;
          uVar9 = 2;
          goto LAB_013d4b54;
        }
        goto LAB_013d510c;
      }
      FUN_013d7eac(&local_168,param_2,&local_1d0);
      local_1d0 = local_164;
      local_1cc = uStack_160;
      local_1c8 = local_15c;
      local_1c4 = local_158;
      local_1c0 = local_154;
      uStack_1bc = local_150;
      uStack_1b8 = uStack_14c;
      uStack_1b4 = uStack_148;
      uStack_1b0 = uStack_144;
      local_180 = local_13c;
      uStack_17c = uStack_138;
      uStack_178 = uStack_134;
      uStack_174 = uStack_130;
      uStack_170 = uStack_12c;
      uStack_16c = uStack_128;
      if (local_168 == 0x11000a) {
        param_1[1] = local_164;
        param_1[2] = uStack_160;
        param_1[3] = local_15c;
        param_1[4] = local_158;
        param_1[5] = local_154;
        puVar17 = &local_180;
        param_1[6] = local_150;
        param_1[7] = uStack_14c;
        param_1[8] = uStack_148;
        param_1[9] = uStack_144;
        param_1[10] = local_140;
        puVar4 = param_1 + 0xb;
      }
      else {
        local_f0 = local_124;
        uStack_ec = uStack_120;
        uStack_e8 = uStack_11c;
        uStack_e4 = uStack_118;
        uStack_e0 = uStack_114;
        uStack_dc = uStack_110;
        local_d8 = local_10c;
        uStack_d4 = uStack_108;
        uStack_d0 = uStack_104;
        uStack_cc = uStack_100;
        uStack_c8 = uStack_fc;
        uStack_c4 = uStack_f8;
        if (local_168 == 0x110009) {
          local_1a8 = local_1d0;
          uStack_1a4 = local_1cc;
          uStack_1a0 = local_1c8;
          uStack_19c = local_1c4;
          local_198 = local_1c0;
          local_194 = uStack_1bc;
          uStack_190 = uStack_1b8;
          uStack_18c = uStack_1b4;
          goto LAB_013d4b6c;
        }
        param_1[1] = local_164;
        param_1[2] = uStack_160;
        param_1[3] = local_15c;
        param_1[4] = local_158;
        param_1[5] = local_154;
        param_1[6] = local_150;
        param_1[7] = uStack_14c;
        param_1[8] = uStack_148;
        param_1[9] = uStack_144;
        param_1[10] = local_140;
        param_1[0xb] = local_13c;
        param_1[0xc] = uStack_138;
        param_1[0xd] = uStack_134;
        param_1[0xe] = uStack_130;
        param_1[0xf] = uStack_12c;
        param_1[0x10] = uStack_128;
        puVar17 = &local_d8;
        param_1[0x11] = local_124;
        param_1[0x12] = uStack_120;
        param_1[0x13] = uStack_11c;
        param_1[0x14] = uStack_118;
        param_1[0x15] = uStack_114;
        param_1[0x16] = uStack_110;
        puVar4 = param_1 + 0x17;
        uVar8 = local_168;
      }
      uVar16 = puVar17[1];
      uVar10 = puVar17[2];
      uVar12 = puVar17[3];
      uVar13 = puVar17[4];
      uVar15 = puVar17[5];
      *puVar4 = *puVar17;
      puVar4[1] = uVar16;
      puVar4[2] = uVar10;
      puVar4[3] = uVar12;
      puVar4[4] = uVar13;
      puVar4[5] = uVar15;
      *param_1 = uVar8;
      return;
    }
    if (0x7ffffffe < *(uint *)(iVar11 + 0x20)) {
      FUN_00fb71b0(&DAT_01894c58);
                    /* WARNING: Does not return */
      pcVar1 = (code *)software_udf(0xfdee,0x13d513c);
      (*pcVar1)();
    }
    if (*(int *)(iVar11 + 0x2c) == 0) {
LAB_013d4c60:
      FUN_013d8420(&local_168,param_2,&local_1d0);
      local_1d0 = *puVar4;
      local_1cc = puVar4[1];
      local_1c8 = puVar4[2];
      local_1c4 = puVar4[3];
      local_1c0 = puVar4[4];
      uStack_1bc = puVar4[5];
      uStack_1b8 = puVar4[6];
      uStack_1b4 = puVar4[7];
      uStack_1b0 = puVar4[8];
      if (local_168 != 0x22) {
        param_1[0xb] = local_140;
        param_1[0xc] = local_13c;
        param_1[0xd] = uStack_138;
        param_1[0xe] = uStack_134;
        param_1[0xf] = uStack_130;
        param_1[0x10] = uStack_12c;
        param_1[2] = local_1d0;
        param_1[3] = local_1cc;
        param_1[4] = local_1c8;
        param_1[5] = local_1c4;
        param_1[6] = local_1c0;
        param_1[7] = uStack_1bc;
        param_1[8] = uStack_1b8;
        param_1[9] = uStack_1b4;
        param_1[10] = uStack_1b0;
        *param_1 = 0x110009;
        param_1[1] = local_168;
        return;
      }
      local_c0 = local_1d0;
      uStack_bc = local_1cc;
      uStack_b8 = local_1c8;
      local_b4 = local_1c4;
      local_b0 = local_1c0;
      local_ac = uStack_1bc;
      uStack_a8 = uStack_1b8;
      uStack_a4 = uStack_1b4;
      uStack_a0 = uStack_1b0;
    }
    else {
      FUN_013d86ec(&local_c0,param_2);
      if (uStack_a8._1_1_ == '\x02') goto LAB_013d4c60;
      local_164 = local_c0;
      uStack_160 = uStack_bc;
      local_15c = uStack_b8;
      local_158 = local_b4;
      local_154 = local_b0;
      local_150 = local_ac;
      uStack_14c = uStack_a8;
      local_168 = 0x110003;
      FUN_013f53b4(&local_1d0,&local_168);
    }
  } while( true );
}

