// FUN_00d7dc9c @ 00d7dc9c size=2212 calls_out=16 calls_in=0
// strings: 

void FUN_00d7dc9c(undefined4 *param_1,int *******param_2,int *******param_3)

{
  int *******pppppppiVar1;
  undefined4 uVar2;
  int ******ppppppiVar3;
  int ******ppppppiVar4;
  uint uVar5;
  int *******pppppppiVar6;
  int ******ppppppiVar7;
  int ******ppppppiVar8;
  int *******unaff_r6;
  int *******pppppppiVar9;
  int *******pppppppiVar10;
  int ******ppppppiVar11;
  int *******unaff_r9;
  int *******pppppppiVar12;
  int *******pppppppiVar13;
  int *******unaff_r11;
  int *******local_208;
  int *******local_204;
  int *******local_200;
  int *******local_1fc;
  undefined1 auStack_1f8 [8];
  undefined1 auStack_1f0 [72];
  int *******local_1a8;
  int *******local_1a4;
  int *******local_1a0;
  int *******local_19c;
  int *******local_198;
  int *******local_194;
  int *******local_190;
  int *******local_18c;
  undefined4 uStack_188;
  undefined4 uStack_184;
  int *******local_140;
  int *******local_13c;
  int *******local_138;
  int *******local_134;
  int *******pppppppiStack_130;
  int *******local_12c;
  int *******pppppppiStack_128;
  int *******pppppppiStack_124;
  undefined4 uStack_120;
  undefined4 uStack_11c;
  int *******local_118;
  int *******pppppppiStack_114;
  int *******pppppppiStack_110;
  int *******pppppppiStack_10c;
  int *******pppppppiStack_108;
  int *******local_104;
  int *******pppppppiStack_100;
  int *******pppppppiStack_fc;
  undefined4 uStack_f8;
  undefined4 uStack_f4;
  undefined4 local_f0;
  undefined4 uStack_ec;
  undefined4 uStack_e8;
  undefined4 uStack_e4;
  undefined4 local_e0;
  undefined4 uStack_dc;
  undefined4 uStack_d8;
  undefined4 uStack_d4;
  int local_c4;
  int local_c0;
  int local_bc;
  int *****local_b8;
  int *******local_b4;
  undefined4 local_b0;
  undefined4 uStack_ac;
  undefined4 uStack_a8;
  undefined4 uStack_a4;
  undefined4 local_a0;
  undefined4 uStack_9c;
  undefined4 uStack_98;
  undefined4 uStack_94;
  int *******local_90;
  int *******local_8c;
  int *******local_88;
  int *******local_84;
  int *******local_80;
  int *******local_7c;
  int *******local_78;
  int *******local_74;
  int *******local_70;
  int *******pppppppiStack_6c;
  int *******pppppppiStack_68;
  int *******pppppppiStack_64;
  int *******pppppppiStack_60;
  int *******local_5c;
  int *******pppppppiStack_58;
  int *******pppppppiStack_54;
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
  
  pppppppiVar6 = (int *******)*param_2;
  pppppppiVar9 = (int *******)param_2[1];
  local_208 = (int *******)param_2[0x27];
  *param_2 = (int ******)0x3;
  param_2[1] = (int ******)0x0;
  if (pppppppiVar6 == (int *******)&DAT_00000003 && pppppppiVar9 == (int *******)0x0) {
    ppppppiVar3 = param_2[0x24];
    pppppppiVar10 = param_2 + 0x1c;
    pppppppiVar12 = unaff_r9;
    if (ppppppiVar3 != (int ******)0x0) {
      pppppppiVar12 = (int *******)&local_1a8;
      do {
        (*(code *)param_2[0x25][3])(&local_90,ppppppiVar3,param_3);
        unaff_r6 = local_7c;
        pppppppiVar13 = local_80;
        unaff_r11 = local_84;
        pppppppiVar1 = local_88;
        pppppppiVar9 = local_8c;
        pppppppiVar6 = local_90;
        if (local_90 == (int *******)&DAT_00000005 && local_8c == (int *******)0x0) {
          pppppppiVar12 = unaff_r9;
          if (param_2[0x1d] != (int ******)0x0) goto LAB_00d7dee4;
          goto LAB_00d7e1e4;
        }
        local_1fc = local_88;
        FUN_01bed4e2(pppppppiVar12,&local_78,0x50);
        if (pppppppiVar6 == (int *******)&SUB_00000004 && pppppppiVar9 == (int *******)0x0) {
          if (param_2[0x24] != (int ******)0x0) {
            FUN_01139b38(param_2[0x24],param_2[0x25]);
          }
          param_2[0x24] = (int ******)0x0;
          pppppppiVar12 = unaff_r9;
          break;
        }
        FUN_01bed4e2(&local_118,pppppppiVar12,0x50);
        if (pppppppiVar6 != (int *******)&DAT_00000003 || pppppppiVar9 != (int *******)0x0) {
          pppppppiVar12 = (int *******)param_2[0x1d];
          if (pppppppiVar12 == (int *******)0x0) {
            FUN_01bed4e2(auStack_1f8,&local_118,0x50);
            unaff_r9 = pppppppiVar12;
            goto LAB_00d7df84;
          }
          if (*param_2 != (int ******)0x3 || param_2[1] != (int ******)0x0) {
            FUN_005f6588(param_2);
            pppppppiVar12 = (int *******)param_2[0x1d];
          }
          param_2[2] = (int ******)pppppppiVar1;
          *param_2 = (int ******)pppppppiVar6;
          param_2[1] = (int ******)pppppppiVar9;
          param_2[3] = (int ******)unaff_r11;
          param_2[4] = (int ******)pppppppiVar13;
          param_2[5] = (int ******)unaff_r6;
          FUN_01bed4e2(param_2 + 6,&local_118,0x50);
          FUN_01283fd8(&local_140,pppppppiVar10,pppppppiVar12);
          pppppppiVar6 = local_134;
          if (((uint)local_134 & 1) == 0) goto LAB_00d7df04;
          local_bc = (int)local_13c + ((uint)local_134 >> 5);
          local_c0 = (int)local_140 - ((uint)local_134 >> 5);
          local_c4 = (int)local_138 + ((uint)local_134 >> 5);
          FUN_01283524(&local_1a8,&local_c4);
          local_b8 = (int *****)((uint)pppppppiVar6 >> 5);
          if (local_1a0 < (int *******)((uint)pppppppiVar6 >> 5)) {
            local_88 = (int *******)&local_b4;
            local_b4 = local_1a0;
            local_84 = (int *******)&LAB_01a6a304;
            local_8c = (int *******)&LAB_01a6a304;
            local_90 = (int *******)&local_b8;
                    /* WARNING: Subroutine does not return */
            FUN_012fb100(&DAT_005ac267,&local_90,&DAT_01d2e534);
          }
          goto LAB_00d7df64;
        }
        ppppppiVar7 = param_2[0x1d];
        ppppppiVar11 = param_2[0x1a];
        ppppppiVar8 = param_2[0x1b];
        ppppppiVar3 = ppppppiVar7;
        if ((uint)((int)param_2[0x1e] - (int)ppppppiVar7) < 5) {
          FUN_01283c9c(pppppppiVar10,5);
          ppppppiVar3 = param_2[0x1d];
          if ((uint)((int)param_2[0x1e] - (int)ppppppiVar3) < 5) {
            local_1a8 = (int *******)0x5;
            local_1a4 = (int *******)((int)param_2[0x1e] - (int)ppppppiVar3);
                    /* WARNING: Subroutine does not return */
            FUN_01284540(&local_1a8);
          }
        }
        ppppppiVar4 = (int ******)((int)ppppppiVar3 + 5);
        param_2[0x1d] = ppppppiVar4;
        if (pppppppiVar1 != (int *******)0x0) {
          uVar5 = LZCOUNT((uint)pppppppiVar1 | 1) | 0x20;
          if ((int)pppppppiVar1 < 0) {
            uVar5 = LZCOUNT((int)pppppppiVar1 >> 0x1f);
          }
          uVar5 = (uVar5 ^ 0x3f) * 9 + 0x49;
          if (0x7ffffffaU - (int)ppppppiVar3 <= uVar5 >> 6) {
            local_1a8 = (int *******)((uVar5 >> 6) + 1);
            local_1a4 = (int *******)(0x7ffffffaU - (int)ppppppiVar3);
                    /* WARNING: Subroutine does not return */
            FUN_013073dc(&DAT_003efa56,0x27,&local_1a8,&DAT_01c15d9c,&DAT_01c15fbc);
          }
          FUN_00efca88(1,pppppppiVar1,pppppppiVar10);
          ppppppiVar4 = param_2[0x1d];
        }
        if (ppppppiVar4 < ppppppiVar7) {
                    /* WARNING: Subroutine does not return */
          FUN_012faff4(ppppppiVar7,ppppppiVar4,ppppppiVar4,&DAT_01c15f4c);
        }
        FUN_01a745b4(&local_90,ppppppiVar11,ppppppiVar8,(int)*pppppppiVar10 + (int)ppppppiVar7,
                     (int)ppppppiVar4 - (int)ppppppiVar7);
        unaff_r6 = local_7c;
        pppppppiVar13 = local_80;
        pppppppiVar1 = local_84;
        pppppppiVar9 = local_8c;
        pppppppiVar6 = local_90;
        unaff_r9 = pppppppiVar12;
        if (local_90 != (int *******)&DAT_00000003 || local_8c != (int *******)0x0) {
          local_1fc = local_88;
          FUN_01bed4e2(auStack_1f8,&local_78,0x50);
          unaff_r11 = pppppppiVar1;
          goto LAB_00d7df84;
        }
        if (local_208 <= param_2[0x1d]) {
          FUN_01283fd8(&local_140,pppppppiVar10);
          pppppppiVar6 = local_134;
          if (((uint)local_134 & 1) == 0) goto LAB_00d7df04;
          local_bc = (int)local_13c + ((uint)local_134 >> 5);
          local_c0 = (int)local_140 - ((uint)local_134 >> 5);
          local_c4 = (int)local_138 + ((uint)local_134 >> 5);
          FUN_01283524(&local_1a8,&local_c4);
          local_b8 = (int *****)((uint)pppppppiVar6 >> 5);
          if (local_1a0 < (int *******)((uint)pppppppiVar6 >> 5)) {
            local_88 = (int *******)&local_b4;
            local_b4 = local_1a0;
            local_84 = (int *******)&LAB_01a6a304;
            local_8c = (int *******)&LAB_01a6a304;
            local_90 = (int *******)&local_b8;
                    /* WARNING: Subroutine does not return */
            FUN_012fb100(&DAT_005ac267,&local_90,&DAT_01d2e534);
          }
          goto LAB_00d7df64;
        }
        ppppppiVar3 = param_2[0x24];
        unaff_r6 = (int *******)&local_90;
      } while (ppppppiVar3 != (int ******)0x0);
    }
    if (param_2[0x1d] == (int ******)0x0) {
      pppppppiVar9 = (int *******)0x0;
      pppppppiVar6 = (int *******)&SUB_00000004;
      unaff_r9 = pppppppiVar12;
      pppppppiVar13 = param_2;
    }
    else {
LAB_00d7dee4:
      FUN_01283fd8(&local_140,pppppppiVar10);
      pppppppiVar6 = local_134;
      if (((uint)local_134 & 1) == 0) {
LAB_00d7df04:
        local_1fc = (int *******)&DAT_01d2e520;
        unaff_r6 = local_134;
        pppppppiVar13 = local_13c;
        unaff_r11 = local_140;
      }
      else {
        local_bc = (int)local_13c + ((uint)local_134 >> 5);
        local_c0 = (int)local_140 - ((uint)local_134 >> 5);
        local_c4 = (int)local_138 + ((uint)local_134 >> 5);
        FUN_01283524(&local_1a8,&local_c4);
        local_b8 = (int *****)((uint)pppppppiVar6 >> 5);
        if (local_1a0 < (int *******)((uint)pppppppiVar6 >> 5)) {
          local_88 = (int *******)&local_b4;
          local_b4 = local_1a0;
          local_84 = (int *******)&LAB_01a6a304;
          local_8c = (int *******)&LAB_01a6a304;
          local_90 = (int *******)&local_b8;
                    /* WARNING: Subroutine does not return */
          FUN_012fb100(&DAT_005ac267,&local_90,&DAT_01d2e534);
        }
LAB_00d7df64:
        pppppppiVar13 = (int *******)((int)local_1a0 - (int)local_b8);
        local_1fc = local_1a8;
        unaff_r11 = (int *******)((int)local_1a4 + (int)local_b8);
        unaff_r6 = local_19c;
      }
      pppppppiVar9 = (int *******)0x0;
      pppppppiVar6 = (int *******)&DAT_00000003;
      unaff_r9 = pppppppiVar12;
    }
LAB_00d7df84:
    if (pppppppiVar6 == (int *******)&SUB_00000004 && pppppppiVar9 == (int *******)0x0) {
      FUN_01a737fc(&local_90,param_2 + 0x28);
      local_204 = param_3;
      local_200 = param_2;
      if (local_90 != (int *******)&SUB_00000004 || local_8c != (int *******)0x0) {
        if (local_90 != (int *******)&DAT_00000003 || local_8c != (int *******)0x0) {
          local_b0 = local_48;
          uStack_ac = uStack_44;
          uStack_a8 = uStack_40;
          uStack_a4 = uStack_3c;
          local_a0 = local_38;
          uStack_9c = uStack_34;
          uStack_98 = uStack_30;
          uStack_94 = uStack_2c;
        }
        local_204 = local_80;
        local_208 = local_78;
        local_200 = local_88;
        local_1a8 = local_70;
        local_1a4 = pppppppiStack_6c;
        local_1a0 = pppppppiStack_68;
        local_19c = pppppppiStack_64;
        local_198 = pppppppiStack_60;
        local_194 = local_5c;
        local_190 = pppppppiStack_58;
        local_18c = pppppppiStack_54;
        uStack_188 = uStack_50;
        uStack_184 = uStack_4c;
        unaff_r9 = local_84;
        pppppppiVar13 = local_7c;
        unaff_r11 = local_74;
      }
      local_118 = local_1a8;
      pppppppiStack_114 = local_1a4;
      pppppppiStack_110 = local_1a0;
      pppppppiStack_10c = local_19c;
      pppppppiStack_108 = local_198;
      local_104 = local_194;
      pppppppiStack_100 = local_190;
      pppppppiStack_fc = local_18c;
      uStack_f8 = uStack_188;
      uStack_f4 = uStack_184;
      local_f0 = local_b0;
      uStack_ec = uStack_ac;
      uStack_e8 = uStack_a8;
      uStack_e4 = uStack_a4;
      local_e0 = local_a0;
      uStack_dc = uStack_9c;
      uStack_d8 = uStack_98;
      uStack_d4 = uStack_94;
      pppppppiVar6 = local_90;
      pppppppiVar9 = local_8c;
      pppppppiVar12 = pppppppiVar13;
LAB_00d7e1c0:
      if (pppppppiVar6 != (int *******)&DAT_00000003 || pppppppiVar9 != (int *******)0x0) {
        if (pppppppiVar6 != (int *******)&SUB_00000004 || pppppppiVar9 != (int *******)0x0) {
          if (pppppppiVar6 != (int *******)&DAT_00000005 || pppppppiVar9 != (int *******)0x0) {
            FUN_01bed4e2(&local_70,&local_118,0x48);
            local_88 = local_200;
            local_78 = local_208;
            local_80 = local_204;
            local_90 = pppppppiVar6;
            local_8c = pppppppiVar9;
            local_84 = unaff_r9;
            local_7c = pppppppiVar12;
            local_74 = unaff_r11;
            uVar2 = FUN_01a65494(&local_90);
            FUN_01a7467c(param_1,uVar2,&DAT_01d2cc7c);
            return;
          }
          goto LAB_00d7e1e4;
        }
        uVar2 = 4;
        goto LAB_00d7e1f8;
      }
      local_1fc = local_204;
    }
    else {
      if (pppppppiVar6 != (int *******)&DAT_00000003 || pppppppiVar9 != (int *******)0x0) {
        local_1a0 = local_1fc;
        local_1a8 = pppppppiVar6;
        local_1a4 = pppppppiVar9;
        local_19c = unaff_r11;
        local_198 = pppppppiVar13;
        local_194 = unaff_r6;
        FUN_01bed4e2(&local_190,auStack_1f8,0x50);
        unaff_r11 = local_18c;
        unaff_r9 = local_19c;
        if (*(char *)(param_2 + 0x42) == '\x01') {
          *(undefined1 *)((int)param_2 + 0x109) = 1;
          FUN_01a738c0(&local_90,&local_1a8);
          local_200 = local_88;
          local_208 = local_78;
          local_204 = local_80;
          local_140 = local_70;
          local_13c = pppppppiStack_6c;
          local_138 = pppppppiStack_68;
          local_134 = pppppppiStack_64;
          pppppppiStack_130 = pppppppiStack_60;
          local_12c = local_5c;
          pppppppiStack_128 = pppppppiStack_58;
          pppppppiStack_124 = pppppppiStack_54;
          uStack_120 = uStack_50;
          uStack_11c = uStack_4c;
          if (local_90 == (int *******)&DAT_00000003 && local_8c == (int *******)0x0) {
            local_118 = local_70;
            pppppppiStack_114 = pppppppiStack_6c;
            pppppppiStack_110 = pppppppiStack_68;
            pppppppiStack_10c = pppppppiStack_64;
            pppppppiStack_108 = pppppppiStack_60;
            local_104 = local_5c;
            pppppppiStack_100 = pppppppiStack_58;
            pppppppiStack_fc = pppppppiStack_54;
            uStack_f8 = uStack_50;
            uStack_f4 = uStack_4c;
            FUN_005f6588(&local_1a8);
            local_8c = (int *******)0x0;
            local_90 = (int *******)&DAT_00000003;
          }
          else {
            local_f0 = local_48;
            uStack_ec = uStack_44;
            uStack_e8 = uStack_40;
            uStack_e4 = uStack_3c;
            local_e0 = local_38;
            uStack_dc = uStack_34;
            uStack_d8 = uStack_30;
            uStack_d4 = uStack_2c;
            local_118 = local_70;
            pppppppiStack_114 = pppppppiStack_6c;
            pppppppiStack_110 = pppppppiStack_68;
            pppppppiStack_10c = pppppppiStack_64;
            pppppppiStack_108 = pppppppiStack_60;
            local_104 = local_5c;
            pppppppiStack_100 = pppppppiStack_58;
            pppppppiStack_fc = pppppppiStack_54;
            uStack_f8 = uStack_50;
            uStack_f4 = uStack_4c;
            FUN_005f6588(&local_1a8);
          }
          pppppppiVar6 = local_90;
          pppppppiVar9 = local_8c;
          unaff_r11 = local_74;
          unaff_r9 = local_84;
          pppppppiVar12 = local_7c;
        }
        else {
          local_208 = local_190;
          local_200 = local_1a0;
          FUN_01bed4e2(&local_118,auStack_1f0,0x48);
          pppppppiVar12 = unaff_r6;
          local_204 = pppppppiVar13;
        }
        goto LAB_00d7e1c0;
      }
      unaff_r9 = (int *******)0x0;
      local_200 = (int *******)&DAT_00000003;
      local_208 = pppppppiVar13;
      pppppppiVar12 = unaff_r11;
      unaff_r11 = unaff_r6;
    }
    param_1[8] = local_118;
    param_1[9] = pppppppiStack_114;
    param_1[10] = pppppppiStack_110;
    param_1[0xb] = pppppppiStack_10c;
    param_1[0xc] = pppppppiStack_108;
    param_1[0xd] = local_104;
    param_1[0xe] = pppppppiStack_100;
    param_1[0xf] = pppppppiStack_fc;
    param_1[0x10] = uStack_f8;
    param_1[0x11] = uStack_f4;
    param_1[1] = 0;
    param_1[2] = local_200;
    *param_1 = 3;
    param_1[3] = unaff_r9;
    param_1[4] = local_1fc;
    param_1[5] = pppppppiVar12;
    param_1[6] = local_208;
    param_1[7] = unaff_r11;
  }
  else {
    local_1fc = (int *******)param_2[2];
    unaff_r11 = (int *******)param_2[3];
    pppppppiVar13 = (int *******)param_2[4];
    unaff_r6 = (int *******)param_2[5];
    FUN_01bed4e2(auStack_1f8,param_2 + 6,0x50);
    if (pppppppiVar6 != (int *******)&DAT_00000005 || pppppppiVar9 != (int *******)0x0)
    goto LAB_00d7df84;
LAB_00d7e1e4:
    uVar2 = 5;
LAB_00d7e1f8:
    *param_1 = uVar2;
    param_1[1] = 0;
  }
  return;
}

