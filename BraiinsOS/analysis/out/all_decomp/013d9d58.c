// FUN_013d9d58 @ 013d9d58 size=2760 calls_out=18 calls_in=1
// strings: 

/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_013d9d58(uint *param_1,int *param_2)

{
  code *pcVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  undefined4 uVar5;
  undefined4 *puVar6;
  uint uVar7;
  int iVar8;
  uint uVar9;
  int iVar10;
  uint uVar11;
  uint *puVar12;
  undefined1 uVar13;
  uint uVar14;
  uint uVar15;
  int local_11c;
  uint local_118;
  uint local_114;
  uint local_110;
  uint local_108;
  undefined4 local_104;
  undefined4 local_100;
  uint local_fc;
  undefined4 local_f8;
  undefined4 local_f4;
  int local_ec [7];
  uint local_d0;
  uint *local_cc;
  uint uStack_c8;
  uint local_c4;
  uint local_c0;
  uint local_bc;
  uint uStack_b8;
  uint uStack_b4;
  uint uStack_b0;
  uint local_ac;
  uint uStack_a8;
  uint uStack_a4;
  uint uStack_a0;
  uint uStack_9c;
  uint local_98;
  uint local_94;
  uint local_90;
  uint local_8c;
  uint local_88;
  uint local_84;
  uint local_80;
  uint local_7c;
  uint local_78;
  uint local_74;
  uint local_70;
  uint local_6c;
  uint local_68;
  uint uStack_64;
  uint uStack_60;
  uint uStack_5c;
  uint local_58;
  uint local_54;
  uint uStack_50;
  uint uStack_4c;
  uint uStack_48;
  uint uStack_44;
  uint local_40;
  uint uStack_3c;
  uint uStack_38;
  uint uStack_34;
  uint uStack_30;
  uint uStack_2c;
  
  local_11c = FUN_013d2518(param_2);
  if (local_11c != 0x28) {
    FUN_013ff7ac(&local_11c,&DAT_005695a4,&DAT_01894b58);
LAB_013da6a8:
                    /* WARNING: Subroutine does not return */
    FUN_00faa444(&DAT_01894f28);
  }
  iVar10 = *param_2;
  puVar12 = (uint *)(iVar10 + 0x50);
  uVar9 = *puVar12;
  uVar3 = FUN_013d2518(param_2);
  uVar7 = 1;
  if (0x7f < uVar3) {
    uVar7 = 2;
  }
  if ((0x7ff < uVar3) && (uVar7 = 4, uVar3 < 0x10000)) {
    uVar7 = 3;
  }
  if (CARRY4(uVar7,uVar9)) {
                    /* WARNING: Subroutine does not return */
    FUN_00faa444(&DAT_01894f38);
  }
  uVar7 = uVar7 + uVar9;
  uVar3 = *(uint *)(iVar10 + 0x58) + 1;
  if (0xfffffffe < *(uint *)(iVar10 + 0x58)) goto LAB_013da6a8;
  uVar9 = *(uint *)(iVar10 + 0x54);
  iVar4 = FUN_013d2518(param_2);
  local_118 = *puVar12;
  local_114 = *(uint *)(iVar10 + 0x54);
  local_110 = *(uint *)(iVar10 + 0x58);
  FUN_013d2d20(param_2);
  FUN_013d2168(param_2);
  uVar11 = *(uint *)(iVar10 + 0x50);
  iVar8 = param_2[1];
  if (iVar4 == 10) {
    uVar9 = uVar9 + 1;
  }
  uVar15 = param_2[2];
  if (iVar4 == 10) {
    uVar3 = 1;
  }
  if (uVar11 != 0) {
    if (uVar11 < uVar15) {
      if (*(char *)(iVar8 + uVar11) < -0x40) goto LAB_013da0d8;
    }
    else if (uVar15 != uVar11) goto LAB_013da0d8;
  }
  uVar14 = uVar15 - uVar11;
  if ((1 < uVar14) && (*(short *)(iVar8 + uVar11) == 0x3d3f)) goto LAB_013d9fcc;
  if (uVar11 == 0) {
LAB_013d9e74:
    if ((1 < uVar14) && (*(short *)(iVar8 + uVar11) == 0x213f)) goto LAB_013d9fcc;
    if (uVar11 != 0) goto LAB_013d9ea0;
LAB_013d9eb8:
    if ((uVar14 < 3) || (iVar4 = thunk_FUN_016dd50a(&DAT_003ceead,iVar8 + uVar11,3), iVar4 != 0)) {
      if (uVar11 != 0) {
        if (uVar11 < uVar15) goto LAB_013d9f00;
LAB_013d9f30:
        if (uVar15 != uVar11) goto LAB_013da0d8;
      }
      goto LAB_013d9f34;
    }
  }
  else {
    if (uVar11 < uVar15) {
      if (*(char *)(iVar8 + uVar11) < -0x40) goto LAB_013da0d8;
      goto LAB_013d9e74;
    }
    if (uVar15 != uVar11) goto LAB_013da0d8;
LAB_013d9ea0:
    if (uVar11 < uVar15) {
      if (*(char *)(iVar8 + uVar11) < -0x40) goto LAB_013da0d8;
      goto LAB_013d9eb8;
    }
    if (uVar15 != uVar11) goto LAB_013da0d8;
    if (uVar15 <= uVar11) goto LAB_013d9f30;
LAB_013d9f00:
    if (*(char *)(iVar8 + uVar11) < -0x40) goto LAB_013da0d8;
LAB_013d9f34:
    if ((uVar14 < 3) || (iVar4 = thunk_FUN_016dd50a(&DAT_003ceeb0,iVar8 + uVar11,3), iVar4 != 0)) {
      local_108 = *puVar12;
      local_104 = *(undefined4 *)(iVar10 + 0x54);
      local_100 = *(undefined4 *)(iVar10 + 0x58);
      local_fc = local_108;
      local_f8 = local_104;
      local_f4 = local_100;
      if (uVar11 != 0) {
        if (uVar11 < uVar15) {
          if (*(char *)(iVar8 + uVar11) < -0x40) goto LAB_013da0d8;
        }
        else if (uVar15 != uVar11) goto LAB_013da0d8;
      }
      local_8c = uVar7;
      local_88 = uVar9;
      local_84 = uVar3;
      if ((uVar14 < 3) || (iVar4 = thunk_FUN_016dd50a(&DAT_003ced5f,iVar8 + uVar11,3), iVar4 != 0))
      {
        if (uVar11 == 0) {
LAB_013da094:
          if ((1 < uVar14) && (*(short *)(iVar8 + uVar11) == 0x3c3f)) {
            uVar13 = 0;
            goto LAB_013da2e8;
          }
          if (uVar11 != 0) goto LAB_013da0c0;
        }
        else {
          if (uVar11 < uVar15) {
            if (*(char *)(iVar8 + uVar11) < -0x40) goto LAB_013da0d8;
            goto LAB_013da094;
          }
          if (uVar15 != uVar11) goto LAB_013da0d8;
LAB_013da0c0:
          if (uVar11 < uVar15) {
            if (*(char *)(iVar8 + uVar11) < -0x40) {
LAB_013da0d8:
                    /* WARNING: Subroutine does not return */
              FUN_00faa8ac(iVar8,uVar15,uVar11,uVar15,&DAT_01894e88);
            }
          }
          else if (uVar15 != uVar11) goto LAB_013da0d8;
        }
        if ((uVar15 == uVar11) || (*(char *)(iVar8 + uVar11) != '?')) {
          local_98 = local_118;
          uVar11 = *(uint *)(iVar10 + 0x5c) + 1;
          local_90 = local_110;
          local_94 = local_114;
          if (*(uint *)(iVar10 + 0x5c) < 0xffffffff) {
            *(uint *)(iVar10 + 0x5c) = uVar11;
            local_7c = uVar11;
          }
          else {
            local_40 = 0;
            FUN_013d1ce4(&local_80,iVar8,uVar15,&local_98,&local_40);
            uStack_b8 = uStack_60;
            uStack_b4 = uStack_5c;
            uStack_b0 = local_58;
            local_ac = local_54;
            uStack_a8 = uStack_50;
            uStack_a4 = uStack_4c;
            uStack_a0 = uStack_48;
            uStack_9c = uStack_44;
            if (local_80 != 0x22) {
              param_1[3] = local_78;
              param_1[4] = local_74;
              param_1[5] = local_70;
              param_1[6] = local_6c;
              param_1[7] = local_68;
              param_1[8] = uStack_64;
              param_1[9] = uStack_60;
              param_1[10] = uStack_5c;
              param_1[0xb] = local_58;
              param_1[0xc] = local_54;
              param_1[0xd] = uStack_50;
              param_1[0xe] = uStack_4c;
              param_1[0xf] = uStack_48;
              param_1[0x10] = uStack_44;
              *param_1 = (uint)&DAT_80000004;
              param_1[1] = local_80;
              param_1[2] = local_7c;
              return;
            }
          }
          local_80 = 0x80000000;
          local_d0 = *puVar12;
          local_cc = *(uint **)(iVar10 + 0x54);
          uStack_c8 = *(undefined4 *)(iVar10 + 0x58);
          local_c4 = local_d0;
          local_c0 = (uint)local_cc;
          local_bc = uStack_c8;
          uVar5 = FUN_013f65e0(&local_d0);
          local_d0 = 0;
          local_cc = (uint *)uVar5;
          puVar6 = (undefined4 *)thunk_FUN_016d4a50(8);
          if (puVar6 == (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_00600874(4,8);
          }
          *puVar6 = 0;
          puVar6[1] = uVar5;
          param_1[0xc] = local_118;
          param_1[0xd] = local_114;
          param_1[0xe] = local_110;
          *param_1 = local_80;
          param_1[1] = local_7c;
          param_1[2] = local_78;
          param_1[3] = local_74;
          param_1[4] = local_70;
          param_1[5] = local_6c;
          param_1[6] = local_68;
          param_1[7] = uStack_64;
          param_1[8] = uStack_60;
          param_1[9] = uStack_5c;
          param_1[10] = local_58;
          param_1[0x11] = uVar3;
          param_1[0x10] = uVar9;
          param_1[0xf] = uVar7;
          param_1[0xb] = (uint)puVar6;
          return;
        }
        FUN_013d2d20(param_2);
        if (*puVar12 == uVar15) {
          FUN_01401878(&local_80,uVar15,1,1);
          if (local_80 == 1) {
                    /* WARNING: Subroutine does not return */
            FUN_00600af4(local_7c,local_78);
          }
          FUN_016dd1aa(local_78,iVar8,uVar15);
          param_1[0x10] = uVar3;
          *param_1 = (uint)&DAT_80000004;
          param_1[1] = 0x15;
          param_1[8] = local_7c;
          param_1[9] = local_78;
          param_1[10] = uVar15;
          param_1[0xb] = local_118;
          param_1[0xc] = local_114;
          param_1[0xd] = local_110;
          param_1[0xe] = uVar7;
          param_1[0xf] = uVar9;
          return;
        }
        FUN_013da940(&local_80,param_2);
        uVar2 = local_74;
        uVar14 = local_78;
        uVar11 = local_7c;
        local_d0 = local_70;
        local_cc = (uint *)local_6c;
        uStack_c8 = local_68;
        local_c4 = uStack_64;
        local_c0 = uStack_60;
        local_bc = uStack_5c;
        if (local_80 != 0x22) {
          param_1[0xb] = local_58;
          param_1[0xc] = local_54;
          param_1[0xd] = uStack_50;
          param_1[0xe] = uStack_4c;
          param_1[0xf] = uStack_48;
          param_1[0x10] = uStack_44;
          param_1[3] = local_78;
          param_1[2] = local_7c;
          param_1[4] = local_74;
          param_1[5] = local_70;
          param_1[6] = local_6c;
          param_1[7] = local_68;
          param_1[8] = uStack_64;
          param_1[9] = uStack_60;
          param_1[10] = uStack_5c;
          *param_1 = (uint)&DAT_80000004;
          param_1[1] = local_80;
          return;
        }
        local_40 = local_70;
        uStack_3c = local_6c;
        uStack_38 = local_68;
        uStack_34 = uStack_64;
        uStack_30 = uStack_60;
        uStack_2c = uStack_5c;
        iVar4 = FUN_013d2518(param_2);
        local_ec[0] = iVar4;
        FUN_013d2d20(param_2);
        if (iVar4 == 0x29) {
          if (uVar2 != 0) {
            uVar3 = *(uint *)(iVar10 + 0x58);
            uVar7 = *puVar12;
            uVar9 = *(uint *)(iVar10 + 0x54);
            param_1[4] = local_40;
            param_1[5] = uStack_3c;
            param_1[6] = uStack_38;
            param_1[7] = uStack_34;
            param_1[8] = uStack_30;
            param_1[9] = uStack_2c;
            *param_1 = 0x80000003;
            param_1[1] = uVar11;
            param_1[2] = uVar14;
            param_1[3] = uVar2;
            param_1[10] = local_118;
            param_1[0xb] = local_114;
            param_1[0xc] = local_110;
            param_1[0xd] = uVar7;
            param_1[0xe] = uVar9;
            param_1[0xf] = uVar3;
            return;
          }
          local_d0 = 0x1b;
          FUN_013d1ce4(&local_80,iVar8,uVar15,&local_108,&local_d0);
          param_1[1] = local_80;
          param_1[2] = local_7c;
          param_1[3] = local_78;
          param_1[4] = local_74;
          param_1[5] = local_70;
          param_1[6] = local_6c;
          param_1[7] = local_68;
          param_1[8] = uStack_64;
          param_1[9] = uStack_60;
          param_1[10] = uStack_5c;
          param_1[0xb] = local_58;
          param_1[0xc] = local_54;
          param_1[0xd] = uStack_50;
          param_1[0xe] = uStack_4c;
          param_1[0xf] = uStack_48;
          param_1[0x10] = uStack_44;
          *param_1 = (uint)&DAT_80000004;
          if (uVar11 == 0) {
            return;
          }
          thunk_FUN_016d3fb4(uVar14);
          return;
        }
        if (iVar4 != 0x3a) {
          FUN_013ff7ac(local_ec,&DAT_00568048,&DAT_01894b48);
                    /* WARNING: Does not return */
          pcVar1 = (code *)software_udf(0xfdee,0x13da828);
          (*pcVar1)();
        }
        local_70 = local_40;
        local_6c = uStack_3c;
        local_68 = uStack_38;
        uStack_64 = uStack_34;
        uStack_60 = uStack_30;
        uStack_5c = uStack_2c;
        local_80 = 0x80000002;
        local_d0 = *puVar12;
        local_cc = *(uint **)(iVar10 + 0x54);
        uStack_c8 = *(undefined4 *)(iVar10 + 0x58);
        local_c4 = local_d0;
        local_c0 = (uint)local_cc;
        local_bc = uStack_c8;
        local_7c = uVar11;
        local_78 = uVar14;
        local_74 = uVar2;
        uVar5 = FUN_013f65e0(&local_d0);
        local_d0 = 0;
        local_cc = (uint *)uVar5;
        puVar6 = (undefined4 *)FUN_013d75bc();
        *puVar6 = 0;
        puVar6[1] = uVar5;
        param_1[0xc] = local_118;
        param_1[0xd] = local_114;
        param_1[0xe] = local_110;
        *param_1 = local_80;
        param_1[1] = local_7c;
        param_1[2] = local_78;
        param_1[3] = local_74;
        param_1[4] = local_70;
        param_1[5] = local_6c;
        param_1[6] = local_68;
        param_1[7] = uStack_64;
        param_1[8] = uStack_60;
        param_1[9] = uStack_5c;
        param_1[10] = local_58;
        param_1[0x11] = uVar3;
        param_1[0x10] = uVar9;
      }
      else {
        FUN_013d2d20(param_2);
        uVar13 = 1;
LAB_013da2e8:
        FUN_013d2d20(param_2);
        FUN_013d2d20(param_2);
        local_98 = local_118;
        local_94 = local_114;
        local_90 = local_110;
        if (*(uint *)(iVar10 + 0x5c) < 0xffffffff) {
          *(uint *)(iVar10 + 0x5c) = *(uint *)(iVar10 + 0x5c) + 1;
        }
        else {
          local_40 = 0;
          FUN_013d1ce4(&local_80,iVar8,uVar15,&local_98,&local_40);
          local_d0 = local_78;
          local_cc = (uint *)local_74;
          uStack_c8 = local_70;
          local_c4 = local_6c;
          local_c0 = local_68;
          local_bc = uStack_64;
          uStack_b8 = uStack_60;
          uStack_b4 = uStack_5c;
          uStack_b0 = local_58;
          local_ac = local_54;
          uStack_a8 = uStack_50;
          uStack_a4 = uStack_4c;
          uStack_a0 = uStack_48;
          uStack_9c = uStack_44;
          if (local_80 != 0x22) {
            param_1[3] = local_78;
            param_1[4] = local_74;
            param_1[5] = local_70;
            param_1[6] = local_6c;
            param_1[7] = local_68;
            param_1[8] = uStack_64;
            param_1[9] = uStack_60;
            param_1[10] = uStack_5c;
            param_1[0xb] = local_58;
            param_1[0xc] = local_54;
            param_1[0xd] = uStack_50;
            param_1[0xe] = uStack_4c;
            param_1[0xf] = uStack_48;
            param_1[0x10] = uStack_44;
            *param_1 = (uint)&DAT_80000004;
            param_1[1] = local_80;
            param_1[2] = local_7c;
            return;
          }
        }
        FUN_013db19c(&local_80,param_2);
        uStack_b8 = uStack_64;
        uStack_b4 = uStack_60;
        uStack_b0 = uStack_5c;
        local_ac = local_58;
        if (local_80 != 0x22) {
          param_1[0xc] = local_54;
          param_1[0xd] = uStack_50;
          param_1[0xe] = uStack_4c;
          param_1[0xf] = uStack_48;
          param_1[0x10] = uStack_44;
          param_1[2] = local_7c;
          param_1[3] = local_78;
          param_1[4] = local_74;
          param_1[5] = local_70;
          param_1[6] = local_6c;
          param_1[7] = local_68;
          param_1[8] = uStack_64;
          param_1[9] = uStack_60;
          param_1[10] = uStack_5c;
          param_1[0xb] = local_58;
          *param_1 = (uint)&DAT_80000004;
          param_1[1] = local_80;
          return;
        }
        local_80 = local_7c;
        local_7c = local_78;
        local_78 = local_74;
        local_74 = local_70;
        local_70 = local_6c;
        local_6c = local_68;
        local_68 = uStack_64;
        uStack_64 = uStack_60;
        uStack_60 = uStack_5c;
        uStack_5c = local_58;
        local_d0 = *puVar12;
        local_cc = *(uint **)(iVar10 + 0x54);
        uStack_c8 = *(uint *)(iVar10 + 0x58);
        local_58 = CONCAT31(local_58._1_3_,uVar13);
        local_c4 = local_d0;
        local_c0 = (uint)local_cc;
        local_bc = uStack_c8;
        puVar12 = (uint *)thunk_FUN_016d4a50(0x18);
        if (puVar12 == (uint *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_00600874(4,0x18);
        }
        *puVar12 = local_d0;
        puVar12[1] = (uint)local_cc;
        puVar12[2] = uStack_c8;
        puVar12[3] = local_c4;
        puVar12[4] = local_c0;
        puVar12[5] = local_bc;
        local_d0 = 0;
        local_cc = puVar12;
        puVar6 = (undefined4 *)thunk_FUN_016d4a50(8);
        if (puVar6 == (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_00600874(4,8);
        }
        *puVar6 = 0;
        puVar6[1] = puVar12;
        param_1[0xc] = local_118;
        param_1[0xd] = local_114;
        param_1[0xe] = local_110;
        *param_1 = local_80;
        param_1[1] = local_7c;
        param_1[2] = local_78;
        param_1[3] = local_74;
        param_1[4] = local_70;
        param_1[5] = local_6c;
        param_1[6] = local_68;
        param_1[7] = uStack_64;
        param_1[8] = uStack_60;
        param_1[9] = uStack_5c;
        param_1[10] = local_58;
        param_1[0x11] = uVar3;
        param_1[0x10] = uVar9;
      }
      param_1[0xf] = uVar7;
      param_1[0xb] = (uint)puVar6;
      return;
    }
  }
  FUN_013d2d20(param_2);
LAB_013d9fcc:
  FUN_013d2d20(param_2);
  FUN_013d2d20(param_2);
  local_6c = *(uint *)(iVar10 + 0x58);
  local_74 = *puVar12;
  local_70 = *(uint *)(iVar10 + 0x54);
  local_80 = local_118;
  local_7c = local_114;
  local_78 = local_110;
  if ((int)uVar15 < 0) {
                    /* WARNING: Subroutine does not return */
    FUN_00600af4(0,uVar15);
  }
  if (uVar15 == 0) {
    uVar7 = 0;
    uVar3 = 1;
  }
  else {
    uVar3 = thunk_FUN_016d4a50(uVar15);
    uVar7 = uVar15;
    if (uVar3 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_00600af4(1,uVar15);
    }
  }
  FUN_016dd1aa(uVar3,iVar8,uVar15);
  param_1[0xb] = local_80;
  param_1[0xc] = local_7c;
  param_1[0xd] = local_78;
  param_1[0xe] = local_74;
  param_1[0xf] = local_70;
  param_1[0x10] = local_6c;
  param_1[8] = uVar7;
  param_1[9] = uVar3;
  param_1[10] = uVar15;
  *param_1 = (uint)&DAT_80000004;
  param_1[1] = 0x21;
  return;
}

