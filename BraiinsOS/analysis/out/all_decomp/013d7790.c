// FUN_013d7790 @ 013d7790 size=1748 calls_out=13 calls_in=1
// strings: 

void FUN_013d7790(uint *param_1,int *param_2)

{
  code *pcVar1;
  byte bVar2;
  bool bVar3;
  int iVar4;
  undefined4 uVar5;
  uint *puVar6;
  undefined4 *puVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  int unaff_r4;
  uint *puVar12;
  uint uVar13;
  uint *puVar14;
  int iVar15;
  uint uVar16;
  int iVar17;
  uint uVar18;
  int iVar19;
  uint uVar20;
  uint *local_170;
  uint local_168;
  uint local_164;
  uint local_160;
  uint local_15c;
  uint local_158;
  uint uStack_154;
  uint uStack_150;
  uint uStack_14c;
  uint uStack_148;
  uint local_144;
  uint uStack_140;
  uint uStack_13c;
  uint uStack_138;
  uint uStack_134;
  uint local_130;
  uint uStack_12c;
  uint uStack_128;
  uint uStack_124;
  uint local_120;
  uint local_11c;
  uint local_118;
  uint local_114;
  uint uStack_110;
  uint local_10c;
  uint uStack_108;
  uint uStack_104;
  uint uStack_100;
  uint uStack_fc;
  uint local_f8;
  uint uStack_f4;
  uint uStack_f0;
  uint local_ec;
  uint local_e8;
  uint uStack_e4;
  uint uStack_e0;
  uint uStack_dc;
  uint uStack_d8;
  uint local_d4;
  uint uStack_d0;
  uint uStack_cc;
  uint uStack_c8;
  uint uStack_c4;
  uint local_c0;
  uint uStack_bc;
  uint uStack_b8;
  uint local_b4;
  uint uStack_b0;
  uint uStack_ac;
  uint uStack_a8;
  uint local_a0;
  uint local_9c;
  uint local_98;
  uint local_94;
  uint local_90;
  uint local_8c;
  uint local_88;
  uint uStack_84;
  uint uStack_80;
  uint local_7c;
  uint uStack_78;
  uint uStack_74;
  uint uStack_70;
  uint local_68;
  uint local_64;
  uint local_60;
  uint local_5c;
  uint local_58;
  uint local_54;
  uint uStack_50;
  uint uStack_4c;
  uint uStack_48;
  uint local_44;
  uint local_40;
  uint uStack_3c;
  uint local_38;
  uint uStack_34;
  uint uStack_30;
  uint local_2c;
  undefined4 uStack_28;
  
  FUN_013d97f0(&local_68);
  puVar6 = &local_64;
  local_f8 = local_64;
  uStack_f4 = local_60;
  uStack_f0 = local_5c;
  local_ec = local_58;
  local_e8 = local_54;
  uStack_e4 = uStack_50;
  uStack_e0 = uStack_4c;
  uStack_dc = uStack_48;
  uStack_d8 = local_44;
  local_d4 = local_40;
  uStack_d0 = uStack_3c;
  uStack_cc = local_38;
  uStack_c8 = uStack_34;
  uStack_c4 = uStack_30;
  if (local_68 != 0x22) {
    param_1[2] = local_64;
    param_1[3] = local_60;
    param_1[4] = local_5c;
    param_1[5] = local_58;
    param_1[6] = local_54;
    param_1[7] = uStack_50;
    param_1[8] = uStack_4c;
    param_1[9] = uStack_48;
    param_1[10] = local_44;
    param_1[0xb] = local_40;
    param_1[0xc] = uStack_3c;
    param_1[0xd] = local_38;
    param_1[0xe] = uStack_34;
    param_1[0xf] = uStack_30;
    param_1[0x10] = local_2c;
    *param_1 = 0x110008;
    param_1[1] = local_68;
    return;
  }
  local_168 = local_64;
  local_164 = local_60;
  local_160 = local_5c;
  local_15c = local_58;
  local_158 = local_54;
  uStack_154 = uStack_50;
  uStack_150 = uStack_4c;
  uStack_14c = uStack_48;
  uStack_148 = local_44;
  local_144 = local_40;
  uStack_140 = uStack_3c;
  uStack_13c = local_38;
  uStack_138 = uStack_34;
  uStack_134 = uStack_30;
  FUN_013d2168(param_2);
  iVar19 = *param_2;
  puVar12 = (uint *)((uint)&local_168 | 4);
  puVar14 = (uint *)param_2[2];
  if (*(uint **)(iVar19 + 0x50) == puVar14) {
    FUN_013d7644(&local_68,param_2);
  }
  else {
    iVar4 = FUN_013d2518(param_2);
    if (((iVar4 != 0x2d) || (iVar4 = FUN_013d98f0(param_2), iVar4 == 0x5d)) ||
       (iVar4 = FUN_013d98f0(param_2), iVar4 == 0x2d)) {
      uVar8 = local_168;
      uVar20 = local_168 + 0x7ffffffe;
      uVar9 = uVar20;
      if (local_168 < 0x80000002) {
        uVar9 = 4;
      }
      if (uVar9 == 0) {
        uVar8 = puVar12[1];
        uVar9 = puVar12[2];
        uVar20 = puVar12[3];
        param_1[1] = *puVar12;
        param_1[2] = uVar8;
        param_1[3] = uVar9;
        param_1[4] = uVar20;
        uVar8 = puVar12[5];
        uVar9 = puVar12[6];
        uVar20 = puVar12[7];
        param_1[5] = puVar12[4];
        param_1[6] = uVar8;
        param_1[7] = uVar9;
        param_1[8] = uVar20;
        *param_1 = 0x110001;
        return;
      }
      if (uVar9 == 3) {
        uVar8 = puVar12[1];
        uVar9 = puVar12[2];
        param_1[1] = *puVar12;
        param_1[2] = uVar8;
        param_1[3] = uVar9;
        uVar8 = puVar12[4];
        uVar9 = puVar12[5];
        uVar20 = puVar12[6];
        param_1[4] = puVar12[3];
        param_1[5] = uVar8;
        param_1[6] = uVar9;
        param_1[7] = uVar20;
        *param_1 = 0x110005;
        return;
      }
      if (uVar9 == 4) {
        *param_1 = (uint)&DAT_00110004;
        param_1[1] = local_168;
        uVar8 = puVar12[1];
        uVar9 = puVar12[2];
        uVar20 = puVar12[3];
        param_1[2] = *puVar12;
        param_1[3] = uVar8;
        param_1[4] = uVar9;
        param_1[5] = uVar20;
        uVar8 = puVar12[5];
        uVar9 = puVar12[6];
        uVar20 = puVar12[7];
        param_1[6] = puVar12[4];
        param_1[7] = uVar8;
        param_1[8] = uVar9;
        param_1[9] = uVar20;
        param_1[10] = local_144;
        param_1[0xb] = uStack_140;
        param_1[0xc] = uStack_13c;
        param_1[0xd] = uStack_138;
        param_1[0xe] = uStack_134;
        return;
      }
      local_68 = local_168;
      iVar19 = param_2[1];
      local_64 = *puVar12;
      local_60 = puVar12[1];
      local_5c = puVar12[2];
      local_58 = puVar12[3];
      local_54 = puVar12[4];
      uStack_50 = puVar12[5];
      uStack_4c = puVar12[6];
      uStack_48 = puVar12[7];
      local_44 = local_144;
      local_40 = uStack_140;
      uStack_3c = uStack_13c;
      local_38 = uStack_138;
      uStack_34 = uStack_134;
      if ((int)puVar14 < 0) {
        uVar5 = 0;
        puVar14 = &local_44;
LAB_013d7a48:
                    /* WARNING: Subroutine does not return */
        FUN_00600af4(uVar5,puVar14);
      }
      if (puVar14 == (uint *)0x0) {
        uVar9 = 1;
        local_170 = (uint *)0x0;
      }
      else {
        uVar9 = thunk_FUN_016d4a50(puVar14);
        if (uVar9 == 0) {
          uVar5 = 1;
          goto LAB_013d7a48;
        }
        local_170 = puVar14;
      }
      FUN_016dd1aa(uVar9,iVar19,puVar14);
      uVar10 = puVar12[1];
      uVar11 = puVar12[2];
      uVar13 = puVar12[3];
      uVar16 = puVar12[4];
      uVar18 = puVar12[5];
      param_1[0xb] = *puVar12;
      param_1[0xc] = uVar10;
      param_1[0xd] = uVar11;
      param_1[0xe] = uVar13;
      param_1[0xf] = uVar16;
      param_1[0x10] = uVar18;
      param_1[8] = (uint)local_170;
      param_1[9] = uVar9;
      param_1[10] = (uint)puVar14;
      *param_1 = 0x110008;
      param_1[1] = 1;
      if (uVar20 < 4) {
        return;
      }
      uVar9 = 2;
      if ((int)uVar8 < 0) {
        uVar9 = uVar8 ^ 0x80000000;
      }
      if (uVar9 == 0) {
        return;
      }
      if (uVar9 != 1) {
        if (uVar8 != 0) {
          thunk_FUN_016d3fb4(local_64);
        }
        puVar6 = &local_5c;
      }
      if (*puVar6 == 0) {
        return;
      }
      thunk_FUN_016d3fb4(puVar6[1]);
      return;
    }
    iVar4 = FUN_013d2d20(param_2);
    if ((iVar4 != 0) && (FUN_013d2168(param_2), *(uint **)(iVar19 + 0x50) != puVar14)) {
      FUN_013d97f0(&local_68,param_2);
      local_f8 = local_64;
      uStack_f4 = local_60;
      uStack_f0 = local_5c;
      local_ec = local_58;
      local_e8 = local_54;
      uStack_e4 = uStack_50;
      uStack_e0 = uStack_4c;
      uStack_dc = uStack_48;
      uStack_d8 = local_44;
      local_d4 = local_40;
      uStack_d0 = uStack_3c;
      uStack_cc = local_38;
      uStack_c8 = uStack_34;
      uStack_c4 = uStack_30;
      if (local_68 == 0x22) {
        local_130 = local_64;
        uStack_12c = local_60;
        uStack_128 = local_5c;
        uStack_124 = local_58;
        local_120 = local_54;
        local_11c = uStack_50;
        local_118 = uStack_4c;
        local_114 = uStack_48;
        uStack_110 = local_44;
        local_10c = local_40;
        uStack_108 = uStack_3c;
        uStack_104 = local_38;
        uStack_100 = uStack_34;
        uStack_fc = uStack_30;
        iVar19 = 4;
        if (0x80000001 < local_168) {
          iVar19 = local_168 + 0x7ffffffe;
        }
        if (2 < iVar19 - 1U) {
          if (iVar19 == 0) {
            puVar12 = &local_160;
          }
          else {
            puVar12 = &uStack_14c;
          }
        }
        uVar9 = local_64 + 0x7ffffffe;
        uVar8 = 4;
        if (0x80000001 < local_64) {
          uVar8 = uVar9;
        }
        if (uVar8 - 1 < 3) {
          puVar6 = (uint *)((uint)&local_130 | 4);
        }
        else if (uVar8 == 0) {
          puVar6 = &uStack_128;
        }
        else {
          puVar6 = &local_114;
        }
        local_94 = puVar6[3];
        local_90 = puVar6[4];
        local_8c = puVar6[5];
        iVar19 = param_2[1];
        local_a0 = *puVar12;
        local_9c = puVar12[1];
        local_98 = puVar12[2];
        FUN_013d9bcc(&local_68,&local_168,iVar19,puVar14);
        uVar8 = local_64;
        local_88 = local_60;
        uStack_84 = local_5c;
        uStack_80 = local_58;
        local_7c = local_54;
        uStack_78 = uStack_50;
        uStack_74 = uStack_4c;
        uStack_70 = uStack_48;
        if (local_68 != 0x22) {
          param_1[10] = local_44;
          param_1[0xb] = local_40;
          param_1[0xc] = uStack_3c;
          param_1[0xd] = local_38;
          param_1[0xe] = uStack_34;
          param_1[0xf] = uStack_30;
          param_1[0x10] = local_2c;
          param_1[3] = local_60;
          param_1[4] = local_5c;
          param_1[5] = local_58;
          param_1[6] = local_54;
          param_1[7] = uStack_50;
          param_1[8] = uStack_4c;
          param_1[9] = uStack_48;
          *param_1 = 0x110008;
          param_1[1] = local_68;
          param_1[2] = local_64;
          if (uVar9 < 4) {
            return;
          }
          FUN_013d6bcc(&local_130);
          return;
        }
        FUN_013d9bcc(&local_68,&local_130,iVar19,puVar14);
        local_f8 = local_60;
        uStack_f4 = local_5c;
        uStack_f0 = local_58;
        local_ec = local_54;
        local_e8 = uStack_50;
        uStack_e4 = uStack_4c;
        uStack_e0 = uStack_48;
        if (local_68 != 0x22) {
          param_1[10] = local_44;
          param_1[0xb] = local_40;
          param_1[0xc] = uStack_3c;
          param_1[0xd] = local_38;
          param_1[0xe] = uStack_34;
          param_1[0xf] = uStack_30;
          param_1[0x10] = local_2c;
          param_1[3] = local_60;
          param_1[4] = local_5c;
          param_1[5] = local_58;
          param_1[6] = local_54;
          param_1[7] = uStack_50;
          param_1[8] = uStack_4c;
          param_1[9] = uStack_48;
          *param_1 = 0x110008;
          param_1[1] = local_68;
          param_1[2] = local_64;
          return;
        }
        local_c0 = local_60;
        uStack_bc = local_5c;
        uStack_b8 = local_58;
        local_b4 = local_54;
        uStack_b0 = uStack_50;
        uStack_ac = uStack_4c;
        uStack_a8 = uStack_48;
        if (local_64 < uVar8) {
          local_68 = 2;
          FUN_013d1ce4(param_1 + 1,iVar19,puVar14,&local_a0,&local_68);
          *param_1 = 0x110008;
          return;
        }
        param_1[1] = local_88;
        param_1[2] = uStack_84;
        param_1[3] = uStack_80;
        param_1[4] = local_7c;
        param_1[5] = uStack_78;
        param_1[6] = uStack_74;
        param_1[7] = uStack_70;
        param_1[9] = local_60;
        param_1[10] = local_5c;
        param_1[0xb] = local_58;
        param_1[0xc] = local_54;
        param_1[0xd] = uStack_50;
        param_1[0xe] = uStack_4c;
        param_1[0xf] = uStack_48;
        param_1[0x10] = local_a0;
        param_1[0x11] = local_9c;
        param_1[0x12] = local_98;
        param_1[0x13] = local_94;
        param_1[0x14] = local_90;
        param_1[0x15] = local_8c;
        param_1[8] = local_64;
        *param_1 = uVar8;
        return;
      }
      param_1[2] = local_64;
      param_1[3] = local_60;
      param_1[4] = local_5c;
      param_1[5] = local_58;
      param_1[6] = local_54;
      param_1[7] = uStack_50;
      param_1[8] = uStack_4c;
      param_1[9] = uStack_48;
      param_1[10] = local_44;
      param_1[0xb] = local_40;
      param_1[0xc] = uStack_3c;
      param_1[0xd] = local_38;
      param_1[0xe] = uStack_34;
      param_1[0xf] = uStack_30;
      param_1[0x10] = local_2c;
      *param_1 = 0x110008;
      param_1[1] = local_68;
      goto joined_r0x013d7c58;
    }
    FUN_013d7644(&local_68,param_2);
  }
  param_1[1] = local_68;
  param_1[2] = local_64;
  param_1[3] = local_60;
  param_1[4] = local_5c;
  param_1[5] = local_58;
  param_1[6] = local_54;
  param_1[7] = uStack_50;
  param_1[8] = uStack_4c;
  param_1[9] = uStack_48;
  param_1[10] = local_44;
  param_1[0xb] = local_40;
  param_1[0xc] = uStack_3c;
  param_1[0xd] = local_38;
  param_1[0xe] = uStack_34;
  param_1[0xf] = uStack_30;
  param_1[0x10] = local_2c;
  *param_1 = 0x110008;
joined_r0x013d7c58:
  if (3 < local_168 + 0x7ffffffe) {
    uVar8 = 2;
    if ((int)local_168 < 0) {
      uVar8 = local_168 ^ 0x80000000;
    }
    if (uVar8 != 0) {
      if (uVar8 != 1) {
        if (local_168 != 0) {
          thunk_FUN_016d3fb4(local_164);
        }
        puVar12 = &local_15c;
      }
      if (*puVar12 != 0) {
        uVar8 = puVar12[1];
        if (uVar8 == 0) {
          return;
        }
        iVar19 = FUN_016d3bc8();
        uVar9 = *(byte *)(uVar8 - 3) & 0x1f;
        if (((*(byte *)(iVar19 + 0x14) & 0x1f) != 0) ||
           (uVar20 = *(uint *)(iVar19 + 0x14) & 0xfffff000, iVar4 = uVar20 - 0x10, uVar20 == 0)) {
          iVar4 = (uint)*(ushort *)(&DAT_0042567c + ((*(ushort *)(iVar19 + 0x14) & 0xfff) >> 6) * 2)
                  << 4;
        }
        uVar20 = (uint)(*(byte *)(uVar8 - 3) >> 5);
        iVar17 = *(int *)(iVar19 + 8) + 0x10;
        iVar15 = iVar4 * uVar9 + iVar4 + -4;
        iVar4 = iVar17 + iVar15;
        if (4 < uVar20) {
          if (uVar20 != 5) {
                    /* WARNING: Does not return */
            pcVar1 = (code *)software_udf(0xff,0x16d4018);
            (*pcVar1)();
          }
          uVar20 = *(uint *)(iVar4 + -4);
          if (uVar20 < 5) {
                    /* WARNING: Does not return */
            pcVar1 = (code *)software_udf(0xff,0x16d4022);
            (*pcVar1)();
          }
          if (*(char *)(iVar4 + -5) != '\0') {
                    /* WARNING: Does not return */
            pcVar1 = (code *)software_udf(0xff,0x16d402a);
            (*pcVar1)();
          }
        }
        if (iVar4 - uVar8 < uVar20) {
                    /* WARNING: Does not return */
          pcVar1 = (code *)software_udf(0xff,0x16d4032);
          (*pcVar1)();
        }
        if (*(char *)(iVar4 - uVar20) != '\0') {
                    /* WARNING: Does not return */
          pcVar1 = (code *)software_udf(0xff,0x16d403a);
          (*pcVar1)();
        }
        if (*(char *)(iVar17 + iVar15) != '\0') {
                    /* WARNING: Does not return */
          pcVar1 = (code *)software_udf(0xff,0x16d4040);
          (*pcVar1)();
        }
        bVar2 = *(byte *)(iVar19 + 0x14);
        uVar20 = 1 << uVar9;
        *(undefined1 *)(uVar8 - 3) = 0xff;
        *(undefined2 *)(uVar8 - 2) = 0;
        do {
          uVar10 = *(uint *)(iVar19 + 0x10);
          uVar8 = *(uint *)(iVar19 + 0xc) | uVar10;
          if ((uVar20 & uVar8) != 0) {
                    /* WARNING: Does not return */
            pcVar1 = (code *)software_udf(0xff,0x16d4074);
            (*pcVar1)();
          }
          if ((uVar10 == 0) || (uVar8 + uVar20 == (2 << (bVar2 & 0x1f)) + -1)) {
            if (DAT_018ddb0b != '\0') {
              FUN_016ddcc0(&DAT_018ddd48);
            }
            FUN_016d3ca8(&uStack_28,iVar19,uVar9);
            FUN_016dddc0(&DAT_018ddd48);
            if (unaff_r4 == 0) {
              return;
            }
            puVar7 = (undefined4 *)FUN_016d2bc8();
            uVar5 = *puVar7;
            FUN_016d6ac4(uStack_28,unaff_r4);
            *puVar7 = uVar5;
            return;
          }
          if (DAT_018ddb0b == '\0') {
            *(uint *)(iVar19 + 0x10) = uVar20 + uVar10;
            return;
          }
          puVar6 = (uint *)(iVar19 + 0x10);
          DataMemoryBarrier(0x1b);
          do {
            ExclusiveAccess(puVar6);
            uVar8 = *puVar6;
            if (uVar10 != uVar8) goto LAB_016d409c;
            bVar3 = (bool)hasExclusiveAccess(puVar6);
          } while (!bVar3);
          *puVar6 = uVar20 + uVar10;
LAB_016d409c:
          DataMemoryBarrier(0x1b);
          if (uVar10 == uVar8) {
            return;
          }
        } while( true );
      }
    }
  }
  return;
}

