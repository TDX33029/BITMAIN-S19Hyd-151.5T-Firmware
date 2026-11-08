// FUN_0128ee18 @ 0128ee18 size=2008 calls_out=9 calls_in=3
// strings: 

void FUN_0128ee18(uint *param_1,undefined4 param_2,undefined4 param_3)

{
  longlong lVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined1 uVar5;
  int iVar6;
  int iVar7;
  int extraout_r1;
  uint uVar8;
  uint uVar9;
  int iVar10;
  uint uVar11;
  uint uVar12;
  uint uVar13;
  char cVar14;
  undefined4 uVar15;
  ulonglong uVar16;
  uint local_1c8;
  uint local_1c4;
  uint local_1c0;
  uint local_1bc;
  int local_1b8;
  int local_1b4;
  undefined4 local_1b0;
  undefined4 local_1ac;
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
  int local_160;
  uint local_15c;
  undefined4 local_158;
  undefined4 local_154;
  int local_150;
  int local_14c;
  int local_148;
  uint local_144;
  int local_140;
  uint local_13c;
  int local_138;
  int local_134;
  undefined4 local_130;
  undefined4 local_12c;
  int local_128;
  uint local_124;
  undefined1 local_120;
  undefined1 local_114 [4];
  undefined1 local_110;
  undefined2 local_10f;
  undefined1 local_10d;
  char local_108;
  char local_107;
  undefined4 local_104;
  char local_100;
  char local_ff;
  uint local_fc;
  undefined1 *local_f8;
  uint local_f4;
  uint local_f0;
  undefined4 local_ec;
  uint local_e8;
  uint local_e4;
  uint local_e0;
  uint local_dc;
  int local_d8;
  int local_d4;
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
  undefined4 local_90;
  undefined4 local_8c;
  undefined4 local_88;
  undefined4 local_84;
  int local_80;
  uint local_7c;
  undefined4 local_78;
  undefined4 local_74;
  int local_70;
  int local_6c;
  int local_68;
  uint local_64;
  int local_60;
  uint local_5c;
  int local_58;
  int local_54;
  undefined4 local_50;
  undefined4 local_4c;
  int local_48;
  uint local_44;
  undefined1 local_40;
  char local_34;
  char local_33;
  uint local_30;
  
  local_120 = 7;
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
  local_1b8 = 0;
  local_130 = 0;
  local_138 = 0;
  local_140 = 0;
  local_148 = 0;
  local_150 = 0;
  local_158 = 0;
  local_160 = 0;
  local_1c4 = 0;
  local_1c8 = 0;
  local_128 = 0;
  FUN_012865a4(&local_e8,&local_1c8,param_2,param_3);
  if (local_e8 == 0) {
    uVar5 = (undefined1)local_e4;
  }
  else {
    FUN_0073498c(local_e8,local_e4);
    uVar5 = 5;
    if (extraout_r1 == 0) {
      if (local_128 == 1) {
        uVar13 = local_124;
      }
      else {
        uVar13 = 0;
        if ((local_1c8 & 1) == 0) {
          *param_1 = 0;
          uVar5 = 2;
          goto LAB_0128eed8;
        }
      }
      FUN_0128adb8(&local_108,&local_1c8);
      FUN_0128b194(&local_100,&local_1c8);
      uVar8 = (int)uVar13 >> 0x1f;
      if (local_108 == '\x01') {
        if ((local_1c8 & 1) == 0) {
          cVar14 = local_107;
        }
        else {
          cVar14 = '\0';
          if (local_107 != '\0') {
            if (local_100 == '\x01') {
              if (local_ff == '\0') goto LAB_0128f5e0;
              if (local_107 != '\x01') goto joined_r0x0128ef9c;
            }
            else if (local_107 != '\x01') goto LAB_0128f0dc;
LAB_0128f0d4:
            cVar14 = '\x01';
          }
        }
      }
      else if (local_100 == '\x01') {
        cVar14 = local_ff;
        if (((local_1c8 & 1) != 0) && (local_ff != '\0')) {
joined_r0x0128ef9c:
          if (local_ff == '\x01') goto LAB_0128f0d4;
LAB_0128f0dc:
          uVar11 = local_1c0 + uVar13;
          uVar12 = local_1bc + uVar8 + (uint)CARRY4(local_1c0,uVar13);
          if ((int)((local_1bc ^ uVar12) & ~(local_1bc ^ uVar8)) < 0) {
            cVar14 = '\0';
          }
          else {
            uVar16 = FUN_01bf0fb0(uVar11,uVar12,0x15180,0);
            lVar1 = (uVar16 & 0xffffffff) * 0x15180;
            uVar8 = (uint)lVar1;
            uVar9 = uVar11 - uVar8;
            iVar10 = uVar12 - ((int)(uVar16 >> 0x20) * 0x15180 + (int)((ulonglong)lVar1 >> 0x20) +
                              (uint)(uVar11 < uVar8));
            iVar6 = iVar10 >> 0x1f;
            lVar1 = uVar16 + CONCAT44(iVar6,iVar6);
            uVar8 = (uint)lVar1;
            local_f0 = uVar9 + 0x15180;
            if (-1 < iVar10) {
              local_f0 = uVar9;
            }
            cVar14 = '\0';
            if ((int)((ulonglong)lVar1 >> 0x20) - (uint)(uVar8 < 0x7ff506c5) == -1) {
              local_f4 = FUN_01292134(uVar8 + 0xaf93b);
              iVar4 = local_140;
              iVar3 = local_148;
              iVar2 = local_150;
              iVar10 = local_160;
              uVar15 = local_180;
              iVar6 = local_1b8;
              if (local_f4 != 0) {
                local_84 = local_164;
                local_b0 = local_190;
                local_b4 = local_194;
                local_b8 = local_198;
                local_bc = local_19c;
                local_c0 = local_1a0;
                local_c4 = local_1a4;
                local_c8 = local_1a8;
                local_cc = local_1ac;
                local_5c = local_13c;
                local_ec = 0;
                local_60 = local_140;
                local_64 = local_144;
                local_68 = local_148;
                local_70 = local_150;
                local_7c = local_15c;
                local_80 = local_160;
                local_a4 = local_184;
                local_a8 = local_188;
                local_88 = local_168;
                local_dc = local_1bc;
                local_e0 = local_1c0;
                local_8c = local_16c;
                local_d0 = local_1b0;
                local_e4 = local_1c4;
                local_e8 = local_1c8;
                local_4c = local_12c;
                local_50 = local_130;
                local_74 = local_154;
                iVar7 = local_f0 + ((local_f0 / 0x3c) * 0x10 - local_f0 / 0x3c) * -4;
                local_78 = local_158;
                local_48 = local_128;
                local_44 = local_124;
                local_40 = local_120;
                local_90 = local_170;
                local_94 = local_174;
                local_ac = local_18c;
                local_98 = local_178;
                local_9c = local_17c;
                local_a0 = local_180;
                local_d4 = local_1b4;
                local_d8 = local_1b8;
                local_54 = local_134;
                local_58 = local_138;
                local_6c = local_14c;
                if (local_138 == 1 && local_134 == 0x3c) {
                  if (iVar7 == 0) {
                    FUN_0128b2ac(&local_f4);
                  }
                  else {
                    uVar15 = 1;
                    cVar14 = '\x01';
                    if (iVar7 != 0x3b) goto LAB_0128f5e0;
                  }
                }
                else {
                  if (local_138 != 0) {
                    uVar15 = 1;
                  }
                  cVar14 = (char)uVar15;
                  if (local_138 != 0 && local_134 != iVar7) goto LAB_0128f5e0;
                  local_58 = 1;
                  local_54 = iVar7;
                }
                cVar14 = (char)uVar15;
                if (iVar6 != 0) {
                  cVar14 = '\x01';
                }
                local_d4 = (int)local_f4 >> 0xd;
                if (iVar6 == 0 || local_1b4 == local_d4) {
                  local_d8 = 1;
                  local_7c = (local_f4 & 0x1fff) >> 4;
                  cVar14 = '\0';
                  if ((local_7c - 1 >> 1 < 0xb7) &&
                     ((iVar10 == 0 || (cVar14 = '\x01', local_15c == local_7c)))) {
                    local_80 = 1;
                    local_6c = 0;
                    local_64 = local_f0 / 0xe10;
                    if (0xa8bf < local_f0) {
                      cVar14 = '\0';
                      if (0x1517f < local_f0) goto LAB_0128f5e0;
                      local_64 = local_64 - 0xc;
                      local_6c = 1;
                    }
                    if ((iVar2 == 0) || (cVar14 = '\x01', local_14c == local_6c)) {
                      local_70 = 1;
                      uVar8 = 0;
                      if (iVar3 != 0) {
                        uVar8 = local_144;
                      }
                      cVar14 = '\x01';
                      if (iVar3 == 0 || uVar8 == local_64) {
                        uVar8 = ((uint)((ulonglong)local_f0 * 0x88888889 >> 0x20) & 0x1fffff) >> 5;
                        local_68 = 1;
                        local_5c = local_f0 / 0x3c + ((uVar8 / 0x3c) * 0x10 - uVar8 / 0x3c) * -4 &
                                   0xffff;
                        uVar8 = 0;
                        if (iVar4 != 0) {
                          uVar8 = local_13c;
                        }
                        if (iVar4 == 0 || uVar8 == local_5c) {
                          local_60 = 1;
                          FUN_0128adb8(&local_34,&local_e8);
                          if ((local_34 != '\x01') &&
                             (FUN_0128b194(&local_34,&local_e8), local_34 != '\x01'))
                          goto LAB_0128f054;
                          cVar14 = local_33;
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
      else {
        iVar6 = FUN_012920c0(local_104);
        uVar11 = (uint)((longlong)iVar6 * 0x15180);
        uVar12 = uVar11 - uVar13;
        uVar9 = uVar12 + local_fc;
        uVar8 = (((int)((ulonglong)((longlong)iVar6 * 0x15180) >> 0x20) -
                 (uVar8 + (uVar11 < uVar13))) + (uint)CARRY4(uVar12,local_fc)) -
                ((uVar9 < 0x77934880) + 0xe);
        local_30 = local_fc;
        if (((local_1c8 & 1) != 0) && (local_1c0 != uVar9 + 0x886cb780 || local_1bc != uVar8)) {
          cVar14 = '\x01';
          if ((local_f8 < &DAT_3b9aca00) ||
             (local_1c0 != uVar9 + 0x886cb781 ||
              local_1bc != uVar8 + (0xfffffffe < uVar9 + 0x886cb780))) goto LAB_0128f5e0;
        }
LAB_0128f054:
        cVar14 = '\0';
        local_10f = (undefined2)(local_30 >> 8);
        local_10d = (undefined1)(local_30 >> 0x18);
        local_110 = (undefined1)local_30;
        if (uVar13 + 0x1517f < 0x2a2ff) {
          FUN_0128f7dc(&local_e8,local_114,uVar13);
          if (local_e8 == 0) {
            *(undefined1 *)(param_1 + 1) = 1;
            local_e8 = 0;
          }
          else {
            param_1[1] = local_e4;
            param_1[2] = local_e0;
            param_1[3] = uVar13;
          }
          goto LAB_0128f5e8;
        }
      }
LAB_0128f5e0:
      local_e8 = 0;
      *(char *)(param_1 + 1) = cVar14;
LAB_0128f5e8:
      *param_1 = local_e8;
      return;
    }
  }
  *param_1 = 0;
LAB_0128eed8:
  *(undefined1 *)(param_1 + 1) = uVar5;
  return;
}

