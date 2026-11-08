// FUN_014043ec @ 014043ec size=3236 calls_out=6 calls_in=0
// strings: 

/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_014043ec(undefined1 *param_1,int param_2,undefined4 param_3)

{
  undefined1 uVar1;
  int iVar2;
  undefined2 *puVar3;
  uint *puVar4;
  uint *puVar5;
  int *piVar6;
  undefined4 uVar7;
  int iVar8;
  uint uVar9;
  uint uVar10;
  uint *puVar11;
  uint *puVar12;
  uint uVar13;
  int *piVar14;
  uint uVar15;
  uint *puVar16;
  uint *puVar17;
  bool bVar18;
  uint local_2a8;
  uint local_2a4;
  uint local_278;
  uint local_274;
  uint local_270;
  int local_26c;
  int local_268;
  undefined4 uStack_264;
  int iStack_260;
  undefined4 uStack_25c;
  undefined4 local_258;
  int local_254;
  undefined4 uStack_250;
  undefined4 uStack_24c;
  undefined4 uStack_248;
  uint local_240;
  uint local_23c;
  undefined4 uStack_238;
  undefined4 uStack_234;
  undefined4 uStack_230;
  uint local_228;
  uint local_224;
  uint local_220;
  int local_21c;
  int local_218;
  undefined4 local_214;
  int local_210;
  undefined4 local_20c;
  undefined4 local_208;
  undefined4 local_204;
  undefined4 local_200;
  undefined4 local_1fc;
  undefined4 local_1f8;
  undefined4 local_1f4;
  undefined4 local_1f0;
  undefined4 local_1ec;
  undefined4 local_1e8;
  undefined4 local_1e4;
  undefined4 local_1e0;
  undefined4 local_1dc;
  undefined4 local_1d8;
  undefined4 local_1d4;
  undefined4 local_1d0;
  undefined4 local_1cc;
  undefined4 local_1c8;
  undefined4 local_1c4;
  undefined4 local_1c0;
  undefined4 local_1bc;
  undefined4 local_1b8;
  undefined4 local_1b4;
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
  undefined4 local_160;
  undefined4 local_15c;
  undefined4 local_158;
  undefined4 local_154;
  undefined4 local_150;
  undefined4 local_14c;
  undefined4 local_148;
  undefined4 local_144;
  undefined4 local_140;
  undefined4 local_13c;
  undefined4 local_138;
  undefined4 local_134;
  undefined4 local_130;
  undefined4 local_12c;
  undefined4 local_128;
  undefined4 local_124;
  undefined4 local_120;
  undefined4 local_11c;
  undefined4 local_118;
  undefined4 local_114;
  undefined4 local_110;
  undefined4 local_10c;
  undefined4 local_108;
  undefined4 local_104;
  undefined4 local_100;
  undefined4 local_fc;
  undefined4 local_f8;
  undefined4 local_f4;
  undefined4 local_f0;
  undefined4 local_ec;
  undefined4 local_e8;
  undefined4 local_e4;
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
  undefined4 local_90;
  undefined4 local_8c;
  undefined4 local_88;
  undefined4 local_84;
  undefined4 local_80;
  undefined4 local_7c;
  undefined4 local_78;
  undefined4 local_74;
  undefined4 local_70;
  undefined4 local_6c;
  undefined4 local_68;
  undefined4 local_64;
  undefined4 local_60;
  undefined4 local_5c;
  undefined4 local_58;
  undefined4 local_54;
  undefined4 local_50;
  undefined4 local_4c;
  undefined4 local_48;
  undefined4 local_44;
  undefined4 local_40;
  undefined4 local_3c;
  undefined4 local_38;
  undefined4 local_34;
  undefined4 local_30;
  undefined4 local_2c;
  
  local_210 = DAT_018d8a84;
  local_220 = 2;
  if (DAT_018dd947 == '\0') {
    local_270 = DAT_018d8a84 + 0x1c;
    local_274 = 0;
    local_278 = 4;
    FUN_01694880(&local_228,&local_278);
  }
  local_278 = local_228;
  local_274 = local_224;
  local_270 = local_220;
  local_26c = local_21c;
  local_268 = local_218;
  uStack_264 = local_214;
  iStack_260 = local_210;
  uStack_25c = local_20c;
  if (local_220 != 2) {
    iVar2 = local_21c;
    if ((local_220 & 1) != 0) {
      iVar2 = local_21c + (*(int *)(local_218 + 8) - 1U & 0xfffffff8) + 8;
    }
    (**(code **)(local_218 + 0x30))(iVar2,&local_278);
  }
  puVar11 = (uint *)(param_2 + 0x80);
  puVar3 = (undefined2 *)((uint)&local_228 | 1);
  puVar4 = (uint *)(param_2 + 0x88);
  puVar5 = (uint *)(param_2 + 0x74);
  piVar6 = (int *)(param_2 + 0xa8);
  puVar16 = (uint *)(param_2 + 0xb8);
  piVar14 = (int *)(param_2 + 0x70);
LAB_0140452c:
  while (iVar2 = *piVar14, 1 < iVar2 - 3U) {
    if (iVar2 == 0) {
      uVar9 = *(uint *)(param_2 + 0x7c);
    }
    else {
      uVar9 = 0;
      if (((iVar2 == 1) && (*(int *)(param_2 + 0x84) == 0)) &&
         (uVar9 = *(uint *)(param_2 + 0x7c) - *puVar11, *(uint *)(param_2 + 0x7c) < *puVar11)) {
        uVar9 = 0;
      }
    }
    uVar10 = *puVar4;
    if (uVar10 < uVar9) {
      uVar9 = uVar10;
    }
    if (uVar9 == 0) goto LAB_01404854;
    uVar9 = 0;
    iVar8 = 0;
    if ((*(int *)(param_2 + 0xbc) == 0) &&
       (iVar8 = *(uint *)(param_2 + 0xac) - *puVar16, *(uint *)(param_2 + 0xac) < *puVar16)) {
      iVar8 = 0;
    }
    if (iVar2 == 0) {
      uVar9 = *(uint *)(param_2 + 0x7c);
LAB_01404cbc:
      if (uVar10 < uVar9) {
        uVar9 = uVar10;
      }
      if (uVar9 == 0 && iVar8 == 0) goto LAB_01404cd4;
LAB_01404970:
      iVar2 = (**(code **)(*(int *)(param_2 + 0xd4) + 0x1c))(*(undefined4 *)(param_2 + 0xd0));
      if (iVar2 == 0) {
        if (*(int *)(param_2 + 0xbc) == 0) {
          uVar9 = *puVar16;
          if (*(uint *)(param_2 + 0xac) <= uVar9) goto LAB_01404d10;
          iVar2 = *piVar6 + uVar9;
          uVar9 = *(uint *)(param_2 + 0xac) - uVar9;
        }
        else {
LAB_01404d10:
          if (*piVar14 == 0) {
            iVar2 = *(int *)(param_2 + 0x78);
            uVar9 = *(uint *)(param_2 + 0x7c);
          }
          else if (*piVar14 == 1) {
            uVar9 = *(uint *)(param_2 + 0x7c);
            uVar10 = *puVar11;
            if (uVar9 < *puVar11) {
              uVar10 = uVar9;
            }
            if (*(int *)(param_2 + 0x84) != 0) {
              uVar10 = uVar9;
            }
            iVar2 = *(int *)(param_2 + 0x78) + uVar10;
            uVar9 = uVar9 - uVar10;
          }
          else {
            iVar2 = 1;
            uVar9 = 0;
          }
          if (*puVar4 < uVar9) {
            uVar9 = *puVar4;
          }
        }
        (**(code **)(*(int *)(param_2 + 0xd4) + 0x10))
                  (&local_228,*(undefined4 *)(param_2 + 0xd0),param_3,iVar2,uVar9);
        uVar9 = local_228 & 0xff;
        if (uVar9 == 5) {
LAB_01404fd4:
          uVar9 = 5;
        }
        else {
          local_2a4 = local_224;
          if (uVar9 == 4) goto LAB_01404ddc;
LAB_0140503c:
          local_258 = (int *)CONCAT22(CONCAT11(local_258._3_1_,*(undefined1 *)(puVar3 + 1)),*puVar3)
          ;
        }
        uVar1 = (undefined1)uVar9;
        if (uVar9 != 5) {
          param_1[3] = local_258._2_1_;
          *(undefined2 *)(param_1 + 1) = (undefined2)local_258;
          *(uint *)(param_1 + 4) = local_2a4;
          goto LAB_01404f60;
        }
        goto LAB_01405060;
      }
      local_30 = 1;
      iVar2 = 0;
      local_38 = 1;
      local_40 = 1;
      local_48 = 1;
      local_50 = 1;
      local_58 = 1;
      local_60 = 1;
      local_68 = 1;
      local_70 = 1;
      local_78 = 1;
      local_80 = 1;
      local_88 = 1;
      local_90 = 1;
      local_98 = 1;
      local_a0 = 1;
      local_a8 = 1;
      local_b0 = 1;
      local_b8 = 1;
      local_c0 = 1;
      local_c8 = 1;
      local_d0 = 1;
      local_d8 = 1;
      local_e0 = 1;
      local_e8 = 1;
      local_f0 = 1;
      local_f8 = 1;
      local_100 = 1;
      local_108 = 1;
      local_110 = 1;
      local_118 = 1;
      local_120 = 1;
      local_128 = 1;
      local_130 = 1;
      local_138 = 1;
      local_140 = 1;
      local_148 = 1;
      local_150 = 1;
      local_158 = 1;
      local_160 = 1;
      local_168 = 1;
      local_170 = 1;
      local_178 = 1;
      local_180 = 1;
      local_188 = 1;
      local_190 = 1;
      local_198 = 1;
      local_1a0 = 1;
      local_1a8 = 1;
      local_1b0 = 1;
      local_1b8 = 1;
      local_1c0 = 1;
      local_1c8 = 1;
      local_1d0 = 1;
      local_1d8 = 1;
      local_1e0 = 1;
      local_1e8 = 1;
      local_1f0 = 1;
      local_1f8 = 1;
      local_200 = 1;
      local_208 = 1;
      local_210 = 1;
      local_218 = 1;
      local_220 = 1;
      local_228 = 1;
      local_2c = 0;
      iVar8 = 0;
      local_34 = 0;
      local_3c = 0;
      local_44 = 0;
      local_4c = 0;
      local_54 = 0;
      local_5c = 0;
      local_64 = 0;
      local_6c = 0;
      local_74 = 0;
      local_7c = 0;
      local_84 = 0;
      local_8c = 0;
      local_94 = 0;
      local_9c = 0;
      local_a4 = 0;
      local_ac = 0;
      local_b4 = 0;
      local_bc = 0;
      local_c4 = 0;
      local_cc = 0;
      local_d4 = 0;
      local_dc = 0;
      local_e4 = 0;
      local_ec = 0;
      local_f4 = 0;
      local_fc = 0;
      local_104 = 0;
      local_10c = 0;
      local_114 = 0;
      local_11c = 0;
      local_124 = 0;
      local_12c = 0;
      local_134 = 0;
      local_13c = 0;
      local_144 = 0;
      local_14c = 0;
      local_154 = 0;
      local_15c = 0;
      local_164 = 0;
      local_16c = 0;
      local_174 = 0;
      local_17c = 0;
      local_184 = 0;
      local_18c = 0;
      local_194 = 0;
      local_19c = 0;
      local_1a4 = 0;
      local_1ac = 0;
      local_1b4 = 0;
      local_1bc = 0;
      local_1c4 = 0;
      local_1cc = 0;
      local_1d4 = 0;
      local_1dc = 0;
      local_1e4 = 0;
      local_1ec = 0;
      local_1f4 = 0;
      local_1fc = 0;
      local_204 = 0;
      local_20c = 0;
      local_214 = 0;
      local_21c = 0;
      local_224 = 0;
      puVar17 = &local_228;
      if (*(int *)(param_2 + 0xbc) == 0) {
        uVar9 = *puVar16;
        if (uVar9 < *(uint *)(param_2 + 0xac)) {
          local_224 = *(uint *)(param_2 + 0xac) - uVar9;
          local_228 = *piVar6 + uVar9;
          iVar8 = 1;
          puVar17 = &local_220;
        }
      }
      uVar9 = *puVar4;
      puVar12 = puVar4;
      if (uVar9 != 0) {
        puVar12 = (uint *)*piVar14;
      }
      if (uVar9 != 0 && puVar12 != (uint *)&SUB_00000002) {
        if (puVar12 == (uint *)&DAT_00000001) {
          if (*(int *)(param_2 + 0x84) == 0) {
            uVar15 = *puVar11;
            if (uVar15 < *(uint *)(param_2 + 0x7c)) {
              uVar10 = *(uint *)(param_2 + 0x7c) - uVar15;
              uVar15 = *(int *)(param_2 + 0x78) + uVar15;
              goto LAB_01404e50;
            }
          }
        }
        else {
          uVar10 = *(uint *)(param_2 + 0x7c);
          if (uVar10 != 0) {
            uVar15 = *(uint *)(param_2 + 0x78);
LAB_01404e50:
            if (uVar9 < uVar10) {
              uVar10 = uVar9;
            }
            *puVar17 = uVar15;
            puVar17[1] = uVar10;
            iVar2 = 1;
          }
        }
      }
      (**(code **)(*(int *)(param_2 + 0xd4) + 0x20))
                (&local_240,*(undefined4 *)(param_2 + 0xd0),param_3,&local_228,iVar2 + iVar8);
      uVar9 = local_240 & 0xff;
      if (uVar9 == 5) goto LAB_01404fd4;
      local_2a4 = local_23c;
      if (uVar9 != 4) {
        puVar3 = (undefined2 *)((uint)&local_240 | 1);
        goto LAB_0140503c;
      }
LAB_01404ddc:
      uVar9 = local_2a4;
      if (*(int *)(param_2 + 0xbc) == 0) {
        uVar15 = *puVar16;
        uVar10 = *(uint *)(param_2 + 0xac);
        uVar13 = uVar10 - uVar15;
        bVar18 = uVar13 == 0;
        if (uVar10 < uVar15) {
          uVar13 = 0;
        }
        if (uVar10 < uVar15 || bVar18) goto LAB_01404e20;
        if (uVar13 < local_2a4) {
          *puVar16 = uVar15 + uVar13;
          *(uint *)(param_2 + 0xbc) = (uint)CARRY4(uVar15,uVar13);
          uVar9 = local_2a4 - uVar13;
          goto LAB_01404e20;
        }
        *puVar16 = uVar15 + local_2a4;
        *(uint *)(param_2 + 0xbc) = (uint)CARRY4(uVar15,local_2a4);
      }
      else {
LAB_01404e20:
        FUN_0145a620(piVar14,uVar9);
      }
    }
    else {
      if (iVar2 != 1) goto LAB_01404cbc;
      if ((*(int *)(param_2 + 0x84) == 0) &&
         (uVar9 = *(uint *)(param_2 + 0x7c) - *puVar11, *(uint *)(param_2 + 0x7c) < *puVar11)) {
        uVar9 = 0;
      }
      if (uVar10 < uVar9) {
        uVar9 = uVar10;
      }
      if (uVar9 != 0 || iVar8 != 0) goto LAB_01404970;
LAB_01404cd4:
      local_2a4 = 0;
    }
  }
  if ((*(int *)(param_2 + 0xbc) == 0) && (*puVar16 < *(uint *)(param_2 + 0xac))) {
    iVar2 = (**(code **)(*(int *)(param_2 + 0xd4) + 0x1c))(*(undefined4 *)(param_2 + 0xd0));
    if (iVar2 == 0) {
      uVar15 = *puVar16;
      iVar2 = *(int *)(param_2 + 0xbc);
      uVar10 = *(uint *)(param_2 + 0xac);
      uVar9 = uVar15;
      if (uVar10 < uVar15) {
        uVar9 = uVar10;
      }
      if (iVar2 != 0) {
        uVar9 = uVar10;
      }
      (**(code **)(*(int *)(param_2 + 0xd4) + 0x10))
                (&local_228,*(undefined4 *)(param_2 + 0xd0),param_3,*(int *)(param_2 + 0xa8) + uVar9
                 ,uVar10 - uVar9);
      uVar9 = local_228 & 0xff;
      if (uVar9 != 5) {
        local_2a8 = local_224;
        if (uVar9 != 4) {
          goto LAB_01404ff0;
        }
LAB_01404c84:
        uVar9 = 0;
        if ((iVar2 == 0) &&
           (uVar9 = *(uint *)(param_2 + 0xac) - uVar15, *(uint *)(param_2 + 0xac) < uVar15)) {
          uVar9 = 0;
        }
        if (uVar9 < local_2a8) {
          local_228 = local_2a8;
          local_224 = uVar9;
                    /* WARNING: Subroutine does not return */
          FUN_00f600c0(&local_228);
        }
        *puVar16 = uVar15 + local_2a8;
        *(uint *)(param_2 + 0xbc) = iVar2 + (uint)CARRY4(uVar15,local_2a8);
        goto LAB_0140452c;
      }
LAB_01404fcc:
      uVar9 = 5;
    }
    else {
      uVar7 = 0;
      local_30 = 1;
      local_38 = 1;
      local_40 = 1;
      local_48 = 1;
      local_50 = 1;
      local_58 = 1;
      local_60 = 1;
      local_68 = 1;
      local_70 = 1;
      local_78 = 1;
      local_80 = 1;
      local_88 = 1;
      local_90 = 1;
      local_98 = 1;
      local_a0 = 1;
      local_a8 = 1;
      local_b0 = 1;
      local_b8 = 1;
      local_c0 = 1;
      local_c8 = 1;
      local_d0 = 1;
      local_d8 = 1;
      local_e0 = 1;
      local_e8 = 1;
      local_f0 = 1;
      local_f8 = 1;
      local_100 = 1;
      local_108 = 1;
      local_110 = 1;
      local_118 = 1;
      local_120 = 1;
      local_128 = 1;
      local_130 = 1;
      local_138 = 1;
      local_140 = 1;
      local_148 = 1;
      local_150 = 1;
      local_158 = 1;
      local_160 = 1;
      local_168 = 1;
      local_170 = 1;
      local_178 = 1;
      local_180 = 1;
      local_188 = 1;
      local_190 = 1;
      local_198 = 1;
      local_1a0 = 1;
      local_1a8 = 1;
      local_1b0 = 1;
      local_1b8 = 1;
      local_1c0 = 1;
      local_1c8 = 1;
      local_1d0 = 1;
      local_1d8 = 1;
      local_1e0 = 1;
      local_1e8 = 1;
      local_1f0 = 1;
      local_1f8 = 1;
      local_200 = 1;
      local_208 = 1;
      local_210 = 1;
      local_218 = 1;
      local_220 = 1;
      local_228 = 1;
      local_2c = 0;
      local_34 = 0;
      local_3c = 0;
      local_44 = 0;
      local_4c = 0;
      local_54 = 0;
      local_5c = 0;
      local_64 = 0;
      local_6c = 0;
      local_74 = 0;
      local_7c = 0;
      local_84 = 0;
      local_8c = 0;
      local_94 = 0;
      local_9c = 0;
      local_a4 = 0;
      local_ac = 0;
      local_b4 = 0;
      local_bc = 0;
      local_c4 = 0;
      local_cc = 0;
      local_d4 = 0;
      local_dc = 0;
      local_e4 = 0;
      local_ec = 0;
      local_f4 = 0;
      local_fc = 0;
      local_104 = 0;
      local_10c = 0;
      local_114 = 0;
      local_11c = 0;
      local_124 = 0;
      local_12c = 0;
      local_134 = 0;
      local_13c = 0;
      local_144 = 0;
      local_14c = 0;
      local_154 = 0;
      local_15c = 0;
      local_164 = 0;
      local_16c = 0;
      local_174 = 0;
      local_17c = 0;
      local_184 = 0;
      local_18c = 0;
      local_194 = 0;
      local_19c = 0;
      local_1a4 = 0;
      local_1ac = 0;
      local_1b4 = 0;
      local_1bc = 0;
      local_1c4 = 0;
      local_1cc = 0;
      local_1d4 = 0;
      local_1dc = 0;
      local_1e4 = 0;
      local_1ec = 0;
      local_1f4 = 0;
      local_1fc = 0;
      local_204 = 0;
      local_20c = 0;
      local_214 = 0;
      local_21c = 0;
      local_224 = 0;
      if (*(int *)(param_2 + 0xbc) == 0) {
        uVar9 = *puVar16;
        if (uVar9 < *(uint *)(param_2 + 0xac)) {
          local_224 = *(uint *)(param_2 + 0xac) - uVar9;
          local_228 = *piVar6 + uVar9;
          uVar7 = 1;
        }
      }
      (**(code **)(*(int *)(param_2 + 0xd4) + 0x20))
                (&local_240,*(undefined4 *)(param_2 + 0xd0),param_3,&local_228,uVar7);
      uVar9 = local_240 & 0xff;
      if (uVar9 == 5) goto LAB_01404fcc;
      if (uVar9 == 4) {
        uVar15 = *puVar16;
        iVar2 = *(int *)(param_2 + 0xbc);
        local_2a8 = local_23c;
        goto LAB_01404c84;
      }
      local_2a8 = local_23c;
      puVar3 = (undefined2 *)((uint)&local_240 | 1);
LAB_01404ff0:
      local_258 = (int *)CONCAT22(CONCAT11(local_258._3_1_,*(undefined1 *)(puVar3 + 1)),*puVar3);
    }
    if (uVar9 == 5) {
LAB_01405060:
      uVar1 = 5;
    }
    else {
      *(undefined2 *)(param_1 + 1) = (undefined2)local_258;
      param_1[3] = local_258._2_1_;
      *(uint *)(param_1 + 4) = local_2a8;
      uVar1 = (char)uVar9;
    }
  }
  else {
LAB_01404854:
    *puVar16 = 0;
    *(undefined4 *)(param_2 + 0xbc) = 0;
    *(undefined4 *)(param_2 + 0xac) = 0;
    *(undefined4 *)(param_2 + 0x70) = 4;
    if (iVar2 == 3) {
      local_240 = *puVar5;
      local_23c = *(uint *)(param_2 + 0x78);
      uStack_238 = *(undefined4 *)(param_2 + 0x7c);
      uStack_234 = *(undefined4 *)(param_2 + 0x80);
      uStack_230 = *(undefined4 *)(param_2 + 0x84);
      local_254 = *(int *)(param_2 + 0xc0) + 9;
      local_258 = piVar6;
      FUN_01025ae8(&local_228,&local_240,&local_258);
      if (local_228 != 0) {
        iVar2 = *piVar14;
        if (iVar2 != 4) {
          if (iVar2 == 0 || iVar2 == 3) {
            (**(code **)(*(int *)(param_2 + 0x74) + 0x10))
                      (puVar11,*(undefined4 *)(param_2 + 0x78),*(undefined4 *)(param_2 + 0x7c));
          }
          else if ((iVar2 == 1) && (*(int *)(param_2 + 0x7c) != 0)) {
            thunk_FUN_016d3fb4(*(undefined4 *)(param_2 + 0x78));
          }
        }
        *piVar14 = 3;
        *puVar5 = local_228;
        *(uint *)(param_2 + 0x78) = local_224;
        *(uint *)(param_2 + 0x7c) = local_220;
        *(int *)(param_2 + 0x80) = local_21c;
        *(int *)(param_2 + 0x84) = local_218;
      }
      goto LAB_0140452c;
    }
    if (iVar2 != 4) {
      local_258 = (int *)*puVar5;
      local_254 = *(int *)(param_2 + 0x78);
      uStack_250 = *(undefined4 *)(param_2 + 0x7c);
      uStack_24c = *(undefined4 *)(param_2 + 0x80);
      uStack_248 = *(undefined4 *)(param_2 + 0x84);
      local_228 = *puVar4;
      local_224 = *(uint *)(param_2 + 0x8c);
      local_220 = *(uint *)(param_2 + 0x90);
      local_21c = *(int *)(param_2 + 0x94);
      local_218 = *(int *)(param_2 + 0x98);
      local_214 = *(undefined4 *)(param_2 + 0x9c);
      local_210 = *(int *)(param_2 + 0xa0);
      local_20c = *(undefined4 *)(param_2 + 0xa4);
      iVar8 = *(int *)(param_2 + 0x38);
      if (iVar8 != 3) {
        if (iVar8 == 1) {
          if (*(int *)(param_2 + 0x44) != 0) {
            thunk_FUN_016d3fb4(*(undefined4 *)(param_2 + 0x40));
          }
        }
        else if (iVar8 == 0) {
          (**(code **)(*(int *)(param_2 + 0x3c) + 0x10))
                    (param_2 + 0x48,*(undefined4 *)(param_2 + 0x40),*(undefined4 *)(param_2 + 0x44))
          ;
        }
      }
      *(int *)(param_2 + 0x38) = iVar2;
      *(int **)(param_2 + 0x3c) = local_258;
      *(int *)(param_2 + 0x40) = local_254;
      *(undefined4 *)(param_2 + 0x44) = uStack_250;
      *(undefined4 *)(param_2 + 0x48) = uStack_24c;
      *(undefined4 *)(param_2 + 0x4c) = uStack_248;
      *(uint *)(param_2 + 0x50) = local_228;
      *(uint *)(param_2 + 0x54) = local_224;
      *(uint *)(param_2 + 0x58) = local_220;
      *(int *)(param_2 + 0x5c) = local_21c;
      *(int *)(param_2 + 0x60) = local_218;
      *(undefined4 *)(param_2 + 100) = local_214;
      *(int *)(param_2 + 0x68) = local_210;
      *(undefined4 *)(param_2 + 0x6c) = local_20c;
    }
    (**(code **)(*(int *)(param_2 + 0xd4) + 0x14))
              (&local_228,*(undefined4 *)(param_2 + 0xd0),param_3);
    if ((local_228 & 0xff) == 4) {
      *param_1 = 4;
      goto joined_r0x01404f84;
    }
    uVar1 = (undefined1)local_228;
    if ((local_228 & 0xff) != 5) {
      *(uint *)(param_1 + 4) = local_224;
      *(uint *)(param_1 + 1) = CONCAT13((undefined1)local_224,local_228._1_3_);
    }
  }
LAB_01404f60:
  *param_1 = uVar1;
joined_r0x01404f84:
  if (local_270 != 2) {
    iVar2 = local_26c;
    if ((local_270 & 1) != 0) {
      iVar2 = local_26c + (*(int *)(local_268 + 8) - 1U & 0xfffffff8) + 8;
    }
    (**(code **)(local_268 + 0x34))(iVar2,&local_278);
  }
  FUN_005c3320(&local_278);
  return;
}

