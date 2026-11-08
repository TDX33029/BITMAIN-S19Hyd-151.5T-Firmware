// FUN_00d7fee8 @ 00d7fee8 size=2080 calls_out=13 calls_in=0
// strings: 

void FUN_00d7fee8(undefined4 *param_1,int *param_2,int *param_3)

{
  uint uVar1;
  undefined4 uVar2;
  int iVar3;
  int *piVar4;
  int *******pppppppiVar5;
  uint uVar6;
  int iVar7;
  int *******unaff_r8;
  int *******pppppppiVar8;
  int *******pppppppiVar9;
  int *******unaff_r10;
  int *******pppppppiVar10;
  int *******unaff_r11;
  int *******pppppppiVar11;
  int *******pppppppiVar12;
  int *******local_200;
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
  undefined1 *local_c4;
  int local_c0;
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
  
  pppppppiVar5 = (int *******)*param_2;
  pppppppiVar9 = (int *******)param_2[1];
  local_1f8 = (int *******)param_2[0x41];
  *param_2 = 3;
  param_2[1] = 0;
  if (pppppppiVar5 == (int *******)&DAT_00000003 && pppppppiVar9 == (int *******)0x0) {
    piVar4 = param_2 + 0x1a;
    local_1f4 = (int *******)(param_2 + 0x38);
    pppppppiVar5 = (int *******)*piVar4;
    pppppppiVar9 = (int *******)param_2[0x1b];
    if (pppppppiVar5 != (int *******)&DAT_00000005 || pppppppiVar9 != (int *******)0x0) {
      local_200 = (int *******)(param_2 + 0x20);
      do {
        if (0x1f < (uint)param_2[0x34]) {
          iVar7 = *(int *)*param_3;
          iVar3 = ((int *)*param_3)[1];
          param_2[0x34] = 0;
          (**(code **)(iVar7 + 8))(iVar3);
LAB_00d80158:
          if (param_2[0x39] != 0) goto LAB_00d7ff4c;
          goto LAB_00d80504;
        }
        unaff_r11 = (int *******)param_2[0x1c];
        unaff_r10 = (int *******)param_2[0x1d];
        pppppppiVar12 = (int *******)param_2[0x1e];
        unaff_r8 = (int *******)param_2[0x1f];
        param_2[0x34] = param_2[0x34] + 1;
        *piVar4 = 4;
        param_2[0x1b] = 0;
        if (((uint)pppppppiVar5 & 7) == 4) {
          *piVar4 = 5;
          param_2[0x1b] = 0;
          break;
        }
        if (pppppppiVar5 == (int *******)&DAT_00000005) goto LAB_00d80158;
        FUN_01bed4e2(&local_158,local_200,0x50);
        if (pppppppiVar5 != (int *******)&DAT_00000003 || pppppppiVar9 != (int *******)0x0) {
          iVar7 = param_2[0x39];
          if (iVar7 == 0) {
            FUN_01bed4e2(auStack_1a8,local_200,0x50);
            pppppppiVar8 = unaff_r8;
            pppppppiVar10 = unaff_r10;
            pppppppiVar11 = unaff_r11;
            local_1f8 = pppppppiVar12;
            goto LAB_00d8029c;
          }
          if (*param_2 != 3 || param_2[1] != 0) {
            FUN_005f6588(param_2);
            iVar7 = param_2[0x39];
          }
          param_2[4] = (int)pppppppiVar12;
          *param_2 = (int)pppppppiVar5;
          param_2[1] = (int)pppppppiVar9;
          param_2[2] = (int)unaff_r11;
          param_2[3] = (int)unaff_r10;
          param_2[5] = (int)unaff_r8;
          FUN_01bed4e2(param_2 + 6,&local_158,0x50);
          FUN_01283fd8(&local_f0,local_1f4,iVar7);
          pppppppiVar5 = local_e4;
          if (((uint)local_e4 & 1) == 0) goto LAB_00d7ff70;
          local_bc = (undefined1 *)((int)local_ec + ((uint)local_e4 >> 5));
          local_c0 = (int)local_f0 - ((uint)local_e4 >> 5);
          local_c4 = (undefined1 *)((int)local_e8 + ((uint)local_e4 >> 5));
          FUN_01283524(&local_1f0,&local_c4);
          local_b8 = (int *****)((uint)pppppppiVar5 >> 5);
          if (local_1e8 < (int *******)((uint)pppppppiVar5 >> 5)) {
            local_88 = (int *******)&local_b4;
            local_b4 = local_1e8;
            local_84 = (int *******)&LAB_01a6a304;
            local_8c = (int *******)&LAB_01a6a304;
            local_90 = (int *******)&local_b8;
                    /* WARNING: Subroutine does not return */
            FUN_012fb100(&DAT_005ac267,&local_90,&DAT_01d2e534);
          }
          goto LAB_00d80108;
        }
        uVar6 = param_2[0x39];
        unaff_r10 = (int *******)param_2[0x36];
        iVar7 = param_2[0x37];
        uVar1 = uVar6;
        if (param_2[0x3a] - uVar6 < 5) {
          FUN_01283c9c(local_1f4,5);
          uVar1 = param_2[0x39];
          if (param_2[0x3a] - uVar1 < 5) {
            local_1f0 = (int *******)0x5;
            local_1ec = (int *******)(param_2[0x3a] - uVar1);
                    /* WARNING: Subroutine does not return */
            FUN_01284540(&local_1f0);
          }
        }
        uVar1 = uVar1 + 5;
        param_2[0x39] = uVar1;
        if (uVar1 < uVar6) {
                    /* WARNING: Subroutine does not return */
          FUN_012faff4(uVar6,uVar1,uVar1,&DAT_01c15f4c);
        }
        FUN_01a745b4(&local_90,unaff_r10,iVar7,(int)*local_1f4 + uVar6,uVar1 - uVar6);
        pppppppiVar8 = local_7c;
        pppppppiVar10 = local_84;
        pppppppiVar11 = local_88;
        pppppppiVar9 = local_8c;
        pppppppiVar5 = local_90;
        if (local_90 != (int *******)&DAT_00000003 || local_8c != (int *******)0x0) {
          local_1f8 = local_80;
          FUN_01bed4e2(auStack_1a8,&local_78,0x50);
          goto LAB_00d8029c;
        }
        if (local_1f8 <= (int *******)param_2[0x39]) {
          FUN_01283fd8(&local_f0,local_1f4);
          pppppppiVar5 = local_e4;
          if (((uint)local_e4 & 1) == 0) {
            local_1f8 = local_ec;
            pppppppiVar11 = (int *******)&DAT_01d2e520;
            pppppppiVar8 = local_e4;
            pppppppiVar10 = local_f0;
            goto LAB_00d80120;
          }
          local_bc = (undefined1 *)((int)local_ec + ((uint)local_e4 >> 5));
          local_c0 = (int)local_f0 - ((uint)local_e4 >> 5);
          local_c4 = (undefined1 *)((int)local_e8 + ((uint)local_e4 >> 5));
          FUN_01283524(&local_1f0,&local_c4);
          local_b8 = (int *****)((uint)pppppppiVar5 >> 5);
          if (local_1e8 < (int *******)((uint)pppppppiVar5 >> 5)) {
            local_88 = (int *******)&local_b4;
            local_b4 = local_1e8;
            local_84 = (int *******)&LAB_01a6a304;
            local_8c = (int *******)&LAB_01a6a304;
            local_90 = (int *******)&local_b8;
                    /* WARNING: Subroutine does not return */
            FUN_012fb100(&DAT_005ac267,&local_90,&DAT_01d2e534);
          }
          goto LAB_00d80108;
        }
        pppppppiVar5 = (int *******)*piVar4;
        pppppppiVar9 = (int *******)param_2[0x1b];
      } while (pppppppiVar5 != (int *******)&DAT_00000005 || pppppppiVar9 != (int *******)0x0);
    }
    if (param_2[0x39] == 0) {
      pppppppiVar9 = (int *******)0x0;
      pppppppiVar5 = (int *******)&SUB_00000004;
      pppppppiVar8 = unaff_r8;
      pppppppiVar10 = unaff_r10;
      pppppppiVar11 = unaff_r11;
    }
    else {
LAB_00d7ff4c:
      FUN_01283fd8(&local_f0,local_1f4);
      pppppppiVar5 = local_e4;
      if (((uint)local_e4 & 1) == 0) {
LAB_00d7ff70:
        pppppppiVar8 = local_e4;
        pppppppiVar10 = local_f0;
        pppppppiVar11 = (int *******)&DAT_01d2e520;
        local_1f8 = local_ec;
      }
      else {
        local_bc = (undefined1 *)((int)local_ec + ((uint)local_e4 >> 5));
        local_c0 = (int)local_f0 - ((uint)local_e4 >> 5);
        local_c4 = (undefined1 *)((int)local_e8 + ((uint)local_e4 >> 5));
        FUN_01283524(&local_1f0,&local_c4);
        local_b8 = (int *****)((uint)pppppppiVar5 >> 5);
        if (local_1e8 < (int *******)((uint)pppppppiVar5 >> 5)) {
          local_88 = (int *******)&local_b4;
          local_b4 = local_1e8;
          local_84 = (int *******)&LAB_01a6a304;
          local_8c = (int *******)&LAB_01a6a304;
          local_90 = (int *******)&local_b8;
                    /* WARNING: Subroutine does not return */
          FUN_012fb100(&DAT_005ac267,&local_90,&DAT_01d2e534);
        }
LAB_00d80108:
        local_1f8 = (int *******)((int)local_1e8 - (int)local_b8);
        pppppppiVar8 = local_1e4;
        pppppppiVar10 = (int *******)((int)local_1ec + (int)local_b8);
        pppppppiVar11 = local_1f0;
      }
LAB_00d80120:
      pppppppiVar9 = (int *******)0x0;
      pppppppiVar5 = (int *******)&DAT_00000003;
    }
LAB_00d8029c:
    if (pppppppiVar5 == (int *******)&SUB_00000004 && pppppppiVar9 == (int *******)0x0) {
      pppppppiVar8 = (int *******)&local_90;
      pppppppiVar12 = (int *******)0xd802d4;
      FUN_01a737fc(pppppppiVar8,param_2 + 0x42);
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
        local_1f4 = local_88;
        local_200 = local_84;
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
        pppppppiVar8 = local_7c;
        pppppppiVar11 = local_78;
        pppppppiVar12 = local_74;
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
      pppppppiVar5 = local_90;
      pppppppiVar9 = local_8c;
LAB_00d804e0:
      if (pppppppiVar5 != (int *******)&DAT_00000003 || pppppppiVar9 != (int *******)0x0) {
        if (pppppppiVar5 != (int *******)&SUB_00000004 || pppppppiVar9 != (int *******)0x0) {
          if (pppppppiVar5 != (int *******)&DAT_00000005 || pppppppiVar9 != (int *******)0x0) {
            FUN_01bed4e2(&local_70,&local_1f0,0x48);
            local_84 = local_200;
            local_88 = local_1f4;
            local_80 = local_1f8;
            local_90 = pppppppiVar5;
            local_8c = pppppppiVar9;
            local_7c = pppppppiVar8;
            local_78 = pppppppiVar11;
            local_74 = pppppppiVar12;
            uVar2 = FUN_01a65494(&local_90);
            FUN_01a7467c(param_1,uVar2,&DAT_01d2cc7c);
            return;
          }
          goto LAB_00d80504;
        }
        uVar2 = 4;
        goto LAB_00d80518;
      }
      pppppppiVar5 = local_1f8;
      local_1f8 = pppppppiVar11;
    }
    else {
      if (pppppppiVar5 != (int *******)&DAT_00000003 || pppppppiVar9 != (int *******)0x0) {
        local_148 = local_1f8;
        local_158 = pppppppiVar5;
        local_154 = pppppppiVar9;
        local_150 = pppppppiVar11;
        local_14c = pppppppiVar10;
        local_144 = pppppppiVar8;
        FUN_01bed4e2(&local_140,auStack_1a8,0x50);
        pppppppiVar12 = local_13c;
        pppppppiVar11 = local_140;
        if ((char)param_2[0x5c] == '\x01') {
          *(undefined1 *)((int)param_2 + 0x171) = 1;
          FUN_01a738c0(&local_90,&local_158);
          local_1f4 = local_88;
          local_200 = local_84;
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
            local_8c = (int *******)0x0;
            local_90 = (int *******)&DAT_00000003;
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
          pppppppiVar12 = local_74;
          pppppppiVar5 = local_90;
          pppppppiVar8 = local_7c;
          pppppppiVar9 = local_8c;
          pppppppiVar11 = local_78;
        }
        else {
          local_1f4 = local_150;
          local_200 = local_14c;
          FUN_01bed4e2(&local_1f0,auStack_1a0,0x48);
        }
        goto LAB_00d804e0;
      }
      local_200 = (int *******)0x0;
      local_1f4 = (int *******)&DAT_00000003;
      pppppppiVar12 = pppppppiVar8;
      pppppppiVar8 = pppppppiVar10;
      pppppppiVar5 = pppppppiVar11;
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
    param_1[1] = 0;
    param_1[2] = local_1f4;
    param_1[3] = local_200;
    *param_1 = 3;
    param_1[4] = pppppppiVar5;
    param_1[5] = pppppppiVar8;
    param_1[6] = local_1f8;
    param_1[7] = pppppppiVar12;
  }
  else {
    local_1f8 = (int *******)param_2[4];
    pppppppiVar11 = (int *******)param_2[2];
    pppppppiVar10 = (int *******)param_2[3];
    pppppppiVar8 = (int *******)param_2[5];
    FUN_01bed4e2(auStack_1a8,param_2 + 6,0x50);
    if (pppppppiVar5 != (int *******)&DAT_00000005 || pppppppiVar9 != (int *******)0x0)
    goto LAB_00d8029c;
LAB_00d80504:
    uVar2 = 5;
LAB_00d80518:
    *param_1 = uVar2;
    param_1[1] = 0;
  }
  return;
}

