// FUN_00d5bd2c @ 00d5bd2c size=2196 calls_out=17 calls_in=0
// strings: 

void FUN_00d5bd2c(undefined4 *param_1,int *******param_2,int *param_3)

{
  int *******pppppppiVar1;
  int ******ppppppiVar2;
  int iVar3;
  undefined4 uVar4;
  int *******pppppppiVar5;
  int iVar6;
  int *******pppppppiVar7;
  int ******ppppppiVar8;
  int *******unaff_r5;
  int *******pppppppiVar9;
  int *******unaff_r8;
  int *******pppppppiVar10;
  int *******pppppppiVar11;
  int ******ppppppiVar12;
  int *******pppppppiVar13;
  int *******unaff_r11;
  int *******pppppppiVar14;
  int *******local_1f8;
  int *******local_1f4;
  int *******local_1f0;
  int *******local_1ec;
  int *******local_1e8;
  int *******local_1e4;
  int *******pppppppiStack_1e0;
  int *******local_1dc;
  int *******pppppppiStack_1d8;
  int *******pppppppiStack_1d4;
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
  int *******local_158;
  int *******local_154;
  int *******local_150;
  int *******local_14c;
  int *******local_148;
  int *******local_144;
  int *******local_140;
  int *******local_13c;
  undefined4 uStack_138;
  undefined4 uStack_134;
  int *******local_f0;
  int *******local_ec;
  int *******local_e8;
  int *******local_e4;
  int *******pppppppiStack_e0;
  int *******local_dc;
  int *******pppppppiStack_d8;
  int *******pppppppiStack_d4;
  undefined4 uStack_d0;
  undefined4 uStack_cc;
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
  
  pppppppiVar7 = (int *******)*param_2;
  pppppppiVar11 = (int *******)param_2[1];
  pppppppiVar5 = (int *******)param_2[0x41];
  *param_2 = (int ******)0x3;
  param_2[1] = (int ******)0x0;
  if (pppppppiVar7 == (int *******)&DAT_00000003 && pppppppiVar11 == (int *******)0x0) {
    unaff_r5 = param_2 + 0x1a;
    pppppppiVar14 = param_2 + 0x38;
    pppppppiVar7 = (int *******)*unaff_r5;
    pppppppiVar11 = (int *******)param_2[0x1b];
    pppppppiVar10 = unaff_r8;
    local_1f8 = unaff_r11;
    if (pppppppiVar7 != (int *******)&DAT_00000005 || pppppppiVar11 != (int *******)0x0) {
      do {
        if ((int ******)0x1f < param_2[0x34]) {
          iVar3 = *(int *)*param_3;
          iVar6 = ((int *)*param_3)[1];
          param_2[0x34] = (int ******)0x0;
          (**(code **)(iVar3 + 8))(iVar6);
LAB_00d5c0f4:
          if (param_2[0x39] != (int ******)0x0) goto LAB_00d5bd88;
          goto LAB_00d5c45c;
        }
        *unaff_r5 = (int ******)0x4;
        param_2[0x1b] = (int ******)0x0;
        param_2[0x34] = (int ******)((int)param_2[0x34] + 1);
        local_90 = pppppppiVar7;
        local_8c = pppppppiVar11;
        FUN_01bed4e2(&local_88,param_2 + 0x1c,0x60);
        pppppppiVar9 = local_7c;
        local_1f8 = local_80;
        pppppppiVar10 = local_84;
        pppppppiVar13 = local_88;
        if (pppppppiVar7 == (int *******)&SUB_00000004 && pppppppiVar11 == (int *******)0x0) {
          FUN_00d5bc04(unaff_r5);
          *unaff_r5 = (int ******)0x5;
          param_2[0x1b] = (int ******)0x0;
          pppppppiVar10 = unaff_r8;
          local_1f8 = unaff_r11;
          break;
        }
        local_1f4 = local_88;
        FUN_01bed4e2(&local_158,param_2 + 0x20,0x50);
        if (((uint)pppppppiVar7 & 7) != 3) {
          if (pppppppiVar7 == (int *******)&DAT_00000005) goto LAB_00d5c0f4;
          ppppppiVar2 = param_2[0x39];
          if (ppppppiVar2 == (int ******)0x0) {
            FUN_01bed4e2(auStack_1a8,&local_158,0x50);
            goto LAB_00d5c200;
          }
          if (*param_2 != (int ******)0x3 || param_2[1] != (int ******)0x0) {
            FUN_005f6588(param_2);
            ppppppiVar2 = param_2[0x39];
          }
          *param_2 = (int ******)pppppppiVar7;
          param_2[1] = (int ******)pppppppiVar11;
          param_2[2] = (int ******)pppppppiVar13;
          param_2[3] = (int ******)pppppppiVar10;
          param_2[4] = (int ******)local_1f8;
          param_2[5] = (int ******)pppppppiVar9;
          FUN_01bed4e2(param_2 + 6,&local_158,0x50);
          FUN_01283fd8(&local_f0,pppppppiVar14,ppppppiVar2);
          pppppppiVar7 = local_e4;
          if (((uint)local_e4 & 1) == 0) goto LAB_00d5bda8;
          local_bc = (undefined1 *)((int)local_ec + ((uint)local_e4 >> 5));
          local_c0 = (int *******)((int)local_f0 - ((uint)local_e4 >> 5));
          local_c4 = (int *******)((int)local_e8 + ((uint)local_e4 >> 5));
          FUN_01283524(&local_1f0,&local_c4);
          local_b8 = (int *****)((uint)pppppppiVar7 >> 5);
          if (local_1e8 < (int *******)((uint)pppppppiVar7 >> 5)) {
            local_88 = (int *******)&local_b4;
            local_b4 = local_1e8;
            local_84 = (int *******)&LAB_01a6a304;
            local_8c = (int *******)&LAB_01a6a304;
            local_90 = (int *******)&local_b8;
                    /* WARNING: Subroutine does not return */
            FUN_012fb100(&DAT_005ac267,&local_90,&DAT_01d2e534);
          }
          goto LAB_00d5bfac;
        }
        ppppppiVar8 = param_2[0x39];
        unaff_r8 = (int *******)param_2[0x36];
        ppppppiVar12 = param_2[0x37];
        ppppppiVar2 = ppppppiVar8;
        if ((uint)((int)param_2[0x3a] - (int)ppppppiVar8) < 5) {
          FUN_01283c9c(pppppppiVar14,5);
          ppppppiVar2 = param_2[0x39];
          local_1ec = (int *******)((int)param_2[0x3a] - (int)ppppppiVar2);
          if (local_1ec < 5) {
            local_1f0 = (int *******)0x5;
                    /* WARNING: Subroutine does not return */
            FUN_01284540(&local_1f0);
          }
        }
        param_2[0x39] = (int ******)((int)ppppppiVar2 + 5);
        local_1e4 = pppppppiVar9;
        local_1f0 = pppppppiVar13;
        local_1ec = pppppppiVar10;
        local_1e8 = local_1f8;
        FUN_00effe50(&local_f0,&local_1f0,pppppppiVar14);
        if (local_f0 == (int *******)&DAT_00000001) {
          local_c0 = local_e8;
          local_c4 = local_ec;
                    /* WARNING: Subroutine does not return */
          FUN_013073dc(&DAT_003efa56,0x27,&local_c4,&DAT_01c15d9c,&DAT_01c15fbc);
        }
        FUN_019bb7e0(pppppppiVar13,pppppppiVar10);
        ppppppiVar2 = param_2[0x39];
        if (ppppppiVar2 < ppppppiVar8) {
                    /* WARNING: Subroutine does not return */
          FUN_012faff4(ppppppiVar8,ppppppiVar2,ppppppiVar2,&DAT_01c15f4c);
        }
        FUN_01a745b4(&local_90,unaff_r8,ppppppiVar12,(int)*pppppppiVar14 + (int)ppppppiVar8,
                     (int)ppppppiVar2 - (int)ppppppiVar8);
        pppppppiVar9 = local_7c;
        pppppppiVar1 = local_80;
        pppppppiVar10 = local_84;
        pppppppiVar11 = local_8c;
        pppppppiVar7 = local_90;
        if (local_90 != (int *******)&DAT_00000003 || local_8c != (int *******)0x0) {
          local_1f4 = local_88;
          FUN_01bed4e2(auStack_1a8,&local_78,0x50);
          unaff_r5 = pppppppiVar13;
          local_1f8 = pppppppiVar1;
          goto LAB_00d5c200;
        }
        if (pppppppiVar5 <= param_2[0x39]) {
          FUN_01283fd8(&local_f0,pppppppiVar14);
          pppppppiVar7 = local_e4;
          unaff_r5 = pppppppiVar13;
          if (((uint)local_e4 & 1) == 0) goto LAB_00d5bda8;
          local_bc = (undefined1 *)((int)local_ec + ((uint)local_e4 >> 5));
          local_c0 = (int *******)((int)local_f0 - ((uint)local_e4 >> 5));
          local_c4 = (int *******)((int)local_e8 + ((uint)local_e4 >> 5));
          FUN_01283524(&local_1f0,&local_c4);
          local_b8 = (int *****)((uint)pppppppiVar7 >> 5);
          if (local_1e8 < (int *******)((uint)pppppppiVar7 >> 5)) {
            local_88 = (int *******)&local_b4;
            local_b4 = local_1e8;
            local_84 = (int *******)&LAB_01a6a304;
            local_8c = (int *******)&LAB_01a6a304;
            local_90 = (int *******)&local_b8;
                    /* WARNING: Subroutine does not return */
            FUN_012fb100(&DAT_005ac267,&local_90,&DAT_01d2e534);
          }
          goto LAB_00d5bfac;
        }
        pppppppiVar7 = (int *******)*unaff_r5;
        pppppppiVar11 = (int *******)param_2[0x1b];
        pppppppiVar10 = unaff_r8;
        unaff_r11 = local_1f8;
      } while (pppppppiVar7 != (int *******)&DAT_00000005 || pppppppiVar11 != (int *******)0x0);
    }
    if (param_2[0x39] == (int ******)0x0) {
      pppppppiVar11 = (int *******)0x0;
      pppppppiVar7 = (int *******)&SUB_00000004;
      pppppppiVar9 = pppppppiVar14;
    }
    else {
LAB_00d5bd88:
      FUN_01283fd8(&local_f0,pppppppiVar14);
      pppppppiVar7 = local_e4;
      if (((uint)local_e4 & 1) == 0) {
LAB_00d5bda8:
        local_1f4 = (int *******)&DAT_01d2e520;
        pppppppiVar9 = local_e4;
        pppppppiVar10 = local_f0;
        local_1f8 = local_ec;
      }
      else {
        local_bc = (undefined1 *)((int)local_ec + ((uint)local_e4 >> 5));
        local_c0 = (int *******)((int)local_f0 - ((uint)local_e4 >> 5));
        local_c4 = (int *******)((int)local_e8 + ((uint)local_e4 >> 5));
        FUN_01283524(&local_1f0,&local_c4);
        local_b8 = (int *****)((uint)pppppppiVar7 >> 5);
        if (local_1e8 < (int *******)((uint)pppppppiVar7 >> 5)) {
          local_88 = (int *******)&local_b4;
          local_b4 = local_1e8;
          local_84 = (int *******)&LAB_01a6a304;
          local_8c = (int *******)&LAB_01a6a304;
          local_90 = (int *******)&local_b8;
                    /* WARNING: Subroutine does not return */
          FUN_012fb100(&DAT_005ac267,&local_90,&DAT_01d2e534);
        }
LAB_00d5bfac:
        unaff_r5 = (int *******)&local_1f0;
        local_1f8 = (int *******)((int)local_1e8 - (int)local_b8);
        local_1f4 = local_1f0;
        pppppppiVar10 = (int *******)((int)local_1ec + (int)local_b8);
        pppppppiVar9 = local_1e4;
      }
      pppppppiVar11 = (int *******)0x0;
      pppppppiVar7 = (int *******)&DAT_00000003;
    }
LAB_00d5c200:
    if (pppppppiVar7 == (int *******)&SUB_00000004 && pppppppiVar11 == (int *******)0x0) {
      pppppppiVar14 = (int *******)&local_90;
      FUN_01a737fc(pppppppiVar14,param_2 + 0x42);
      pppppppiVar13 = param_2;
      local_1f8 = pppppppiVar5;
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
        local_1f8 = local_80;
        local_1f4 = local_7c;
        local_158 = local_70;
        local_154 = pppppppiStack_6c;
        local_150 = pppppppiStack_68;
        local_14c = pppppppiStack_64;
        local_148 = pppppppiStack_60;
        local_144 = local_5c;
        local_140 = pppppppiStack_58;
        local_13c = pppppppiStack_54;
        uStack_138 = uStack_50;
        uStack_134 = uStack_4c;
        unaff_r5 = local_74;
        pppppppiVar10 = local_78;
        pppppppiVar13 = local_84;
        pppppppiVar14 = local_88;
      }
      local_1f0 = local_158;
      local_1ec = local_154;
      local_1e8 = local_150;
      local_1e4 = local_14c;
      pppppppiStack_1e0 = local_148;
      local_1dc = local_144;
      pppppppiStack_1d8 = local_140;
      pppppppiStack_1d4 = local_13c;
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
      pppppppiVar7 = local_90;
      pppppppiVar11 = local_8c;
LAB_00d5c438:
      if (pppppppiVar7 != (int *******)&DAT_00000003 || pppppppiVar11 != (int *******)0x0) {
        if (pppppppiVar7 != (int *******)&SUB_00000004 || pppppppiVar11 != (int *******)0x0) {
          if (pppppppiVar7 != (int *******)&DAT_00000005 || pppppppiVar11 != (int *******)0x0) {
            FUN_01bed4e2(&local_70,&local_1f0,0x48);
            local_7c = local_1f4;
            local_80 = local_1f8;
            local_90 = pppppppiVar7;
            local_8c = pppppppiVar11;
            local_88 = pppppppiVar14;
            local_84 = pppppppiVar13;
            local_78 = pppppppiVar10;
            local_74 = unaff_r5;
            uVar4 = FUN_01a65494(&local_90);
            FUN_01a7467c(param_1,uVar4,&DAT_01d2cc7c);
            return;
          }
          goto LAB_00d5c45c;
        }
        uVar4 = 4;
        goto LAB_00d5c470;
      }
      pppppppiVar7 = local_1f4;
      local_1f4 = local_1f8;
    }
    else {
      if (pppppppiVar7 != (int *******)&DAT_00000003 || pppppppiVar11 != (int *******)0x0) {
        local_150 = local_1f4;
        local_158 = pppppppiVar7;
        local_154 = pppppppiVar11;
        local_14c = pppppppiVar10;
        local_148 = local_1f8;
        local_144 = pppppppiVar9;
        FUN_01bed4e2(&local_140,auStack_1a8,0x50);
        unaff_r5 = local_13c;
        pppppppiVar10 = local_140;
        pppppppiVar13 = local_14c;
        pppppppiVar14 = local_150;
        if (*(char *)(param_2 + 0x5c) == '\x01') {
          *(undefined1 *)((int)param_2 + 0x171) = 1;
          FUN_01a738c0(&local_90,&local_158);
          pppppppiVar11 = local_8c;
          pppppppiVar7 = local_90;
          local_1f4 = local_7c;
          local_1f8 = local_80;
          local_f0 = local_70;
          local_ec = pppppppiStack_6c;
          local_e8 = pppppppiStack_68;
          local_e4 = pppppppiStack_64;
          pppppppiStack_e0 = pppppppiStack_60;
          local_dc = local_5c;
          pppppppiStack_d8 = pppppppiStack_58;
          pppppppiStack_d4 = pppppppiStack_54;
          uStack_d0 = uStack_50;
          uStack_cc = uStack_4c;
          if (local_90 == (int *******)&DAT_00000003 && local_8c == (int *******)0x0) {
            local_1f0 = local_70;
            local_1ec = pppppppiStack_6c;
            local_1e8 = pppppppiStack_68;
            local_1e4 = pppppppiStack_64;
            pppppppiStack_1e0 = pppppppiStack_60;
            local_1dc = local_5c;
            pppppppiStack_1d8 = pppppppiStack_58;
            pppppppiStack_1d4 = pppppppiStack_54;
            uStack_1d0 = uStack_50;
            uStack_1cc = uStack_4c;
            FUN_005f6588(&local_158);
            pppppppiVar11 = (int *******)0x0;
            pppppppiVar7 = (int *******)&DAT_00000003;
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
            local_1ec = pppppppiStack_6c;
            local_1e8 = pppppppiStack_68;
            local_1e4 = pppppppiStack_64;
            pppppppiStack_1e0 = pppppppiStack_60;
            local_1dc = local_5c;
            pppppppiStack_1d8 = pppppppiStack_58;
            pppppppiStack_1d4 = pppppppiStack_54;
            uStack_1d0 = uStack_50;
            uStack_1cc = uStack_4c;
            FUN_005f6588(&local_158);
          }
          unaff_r5 = local_74;
          pppppppiVar10 = local_78;
          pppppppiVar13 = local_84;
          pppppppiVar14 = local_88;
        }
        else {
          FUN_01bed4e2(&local_1f0,auStack_1a0,0x48);
          local_1f4 = pppppppiVar9;
        }
        goto LAB_00d5c438;
      }
      pppppppiVar13 = (int *******)0x0;
      pppppppiVar14 = (int *******)&DAT_00000003;
      pppppppiVar7 = pppppppiVar10;
      unaff_r5 = pppppppiVar9;
      pppppppiVar10 = local_1f8;
    }
    param_1[8] = local_1f0;
    param_1[9] = local_1ec;
    param_1[10] = local_1e8;
    param_1[0xb] = local_1e4;
    param_1[0xc] = pppppppiStack_1e0;
    param_1[0xd] = local_1dc;
    param_1[0xe] = pppppppiStack_1d8;
    param_1[0xf] = pppppppiStack_1d4;
    param_1[0x10] = uStack_1d0;
    param_1[0x11] = uStack_1cc;
    *param_1 = 3;
    param_1[1] = 0;
    param_1[2] = pppppppiVar14;
    param_1[3] = pppppppiVar13;
    param_1[4] = local_1f4;
    param_1[5] = pppppppiVar7;
    param_1[6] = pppppppiVar10;
    param_1[7] = unaff_r5;
  }
  else {
    local_1f4 = (int *******)param_2[2];
    pppppppiVar10 = (int *******)param_2[3];
    local_1f8 = (int *******)param_2[4];
    pppppppiVar9 = (int *******)param_2[5];
    FUN_01bed4e2(auStack_1a8,param_2 + 6,0x50);
    if (pppppppiVar7 != (int *******)&DAT_00000005 || pppppppiVar11 != (int *******)0x0)
    goto LAB_00d5c200;
LAB_00d5c45c:
    uVar4 = 5;
LAB_00d5c470:
    *param_1 = uVar4;
    param_1[1] = 0;
  }
  return;
}

