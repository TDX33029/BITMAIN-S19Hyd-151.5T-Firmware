// FUN_00d7b6ec @ 00d7b6ec size=3180 calls_out=21 calls_in=0
// strings: 

/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_00d7b6ec(undefined4 *param_1,int *param_2,int *param_3)

{
  int *******pppppppiVar1;
  uint uVar2;
  undefined4 uVar3;
  uint uVar4;
  int iVar5;
  int *******pppppppiVar6;
  int *******pppppppiVar7;
  int *******pppppppiVar8;
  int *******unaff_r7;
  int *******pppppppiVar9;
  int iVar10;
  int *******unaff_r9;
  int *******unaff_r10;
  int *******pppppppiVar11;
  int *******pppppppiVar12;
  uint uVar13;
  int *******local_214;
  int *******local_210;
  int *******local_20c;
  int *******local_208;
  int *******local_204;
  int *******local_200;
  int *******local_1fc;
  int *******local_1f8;
  int *******local_1f4;
  int *******local_1f0;
  int *******pppppppiStack_1ec;
  undefined4 uStack_1e8;
  undefined4 uStack_1e4;
  undefined4 local_1e0;
  undefined4 uStack_1dc;
  undefined4 uStack_1d8;
  undefined4 uStack_1d4;
  undefined4 local_1d0;
  undefined4 uStack_1cc;
  undefined4 uStack_1c8;
  undefined4 uStack_1c4;
  int ******local_1c0;
  int iStack_1bc;
  int iStack_1b8;
  undefined1 auStack_1b4 [68];
  int *******local_170;
  int *******local_16c;
  int *******local_168;
  int *******local_164;
  int *******pppppppiStack_160;
  int *******local_15c;
  int *******local_158;
  int *******local_154;
  undefined4 uStack_150;
  undefined4 uStack_14c;
  int *******local_108;
  int *******local_104;
  int *******local_100;
  int *******local_fc;
  int *******local_f8;
  int *******local_f4;
  int *******pppppppiStack_f0;
  int *******pppppppiStack_ec;
  undefined4 uStack_e8;
  undefined4 uStack_e4;
  int *******local_e0;
  int *******pppppppiStack_dc;
  int *******pppppppiStack_d8;
  int *******local_d4;
  int *******local_d0;
  int local_cc;
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
  
  pppppppiVar8 = (int *******)*param_2;
  pppppppiVar12 = (int *******)param_2[1];
  uVar4 = param_2[0x41];
  *param_2 = 3;
  param_2[1] = 0;
  if (pppppppiVar8 == (int *******)&DAT_00000003 && pppppppiVar12 == (int *******)0x0) {
    pppppppiVar6 = (int *******)(param_2 + 0x1a);
    local_20c = (int *******)(param_2 + 0x38);
    pppppppiVar8 = (int *******)*pppppppiVar6;
    local_214 = (int *******)param_2[0x1b];
    pppppppiVar11 = unaff_r10;
    if (pppppppiVar8 != (int *******)&DAT_00000005 || local_214 != (int *******)0x0) {
      unaff_r7 = (int *******)(param_2 + 0x20);
      pppppppiVar7 = unaff_r9;
      do {
        if (0x1f < (uint)param_2[0x34]) {
          iVar10 = *(int *)*param_3;
          iVar5 = ((int *)*param_3)[1];
          param_2[0x34] = 0;
          (**(code **)(iVar10 + 8))(iVar5);
LAB_00d7c0cc:
          if (param_2[0x39] != 0) goto LAB_00d7b754;
          goto LAB_00d7c458;
        }
        *pppppppiVar6 = (int ******)0x4;
        param_2[0x1b] = 0;
        param_2[0x34] = param_2[0x34] + 1;
        local_8c = local_214;
        local_90 = pppppppiVar8;
        FUN_01bed4e2(&local_88,param_2 + 0x1c,0x60);
        unaff_r9 = local_7c;
        pppppppiVar9 = local_80;
        pppppppiVar11 = local_84;
        pppppppiVar1 = local_88;
        if (pppppppiVar8 == (int *******)&SUB_00000004 && local_214 == (int *******)0x0) {
          FUN_00d7b5c4(pppppppiVar6);
          *pppppppiVar6 = (int ******)0x5;
          param_2[0x1b] = 0;
          unaff_r9 = pppppppiVar7;
          pppppppiVar11 = unaff_r10;
          break;
        }
        local_210 = local_88;
        local_e0 = (int *******)*unaff_r7;
        pppppppiStack_dc = (int *******)param_2[0x21];
        pppppppiStack_d8 = (int *******)param_2[0x22];
        FUN_01bed4e2(&local_170,param_2 + 0x23,0x44);
        if (((uint)pppppppiVar8 & 7) != 3) {
          if (pppppppiVar8 == (int *******)&DAT_00000005) goto LAB_00d7c0cc;
          iVar10 = param_2[0x39];
          local_108 = pppppppiVar12;
          local_104 = unaff_r10;
          if (iVar10 == 0) {
            local_1c0 = *unaff_r7;
            iStack_1bc = param_2[0x21];
            iStack_1b8 = param_2[0x22];
            FUN_01bed4e2(auStack_1b4,param_2 + 0x23,0x44);
            pppppppiVar7 = pppppppiVar11;
            pppppppiVar12 = local_214;
            goto LAB_00d7c1ec;
          }
          if (*param_2 != 3 || param_2[1] != 0) {
            FUN_005f6588(param_2);
            iVar10 = param_2[0x39];
          }
          param_2[4] = (int)pppppppiVar9;
          param_2[2] = (int)pppppppiVar1;
          *param_2 = (int)pppppppiVar8;
          param_2[1] = (int)local_214;
          param_2[3] = (int)pppppppiVar11;
          param_2[5] = (int)unaff_r9;
          param_2[6] = (int)local_e0;
          param_2[7] = (int)pppppppiStack_dc;
          param_2[8] = (int)pppppppiStack_d8;
          FUN_01bed4e2(param_2 + 9,&local_170,0x44);
          FUN_01283fd8(&local_d4,local_20c,iVar10);
          pppppppiVar11 = local_214;
          if (((uint)local_c8 & 1) == 0) goto LAB_00d7b774;
          local_bc = (int)local_d0 + ((uint)local_c8 >> 5);
          local_c0 = (int)local_d4 - ((uint)local_c8 >> 5);
          local_c4 = local_cc + ((uint)local_c8 >> 5);
          FUN_01283524(&local_208,&local_c4);
          local_b8 = (int *****)((uint)local_c8 >> 5);
          if (local_200 < (int *******)((uint)local_c8 >> 5)) {
            local_88 = (int *******)&local_b4;
            local_b4 = local_200;
            local_84 = (int *******)&LAB_01a6a304;
            local_8c = (int *******)&LAB_01a6a304;
            local_90 = (int *******)&local_b8;
                    /* WARNING: Subroutine does not return */
            FUN_012fb100(&DAT_005ac267,&local_90,&DAT_01d2e534);
          }
          goto LAB_00d7bf54;
        }
        local_f8 = (int *******)*unaff_r7;
        local_f4 = (int *******)param_2[0x21];
        pppppppiStack_f0 = (int *******)param_2[0x22];
        uVar13 = param_2[0x39];
        local_214 = (int *******)param_2[0x36];
        iVar10 = param_2[0x37];
        uVar2 = uVar13;
        if (param_2[0x3a] - uVar13 < 5) {
          FUN_01283c9c(local_20c,5);
          uVar2 = param_2[0x39];
          local_204 = (int *******)(param_2[0x3a] - uVar2);
          if (local_204 < 5) {
            local_fc = unaff_r9;
            local_100 = pppppppiVar9;
            local_104 = pppppppiVar11;
            local_108 = pppppppiVar1;
            local_208 = (int *******)0x5;
                    /* WARNING: Subroutine does not return */
            FUN_01284540(&local_208);
          }
        }
        param_2[0x39] = uVar2 + 5;
        local_1fc = unaff_r9;
        local_200 = pppppppiVar9;
        local_204 = pppppppiVar11;
        local_208 = pppppppiVar1;
        local_1f8 = local_e0;
        local_1f4 = pppppppiStack_dc;
        local_1f0 = pppppppiStack_d8;
        if (pppppppiVar1 != (int *******)&DAT_00000006) {
          iVar10 = (int)pppppppiVar1 + -2;
          if (pppppppiVar1 < (int *******)0x2) {
            iVar10 = 2;
          }
                    /* WARNING: Could not recover jumptable at 0x00d7b940. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (*(code *)(&DAT_00d7b944 + *(int *)(&DAT_00d7b944 + iVar10 * 4)))(uVar2,iVar10,2);
          return;
        }
        FUN_00d7c740(&local_208);
        uVar2 = param_2[0x39];
        if (uVar2 < uVar13) {
                    /* WARNING: Subroutine does not return */
          FUN_012faff4(uVar13,uVar2,uVar2,&DAT_01c15f4c);
        }
        FUN_01a745b4(&local_90,local_214,iVar10,(int)*local_20c + uVar13,uVar2 - uVar13);
        unaff_r9 = local_7c;
        pppppppiVar1 = local_80;
        pppppppiVar7 = local_84;
        pppppppiVar12 = local_8c;
        pppppppiVar8 = local_90;
        unaff_r10 = pppppppiVar11;
        if (local_90 != (int *******)&DAT_00000003 || local_8c != (int *******)0x0) {
          local_210 = local_88;
          FUN_01bed4e2(&local_1c0,&local_78,0x50);
          pppppppiVar9 = pppppppiVar1;
          goto LAB_00d7c1ec;
        }
        if (uVar4 <= (uint)param_2[0x39]) {
          FUN_01283fd8(&local_d4,local_20c);
          if (((uint)local_c8 & 1) == 0) goto LAB_00d7b774;
          local_bc = (int)local_d0 + ((uint)local_c8 >> 5);
          local_c0 = (int)local_d4 - ((uint)local_c8 >> 5);
          local_c4 = local_cc + ((uint)local_c8 >> 5);
          FUN_01283524(&local_208,&local_c4);
          local_b8 = (int *****)((uint)local_c8 >> 5);
          if (local_200 < (int *******)((uint)local_c8 >> 5)) {
            local_88 = (int *******)&local_b4;
            local_b4 = local_200;
            local_84 = (int *******)&LAB_01a6a304;
            local_8c = (int *******)&LAB_01a6a304;
            local_90 = (int *******)&local_b8;
                    /* WARNING: Subroutine does not return */
            FUN_012fb100(&DAT_005ac267,&local_90,&DAT_01d2e534);
          }
          goto LAB_00d7bf54;
        }
        pppppppiVar8 = (int *******)*pppppppiVar6;
        local_214 = (int *******)param_2[0x1b];
        pppppppiVar12 = (int *******)&DAT_00000006;
        unaff_r9 = pppppppiVar9;
        pppppppiVar7 = pppppppiVar9;
      } while (pppppppiVar8 != (int *******)&DAT_00000005 || local_214 != (int *******)0x0);
    }
    unaff_r10 = pppppppiVar11;
    if (param_2[0x39] == 0) {
      pppppppiVar8 = (int *******)&SUB_00000004;
      pppppppiVar7 = pppppppiVar6;
      pppppppiVar9 = unaff_r7;
      pppppppiVar12 = (int *******)0x0;
    }
    else {
LAB_00d7b754:
      FUN_01283fd8(&local_d4,local_20c);
      pppppppiVar11 = unaff_r10;
      if (((uint)local_c8 & 1) == 0) {
LAB_00d7b774:
        local_210 = (int *******)&DAT_01d2e520;
        unaff_r9 = local_c8;
      }
      else {
        local_bc = (int)local_d0 + ((uint)local_c8 >> 5);
        local_c0 = (int)local_d4 - ((uint)local_c8 >> 5);
        local_c4 = local_cc + ((uint)local_c8 >> 5);
        FUN_01283524(&local_208,&local_c4);
        local_b8 = (int *****)((uint)local_c8 >> 5);
        if (local_200 < (int *******)((uint)local_c8 >> 5)) {
          local_88 = (int *******)&local_b4;
          local_b4 = local_200;
          local_84 = (int *******)&LAB_01a6a304;
          local_8c = (int *******)&LAB_01a6a304;
          local_90 = (int *******)&local_b8;
                    /* WARNING: Subroutine does not return */
          FUN_012fb100(&DAT_005ac267,&local_90,&DAT_01d2e534);
        }
LAB_00d7bf54:
        local_d0 = (int *******)((int)local_200 - (int)local_b8);
        local_210 = local_208;
        local_d4 = (int *******)((int)local_204 + (int)local_b8);
        unaff_r9 = local_1fc;
      }
      pppppppiVar8 = (int *******)&DAT_00000003;
      pppppppiVar7 = local_d4;
      pppppppiVar9 = local_d0;
      unaff_r10 = pppppppiVar11;
      pppppppiVar12 = (int *******)0x0;
    }
LAB_00d7c1ec:
    if (pppppppiVar8 == (int *******)&SUB_00000004 && pppppppiVar12 == (int *******)0x0) {
      pppppppiVar7 = (int *******)&local_90;
      pppppppiVar11 = (int *******)0xd7c22c;
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
        local_20c = local_80;
        local_214 = local_74;
        local_210 = local_88;
        local_170 = local_70;
        local_16c = pppppppiStack_6c;
        local_168 = pppppppiStack_68;
        local_164 = pppppppiStack_64;
        pppppppiStack_160 = pppppppiStack_60;
        local_15c = local_5c;
        local_158 = pppppppiStack_58;
        local_154 = pppppppiStack_54;
        uStack_150 = uStack_50;
        uStack_14c = uStack_4c;
        pppppppiVar7 = local_7c;
        unaff_r10 = local_78;
        pppppppiVar11 = local_84;
      }
      local_208 = local_170;
      local_204 = local_16c;
      local_200 = local_168;
      local_1fc = local_164;
      local_1f8 = pppppppiStack_160;
      local_1f4 = local_15c;
      local_1f0 = local_158;
      pppppppiStack_1ec = local_154;
      uStack_1e8 = uStack_150;
      uStack_1e4 = uStack_14c;
      local_1e0 = local_b0;
      uStack_1dc = uStack_ac;
      uStack_1d8 = uStack_a8;
      uStack_1d4 = uStack_a4;
      local_1d0 = local_a0;
      uStack_1cc = uStack_9c;
      uStack_1c8 = uStack_98;
      uStack_1c4 = uStack_94;
      pppppppiVar8 = local_90;
      pppppppiVar9 = local_20c;
      pppppppiVar12 = local_8c;
LAB_00d7c434:
      if (pppppppiVar8 != (int *******)&DAT_00000003 || pppppppiVar12 != (int *******)0x0) {
        if (pppppppiVar8 != (int *******)&SUB_00000004 || pppppppiVar12 != (int *******)0x0) {
          if (pppppppiVar8 != (int *******)&DAT_00000005 || pppppppiVar12 != (int *******)0x0) {
            FUN_01bed4e2(&local_70,&local_208,0x48);
            local_88 = local_210;
            local_74 = local_214;
            local_90 = pppppppiVar8;
            local_8c = pppppppiVar12;
            local_84 = pppppppiVar11;
            local_80 = pppppppiVar9;
            local_7c = pppppppiVar7;
            local_78 = unaff_r10;
            uVar3 = FUN_01a65494(&local_90);
            FUN_01a7467c(param_1,uVar3,&DAT_01d2cc7c);
            return;
          }
          goto LAB_00d7c458;
        }
        uVar3 = 4;
        goto LAB_00d7c46c;
      }
      pppppppiVar12 = local_210;
      local_210 = pppppppiVar9;
    }
    else {
      if (pppppppiVar8 != (int *******)&DAT_00000003 || pppppppiVar12 != (int *******)0x0) {
        local_168 = local_210;
        local_170 = pppppppiVar8;
        local_16c = pppppppiVar12;
        local_164 = pppppppiVar7;
        pppppppiStack_160 = pppppppiVar9;
        local_15c = unaff_r9;
        FUN_01bed4e2(&local_158,&local_1c0,0x50);
        unaff_r10 = local_158;
        pppppppiVar11 = local_164;
        if ((char)param_2[0x5c] == '\x01') {
          *(undefined1 *)((int)param_2 + 0x171) = 1;
          FUN_01a738c0(&local_90,&local_170);
          pppppppiVar12 = local_8c;
          pppppppiVar8 = local_90;
          local_210 = local_88;
          local_214 = local_74;
          local_108 = local_70;
          local_104 = pppppppiStack_6c;
          local_100 = pppppppiStack_68;
          local_fc = pppppppiStack_64;
          local_f8 = pppppppiStack_60;
          local_f4 = local_5c;
          pppppppiStack_f0 = pppppppiStack_58;
          pppppppiStack_ec = pppppppiStack_54;
          uStack_e8 = uStack_50;
          uStack_e4 = uStack_4c;
          if (local_90 == (int *******)&DAT_00000003 && local_8c == (int *******)0x0) {
            local_208 = local_70;
            local_204 = pppppppiStack_6c;
            local_200 = pppppppiStack_68;
            local_1fc = pppppppiStack_64;
            local_1f8 = pppppppiStack_60;
            local_1f4 = local_5c;
            local_1f0 = pppppppiStack_58;
            pppppppiStack_1ec = pppppppiStack_54;
            uStack_1e8 = uStack_50;
            uStack_1e4 = uStack_4c;
            FUN_005f6588(&local_170);
            pppppppiVar12 = (int *******)0x0;
            pppppppiVar8 = (int *******)&DAT_00000003;
          }
          else {
            local_1e0 = local_48;
            uStack_1dc = uStack_44;
            uStack_1d8 = uStack_40;
            uStack_1d4 = uStack_3c;
            local_1d0 = local_38;
            uStack_1cc = uStack_34;
            uStack_1c8 = uStack_30;
            uStack_1c4 = uStack_2c;
            local_208 = local_70;
            local_204 = pppppppiStack_6c;
            local_200 = pppppppiStack_68;
            local_1fc = pppppppiStack_64;
            local_1f8 = pppppppiStack_60;
            local_1f4 = local_5c;
            local_1f0 = pppppppiStack_58;
            pppppppiStack_1ec = pppppppiStack_54;
            uStack_1e8 = uStack_50;
            uStack_1e4 = uStack_4c;
            FUN_005f6588(&local_170);
          }
          unaff_r10 = local_78;
          pppppppiVar9 = local_80;
          pppppppiVar7 = local_7c;
          pppppppiVar11 = local_84;
        }
        else {
          local_214 = local_154;
          local_210 = local_168;
          FUN_01bed4e2(&local_208,&iStack_1b8,0x48);
          pppppppiVar7 = unaff_r9;
        }
        goto LAB_00d7c434;
      }
      pppppppiVar11 = (int *******)0x0;
      local_214 = unaff_r9;
      pppppppiVar12 = (int *******)&DAT_00000003;
      unaff_r10 = pppppppiVar9;
    }
    param_1[8] = local_208;
    param_1[9] = local_204;
    param_1[10] = local_200;
    param_1[0xb] = local_1fc;
    param_1[0xc] = local_1f8;
    param_1[0xd] = local_1f4;
    param_1[0xe] = local_1f0;
    param_1[0xf] = pppppppiStack_1ec;
    param_1[0x10] = uStack_1e8;
    param_1[0x11] = uStack_1e4;
    *param_1 = 3;
    param_1[1] = 0;
    param_1[2] = pppppppiVar12;
    param_1[3] = pppppppiVar11;
    param_1[4] = local_210;
    param_1[5] = pppppppiVar7;
    param_1[6] = unaff_r10;
    param_1[7] = local_214;
  }
  else {
    local_210 = (int *******)param_2[2];
    pppppppiVar7 = (int *******)param_2[3];
    pppppppiVar9 = (int *******)param_2[4];
    unaff_r9 = (int *******)param_2[5];
    FUN_01bed4e2(&local_1c0,param_2 + 6,0x50);
    if (pppppppiVar8 != (int *******)&DAT_00000005 || pppppppiVar12 != (int *******)0x0)
    goto LAB_00d7c1ec;
LAB_00d7c458:
    uVar3 = 5;
LAB_00d7c46c:
    *param_1 = uVar3;
    param_1[1] = 0;
  }
  return;
}

