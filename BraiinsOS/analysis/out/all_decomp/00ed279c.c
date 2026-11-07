// FUN_00ed279c @ 00ed279c size=3080 calls_out=17 calls_in=3
// strings: input is not enough for unique date and time | no possible date and time matching input | `NaiveDateTime - TimeDelta` overflowed

void FUN_00ed279c(uint *param_1,int *param_2)

{
  int iVar1;
  longlong lVar2;
  bool bVar3;
  int iVar4;
  int iVar5;
  bool bVar6;
  undefined4 *puVar7;
  int extraout_r1;
  undefined1 *puVar8;
  int iVar9;
  uint uVar10;
  uint uVar11;
  undefined4 **ppuVar12;
  int iVar13;
  undefined4 ***pppuVar15;
  undefined4 **ppuVar14;
  uint uVar16;
  uint uVar17;
  uint uVar18;
  int iVar19;
  uint uVar20;
  ulonglong uVar21;
  undefined4 **local_1c0;
  uint local_1bc;
  undefined4 **local_1b8;
  uint local_1b4;
  int local_1b0;
  int local_1ac;
  undefined4 local_1a8;
  undefined4 local_1a4;
  undefined4 local_1a0;
  undefined4 local_19c;
  undefined4 local_198;
  undefined4 local_194;
  undefined4 local_190;
  undefined4 local_18c;
  undefined4 local_188;
  undefined4 local_184;
  undefined4 local_180;
  undefined4 local_17c;
  undefined4 local_178;
  undefined4 local_174;
  undefined4 local_170;
  undefined4 local_16c;
  undefined4 local_168;
  undefined4 local_164;
  undefined4 local_160;
  undefined4 local_15c;
  int local_158;
  uint local_154;
  undefined4 local_150;
  undefined4 local_14c;
  int local_148;
  uint local_144;
  int local_140;
  uint local_13c;
  int local_138;
  uint local_134;
  uint local_130;
  uint local_12c;
  int local_128;
  uint local_124;
  int local_120;
  uint local_11c;
  undefined1 local_118;
  undefined1 local_10c [4];
  undefined1 local_108;
  undefined2 local_107;
  undefined1 local_105;
  undefined1 *local_104;
  char local_100;
  byte local_ff;
  uint local_fc;
  uint **local_f8;
  code *local_f4;
  undefined4 **local_f0;
  undefined1 *local_ec;
  int local_e8;
  int local_e4;
  undefined4 local_e0;
  undefined4 local_dc;
  undefined4 local_d8;
  undefined4 local_d4;
  undefined4 local_d0;
  undefined4 local_cc;
  undefined4 local_c8;
  undefined4 local_c4;
  undefined4 local_c0;
  undefined4 local_bc;
  undefined4 local_b8;
  undefined4 local_b4;
  undefined4 local_b0;
  undefined4 local_ac;
  undefined4 local_a8;
  undefined4 local_a4;
  undefined4 local_a0;
  undefined4 local_9c;
  undefined4 local_98;
  undefined4 local_94;
  int local_90;
  uint local_8c;
  undefined4 local_88;
  undefined4 local_84;
  int local_80;
  uint local_7c;
  int local_78;
  uint local_74;
  int local_70;
  uint local_6c;
  uint local_68;
  uint local_64;
  int local_60;
  uint local_5c;
  int local_58;
  uint local_54;
  undefined1 local_50;
  undefined4 **local_48;
  uint local_44;
  undefined1 *local_40;
  undefined4 **local_38;
  uint local_34;
  undefined1 *local_30;
  
  FUN_00efbe38(&local_1c0);
  if (local_1c0 == (undefined4 **)0x1) {
    *param_1 = 0;
    param_1[1] = local_1bc;
    return;
  }
  local_44 = local_1b4;
  local_48 = local_1b8;
  if (local_1b4 != 0) {
    local_f0 = (undefined4 **)&DAT_005674cc;
    local_f8 = (uint **)&local_48;
    local_f4 = FUN_00fac4cc;
    local_ec = &LAB_00fac484;
    FUN_00600d2c(&local_38,&DAT_0056c1eb,&local_f8);
    puVar7 = (undefined4 *)thunk_FUN_016d4a50(0xc);
    if (puVar7 == (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_00600874(4,0xc);
    }
    pppuVar15 = &local_38;
    goto LAB_00ed3474;
  }
  if ((undefined4 **)param_2[1] < local_1b8) {
    FUN_015e79d4((uint)&local_f8 | 4,0x25,1,0);
    local_f8 = (undefined4 **)0x80000000;
    puVar7 = (undefined4 *)thunk_FUN_016d4a50(0xc);
    if (puVar7 == (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_00600874(4,0xc);
    }
  }
  else {
    *param_2 = *param_2 + (int)local_1b8;
    param_2[1] = param_2[1] - (int)local_1b8;
    FUN_00fab1e0(&local_1c0);
    uVar16 = local_1bc;
    if (local_1c0 != (undefined4 **)0x1) {
      local_118 = 7;
      local_160 = 0;
      local_168 = 0;
      local_170 = 0;
      local_178 = 0;
      local_180 = 0;
      local_188 = 0;
      local_190 = 0;
      local_198 = 0;
      local_1a0 = 0;
      local_1a8 = 0;
      local_1b0 = 0;
      local_128 = 0;
      local_130 = 0;
      local_138 = 0;
      local_140 = 0;
      local_148 = 0;
      local_150 = 0;
      local_158 = 0;
      local_1bc = 0;
      local_1c0 = (undefined4 **)0x0;
      local_120 = 0;
      FUN_00f624d8(&local_f8,&local_1c0,uVar16,local_1b8);
      if (local_f8 == (undefined4 **)0x0) {
        uVar16 = (uint)local_f4 & 0xff;
        goto LAB_00ed29f0;
      }
      FUN_00f6aec0(local_f8,local_f4);
      if (extraout_r1 == 0) {
        if (local_120 == 1) {
          uVar20 = local_11c;
        }
        else {
          uVar20 = 0;
          if (((uint)local_1c0 & 1) == 0) {
            local_f0 = (undefined4 **)0x0;
            local_f4 = (code *)0x1;
            local_f8 = (undefined4 **)0x0;
            FUN_00edff4c(&local_f8,0,0x2c,1,1);
            ppuVar12 = local_f0;
            FUN_016dd1aa((int)local_f4 + (int)local_f0,
                         "input is not enough for unique date and time",0x2c);
            local_1b8 = (undefined4 **)((int)ppuVar12 + 0x2c);
            goto LAB_00ed3448;
          }
        }
        FUN_00f68c94(&local_100,&local_1c0);
        iVar19 = local_148;
        uVar16 = 2;
        bVar6 = false;
        uVar10 = (int)uVar20 >> 0x1f;
        if (local_148 != 1) {
LAB_00ed2c50:
          bVar3 = true;
          if (local_100 == '\0') {
            if ((((uint)local_1c0 & 1) == 0) || (uVar16 = 0, bVar6)) goto LAB_00ed29f0;
          }
          else {
            if (((uint)local_1c0 & 1) == 0) {
LAB_00ed3258:
              uVar16 = (uint)local_ff;
              goto LAB_00ed29f0;
            }
LAB_00ed2c6c:
            uVar16 = 0;
            if (((local_ff == 0) || (bVar3 && bVar6)) || (uVar16 = 1, local_ff == 1))
            goto LAB_00ed29f0;
          }
          uVar17 = (int)local_1b8 + uVar20;
          uVar18 = local_1b4 + uVar10 + (uint)CARRY4((uint)local_1b8,uVar20);
          if ((int)((local_1b4 ^ uVar18) & ~(local_1b4 ^ uVar10)) < 0) {
            uVar16 = 0;
            goto LAB_00ed29f0;
          }
          uVar16 = 0;
          uVar21 = FUN_01846048(uVar17,uVar18,0x15180,0);
          lVar2 = (uVar21 & 0xffffffff) * 0x15180;
          uVar10 = (uint)lVar2;
          uVar11 = uVar17 - uVar10;
          iVar13 = uVar18 - ((int)(uVar21 >> 0x20) * 0x15180 + (int)((ulonglong)lVar2 >> 0x20) +
                            (uint)(uVar17 < uVar10));
          iVar9 = iVar13 >> 0x1f;
          lVar2 = uVar21 + CONCAT44(iVar9,iVar9);
          uVar17 = (uint)lVar2;
          uVar10 = uVar11 + 0x15180;
          if (-1 < iVar13) {
            uVar10 = uVar11;
          }
          if (((int)((ulonglong)lVar2 >> 0x20) - (uint)(uVar17 < 0x7ff506c5) != -1) ||
             (ppuVar12 = (undefined4 **)FUN_00f6b330(uVar17 + 0xaf93b), uVar17 = local_130,
             iVar5 = local_138, iVar4 = local_140, iVar13 = local_158, iVar9 = local_1b0,
             ppuVar12 == (undefined4 **)0x0)) goto LAB_00ed29f0;
          local_94 = local_15c;
          local_c0 = local_188;
          local_c4 = local_18c;
          local_c8 = local_190;
          local_cc = local_194;
          local_d0 = local_198;
          local_d4 = local_19c;
          local_d8 = local_1a0;
          local_dc = local_1a4;
          local_e0 = local_1a8;
          local_ec = (undefined1 *)local_1b4;
          local_f0 = local_1b8;
          local_f4 = (code *)local_1bc;
          local_f8 = local_1c0;
          local_5c = local_124;
          local_60 = local_128;
          local_84 = local_14c;
          local_88 = local_150;
          local_58 = local_120;
          local_54 = local_11c;
          local_6c = local_134;
          local_40 = (undefined1 *)0x0;
          local_70 = local_138;
          local_74 = local_13c;
          local_78 = local_140;
          local_b8 = local_180;
          local_7c = local_144;
          local_a8 = local_170;
          local_8c = local_154;
          local_a4 = local_16c;
          local_90 = local_158;
          local_ac = local_174;
          local_98 = local_160;
          local_9c = local_164;
          local_b4 = local_17c;
          local_50 = local_118;
          local_a0 = local_168;
          uVar18 = uVar10 + ((uVar10 / 0x3c) * 0x10 - uVar10 / 0x3c) * -4;
          local_b0 = local_178;
          local_bc = local_184;
          local_e4 = local_1ac;
          local_e8 = local_1b0;
          local_80 = iVar19;
          local_64 = local_12c;
          local_68 = local_130;
          local_48 = ppuVar12;
          local_44 = uVar10;
          if (local_130 == 1 && local_12c == 0x3c) {
            if (uVar18 == 0) {
              FUN_00f6b9a0(&local_38,&local_48);
              if (local_38 == (undefined4 **)0x0) {
                    /* WARNING: Subroutine does not return */
                FUN_00fb74b8("`NaiveDateTime - TimeDelta` overflowed",0x26,&DAT_0188006c);
              }
              local_48 = local_38;
              local_44 = local_34;
              local_40 = local_30;
              uVar16 = uVar17;
            }
            else {
              uVar16 = 1;
              if (uVar18 != 0x3b) goto LAB_00ed29f0;
            }
          }
          else {
            uVar16 = local_130;
            if (local_130 != 0) {
              uVar16 = 1;
            }
            if (local_130 != 0 && local_12c != uVar18) goto LAB_00ed29f0;
            local_68 = 1;
            local_64 = uVar18;
          }
          if (iVar9 != 0) {
            uVar16 = 1;
          }
          iVar1 = (int)local_48 >> 0xd;
          if (iVar9 != 0 && local_1ac != iVar1) goto LAB_00ed29f0;
          local_e8 = 1;
          uVar10 = ((uint)local_48 & 0x1fff) >> 4;
          uVar16 = 0;
          local_e4 = iVar1;
          if ((0xb6 < uVar10 - 1 >> 1) || ((iVar13 != 0 && (uVar16 = 1, local_154 != uVar10))))
          goto LAB_00ed29f0;
          local_90 = 1;
          uVar18 = 0;
          uVar17 = local_44 / 0xe10;
          local_8c = uVar10;
          if (0xa8bf < local_44) {
            uVar16 = 0;
            if (0x1517f < local_44) goto LAB_00ed29f0;
            uVar17 = uVar17 - 0xc;
            uVar18 = 1;
          }
          if ((iVar19 != 0) && (uVar16 = 1, local_144 != uVar18)) goto LAB_00ed29f0;
          uVar16 = 1;
          local_80 = 1;
          uVar10 = 0;
          if (iVar4 != 0) {
            uVar10 = local_13c;
          }
          local_7c = uVar18;
          if (iVar4 != 0 && uVar10 != uVar17) goto LAB_00ed29f0;
          uVar10 = ((uint)((ulonglong)local_44 * 0x88888889 >> 0x20) & 0x1fffff) >> 5;
          local_78 = 1;
          uVar18 = local_44 / 0x3c + ((uVar10 / 0x3c) * 0x10 - uVar10 / 0x3c) * -4 & 0xffff;
          uVar10 = 0;
          if (iVar5 != 0) {
            uVar10 = local_134;
          }
          local_74 = uVar17;
          if (iVar5 != 0 && uVar10 != uVar18) goto LAB_00ed29f0;
          local_70 = 1;
          local_6c = uVar18;
          FUN_00f68c94(&local_38,&local_f8);
          if ((char)local_38 != '\x01') {
            FUN_00f69404(&local_38,&local_f8);
            if ((char)local_38 != '\x01') goto LAB_00ed3358;
          }
          uVar16 = (uint)local_38 >> 8 & 0xff;
LAB_00ed29f0:
          local_f0 = (undefined4 **)0x0;
          local_f4 = (code *)0x1;
          local_f8 = (undefined4 **)0x0;
                    /* WARNING: Could not recover jumptable at 0x00ed2a0c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (*(code *)((int)&DAT_00ed2a10 + (&DAT_00ed2a10)[uVar16]))();
          return;
        }
        bVar6 = true;
        if (1 < local_144) {
LAB_00ed2c44:
          uVar16 = 0;
          goto LAB_00ed2c50;
        }
        if (local_140 != 1) {
LAB_00ed2c4c:
          bVar6 = false;
          goto LAB_00ed2c50;
        }
        if (0xb < local_13c) goto LAB_00ed2c44;
        if (local_138 != 1) goto LAB_00ed2c4c;
        if (0x3b < local_134) goto LAB_00ed2c44;
        puVar8 = (undefined1 *)0x0;
        uVar17 = 0;
        if (local_130 != 0) {
          if (local_12c < 0x3c) {
            uVar17 = local_12c;
            goto LAB_00ed31f4;
          }
          uVar17 = 0x3b;
          puVar8 = &DAT_3b9aca00;
          if (local_12c == 0x3c) goto LAB_00ed31f4;
LAB_00ed3260:
          uVar16 = 0;
          goto LAB_00ed2c50;
        }
LAB_00ed31f4:
        uVar18 = 0;
        if (local_128 == 1) {
          if (999999999 < local_124) goto LAB_00ed3260;
          uVar18 = local_124;
          if (local_130 == 0) {
            bVar6 = false;
            goto LAB_00ed2c50;
          }
        }
        puVar8 = puVar8 + uVar18;
        if (((undefined1 *)0x3b9ac9ff < puVar8) && (uVar16 = 0, uVar17 != 0x3b)) goto LAB_00ed2c50;
        if (local_100 == '\x01') {
          bVar3 = false;
          bVar6 = true;
          if (((uint)local_1c0 & 1) != 0) goto LAB_00ed2c6c;
          goto LAB_00ed3258;
        }
        iVar19 = (int)local_fc >> 0xd;
        local_34 = (local_13c + local_144 * 0xc) * 0xe10 + local_134 * 0x3c + uVar17;
        iVar9 = iVar19 + -1;
        if (iVar19 < 1) {
          iVar19 = (1U - iVar19) / 400 + 1;
          iVar9 = iVar19 * 400 + iVar9;
          iVar19 = iVar19 * -0x23ab1;
        }
        else {
          iVar19 = 0;
        }
        local_30 = puVar8;
        if (((uint)local_1c0 & 1) != 0) {
          lVar2 = (longlong)
                  (int)(((((local_fc & 0x1fff) >> 4) + iVar19) - iVar9 / 100) + (iVar9 * 0x5b5 >> 2)
                        + (iVar9 / 100 >> 2) + -0xaf93b) * 0x15180 +
                  CONCAT44(-(uVar10 + (local_34 < uVar20)),local_34 - uVar20);
          if (lVar2 != CONCAT44(local_1b4,local_1b8)) {
            uVar16 = 1;
            if ((puVar8 < &DAT_3b9aca00) || (lVar2 + 1 != CONCAT44(local_1b4,local_1b8)))
            goto LAB_00ed29f0;
          }
        }
LAB_00ed3358:
        uVar16 = 0;
        local_105 = (undefined1)(local_34 >> 0x18);
        local_107 = (undefined2)(local_34 >> 8);
        local_108 = (undefined1)local_34;
        local_104 = local_30;
        if (0x2a2fe < uVar20 + 0x1517f) goto LAB_00ed29f0;
        FUN_00f6b80c(&local_f8,local_10c,uVar20);
        if (local_f8 != (undefined4 **)0x0) {
          *param_1 = (uint)local_f8;
          param_1[1] = (uint)local_f4;
          param_1[2] = (uint)local_f0;
          return;
        }
        local_f0 = (undefined4 **)0x0;
        local_f4 = (code *)0x1;
        local_f8 = (undefined4 **)0x0;
        FUN_00edff4c(&local_f8,0,0x28,1,1);
        ppuVar12 = local_f0;
        FUN_016dd1aa((int)local_f4 + (int)local_f0,"no possible date and time matching input",0x28);
        local_1b8 = (undefined4 **)((int)ppuVar12 + 0x28);
      }
      else {
        local_f0 = (undefined4 **)0x0;
        local_f4 = (code *)0x1;
        local_f8 = (undefined4 **)0x0;
        FUN_00edff4c(&local_f8,0,0xe,1,1);
        puVar7 = (undefined4 *)((int)local_f4 + (int)local_f0);
        *puVar7 = 0x69617274;
        puVar7[1] = 0x676e696c;
        puVar7[2] = 0x706e6920;
        *(undefined2 *)(puVar7 + 3) = 0x7475;
        local_1b8 = (undefined4 **)((int)local_f0 + 0xe);
      }
LAB_00ed3448:
      local_1c0 = local_f8;
      local_1bc = (uint)local_f4;
      puVar7 = (undefined4 *)thunk_FUN_016d4a50(0xc);
      if (puVar7 == (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_00600874(4,0xc);
      }
      pppuVar15 = &local_1c0;
      goto LAB_00ed3474;
    }
    local_f4 = (code *)local_1bc;
    local_f8 = (undefined4 **)0x80000001;
    local_f0 = local_1b8;
    puVar7 = (undefined4 *)thunk_FUN_016d4a50(0xc);
    if (puVar7 == (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_00600874(4,0xc);
    }
  }
  pppuVar15 = &local_f8;
LAB_00ed3474:
  ppuVar12 = pppuVar15[1];
  ppuVar14 = pppuVar15[2];
  *puVar7 = *pppuVar15;
  puVar7[1] = ppuVar12;
  puVar7[2] = ppuVar14;
  *param_1 = 0;
  param_1[1] = (uint)puVar7;
  return;
}

