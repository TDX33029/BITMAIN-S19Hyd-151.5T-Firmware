// FUN_00d6f1dc @ 00d6f1dc size=2236 calls_out=17 calls_in=0
// strings: 

void FUN_00d6f1dc(undefined4 *param_1,int *******param_2,int *param_3)

{
  int ******ppppppiVar1;
  int iVar2;
  undefined4 uVar3;
  int *******pppppppiVar4;
  int iVar5;
  int *******pppppppiVar6;
  int ******ppppppiVar7;
  int *******unaff_r5;
  int *******pppppppiVar8;
  int *******pppppppiVar9;
  int *******pppppppiVar10;
  int ******ppppppiVar11;
  int ******ppppppiVar12;
  int *******pppppppiVar13;
  int *******unaff_r11;
  int *******pppppppiVar14;
  int *******pppppppiVar15;
  int *******local_20c;
  int *******local_208;
  int *******local_204;
  int *******local_200;
  int *******local_1fc;
  int *******local_1f8;
  int *******local_1f4;
  int *******pppppppiStack_1f0;
  int *******local_1ec;
  int *******pppppppiStack_1e8;
  int *******pppppppiStack_1e4;
  undefined4 uStack_1e0;
  undefined4 uStack_1dc;
  undefined4 local_1d8;
  undefined4 uStack_1d4;
  undefined4 uStack_1d0;
  undefined4 uStack_1cc;
  undefined4 local_1c8;
  undefined4 uStack_1c4;
  undefined4 uStack_1c0;
  undefined4 uStack_1bc;
  undefined1 auStack_1b8 [8];
  undefined1 auStack_1b0 [72];
  int *******local_168;
  int *******local_164;
  int *******local_160;
  int *******local_15c;
  int *******local_158;
  int *******local_154;
  int *******local_150;
  int *******local_14c;
  undefined4 uStack_148;
  undefined4 uStack_144;
  int *******local_100;
  int *******local_fc;
  int *******local_f8;
  int *******local_f4;
  int *******pppppppiStack_f0;
  int *******local_ec;
  int *******pppppppiStack_e8;
  int *******pppppppiStack_e4;
  undefined4 uStack_e0;
  undefined4 uStack_dc;
  int *******local_d4;
  int *******local_d0;
  int *******local_cc;
  int *******local_c8;
  int *******local_c4;
  int *******local_c0;
  undefined1 *local_bc;
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
  pppppppiVar10 = (int *******)param_2[1];
  pppppppiVar4 = (int *******)param_2[0x41];
  *param_2 = (int ******)0x3;
  param_2[1] = (int ******)0x0;
  if (pppppppiVar6 == (int *******)&DAT_00000003 && pppppppiVar10 == (int *******)0x0) {
    pppppppiVar9 = param_2 + 0x1a;
    pppppppiVar13 = param_2 + 0x38;
    pppppppiVar6 = (int *******)*pppppppiVar9;
    pppppppiVar10 = (int *******)param_2[0x1b];
    if (pppppppiVar6 != (int *******)&DAT_00000005 || pppppppiVar10 != (int *******)0x0) {
      pppppppiVar8 = unaff_r5;
      pppppppiVar14 = unaff_r11;
      do {
        local_20c = pppppppiVar13;
        if ((int ******)0x1f < param_2[0x34]) {
          iVar2 = *(int *)*param_3;
          iVar5 = ((int *)*param_3)[1];
          param_2[0x34] = (int ******)0x0;
          (**(code **)(iVar2 + 8))(iVar5);
LAB_00d6f5c4:
          if (param_2[0x39] != (int ******)0x0) goto LAB_00d6f238;
          goto LAB_00d6f924;
        }
        *pppppppiVar9 = (int ******)0x4;
        param_2[0x1b] = (int ******)0x0;
        param_2[0x34] = (int ******)((int)param_2[0x34] + 1);
        local_90 = pppppppiVar6;
        local_8c = pppppppiVar10;
        FUN_01bed4e2(&local_88,param_2 + 0x1c,0x60);
        pppppppiVar15 = local_7c;
        local_208 = local_80;
        unaff_r11 = local_84;
        unaff_r5 = local_88;
        if (pppppppiVar6 == (int *******)&SUB_00000004 && pppppppiVar10 == (int *******)0x0) {
          FUN_00d6f0a4(pppppppiVar9);
          *pppppppiVar9 = (int ******)0x5;
          param_2[0x1b] = (int ******)0x0;
          unaff_r5 = pppppppiVar8;
          unaff_r11 = pppppppiVar14;
          break;
        }
        local_204 = local_88;
        FUN_01bed4e2(&local_168,param_2 + 0x20,0x50);
        if (((uint)pppppppiVar6 & 7) != 3) {
          if (pppppppiVar6 == (int *******)&DAT_00000005) goto LAB_00d6f5c4;
          ppppppiVar1 = param_2[0x39];
          if (ppppppiVar1 == (int ******)0x0) {
            pppppppiVar13 = (int *******)&local_168;
LAB_00d6f6bc:
            FUN_01bed4e2(auStack_1b8,pppppppiVar13,0x50);
            goto LAB_00d6f6c4;
          }
          if (*param_2 != (int ******)0x3 || param_2[1] != (int ******)0x0) {
            FUN_005f6588(param_2);
            ppppppiVar1 = param_2[0x39];
          }
          param_2[2] = (int ******)unaff_r5;
          *param_2 = (int ******)pppppppiVar6;
          param_2[1] = (int ******)pppppppiVar10;
          param_2[3] = (int ******)unaff_r11;
          param_2[4] = (int ******)local_208;
          param_2[5] = (int ******)pppppppiVar15;
          FUN_01bed4e2(param_2 + 6,&local_168,0x50);
          FUN_01283fd8(&local_100,pppppppiVar13,ppppppiVar1);
          pppppppiVar6 = local_f4;
          if (((uint)local_f4 & 1) == 0) goto LAB_00d6f258;
          local_bc = (undefined1 *)((int)local_fc + ((uint)local_f4 >> 5));
          local_c0 = (int *******)((int)local_100 - ((uint)local_f4 >> 5));
          local_c4 = (int *******)((int)local_f8 + ((uint)local_f4 >> 5));
          FUN_01283524(&local_200,&local_c4);
          local_b8 = (int *****)((uint)pppppppiVar6 >> 5);
          if (local_1f8 < (int *******)((uint)pppppppiVar6 >> 5)) {
            local_88 = (int *******)&local_b4;
            local_b4 = local_1f8;
            local_84 = (int *******)&LAB_01a6a304;
            local_8c = (int *******)&LAB_01a6a304;
            local_90 = (int *******)&local_b8;
                    /* WARNING: Subroutine does not return */
            FUN_012fb100(&DAT_005ac267,&local_90,&DAT_01d2e534);
          }
          goto LAB_00d6f478;
        }
        ppppppiVar7 = param_2[0x39];
        ppppppiVar12 = param_2[0x36];
        ppppppiVar11 = param_2[0x37];
        ppppppiVar1 = ppppppiVar7;
        if ((uint)((int)param_2[0x3a] - (int)ppppppiVar7) < 5) {
          FUN_01283c9c(pppppppiVar13,5);
          ppppppiVar1 = param_2[0x39];
          local_1fc = (int *******)((int)param_2[0x3a] - (int)ppppppiVar1);
          if (local_1fc < (int ******)0x5) {
            local_c8 = pppppppiVar15;
            local_cc = local_208;
            local_d0 = unaff_r11;
            local_d4 = unaff_r5;
            local_200 = (int *******)0x5;
                    /* WARNING: Subroutine does not return */
            FUN_01284540(&local_200);
          }
        }
        local_1f4 = pppppppiVar15;
        local_1f8 = local_208;
        param_2[0x39] = (int ******)((int)ppppppiVar1 + 5);
        local_1fc = unaff_r11;
        local_200 = unaff_r5;
        local_b4 = pppppppiVar13;
        FUN_00efeec8(&local_100,&local_200,&local_b4);
        if (local_100 == (int *******)&DAT_00000001) {
          local_c0 = local_f8;
          local_c4 = local_fc;
                    /* WARNING: Subroutine does not return */
          FUN_013073dc(&DAT_003efa56,0x27,&local_c4,&DAT_01c15d9c,&DAT_01c15fbc);
        }
        if (unaff_r5 != (int *******)0x0) {
          FUN_0165d624(&local_1fc);
        }
        ppppppiVar1 = param_2[0x39];
        if (ppppppiVar1 < ppppppiVar7) {
                    /* WARNING: Subroutine does not return */
          FUN_012faff4(ppppppiVar7,ppppppiVar1,ppppppiVar1,&DAT_01c15f4c);
        }
        FUN_01a745b4(&local_90,ppppppiVar12,ppppppiVar11,(int)*pppppppiVar13 + (int)ppppppiVar7,
                     (int)ppppppiVar1 - (int)ppppppiVar7);
        if (local_90 != (int *******)&DAT_00000003 || local_8c != (int *******)0x0) {
          local_204 = local_88;
          pppppppiVar13 = (int *******)&local_78;
          pppppppiVar6 = local_90;
          pppppppiVar15 = local_7c;
          local_208 = local_80;
          pppppppiVar10 = local_8c;
          unaff_r11 = local_84;
          goto LAB_00d6f6bc;
        }
        if (pppppppiVar4 <= param_2[0x39]) {
          FUN_01283fd8(&local_100,pppppppiVar13);
          pppppppiVar6 = local_f4;
          if (((uint)local_f4 & 1) == 0) goto LAB_00d6f258;
          local_bc = (undefined1 *)((int)local_fc + ((uint)local_f4 >> 5));
          local_c0 = (int *******)((int)local_100 - ((uint)local_f4 >> 5));
          local_c4 = (int *******)((int)local_f8 + ((uint)local_f4 >> 5));
          FUN_01283524(&local_200,&local_c4);
          local_b8 = (int *****)((uint)pppppppiVar6 >> 5);
          if (local_1f8 < (int *******)((uint)pppppppiVar6 >> 5)) {
            local_88 = (int *******)&local_b4;
            local_b4 = local_1f8;
            local_84 = (int *******)&LAB_01a6a304;
            local_8c = (int *******)&LAB_01a6a304;
            local_90 = (int *******)&local_b8;
                    /* WARNING: Subroutine does not return */
            FUN_012fb100(&DAT_005ac267,&local_90,&DAT_01d2e534);
          }
          goto LAB_00d6f478;
        }
        pppppppiVar6 = (int *******)*pppppppiVar9;
        pppppppiVar10 = (int *******)param_2[0x1b];
        pppppppiVar8 = unaff_r5;
        pppppppiVar14 = unaff_r11;
      } while (pppppppiVar6 != (int *******)&DAT_00000005 || pppppppiVar10 != (int *******)0x0);
    }
    if (param_2[0x39] == (int ******)0x0) {
      pppppppiVar10 = (int *******)0x0;
      pppppppiVar6 = (int *******)&SUB_00000004;
      pppppppiVar15 = unaff_r5;
      local_208 = pppppppiVar13;
    }
    else {
LAB_00d6f238:
      FUN_01283fd8(&local_100,pppppppiVar13);
      pppppppiVar6 = local_f4;
      if (((uint)local_f4 & 1) == 0) {
LAB_00d6f258:
        local_204 = (int *******)&DAT_01d2e520;
        pppppppiVar15 = local_f4;
        local_208 = local_fc;
        unaff_r11 = local_100;
      }
      else {
        local_bc = (undefined1 *)((int)local_fc + ((uint)local_f4 >> 5));
        local_c0 = (int *******)((int)local_100 - ((uint)local_f4 >> 5));
        local_c4 = (int *******)((int)local_f8 + ((uint)local_f4 >> 5));
        FUN_01283524(&local_200,&local_c4);
        local_b8 = (int *****)((uint)pppppppiVar6 >> 5);
        if (local_1f8 < (int *******)((uint)pppppppiVar6 >> 5)) {
          local_88 = (int *******)&local_b4;
          local_b4 = local_1f8;
          local_84 = (int *******)&LAB_01a6a304;
          local_8c = (int *******)&LAB_01a6a304;
          local_90 = (int *******)&local_b8;
                    /* WARNING: Subroutine does not return */
          FUN_012fb100(&DAT_005ac267,&local_90,&DAT_01d2e534);
        }
LAB_00d6f478:
        local_208 = (int *******)((int)local_1f8 - (int)local_b8);
        local_204 = local_200;
        unaff_r11 = (int *******)((int)local_1fc + (int)local_b8);
        pppppppiVar15 = local_1f4;
      }
      pppppppiVar10 = (int *******)0x0;
      pppppppiVar6 = (int *******)&DAT_00000003;
    }
LAB_00d6f6c4:
    if (pppppppiVar6 == (int *******)&SUB_00000004 && pppppppiVar10 == (int *******)0x0) {
      pppppppiVar13 = (int *******)&local_90;
      pppppppiVar15 = (int *******)0xd6f700;
      FUN_01a737fc(pppppppiVar13,param_2 + 0x42);
      pppppppiVar9 = param_2;
      local_208 = pppppppiVar4;
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
        local_208 = local_80;
        local_20c = local_74;
        local_168 = local_70;
        local_164 = pppppppiStack_6c;
        local_160 = pppppppiStack_68;
        local_15c = pppppppiStack_64;
        local_158 = pppppppiStack_60;
        local_154 = local_5c;
        local_150 = pppppppiStack_58;
        local_14c = pppppppiStack_54;
        uStack_148 = uStack_50;
        uStack_144 = uStack_4c;
        pppppppiVar9 = local_84;
        pppppppiVar13 = local_88;
        unaff_r11 = local_78;
        pppppppiVar15 = local_7c;
      }
      local_200 = local_168;
      local_1fc = local_164;
      local_1f8 = local_160;
      local_1f4 = local_15c;
      pppppppiStack_1f0 = local_158;
      local_1ec = local_154;
      pppppppiStack_1e8 = local_150;
      pppppppiStack_1e4 = local_14c;
      uStack_1e0 = uStack_148;
      uStack_1dc = uStack_144;
      local_1d8 = local_b0;
      uStack_1d4 = uStack_ac;
      uStack_1d0 = uStack_a8;
      uStack_1cc = uStack_a4;
      local_1c8 = local_a0;
      uStack_1c4 = uStack_9c;
      uStack_1c0 = uStack_98;
      uStack_1bc = uStack_94;
      pppppppiVar6 = local_90;
      pppppppiVar10 = local_8c;
LAB_00d6f8fc:
      if (pppppppiVar6 != (int *******)&DAT_00000003 || pppppppiVar10 != (int *******)0x0) {
        if (pppppppiVar6 != (int *******)&SUB_00000004 || pppppppiVar10 != (int *******)0x0) {
          if (pppppppiVar6 != (int *******)&DAT_00000005 || pppppppiVar10 != (int *******)0x0) {
            FUN_01bed4e2(&local_70,&local_200,0x48);
            local_74 = local_20c;
            local_80 = local_208;
            local_90 = pppppppiVar6;
            local_8c = pppppppiVar10;
            local_88 = pppppppiVar13;
            local_84 = pppppppiVar9;
            local_7c = pppppppiVar15;
            local_78 = unaff_r11;
            uVar3 = FUN_01a65494(&local_90);
            FUN_01a7467c(param_1,uVar3,&DAT_01d2cc7c);
            return;
          }
          goto LAB_00d6f924;
        }
        uVar3 = 4;
        goto LAB_00d6f938;
      }
      local_204 = local_208;
      pppppppiVar6 = pppppppiVar15;
    }
    else {
      if (pppppppiVar6 != (int *******)&DAT_00000003 || pppppppiVar10 != (int *******)0x0) {
        local_160 = local_204;
        local_168 = pppppppiVar6;
        local_164 = pppppppiVar10;
        local_15c = unaff_r11;
        local_158 = local_208;
        local_154 = pppppppiVar15;
        FUN_01bed4e2(&local_150,auStack_1b8,0x50);
        unaff_r11 = local_150;
        pppppppiVar9 = local_15c;
        pppppppiVar13 = local_160;
        if (*(char *)(param_2 + 0x5c) == '\x01') {
          *(undefined1 *)((int)param_2 + 0x171) = 1;
          FUN_01a738c0(&local_90,&local_168);
          pppppppiVar10 = local_8c;
          pppppppiVar6 = local_90;
          local_20c = local_74;
          local_208 = local_80;
          local_100 = local_70;
          local_fc = pppppppiStack_6c;
          local_f8 = pppppppiStack_68;
          local_f4 = pppppppiStack_64;
          pppppppiStack_f0 = pppppppiStack_60;
          local_ec = local_5c;
          pppppppiStack_e8 = pppppppiStack_58;
          pppppppiStack_e4 = pppppppiStack_54;
          uStack_e0 = uStack_50;
          uStack_dc = uStack_4c;
          if (local_90 == (int *******)&DAT_00000003 && local_8c == (int *******)0x0) {
            local_200 = local_70;
            local_1fc = pppppppiStack_6c;
            local_1f8 = pppppppiStack_68;
            local_1f4 = pppppppiStack_64;
            pppppppiStack_1f0 = pppppppiStack_60;
            local_1ec = local_5c;
            pppppppiStack_1e8 = pppppppiStack_58;
            pppppppiStack_1e4 = pppppppiStack_54;
            uStack_1e0 = uStack_50;
            uStack_1dc = uStack_4c;
            FUN_005f6588(&local_168);
            pppppppiVar10 = (int *******)0x0;
            pppppppiVar6 = (int *******)&DAT_00000003;
          }
          else {
            local_1d8 = local_48;
            uStack_1d4 = uStack_44;
            uStack_1d0 = uStack_40;
            uStack_1cc = uStack_3c;
            local_1c8 = local_38;
            uStack_1c4 = uStack_34;
            uStack_1c0 = uStack_30;
            uStack_1bc = uStack_2c;
            local_200 = local_70;
            local_1fc = pppppppiStack_6c;
            local_1f8 = pppppppiStack_68;
            local_1f4 = pppppppiStack_64;
            pppppppiStack_1f0 = pppppppiStack_60;
            local_1ec = local_5c;
            pppppppiStack_1e8 = pppppppiStack_58;
            pppppppiStack_1e4 = pppppppiStack_54;
            uStack_1e0 = uStack_50;
            uStack_1dc = uStack_4c;
            FUN_005f6588(&local_168);
          }
          pppppppiVar15 = local_7c;
          pppppppiVar9 = local_84;
          pppppppiVar13 = local_88;
          unaff_r11 = local_78;
        }
        else {
          local_20c = local_14c;
          FUN_01bed4e2(&local_200,auStack_1b0,0x48);
        }
        goto LAB_00d6f8fc;
      }
      pppppppiVar9 = (int *******)0x0;
      pppppppiVar13 = (int *******)&DAT_00000003;
      pppppppiVar6 = unaff_r11;
      local_20c = pppppppiVar15;
      unaff_r11 = local_208;
    }
    param_1[8] = local_200;
    param_1[9] = local_1fc;
    param_1[10] = local_1f8;
    param_1[0xb] = local_1f4;
    param_1[0xc] = pppppppiStack_1f0;
    param_1[0xd] = local_1ec;
    param_1[0xe] = pppppppiStack_1e8;
    param_1[0xf] = pppppppiStack_1e4;
    param_1[0x10] = uStack_1e0;
    param_1[0x11] = uStack_1dc;
    param_1[1] = 0;
    param_1[2] = pppppppiVar13;
    *param_1 = 3;
    param_1[3] = pppppppiVar9;
    param_1[4] = local_204;
    param_1[5] = pppppppiVar6;
    param_1[6] = unaff_r11;
    param_1[7] = local_20c;
  }
  else {
    local_204 = (int *******)param_2[2];
    unaff_r11 = (int *******)param_2[3];
    local_208 = (int *******)param_2[4];
    pppppppiVar15 = (int *******)param_2[5];
    FUN_01bed4e2(auStack_1b8,param_2 + 6,0x50);
    if (pppppppiVar6 != (int *******)&DAT_00000005 || pppppppiVar10 != (int *******)0x0)
    goto LAB_00d6f6c4;
LAB_00d6f924:
    uVar3 = 5;
LAB_00d6f938:
    *param_1 = uVar3;
    param_1[1] = 0;
  }
  return;
}

