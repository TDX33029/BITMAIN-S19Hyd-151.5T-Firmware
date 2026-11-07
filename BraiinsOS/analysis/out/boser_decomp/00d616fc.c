// FUN_00d616fc @ 00d616fc size=2232 calls_out=15 calls_in=0
// strings: 

/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_00d616fc(undefined4 *param_1,uint *param_2,int *param_3)

{
  uint uVar1;
  int iVar2;
  undefined4 uVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  uint *puVar7;
  uint uVar8;
  uint *puVar9;
  uint uVar10;
  uint *puVar11;
  uint **ppuVar12;
  uint **unaff_r10;
  uint *unaff_r11;
  uint *puVar13;
  uint *local_208;
  uint *local_204;
  uint *local_1f8;
  uint *local_1f4;
  uint *local_1f0;
  uint *local_1ec;
  uint *local_1e8;
  uint *local_1e4;
  uint *puStack_1e0;
  uint *local_1dc;
  uint *puStack_1d8;
  uint *puStack_1d4;
  undefined4 uStack_1d0;
  undefined4 uStack_1cc;
  undefined4 local_1c8;
  undefined4 uStack_1c4;
  undefined4 uStack_1c0;
  undefined4 uStack_1bc;
  undefined4 local_1b8;
  undefined4 uStack_1b4;
  undefined4 uStack_1b0;
  undefined4 uStack_1ac;
  undefined1 auStack_1a8 [8];
  undefined1 auStack_1a0 [72];
  uint *local_158;
  uint *puStack_154;
  uint *local_150;
  uint *local_14c;
  uint *local_148;
  uint *local_144;
  uint *local_140;
  uint *puStack_13c;
  undefined4 uStack_138;
  undefined4 uStack_134;
  uint *local_f0;
  uint *local_ec;
  uint *local_e8;
  uint *local_e4;
  uint *puStack_e0;
  uint *local_dc;
  uint *puStack_d8;
  uint *puStack_d4;
  undefined4 uStack_d0;
  undefined4 uStack_cc;
  int local_c4;
  int local_c0;
  int local_bc;
  uint local_b8;
  uint *local_b4;
  undefined4 local_b0;
  undefined4 uStack_ac;
  undefined4 uStack_a8;
  undefined4 uStack_a4;
  undefined4 local_a0;
  undefined4 uStack_9c;
  undefined4 uStack_98;
  undefined4 uStack_94;
  uint *local_90;
  uint *local_8c;
  uint **local_88;
  uint *local_84;
  uint *local_80;
  uint *local_7c;
  uint *local_78;
  uint *local_74;
  uint *local_70;
  uint *puStack_6c;
  uint *puStack_68;
  uint *puStack_64;
  uint *puStack_60;
  uint *local_5c;
  uint *puStack_58;
  uint *puStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  
  puVar7 = (uint *)*param_2;
  puVar9 = (uint *)param_2[1];
  uVar4 = param_2[0x41];
  *param_2 = 3;
  param_2[1] = 0;
  if (puVar7 == (uint *)&DAT_00000003 && puVar9 == (uint *)0x0) {
    puVar11 = param_2 + 0x1a;
    puVar13 = param_2 + 0x38;
    puVar7 = (uint *)*puVar11;
    puVar9 = (uint *)param_2[0x1b];
    if (puVar7 != (uint *)&DAT_00000005 || puVar9 != (uint *)0x0) {
      ppuVar12 = (uint **)(param_2 + 0x20);
      local_204 = param_2 + 0x1e;
      local_208 = param_2 + 0x1c;
      do {
        if (0x1f < param_2[0x34]) {
          iVar2 = *(int *)*param_3;
          iVar6 = ((int *)*param_3)[1];
          param_2[0x34] = 0;
          (**(code **)(iVar2 + 8))(iVar6);
LAB_00d619fc:
          if (param_2[0x39] == 0) goto LAB_00d61e40;
          goto LAB_00d61760;
        }
        param_2[0x34] = param_2[0x34] + 1;
        local_1f8 = (uint *)*local_204;
        local_1f4 = (uint *)param_2[0x1f];
        *puVar11 = 4;
        unaff_r10 = (uint **)*local_208;
        unaff_r11 = (uint *)param_2[0x1d];
        param_2[0x1b] = 0;
        if (((uint)puVar7 & 7) == 4) {
          *puVar11 = 5;
          param_2[0x1b] = 0;
          break;
        }
        if (puVar7 == (uint *)&DAT_00000005) goto LAB_00d619fc;
        FUN_01bed4e2(&local_158,ppuVar12,0x50);
        if (puVar7 != (uint *)&DAT_00000003 || puVar9 != (uint *)0x0) {
          uVar4 = param_2[0x39];
          if (uVar4 == 0) {
LAB_00d61bd8:
            FUN_01bed4e2(auStack_1a8,ppuVar12,0x50);
            goto LAB_00d61be4;
          }
          if (*param_2 != 3 || param_2[1] != 0) {
            FUN_005f6588(param_2);
            uVar4 = param_2[0x39];
          }
          param_2[2] = (uint)unaff_r10;
          param_2[3] = (uint)unaff_r11;
          param_2[4] = (uint)local_1f8;
          param_2[5] = (uint)local_1f4;
          *param_2 = (uint)puVar7;
          param_2[1] = (uint)puVar9;
          FUN_01bed4e2(param_2 + 6,&local_158,0x50);
          FUN_01283fd8(&local_f0,puVar13,uVar4);
          puVar7 = local_e4;
          if (((uint)local_e4 & 1) == 0) goto LAB_00d61780;
          local_bc = (int)local_ec + ((uint)local_e4 >> 5);
          local_c0 = (int)local_f0 - ((uint)local_e4 >> 5);
          local_c4 = (int)local_e8 + ((uint)local_e4 >> 5);
          FUN_01283524(&local_1f0,&local_c4);
          local_b8 = (uint)puVar7 >> 5;
          if (local_1e8 < (uint *)((uint)puVar7 >> 5)) {
            local_88 = &local_b4;
            local_b4 = local_1e8;
            local_84 = (uint *)&LAB_01a6a304;
            local_8c = (uint *)&LAB_01a6a304;
            local_90 = &local_b8;
                    /* WARNING: Subroutine does not return */
            FUN_012fb100(&DAT_005ac267,&local_90,&DAT_01d2e534);
          }
          goto LAB_00d619a8;
        }
        uVar8 = param_2[0x39];
        uVar10 = param_2[0x36];
        unaff_r11 = (uint *)param_2[0x37];
        uVar1 = uVar8;
        if (param_2[0x3a] - uVar8 < 5) {
          FUN_01283c9c(puVar13,5);
          uVar1 = param_2[0x39];
          if (param_2[0x3a] - uVar1 < 5) {
            local_1f0 = (uint *)0x5;
            local_1ec = (uint *)(param_2[0x3a] - uVar1);
                    /* WARNING: Subroutine does not return */
            FUN_01284540(&local_1f0);
          }
        }
        uVar5 = uVar1 + 5;
        param_2[0x39] = uVar5;
        if (((uint)unaff_r10 & 1) != 0) {
          if (local_1f8 == (uint *)0x0 && local_1f4 == (uint *)0x0) {
            puVar7 = (uint *)0x2;
          }
          else {
            uVar5 = LZCOUNT((uint)local_1f8 | 1) | 0x20;
            if (local_1f4 != (uint *)0x0) {
              uVar5 = LZCOUNT(local_1f4);
            }
            puVar7 = (uint *)(((uVar5 ^ 0x3f) * 9 + 0x49 >> 6) + 3);
          }
          if ((uint *)(0x7ffffffa - uVar1) < puVar7) {
            local_1f0 = puVar7;
            local_1ec = (uint *)(0x7ffffffa - uVar1);
                    /* WARNING: Subroutine does not return */
            FUN_013073dc(&DAT_003efa56,0x27,&local_1f0,&DAT_01c15d9c,&DAT_01c15fbc);
          }
          FUN_00efe248(1);
          uVar5 = param_2[0x39];
        }
        if (uVar5 < uVar8) {
                    /* WARNING: Subroutine does not return */
          FUN_012faff4(uVar8,uVar5,uVar5,&DAT_01c15f4c);
        }
        FUN_01a745b4(&local_90,uVar10,unaff_r11,*puVar13 + uVar8,uVar5 - uVar8);
        if (local_90 != (uint *)&DAT_00000003 || local_8c != (uint *)0x0) {
          local_1f8 = local_80;
          local_1f4 = local_7c;
          ppuVar12 = &local_78;
          puVar7 = local_90;
          puVar9 = local_8c;
          unaff_r10 = local_88;
          unaff_r11 = local_84;
          goto LAB_00d61bd8;
        }
        if (uVar4 <= param_2[0x39]) {
          FUN_01283fd8(&local_f0,puVar13);
          puVar7 = local_e4;
          if (((uint)local_e4 & 1) == 0) goto LAB_00d61780;
          local_bc = (int)local_ec + ((uint)local_e4 >> 5);
          local_c0 = (int)local_f0 - ((uint)local_e4 >> 5);
          local_c4 = (int)local_e8 + ((uint)local_e4 >> 5);
          FUN_01283524(&local_1f0,&local_c4);
          local_b8 = (uint)puVar7 >> 5;
          if (local_1e8 < (uint *)((uint)puVar7 >> 5)) {
            local_88 = &local_b4;
            local_b4 = local_1e8;
            local_84 = (uint *)&LAB_01a6a304;
            local_8c = (uint *)&LAB_01a6a304;
            local_90 = &local_b8;
                    /* WARNING: Subroutine does not return */
            FUN_012fb100(&DAT_005ac267,&local_90,&DAT_01d2e534);
          }
          goto LAB_00d619a8;
        }
        puVar7 = (uint *)*puVar11;
        puVar9 = (uint *)param_2[0x1b];
      } while (puVar7 != (uint *)&DAT_00000005 || puVar9 != (uint *)0x0);
    }
    if (param_2[0x39] == 0) {
      puVar9 = (uint *)0x0;
      puVar7 = (uint *)&SUB_00000004;
    }
    else {
LAB_00d61760:
      FUN_01283fd8(&local_f0,puVar13);
      puVar7 = local_e4;
      if (((uint)local_e4 & 1) == 0) {
LAB_00d61780:
        unaff_r10 = (uint **)&DAT_01d2e520;
        unaff_r11 = local_f0;
        local_1f8 = local_ec;
        local_1f4 = local_e4;
      }
      else {
        local_bc = (int)local_ec + ((uint)local_e4 >> 5);
        local_c0 = (int)local_f0 - ((uint)local_e4 >> 5);
        local_c4 = (int)local_e8 + ((uint)local_e4 >> 5);
        FUN_01283524(&local_1f0,&local_c4);
        local_b8 = (uint)puVar7 >> 5;
        if (local_1e8 < (uint *)((uint)puVar7 >> 5)) {
          local_88 = &local_b4;
          local_b4 = local_1e8;
          local_84 = (uint *)&LAB_01a6a304;
          local_8c = (uint *)&LAB_01a6a304;
          local_90 = &local_b8;
                    /* WARNING: Subroutine does not return */
          FUN_012fb100(&DAT_005ac267,&local_90,&DAT_01d2e534);
        }
LAB_00d619a8:
        unaff_r11 = (uint *)((int)local_1ec + local_b8);
        local_1f4 = local_1e4;
        local_1f8 = (uint *)((int)local_1e8 - local_b8);
        unaff_r10 = (uint **)local_1f0;
      }
      puVar9 = (uint *)0x0;
      puVar7 = (uint *)&DAT_00000003;
    }
LAB_00d61be4:
    if (puVar7 == (uint *)&SUB_00000004 && puVar9 == (uint *)0x0) {
      puVar13 = (uint *)0xd61c28;
      FUN_01a737fc(&local_90,param_2 + 0x42);
      ppuVar12 = (uint **)param_2;
      if (local_90 != (uint *)&SUB_00000004 || local_8c != (uint *)0x0) {
        if (local_90 != (uint *)&DAT_00000003 || local_8c != (uint *)0x0) {
          local_b0 = local_48;
          uStack_ac = uStack_44;
          uStack_a8 = uStack_40;
          uStack_a4 = uStack_3c;
          local_a0 = local_38;
          uStack_9c = uStack_34;
          uStack_98 = uStack_30;
          uStack_94 = uStack_2c;
        }
        local_1f4 = local_7c;
        local_204 = local_78;
        local_208 = local_74;
        local_158 = local_70;
        puStack_154 = puStack_6c;
        local_150 = puStack_68;
        local_14c = puStack_64;
        local_148 = puStack_60;
        local_144 = local_5c;
        local_140 = puStack_58;
        puStack_13c = puStack_54;
        uStack_138 = uStack_50;
        uStack_134 = uStack_4c;
        ppuVar12 = local_88;
        unaff_r10 = (uint **)local_80;
        puVar13 = local_84;
      }
      local_1f0 = local_158;
      local_1ec = puStack_154;
      local_1e8 = local_150;
      local_1e4 = local_14c;
      puStack_1e0 = local_148;
      local_1dc = local_144;
      puStack_1d8 = local_140;
      puStack_1d4 = puStack_13c;
      uStack_1d0 = uStack_138;
      uStack_1cc = uStack_134;
      local_1c8 = local_b0;
      uStack_1c4 = uStack_ac;
      uStack_1c0 = uStack_a8;
      uStack_1bc = uStack_a4;
      local_1b8 = local_a0;
      uStack_1b4 = uStack_9c;
      uStack_1b0 = uStack_98;
      uStack_1ac = uStack_94;
      puVar7 = local_90;
      puVar9 = local_8c;
LAB_00d61e18:
      unaff_r11 = local_1f4;
      if (puVar7 != (uint *)&DAT_00000003 || puVar9 != (uint *)0x0) {
        if (puVar7 != (uint *)&SUB_00000004 || puVar9 != (uint *)0x0) {
          if (puVar7 != (uint *)&DAT_00000005 || puVar9 != (uint *)0x0) {
            FUN_01bed4e2(&local_70,&local_1f0,0x48);
            local_7c = local_1f4;
            local_90 = puVar7;
            local_8c = puVar9;
            local_80 = (uint *)unaff_r10;
            uVar3 = FUN_01a65494(&local_90);
            FUN_01a7467c(param_1,uVar3,&DAT_01d2cc7c);
            return;
          }
          goto LAB_00d61e40;
        }
        uVar3 = 4;
        goto LAB_00d61e54;
      }
      local_1f8 = local_204;
      local_1f4 = local_208;
    }
    else {
      if (puVar7 != (uint *)&DAT_00000003 || puVar9 != (uint *)0x0) {
        local_148 = local_1f8;
        local_144 = local_1f4;
        local_158 = puVar7;
        puStack_154 = puVar9;
        local_150 = (uint *)unaff_r10;
        local_14c = unaff_r11;
        FUN_01bed4e2(&local_140,auStack_1a8,0x50);
        puVar13 = local_14c;
        ppuVar12 = (uint **)local_150;
        if ((char)param_2[0x5c] == '\x01') {
          *(undefined1 *)((int)param_2 + 0x171) = 1;
          FUN_01a738c0(&local_90,&local_158);
          local_204 = local_78;
          local_208 = local_74;
          local_1f4 = local_7c;
          local_f0 = local_70;
          local_ec = puStack_6c;
          local_e8 = puStack_68;
          local_e4 = puStack_64;
          puStack_e0 = puStack_60;
          local_dc = local_5c;
          puStack_d8 = puStack_58;
          puStack_d4 = puStack_54;
          uStack_d0 = uStack_50;
          uStack_cc = uStack_4c;
          if (local_90 == (uint *)&DAT_00000003 && local_8c == (uint *)0x0) {
            local_1f0 = local_70;
            local_1ec = puStack_6c;
            local_1e8 = puStack_68;
            local_1e4 = puStack_64;
            puStack_1e0 = puStack_60;
            local_1dc = local_5c;
            puStack_1d8 = puStack_58;
            puStack_1d4 = puStack_54;
            uStack_1d0 = uStack_50;
            uStack_1cc = uStack_4c;
            FUN_005f6588(&local_158);
            local_8c = (uint *)0x0;
            local_90 = (uint *)&DAT_00000003;
          }
          else {
            local_1c8 = local_48;
            uStack_1c4 = uStack_44;
            uStack_1c0 = uStack_40;
            uStack_1bc = uStack_3c;
            local_1b8 = local_38;
            uStack_1b4 = uStack_34;
            uStack_1b0 = uStack_30;
            uStack_1ac = uStack_2c;
            local_1f0 = local_70;
            local_1ec = puStack_6c;
            local_1e8 = puStack_68;
            local_1e4 = puStack_64;
            puStack_1e0 = puStack_60;
            local_1dc = local_5c;
            puStack_1d8 = puStack_58;
            puStack_1d4 = puStack_54;
            uStack_1d0 = uStack_50;
            uStack_1cc = uStack_4c;
            FUN_005f6588(&local_158);
          }
          puVar7 = local_90;
          puVar9 = local_8c;
          ppuVar12 = local_88;
          unaff_r10 = (uint **)local_80;
          puVar13 = local_84;
        }
        else {
          local_204 = local_140;
          local_208 = puStack_13c;
          FUN_01bed4e2(&local_1f0,auStack_1a0,0x48);
          unaff_r10 = (uint **)local_1f8;
        }
        goto LAB_00d61e18;
      }
      puVar13 = (uint *)0x0;
      ppuVar12 = (uint **)&DAT_00000003;
    }
    param_1[8] = local_1f0;
    param_1[9] = local_1ec;
    param_1[10] = local_1e8;
    param_1[0xb] = local_1e4;
    param_1[0xc] = puStack_1e0;
    param_1[0xd] = local_1dc;
    param_1[0xe] = puStack_1d8;
    param_1[0xf] = puStack_1d4;
    param_1[0x10] = uStack_1d0;
    param_1[0x11] = uStack_1cc;
    *param_1 = 3;
    param_1[1] = 0;
    param_1[6] = local_1f8;
    param_1[2] = ppuVar12;
    param_1[3] = puVar13;
    param_1[7] = local_1f4;
    param_1[4] = unaff_r10;
    param_1[5] = unaff_r11;
  }
  else {
    local_1f8 = (uint *)param_2[4];
    local_1f4 = (uint *)param_2[5];
    unaff_r10 = (uint **)param_2[2];
    unaff_r11 = (uint *)param_2[3];
    FUN_01bed4e2(auStack_1a8,param_2 + 6,0x50);
    if (puVar7 != (uint *)&DAT_00000005 || puVar9 != (uint *)0x0) goto LAB_00d61be4;
LAB_00d61e40:
    uVar3 = 5;
LAB_00d61e54:
    *param_1 = uVar3;
    param_1[1] = 0;
  }
  return;
}

