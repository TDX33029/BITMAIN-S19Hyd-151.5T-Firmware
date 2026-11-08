// FUN_00d8d5c8 @ 00d8d5c8 size=2276 calls_out=16 calls_in=0
// strings: 

void FUN_00d8d5c8(undefined4 *param_1,int *param_2,int *param_3)

{
  uint **ppuVar1;
  int *piVar2;
  undefined4 uVar3;
  uint *unaff_r4;
  uint *puVar4;
  uint *puVar5;
  uint *puVar6;
  int iVar7;
  uint *puVar8;
  uint *unaff_r8;
  int iVar9;
  uint *unaff_r10;
  uint **ppuVar10;
  uint *puVar11;
  uint *local_204;
  uint *local_1fc;
  uint *local_1f8;
  uint *local_1f4;
  uint *local_1f0;
  uint *local_1ec;
  uint *local_1e8;
  uint *local_1e4;
  uint *local_1e0;
  uint *local_1dc;
  uint *puStack_1d8;
  uint *local_1d4;
  uint *puStack_1d0;
  uint *puStack_1cc;
  undefined4 uStack_1c8;
  undefined4 uStack_1c4;
  undefined4 local_1c0;
  undefined4 uStack_1bc;
  undefined4 uStack_1b8;
  undefined4 uStack_1b4;
  undefined4 local_1b0;
  undefined4 uStack_1ac;
  undefined4 uStack_1a8;
  undefined4 uStack_1a4;
  undefined1 auStack_1a0 [72];
  uint *local_158;
  uint *local_154;
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
  undefined1 *local_bc;
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
  
  puVar6 = (uint *)*param_2;
  puVar8 = (uint *)param_2[1];
  local_1fc = (uint *)param_2[0x41];
  *param_2 = 3;
  param_2[1] = 0;
  if (puVar6 == (uint *)&DAT_00000003 && puVar8 == (uint *)0x0) {
    puVar11 = (uint *)(param_2 + 0x1a);
    piVar2 = param_2 + 0x38;
    puVar6 = (uint *)*puVar11;
    puVar8 = (uint *)param_2[0x1b];
    local_1f4 = unaff_r8;
    if (puVar6 != (uint *)&DAT_00000005 || puVar8 != (uint *)0x0) {
      local_204 = (uint *)(param_2 + 0x20);
      do {
        if (0x1f < (uint)param_2[0x34]) {
          iVar7 = *(int *)*param_3;
          iVar9 = ((int *)*param_3)[1];
          param_2[0x34] = 0;
          (**(code **)(iVar7 + 8))(iVar9);
          local_1f4 = unaff_r8;
LAB_00d8d8c4:
          if (param_2[0x39] != 0) goto LAB_00d8d630;
          goto LAB_00d8dd34;
        }
        ppuVar10 = (uint **)param_2[0x1c];
        unaff_r10 = (uint *)param_2[0x1d];
        local_1ec = (uint *)*local_204;
        local_1f4 = (uint *)param_2[0x21];
        puVar4 = (uint *)param_2[0x1e];
        *puVar11 = 4;
        param_2[0x1b] = 0;
        unaff_r8 = (uint *)param_2[0x1f];
        param_2[0x34] = param_2[0x34] + 1;
        local_1f0 = unaff_r8;
        if (((uint)puVar6 & 7) == 4) {
          *puVar11 = 5;
          param_2[0x1b] = 0;
          unaff_r4 = puVar4;
          unaff_r10 = (uint *)ppuVar10;
          break;
        }
        if (puVar6 == (uint *)&DAT_00000005) goto LAB_00d8d8c4;
        FUN_01bed4e2(&local_158,param_2 + 0x22,0x48);
        if (puVar6 != (uint *)&DAT_00000003 || puVar8 != (uint *)0x0) {
          iVar7 = param_2[0x39];
          if (iVar7 == 0) {
            FUN_01bed4e2(auStack_1a0,param_2 + 0x22,0x48);
            puVar5 = puVar4;
            goto LAB_00d8dad0;
          }
          if (*param_2 != 3 || param_2[1] != 0) {
            FUN_005f6588(param_2);
            iVar7 = param_2[0x39];
          }
          param_2[5] = (int)unaff_r8;
          *param_2 = (int)puVar6;
          param_2[1] = (int)puVar8;
          param_2[2] = (int)ppuVar10;
          param_2[6] = (int)local_1ec;
          param_2[7] = (int)local_1f4;
          param_2[3] = (int)unaff_r10;
          param_2[4] = (int)puVar4;
          FUN_01bed4e2(param_2 + 8,&local_158,0x48);
          FUN_01283fd8(&local_f0,piVar2,iVar7);
          puVar6 = local_e4;
          if (((uint)local_e4 & 1) == 0) goto LAB_00d8d650;
          local_bc = (undefined1 *)((int)local_ec + ((uint)local_e4 >> 5));
          local_c0 = (int)local_f0 - ((uint)local_e4 >> 5);
          local_c4 = (int)local_e8 + ((uint)local_e4 >> 5);
          FUN_01283524(&local_1e8,&local_c4);
          local_b8 = (uint)puVar6 >> 5;
          if (local_1e0 < (uint *)((uint)puVar6 >> 5)) {
            local_88 = &local_b4;
            local_b4 = local_1e0;
            local_84 = (uint *)&LAB_01a6a304;
            local_8c = (uint *)&LAB_01a6a304;
            local_90 = &local_b8;
                    /* WARNING: Subroutine does not return */
            FUN_012fb100(&DAT_005ac267,&local_90,&DAT_01d2e534);
          }
          goto LAB_00d8d874;
        }
        unaff_r4 = (uint *)param_2[0x39];
        iVar9 = param_2[0x36];
        iVar7 = param_2[0x37];
        puVar6 = unaff_r4;
        if ((uint)(param_2[0x3a] - (int)unaff_r4) < 5) {
          FUN_01283c9c(piVar2,5);
          puVar6 = (uint *)param_2[0x39];
          if ((uint)(param_2[0x3a] - (int)puVar6) < 5) {
            local_1e8 = (uint *)0x5;
            local_1e4 = (uint *)(param_2[0x3a] - (int)puVar6);
                    /* WARNING: Subroutine does not return */
            FUN_01284540(&local_1e8);
          }
        }
        param_2[0x39] = (int)((int)puVar6 + 5);
        puVar8 = (uint *)0x0;
        if (((uint)ppuVar10 & 1) != 0) {
          puVar8 = (uint *)0x9;
        }
        if (((uint)local_1ec & 0xff) != 2) {
          puVar8 = (uint *)((uint)puVar8 | 2);
        }
        if ((uint *)(0x7ffffffaU - (int)puVar6) < puVar8) {
          local_1e8 = puVar8;
          local_1e4 = (uint *)(0x7ffffffaU - (int)puVar6);
                    /* WARNING: Subroutine does not return */
          FUN_013073dc(&DAT_003efa56,0x27,&local_1e8,&DAT_01c15d9c,&DAT_01c15fbc);
        }
        if (((uint)ppuVar10 & 1) != 0) {
          FUN_01016b28(puVar4,1,piVar2);
        }
        if (((uint)local_1ec & 0xff) != 2) {
          FUN_00efe13c(2,local_1ec,piVar2);
        }
        puVar6 = (uint *)param_2[0x39];
        if (puVar6 < unaff_r4) {
                    /* WARNING: Subroutine does not return */
          FUN_012faff4(unaff_r4,puVar6,puVar6,&DAT_01c15f4c);
        }
        FUN_01a745b4(&local_90,iVar9,iVar7,(undefined1 *)(*piVar2 + (int)unaff_r4),
                     (int)puVar6 - (int)unaff_r4);
        local_1f4 = local_74;
        puVar5 = local_80;
        unaff_r10 = local_84;
        ppuVar1 = local_88;
        puVar8 = local_8c;
        puVar6 = local_90;
        local_1f8 = puVar4;
        if (local_90 != (uint *)&DAT_00000003 || local_8c != (uint *)0x0) {
          local_1f0 = local_7c;
          local_1ec = local_78;
          FUN_01bed4e2(auStack_1a0,&local_70,0x48);
          ppuVar10 = ppuVar1;
          goto LAB_00d8dad0;
        }
        local_1f4 = unaff_r8;
        if (local_1fc <= (uint *)param_2[0x39]) {
          FUN_01283fd8(&local_f0,piVar2);
          puVar6 = local_e4;
          if (((uint)local_e4 & 1) == 0) goto LAB_00d8d650;
          local_bc = (undefined1 *)((int)local_ec + ((uint)local_e4 >> 5));
          local_c0 = (int)local_f0 - ((uint)local_e4 >> 5);
          local_c4 = (int)local_e8 + ((uint)local_e4 >> 5);
          FUN_01283524(&local_1e8,&local_c4);
          local_b8 = (uint)puVar6 >> 5;
          if (local_1e0 < (uint *)((uint)puVar6 >> 5)) {
            local_88 = &local_b4;
            local_b4 = local_1e0;
            local_84 = (uint *)&LAB_01a6a304;
            local_8c = (uint *)&LAB_01a6a304;
            local_90 = &local_b8;
                    /* WARNING: Subroutine does not return */
            FUN_012fb100(&DAT_005ac267,&local_90,&DAT_01d2e534);
          }
          goto LAB_00d8d874;
        }
        puVar6 = (uint *)*puVar11;
        puVar8 = (uint *)param_2[0x1b];
        unaff_r10 = (uint *)ppuVar10;
      } while (puVar6 != (uint *)&DAT_00000005 || puVar8 != (uint *)0x0);
    }
    if (param_2[0x39] == 0) {
      puVar8 = (uint *)0x0;
      puVar6 = (uint *)&SUB_00000004;
      puVar5 = unaff_r4;
      ppuVar10 = (uint **)puVar11;
    }
    else {
LAB_00d8d630:
      FUN_01283fd8(&local_f0,piVar2);
      puVar6 = local_e4;
      if (((uint)local_e4 & 1) == 0) {
LAB_00d8d650:
        puVar5 = local_ec;
        unaff_r10 = local_f0;
        ppuVar10 = (uint **)&DAT_01d2e520;
        local_1f0 = local_e4;
      }
      else {
        local_bc = (undefined1 *)((int)local_ec + ((uint)local_e4 >> 5));
        local_c0 = (int)local_f0 - ((uint)local_e4 >> 5);
        local_c4 = (int)local_e8 + ((uint)local_e4 >> 5);
        FUN_01283524(&local_1e8,&local_c4);
        local_b8 = (uint)puVar6 >> 5;
        if (local_1e0 < (uint *)((uint)puVar6 >> 5)) {
          local_88 = &local_b4;
          local_b4 = local_1e0;
          local_84 = (uint *)&LAB_01a6a304;
          local_8c = (uint *)&LAB_01a6a304;
          local_90 = &local_b8;
                    /* WARNING: Subroutine does not return */
          FUN_012fb100(&DAT_005ac267,&local_90,&DAT_01d2e534);
        }
LAB_00d8d874:
        puVar5 = (uint *)((int)local_1e0 - local_b8);
        unaff_r10 = (uint *)((int)local_1e4 + local_b8);
        local_1f0 = local_1dc;
        ppuVar10 = (uint **)local_1e8;
      }
      puVar8 = (uint *)0x0;
      puVar6 = (uint *)&DAT_00000003;
    }
LAB_00d8dad0:
    if (puVar6 == (uint *)&SUB_00000004 && puVar8 == (uint *)0x0) {
      unaff_r10 = (uint *)0xd8db14;
      FUN_01a737fc(&local_90,param_2 + 0x42);
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
        local_1f8 = local_80;
        local_1ec = local_78;
        local_1f4 = local_74;
        local_1fc = (uint *)local_88;
        local_204 = local_84;
        local_158 = local_70;
        local_154 = puStack_6c;
        local_150 = puStack_68;
        local_14c = puStack_64;
        local_148 = puStack_60;
        local_144 = local_5c;
        local_140 = puStack_58;
        puStack_13c = puStack_54;
        uStack_138 = uStack_50;
        uStack_134 = uStack_4c;
        unaff_r10 = local_7c;
      }
      local_1e8 = local_158;
      local_1e4 = local_154;
      local_1e0 = local_150;
      local_1dc = local_14c;
      puStack_1d8 = local_148;
      local_1d4 = local_144;
      puStack_1d0 = local_140;
      puStack_1cc = puStack_13c;
      uStack_1c8 = uStack_138;
      uStack_1c4 = uStack_134;
      local_1c0 = local_b0;
      uStack_1bc = uStack_ac;
      uStack_1b8 = uStack_a8;
      uStack_1b4 = uStack_a4;
      local_1b0 = local_a0;
      uStack_1ac = uStack_9c;
      uStack_1a8 = uStack_98;
      uStack_1a4 = uStack_94;
      puVar6 = local_90;
      puVar8 = local_8c;
LAB_00d8dd0c:
      ppuVar10 = (uint **)local_1f8;
      if (puVar6 != (uint *)&DAT_00000003 || puVar8 != (uint *)0x0) {
        if (puVar6 != (uint *)&SUB_00000004 || puVar8 != (uint *)0x0) {
          if (puVar6 != (uint *)&DAT_00000005 || puVar8 != (uint *)0x0) {
            FUN_01bed4e2(&local_70,&local_1e8,0x48);
            local_84 = local_204;
            local_88 = (uint **)local_1fc;
            local_78 = local_1ec;
            local_80 = local_1f8;
            local_74 = local_1f4;
            local_90 = puVar6;
            local_8c = puVar8;
            local_7c = unaff_r10;
            uVar3 = FUN_01a65494(&local_90);
            FUN_01a7467c(param_1,uVar3,&DAT_01d2cc7c);
            return;
          }
          goto LAB_00d8dd34;
        }
        uVar3 = 4;
        goto LAB_00d8dd48;
      }
      local_1f8 = local_1ec;
      local_1f0 = local_1f4;
    }
    else {
      local_1f8 = puVar5;
      if (puVar6 != (uint *)&DAT_00000003 || puVar8 != (uint *)0x0) {
        local_140 = local_1ec;
        local_144 = local_1f0;
        local_158 = puVar6;
        local_154 = puVar8;
        local_150 = (uint *)ppuVar10;
        local_14c = unaff_r10;
        local_148 = puVar5;
        puStack_13c = local_1f4;
        FUN_01bed4e2(&uStack_138,auStack_1a0,0x48);
        if ((char)param_2[0x5c] == '\x01') {
          *(undefined1 *)((int)param_2 + 0x171) = 1;
          FUN_01a738c0(&local_90,&local_158);
          local_1fc = (uint *)local_88;
          local_204 = local_84;
          local_1f4 = local_74;
          local_1ec = local_78;
          local_1f8 = local_80;
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
            local_1e8 = local_70;
            local_1e4 = puStack_6c;
            local_1e0 = puStack_68;
            local_1dc = puStack_64;
            puStack_1d8 = puStack_60;
            local_1d4 = local_5c;
            puStack_1d0 = puStack_58;
            puStack_1cc = puStack_54;
            uStack_1c8 = uStack_50;
            uStack_1c4 = uStack_4c;
            FUN_005f6588(&local_158);
            local_8c = (uint *)0x0;
            local_90 = (uint *)&DAT_00000003;
          }
          else {
            local_1c0 = local_48;
            uStack_1bc = uStack_44;
            uStack_1b8 = uStack_40;
            uStack_1b4 = uStack_3c;
            local_1b0 = local_38;
            uStack_1ac = uStack_34;
            uStack_1a8 = uStack_30;
            uStack_1a4 = uStack_2c;
            local_1e8 = local_70;
            local_1e4 = puStack_6c;
            local_1e0 = puStack_68;
            local_1dc = puStack_64;
            puStack_1d8 = puStack_60;
            local_1d4 = local_5c;
            puStack_1d0 = puStack_58;
            puStack_1cc = puStack_54;
            uStack_1c8 = uStack_50;
            uStack_1c4 = uStack_4c;
            FUN_005f6588(&local_158);
          }
          puVar6 = local_90;
          puVar8 = local_8c;
          unaff_r10 = local_7c;
        }
        else {
          local_1fc = local_150;
          local_204 = local_14c;
          FUN_01bed4e2(&local_1e8,auStack_1a0,0x48);
          unaff_r10 = local_1f0;
        }
        goto LAB_00d8dd0c;
      }
      local_204 = (uint *)0x0;
      local_1fc = (uint *)&DAT_00000003;
    }
    param_1[8] = local_1e8;
    param_1[9] = local_1e4;
    param_1[10] = local_1e0;
    param_1[0xb] = local_1dc;
    param_1[0xc] = puStack_1d8;
    param_1[0xd] = local_1d4;
    param_1[0xe] = puStack_1d0;
    param_1[0xf] = puStack_1cc;
    param_1[0x10] = uStack_1c8;
    param_1[0x11] = uStack_1c4;
    param_1[1] = 0;
    param_1[2] = local_1fc;
    *param_1 = 3;
    param_1[3] = local_204;
    param_1[4] = ppuVar10;
    param_1[5] = unaff_r10;
    param_1[6] = local_1f8;
    param_1[7] = local_1f0;
  }
  else {
    local_1f0 = (uint *)param_2[5];
    local_1ec = (uint *)param_2[6];
    local_1f4 = (uint *)param_2[7];
    ppuVar10 = (uint **)param_2[2];
    unaff_r10 = (uint *)param_2[3];
    puVar5 = (uint *)param_2[4];
    FUN_01bed4e2(auStack_1a0,param_2 + 8,0x48);
    if (puVar6 != (uint *)&DAT_00000005 || puVar8 != (uint *)0x0) goto LAB_00d8dad0;
LAB_00d8dd34:
    uVar3 = 5;
LAB_00d8dd48:
    *param_1 = uVar3;
    param_1[1] = 0;
  }
  return;
}

