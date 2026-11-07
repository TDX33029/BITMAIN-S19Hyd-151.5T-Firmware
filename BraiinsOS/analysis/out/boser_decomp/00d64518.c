// FUN_00d64518 @ 00d64518 size=2260 calls_out=15 calls_in=0
// strings: 

void FUN_00d64518(undefined4 *param_1,int *param_2,int *param_3)

{
  uint uVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  int *piVar5;
  int *******pppppppiVar6;
  int *******pppppppiVar7;
  uint uVar8;
  int *******pppppppiVar9;
  int *******pppppppiVar10;
  int iVar11;
  int *******unaff_r10;
  int *******pppppppiVar12;
  int *******unaff_r11;
  int *******pppppppiVar13;
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
  
  pppppppiVar7 = (int *******)*param_2;
  pppppppiVar10 = (int *******)param_2[1];
  local_1f8 = (int *******)param_2[0x41];
  *param_2 = 3;
  param_2[1] = 0;
  if (pppppppiVar7 == (int *******)&DAT_00000003 && pppppppiVar10 == (int *******)0x0) {
    pppppppiVar9 = (int *******)(param_2 + 0x1a);
    piVar5 = param_2 + 0x38;
    pppppppiVar7 = (int *******)*pppppppiVar9;
    pppppppiVar10 = (int *******)param_2[0x1b];
    if (pppppppiVar7 != (int *******)&DAT_00000005 || pppppppiVar10 != (int *******)0x0) {
      local_200 = (int *******)(param_2 + 0x20);
      do {
        if (0x1f < (uint)param_2[0x34]) {
          iVar11 = *(int *)*param_3;
          iVar3 = ((int *)*param_3)[1];
          param_2[0x34] = 0;
          (**(code **)(iVar11 + 8))(iVar3);
LAB_00d64824:
          if (param_2[0x39] != 0) goto LAB_00d64574;
          goto LAB_00d64c84;
        }
        unaff_r11 = (int *******)param_2[0x1d];
        pppppppiVar12 = (int *******)param_2[0x1e];
        pppppppiVar13 = (int *******)param_2[0x1f];
        local_1f4 = (int *******)param_2[0x1c];
        param_2[0x34] = param_2[0x34] + 1;
        *pppppppiVar9 = (int ******)0x4;
        param_2[0x1b] = 0;
        if (((uint)pppppppiVar7 & 7) == 4) {
          *pppppppiVar9 = (int ******)0x5;
          param_2[0x1b] = 0;
          unaff_r10 = pppppppiVar13;
          unaff_r11 = pppppppiVar12;
          break;
        }
        if (pppppppiVar7 == (int *******)&DAT_00000005) goto LAB_00d64824;
        FUN_01bed4e2(&local_158,local_200,0x50);
        if (pppppppiVar7 != (int *******)&DAT_00000003 || pppppppiVar10 != (int *******)0x0) {
          iVar11 = param_2[0x39];
          if (iVar11 == 0) {
            FUN_01bed4e2(auStack_1a8,local_200,0x50);
            goto LAB_00d64a20;
          }
          if (*param_2 != 3 || param_2[1] != 0) {
            FUN_005f6588(param_2);
            iVar11 = param_2[0x39];
          }
          *param_2 = (int)pppppppiVar7;
          param_2[1] = (int)pppppppiVar10;
          param_2[2] = (int)local_1f4;
          param_2[3] = (int)unaff_r11;
          param_2[4] = (int)pppppppiVar12;
          param_2[5] = (int)pppppppiVar13;
          FUN_01bed4e2(param_2 + 6,&local_158,0x50);
          FUN_01283fd8(&local_f0,piVar5,iVar11);
          pppppppiVar7 = local_e4;
          if (((uint)local_e4 & 1) == 0) goto LAB_00d64594;
          local_bc = (undefined1 *)((int)local_ec + ((uint)local_e4 >> 5));
          local_c0 = (int)local_f0 - ((uint)local_e4 >> 5);
          local_c4 = (undefined1 *)((int)local_e8 + ((uint)local_e4 >> 5));
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
          goto LAB_00d647d4;
        }
        uVar8 = param_2[0x39];
        unaff_r10 = (int *******)param_2[0x36];
        iVar11 = param_2[0x37];
        uVar1 = uVar8;
        if (param_2[0x3a] - uVar8 < 5) {
          FUN_01283c9c(piVar5,5);
          uVar1 = param_2[0x39];
          if (param_2[0x3a] - uVar1 < 5) {
            local_1f0 = (int *******)0x5;
            local_1ec = (int *******)(param_2[0x3a] - uVar1);
                    /* WARNING: Subroutine does not return */
            FUN_01284540(&local_1f0);
          }
        }
        param_2[0x39] = uVar1 + 5;
        iVar4 = 0;
        iVar3 = 0;
        if (local_1f4 != (int *******)0x0) {
          iVar3 = ((LZCOUNT((uint)local_1f4 | 1) ^ 0x1fU) * 9 + 0x49 >> 6) + 1;
        }
        if (unaff_r11 != (int *******)0x0) {
          iVar4 = ((LZCOUNT((uint)unaff_r11 | 1) ^ 0x1fU) * 9 + 0x49 >> 6) + 1;
        }
        if ((int ******)(0x7ffffffa - uVar1) < (int ******)(iVar4 + iVar3)) {
          local_1f0 = (int *******)(iVar4 + iVar3);
          local_1ec = (int *******)(0x7ffffffa - uVar1);
                    /* WARNING: Subroutine does not return */
          FUN_013073dc(&DAT_003efa56,0x27,&local_1f0,&DAT_01c15d9c,&DAT_01c15fbc);
        }
        if (local_1f4 != (int *******)0x0) {
          FUN_00efc9fc(1,local_1f4,piVar5);
        }
        if (unaff_r11 != (int *******)0x0) {
          FUN_00efc9fc(2,unaff_r11,piVar5);
        }
        uVar1 = param_2[0x39];
        if (uVar1 < uVar8) {
                    /* WARNING: Subroutine does not return */
          FUN_012faff4(uVar8,uVar1,uVar1,&DAT_01c15f4c);
        }
        FUN_01a745b4(&local_90,unaff_r10,iVar11,*piVar5 + uVar8,uVar1 - uVar8);
        pppppppiVar13 = local_7c;
        pppppppiVar6 = local_80;
        unaff_r11 = local_84;
        pppppppiVar10 = local_8c;
        pppppppiVar7 = local_90;
        if (local_90 != (int *******)&DAT_00000003 || local_8c != (int *******)0x0) {
          local_1f4 = local_88;
          FUN_01bed4e2(auStack_1a8,&local_78,0x50);
          pppppppiVar12 = pppppppiVar6;
          goto LAB_00d64a20;
        }
        if (local_1f8 <= (int *******)param_2[0x39]) {
          FUN_01283fd8(&local_f0,piVar5);
          pppppppiVar7 = local_e4;
          if (((uint)local_e4 & 1) == 0) goto LAB_00d64594;
          local_bc = (undefined1 *)((int)local_ec + ((uint)local_e4 >> 5));
          local_c0 = (int)local_f0 - ((uint)local_e4 >> 5);
          local_c4 = (undefined1 *)((int)local_e8 + ((uint)local_e4 >> 5));
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
          goto LAB_00d647d4;
        }
        pppppppiVar7 = (int *******)*pppppppiVar9;
        pppppppiVar10 = (int *******)param_2[0x1b];
        unaff_r11 = pppppppiVar12;
      } while (pppppppiVar7 != (int *******)&DAT_00000005 || pppppppiVar10 != (int *******)0x0);
    }
    if (param_2[0x39] == 0) {
      pppppppiVar10 = (int *******)0x0;
      pppppppiVar7 = (int *******)&SUB_00000004;
      pppppppiVar13 = pppppppiVar9;
      pppppppiVar12 = unaff_r10;
    }
    else {
LAB_00d64574:
      FUN_01283fd8(&local_f0,piVar5);
      pppppppiVar7 = local_e4;
      if (((uint)local_e4 & 1) == 0) {
LAB_00d64594:
        local_1f4 = (int *******)&DAT_01d2e520;
        pppppppiVar13 = local_e4;
        pppppppiVar12 = local_ec;
        unaff_r11 = local_f0;
      }
      else {
        local_bc = (undefined1 *)((int)local_ec + ((uint)local_e4 >> 5));
        local_c0 = (int)local_f0 - ((uint)local_e4 >> 5);
        local_c4 = (undefined1 *)((int)local_e8 + ((uint)local_e4 >> 5));
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
LAB_00d647d4:
        pppppppiVar12 = (int *******)((int)local_1e8 - (int)local_b8);
        local_1f4 = local_1f0;
        unaff_r11 = (int *******)((int)local_1ec + (int)local_b8);
        pppppppiVar13 = local_1e4;
      }
      pppppppiVar10 = (int *******)0x0;
      pppppppiVar7 = (int *******)&DAT_00000003;
    }
LAB_00d64a20:
    if (pppppppiVar7 == (int *******)&SUB_00000004 && pppppppiVar10 == (int *******)0x0) {
      pppppppiVar9 = (int *******)&local_90;
      pppppppiVar13 = (int *******)0xd64a5c;
      FUN_01a737fc(pppppppiVar9,param_2 + 0x42);
      pppppppiVar6 = unaff_r11;
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
        local_200 = local_84;
        local_1f8 = local_88;
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
        pppppppiVar9 = local_78;
        pppppppiVar12 = local_80;
        pppppppiVar6 = local_74;
        pppppppiVar13 = local_7c;
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
      pppppppiVar10 = local_8c;
LAB_00d64c60:
      if (pppppppiVar7 != (int *******)&DAT_00000003 || pppppppiVar10 != (int *******)0x0) {
        if (pppppppiVar7 != (int *******)&SUB_00000004 || pppppppiVar10 != (int *******)0x0) {
          if (pppppppiVar7 != (int *******)&DAT_00000005 || pppppppiVar10 != (int *******)0x0) {
            FUN_01bed4e2(&local_70,&local_1f0,0x48);
            local_84 = local_200;
            local_88 = local_1f8;
            local_90 = pppppppiVar7;
            local_8c = pppppppiVar10;
            local_80 = pppppppiVar12;
            local_7c = pppppppiVar13;
            local_78 = pppppppiVar9;
            local_74 = pppppppiVar6;
            uVar2 = FUN_01a65494(&local_90);
            FUN_01a7467c(param_1,uVar2,&DAT_01d2cc7c);
            return;
          }
          goto LAB_00d64c84;
        }
        uVar2 = 4;
        goto LAB_00d64c98;
      }
      local_1f4 = pppppppiVar12;
    }
    else {
      if (pppppppiVar7 != (int *******)&DAT_00000003 || pppppppiVar10 != (int *******)0x0) {
        local_150 = local_1f4;
        local_158 = pppppppiVar7;
        local_154 = pppppppiVar10;
        local_14c = unaff_r11;
        local_148 = pppppppiVar12;
        local_144 = pppppppiVar13;
        FUN_01bed4e2(&local_140,auStack_1a8,0x50);
        pppppppiVar6 = local_13c;
        pppppppiVar9 = local_140;
        if ((char)param_2[0x5c] == '\x01') {
          *(undefined1 *)((int)param_2 + 0x171) = 1;
          FUN_01a738c0(&local_90,&local_158);
          local_1f8 = local_88;
          local_200 = local_84;
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
          pppppppiVar6 = local_74;
          pppppppiVar7 = local_90;
          pppppppiVar13 = local_7c;
          pppppppiVar9 = local_78;
          pppppppiVar10 = local_8c;
          pppppppiVar12 = local_80;
        }
        else {
          local_1f8 = local_150;
          local_200 = local_14c;
          FUN_01bed4e2(&local_1f0,auStack_1a0,0x48);
        }
        goto LAB_00d64c60;
      }
      local_200 = (int *******)0x0;
      local_1f8 = (int *******)&DAT_00000003;
      pppppppiVar6 = pppppppiVar13;
      pppppppiVar13 = unaff_r11;
      pppppppiVar9 = pppppppiVar12;
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
    param_1[2] = local_1f8;
    *param_1 = 3;
    param_1[3] = local_200;
    param_1[4] = local_1f4;
    param_1[5] = pppppppiVar13;
    param_1[6] = pppppppiVar9;
    param_1[7] = pppppppiVar6;
  }
  else {
    local_1f4 = (int *******)param_2[2];
    unaff_r11 = (int *******)param_2[3];
    pppppppiVar12 = (int *******)param_2[4];
    pppppppiVar13 = (int *******)param_2[5];
    FUN_01bed4e2(auStack_1a8,param_2 + 6,0x50);
    if (pppppppiVar7 != (int *******)&DAT_00000005 || pppppppiVar10 != (int *******)0x0)
    goto LAB_00d64a20;
LAB_00d64c84:
    uVar2 = 5;
LAB_00d64c98:
    *param_1 = uVar2;
    param_1[1] = 0;
  }
  return;
}

