// FUN_00d7cf38 @ 00d7cf38 size=2216 calls_out=18 calls_in=0
// strings: 

void FUN_00d7cf38(undefined4 *param_1,int *******param_2,int *param_3)

{
  int iVar1;
  undefined4 uVar2;
  int ******ppppppiVar3;
  int ******ppppppiVar4;
  int iVar5;
  int *******pppppppiVar6;
  int *******unaff_r6;
  int *******pppppppiVar7;
  int *******pppppppiVar8;
  int *******unaff_r8;
  int *******pppppppiVar9;
  int *******pppppppiVar10;
  int *******unaff_r10;
  int *******unaff_r11;
  int *******pppppppiVar11;
  int *******pppppppiVar12;
  int *******local_200;
  int *******local_1fc;
  int *******local_1f8;
  int *******local_1f4;
  int *******local_1f0;
  int *******local_1ec;
  int *******pppppppiStack_1e8;
  int *******local_1e4;
  int *******pppppppiStack_1e0;
  int *******pppppppiStack_1dc;
  undefined4 uStack_1d8;
  undefined4 uStack_1d4;
  undefined4 local_1d0;
  undefined4 uStack_1cc;
  undefined4 uStack_1c8;
  undefined4 uStack_1c4;
  undefined4 local_1c0;
  undefined4 uStack_1bc;
  undefined4 uStack_1b8;
  undefined4 uStack_1b4;
  undefined1 auStack_1b0 [8];
  undefined1 auStack_1a8 [72];
  int *******local_160;
  int *******local_15c;
  int *******local_158;
  int *******local_154;
  int *******pppppppiStack_150;
  int *******local_14c;
  int *******local_148;
  int *******local_144;
  undefined4 uStack_140;
  undefined4 uStack_13c;
  int *******local_f8;
  int *******local_f4;
  int *******local_f0;
  int *******local_ec;
  int *******pppppppiStack_e8;
  int *******local_e4;
  int *******pppppppiStack_e0;
  int *******pppppppiStack_dc;
  undefined4 uStack_d8;
  undefined4 uStack_d4;
  int *******local_d0;
  int *******local_cc;
  int *******local_c8;
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
  pppppppiVar10 = (int *******)param_2[1];
  ppppppiVar3 = param_2[0x41];
  *param_2 = (int ******)0x3;
  param_2[1] = (int ******)0x0;
  if (pppppppiVar6 == (int *******)&DAT_00000003 && pppppppiVar10 == (int *******)0x0) {
    unaff_r10 = param_2 + 0x1a;
    pppppppiVar12 = param_2 + 0x38;
    pppppppiVar6 = (int *******)*unaff_r10;
    pppppppiVar10 = (int *******)param_2[0x1b];
    pppppppiVar7 = unaff_r6;
    pppppppiVar9 = unaff_r8;
    pppppppiVar11 = unaff_r11;
    if (pppppppiVar6 != (int *******)&DAT_00000005 || pppppppiVar10 != (int *******)0x0) {
      do {
        local_1fc = param_2;
        if ((int ******)0x1f < param_2[0x34]) {
          iVar1 = *(int *)*param_3;
          iVar5 = ((int *)*param_3)[1];
          param_2[0x34] = (int ******)0x0;
          (**(code **)(iVar1 + 8))(iVar5);
LAB_00d7d338:
          unaff_r10 = param_2;
          if (param_2[0x39] == (int ******)0x0) goto LAB_00d7d688;
          goto LAB_00d7cf94;
        }
        *unaff_r10 = (int ******)0x4;
        param_2[0x1b] = (int ******)0x0;
        param_2[0x34] = (int ******)((int)param_2[0x34] + 1);
        local_90 = pppppppiVar6;
        local_8c = pppppppiVar10;
        FUN_01bed4e2(&local_88,param_2 + 0x1c,0x60);
        pppppppiVar11 = local_7c;
        pppppppiVar9 = local_80;
        pppppppiVar7 = local_84;
        pppppppiVar8 = local_88;
        if (pppppppiVar6 == (int *******)&SUB_00000004 && pppppppiVar10 == (int *******)0x0) {
          FUN_00d7ce10(unaff_r10);
          *unaff_r10 = (int ******)0x5;
          param_2[0x1b] = (int ******)0x0;
          pppppppiVar7 = unaff_r6;
          pppppppiVar9 = unaff_r8;
          pppppppiVar11 = unaff_r11;
          break;
        }
        FUN_01bed4e2(&local_160,param_2 + 0x20,0x50);
        if (((uint)pppppppiVar6 & 7) != 3) {
          if (pppppppiVar6 == (int *******)&DAT_00000005) goto LAB_00d7d338;
          local_200 = pppppppiVar11;
          ppppppiVar3 = param_2[0x39];
          if (ppppppiVar3 == (int ******)0x0) {
            FUN_01bed4e2(auStack_1b0,&local_160,0x50);
            unaff_r10 = param_2;
            goto LAB_00d7d444;
          }
          if (*param_2 != (int ******)0x3 || param_2[1] != (int ******)0x0) {
            FUN_005f6588(param_2);
            ppppppiVar3 = param_2[0x39];
          }
          param_2[2] = (int ******)pppppppiVar8;
          param_2[3] = (int ******)pppppppiVar7;
          param_2[4] = (int ******)pppppppiVar9;
          param_2[5] = (int ******)pppppppiVar11;
          *param_2 = (int ******)pppppppiVar6;
          param_2[1] = (int ******)pppppppiVar10;
          FUN_01bed4e2(param_2 + 6,&local_160,0x50);
          FUN_01283fd8(&local_f8,pppppppiVar12,ppppppiVar3);
          pppppppiVar6 = local_ec;
          unaff_r10 = param_2;
          if (((uint)local_ec & 1) == 0) goto LAB_00d7cfb4;
          local_bc = (int)local_f4 + ((uint)local_ec >> 5);
          local_c0 = (int)local_f8 - ((uint)local_ec >> 5);
          local_c4 = (int)local_f0 + ((uint)local_ec >> 5);
          FUN_01283524(&local_1f8,&local_c4);
          local_b8 = (int *****)((uint)pppppppiVar6 >> 5);
          if (local_1f0 < (int *******)((uint)pppppppiVar6 >> 5)) {
            local_88 = (int *******)&local_b4;
            local_b4 = local_1f0;
            local_84 = (int *******)&LAB_01a6a304;
            local_8c = (int *******)&LAB_01a6a304;
            local_90 = (int *******)&local_b8;
                    /* WARNING: Subroutine does not return */
            FUN_012fb100(&DAT_005ac267,&local_90,&DAT_01d2e534);
          }
          goto LAB_00d7d1e4;
        }
        ppppppiVar4 = param_2[0x36];
        unaff_r8 = (int *******)param_2[0x39];
        local_200 = (int *******)param_2[0x37];
        pppppppiVar6 = unaff_r8;
        if ((uint)((int)param_2[0x3a] - (int)unaff_r8) < 5) {
          FUN_01283c9c(pppppppiVar12,5);
          pppppppiVar6 = (int *******)param_2[0x39];
          local_1f4 = (int *******)((int)param_2[0x3a] - (int)pppppppiVar6);
          if (local_1f4 < 5) {
            local_c8 = pppppppiVar9;
            local_cc = pppppppiVar7;
            local_d0 = pppppppiVar8;
            local_1f8 = (int *******)0x5;
                    /* WARNING: Subroutine does not return */
            FUN_01284540(&local_1f8);
          }
        }
        param_2[0x39] = (int ******)((int)pppppppiVar6 + 5);
        local_1f0 = pppppppiVar9;
        local_1f4 = pppppppiVar7;
        local_1f8 = pppppppiVar8;
        iVar1 = FUN_010132ac(pppppppiVar7,pppppppiVar7 + (int)pppppppiVar9 * 0xe);
        pppppppiVar6 = (int *******)(0x7ffffffa - (int)pppppppiVar6);
        unaff_r11 = (int *******)(iVar1 + (int)pppppppiVar9);
        if (pppppppiVar6 < unaff_r11) {
LAB_00d7d7c0:
          local_f8 = unaff_r11;
          local_f4 = pppppppiVar6;
                    /* WARNING: Subroutine does not return */
          FUN_013073dc(&DAT_003efa56,0x27,&local_f8,&DAT_01c15d9c,&DAT_01c15fbc);
        }
        unaff_r6 = pppppppiVar7;
        if (pppppppiVar9 != (int *******)0x0) {
          iVar1 = (int)pppppppiVar9 * 0x38;
          do {
            FUN_00f00068(pppppppiVar7,pppppppiVar12);
            pppppppiVar7 = pppppppiVar7 + 0xe;
            iVar1 = iVar1 + -0x38;
          } while (iVar1 != 0);
          unaff_r6 = pppppppiVar7;
          if (pppppppiVar6 < unaff_r11) goto LAB_00d7d7c0;
        }
        FUN_00d5f9a8(&local_1f8);
        pppppppiVar6 = (int *******)param_2[0x39];
        if (pppppppiVar6 < unaff_r8) {
                    /* WARNING: Subroutine does not return */
          FUN_012faff4(unaff_r8,pppppppiVar6,pppppppiVar6,&DAT_01c15f4c);
        }
        FUN_01a745b4(&local_90,ppppppiVar4,local_200,(int)*pppppppiVar12 + (int)unaff_r8,
                     (int)pppppppiVar6 - (int)unaff_r8);
        pppppppiVar11 = local_7c;
        pppppppiVar9 = local_80;
        pppppppiVar7 = local_84;
        pppppppiVar8 = local_88;
        pppppppiVar10 = local_8c;
        pppppppiVar6 = local_90;
        if (local_90 != (int *******)&DAT_00000003 || local_8c != (int *******)0x0) {
          FUN_01bed4e2(auStack_1b0,&local_78,0x50);
          goto LAB_00d7d444;
        }
        if (ppppppiVar3 <= param_2[0x39]) {
          FUN_01283fd8(&local_f8,pppppppiVar12);
          pppppppiVar6 = local_ec;
          if (((uint)local_ec & 1) == 0) goto LAB_00d7cfb4;
          local_bc = (int)local_f4 + ((uint)local_ec >> 5);
          local_c0 = (int)local_f8 - ((uint)local_ec >> 5);
          local_c4 = (int)local_f0 + ((uint)local_ec >> 5);
          FUN_01283524(&local_1f8,&local_c4);
          local_b8 = (int *****)((uint)pppppppiVar6 >> 5);
          if (local_1f0 < (int *******)((uint)pppppppiVar6 >> 5)) {
            local_88 = (int *******)&local_b4;
            local_b4 = local_1f0;
            local_84 = (int *******)&LAB_01a6a304;
            local_8c = (int *******)&LAB_01a6a304;
            local_90 = (int *******)&local_b8;
                    /* WARNING: Subroutine does not return */
            FUN_012fb100(&DAT_005ac267,&local_90,&DAT_01d2e534);
          }
          goto LAB_00d7d1e4;
        }
        pppppppiVar6 = (int *******)*unaff_r10;
        pppppppiVar10 = (int *******)param_2[0x1b];
        pppppppiVar7 = unaff_r6;
        pppppppiVar9 = unaff_r8;
        pppppppiVar11 = unaff_r11;
      } while (pppppppiVar6 != (int *******)&DAT_00000005 || pppppppiVar10 != (int *******)0x0);
    }
    if (param_2[0x39] == (int ******)0x0) {
      pppppppiVar10 = (int *******)0x0;
      pppppppiVar6 = (int *******)&SUB_00000004;
      pppppppiVar8 = pppppppiVar12;
    }
    else {
LAB_00d7cf94:
      FUN_01283fd8(&local_f8,pppppppiVar12);
      pppppppiVar6 = local_ec;
      if (((uint)local_ec & 1) == 0) {
LAB_00d7cfb4:
        pppppppiVar7 = local_f8;
        pppppppiVar8 = (int *******)&DAT_01d2e520;
        pppppppiVar9 = local_f4;
        pppppppiVar11 = local_ec;
      }
      else {
        local_bc = (int)local_f4 + ((uint)local_ec >> 5);
        local_c0 = (int)local_f8 - ((uint)local_ec >> 5);
        local_c4 = (int)local_f0 + ((uint)local_ec >> 5);
        FUN_01283524(&local_1f8,&local_c4);
        local_b8 = (int *****)((uint)pppppppiVar6 >> 5);
        if (local_1f0 < (int *******)((uint)pppppppiVar6 >> 5)) {
          local_88 = (int *******)&local_b4;
          local_b4 = local_1f0;
          local_84 = (int *******)&LAB_01a6a304;
          local_8c = (int *******)&LAB_01a6a304;
          local_90 = (int *******)&local_b8;
                    /* WARNING: Subroutine does not return */
          FUN_012fb100(&DAT_005ac267,&local_90,&DAT_01d2e534);
        }
LAB_00d7d1e4:
        pppppppiVar9 = (int *******)((int)local_1f0 - (int)local_b8);
        pppppppiVar7 = (int *******)((int)local_1f4 + (int)local_b8);
        pppppppiVar8 = local_1f8;
        pppppppiVar11 = local_1ec;
      }
      pppppppiVar10 = (int *******)0x0;
      pppppppiVar6 = (int *******)&DAT_00000003;
    }
LAB_00d7d444:
    pppppppiVar12 = pppppppiVar11;
    if (pppppppiVar6 == (int *******)&SUB_00000004 && pppppppiVar10 == (int *******)0x0) {
      pppppppiVar7 = (int *******)&local_90;
      FUN_01a737fc(pppppppiVar7,param_2 + 0x42);
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
        local_200 = local_7c;
        local_1fc = local_88;
        local_160 = local_70;
        local_15c = pppppppiStack_6c;
        local_158 = pppppppiStack_68;
        local_154 = pppppppiStack_64;
        pppppppiStack_150 = pppppppiStack_60;
        local_14c = local_5c;
        local_148 = pppppppiStack_58;
        local_144 = pppppppiStack_54;
        uStack_140 = uStack_50;
        uStack_13c = uStack_4c;
        pppppppiVar7 = local_78;
        pppppppiVar9 = local_80;
        unaff_r10 = local_84;
        pppppppiVar12 = local_74;
      }
      local_1f8 = local_160;
      local_1f4 = local_15c;
      local_1f0 = local_158;
      local_1ec = local_154;
      pppppppiStack_1e8 = pppppppiStack_150;
      local_1e4 = local_14c;
      pppppppiStack_1e0 = local_148;
      pppppppiStack_1dc = local_144;
      uStack_1d8 = uStack_140;
      uStack_1d4 = uStack_13c;
      local_1d0 = local_b0;
      uStack_1cc = uStack_ac;
      uStack_1c8 = uStack_a8;
      uStack_1c4 = uStack_a4;
      local_1c0 = local_a0;
      uStack_1bc = uStack_9c;
      uStack_1b8 = uStack_98;
      uStack_1b4 = uStack_94;
      pppppppiVar6 = local_90;
      pppppppiVar10 = local_8c;
LAB_00d7d664:
      if (pppppppiVar6 != (int *******)&DAT_00000003 || pppppppiVar10 != (int *******)0x0) {
        if (pppppppiVar6 != (int *******)&SUB_00000004 || pppppppiVar10 != (int *******)0x0) {
          if (pppppppiVar6 != (int *******)&DAT_00000005 || pppppppiVar10 != (int *******)0x0) {
            FUN_01bed4e2(&local_70,&local_1f8,0x48);
            local_88 = local_1fc;
            local_7c = local_200;
            local_90 = pppppppiVar6;
            local_8c = pppppppiVar10;
            local_84 = unaff_r10;
            local_80 = pppppppiVar9;
            local_78 = pppppppiVar7;
            local_74 = pppppppiVar12;
            uVar2 = FUN_01a65494(&local_90);
            FUN_01a7467c(param_1,uVar2,&DAT_01d2cc7c);
            return;
          }
          goto LAB_00d7d688;
        }
        uVar2 = 4;
        goto LAB_00d7d69c;
      }
    }
    else {
      if (pppppppiVar6 != (int *******)&DAT_00000003 || pppppppiVar10 != (int *******)0x0) {
        local_160 = pppppppiVar6;
        local_15c = pppppppiVar10;
        local_158 = pppppppiVar8;
        local_154 = pppppppiVar7;
        pppppppiStack_150 = pppppppiVar9;
        local_14c = pppppppiVar11;
        FUN_01bed4e2(&local_148,auStack_1b0,0x50);
        pppppppiVar12 = local_144;
        pppppppiVar7 = local_148;
        unaff_r10 = local_154;
        if (*(char *)(param_2 + 0x5c) == '\x01') {
          *(undefined1 *)((int)param_2 + 0x171) = 1;
          FUN_01a738c0(&local_90,&local_160);
          pppppppiVar10 = local_8c;
          pppppppiVar6 = local_90;
          local_1fc = local_88;
          local_200 = local_7c;
          local_f8 = local_70;
          local_f4 = pppppppiStack_6c;
          local_f0 = pppppppiStack_68;
          local_ec = pppppppiStack_64;
          pppppppiStack_e8 = pppppppiStack_60;
          local_e4 = local_5c;
          pppppppiStack_e0 = pppppppiStack_58;
          pppppppiStack_dc = pppppppiStack_54;
          uStack_d8 = uStack_50;
          uStack_d4 = uStack_4c;
          if (local_90 == (int *******)&DAT_00000003 && local_8c == (int *******)0x0) {
            local_1f8 = local_70;
            local_1f4 = pppppppiStack_6c;
            local_1f0 = pppppppiStack_68;
            local_1ec = pppppppiStack_64;
            pppppppiStack_1e8 = pppppppiStack_60;
            local_1e4 = local_5c;
            pppppppiStack_1e0 = pppppppiStack_58;
            pppppppiStack_1dc = pppppppiStack_54;
            uStack_1d8 = uStack_50;
            uStack_1d4 = uStack_4c;
            FUN_005f6588(&local_160);
            pppppppiVar10 = (int *******)0x0;
            pppppppiVar6 = (int *******)&DAT_00000003;
          }
          else {
            local_1d0 = local_48;
            uStack_1cc = uStack_44;
            uStack_1c8 = uStack_40;
            uStack_1c4 = uStack_3c;
            local_1c0 = local_38;
            uStack_1bc = uStack_34;
            uStack_1b8 = uStack_30;
            uStack_1b4 = uStack_2c;
            local_1f8 = local_70;
            local_1f4 = pppppppiStack_6c;
            local_1f0 = pppppppiStack_68;
            local_1ec = pppppppiStack_64;
            pppppppiStack_1e8 = pppppppiStack_60;
            local_1e4 = local_5c;
            pppppppiStack_1e0 = pppppppiStack_58;
            pppppppiStack_1dc = pppppppiStack_54;
            uStack_1d8 = uStack_50;
            uStack_1d4 = uStack_4c;
            FUN_005f6588(&local_160);
          }
          pppppppiVar7 = local_78;
          pppppppiVar9 = local_80;
          unaff_r10 = local_84;
          pppppppiVar12 = local_74;
        }
        else {
          local_1fc = local_158;
          FUN_01bed4e2(&local_1f8,auStack_1a8,0x48);
          local_200 = pppppppiVar11;
        }
        goto LAB_00d7d664;
      }
      unaff_r10 = (int *******)0x0;
      local_1fc = (int *******)&DAT_00000003;
      local_200 = pppppppiVar7;
      pppppppiVar7 = pppppppiVar9;
      pppppppiVar9 = pppppppiVar8;
    }
    param_1[8] = local_1f8;
    param_1[9] = local_1f4;
    param_1[10] = local_1f0;
    param_1[0xb] = local_1ec;
    param_1[0xc] = pppppppiStack_1e8;
    param_1[0xd] = local_1e4;
    param_1[0xe] = pppppppiStack_1e0;
    param_1[0xf] = pppppppiStack_1dc;
    param_1[0x10] = uStack_1d8;
    param_1[0x11] = uStack_1d4;
    *param_1 = 3;
    param_1[1] = 0;
    param_1[2] = local_1fc;
    param_1[3] = unaff_r10;
    param_1[4] = pppppppiVar9;
    param_1[5] = local_200;
    param_1[6] = pppppppiVar7;
    param_1[7] = pppppppiVar12;
  }
  else {
    pppppppiVar7 = (int *******)param_2[3];
    pppppppiVar9 = (int *******)param_2[4];
    pppppppiVar11 = (int *******)param_2[5];
    pppppppiVar8 = (int *******)param_2[2];
    FUN_01bed4e2(auStack_1b0,param_2 + 6,0x50);
    if (pppppppiVar6 != (int *******)&DAT_00000005 || pppppppiVar10 != (int *******)0x0)
    goto LAB_00d7d444;
LAB_00d7d688:
    uVar2 = 5;
LAB_00d7d69c:
    *param_1 = uVar2;
    param_1[1] = 0;
  }
  return;
}

