// FUN_00d8b818 @ 00d8b818 size=2344 calls_out=15 calls_in=0
// strings: 

void FUN_00d8b818(undefined4 *param_1,uint *param_2,int *param_3)

{
  byte bVar1;
  undefined3 uVar2;
  uint uVar3;
  int iVar4;
  undefined4 uVar5;
  uint uVar6;
  int iVar7;
  uint *puVar8;
  uint **unaff_r5;
  uint *puVar9;
  uint *puVar10;
  uint uVar11;
  uint *unaff_r7;
  uint *puVar12;
  uint *unaff_r8;
  uint *puVar13;
  uint *puVar14;
  uint uVar15;
  uint *puVar16;
  uint *local_1fc;
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
  uint *local_154;
  uint *local_150;
  uint *local_14c;
  uint *local_148;
  uint *local_144;
  uint *local_140;
  uint *local_13c;
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
  undefined1 *local_c4;
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
  
  puVar9 = (uint *)*param_2;
  puVar14 = (uint *)param_2[1];
  local_1f8 = (uint *)param_2[0x41];
  *param_2 = 3;
  param_2[1] = 0;
  if (puVar9 == (uint *)&DAT_00000003 && puVar14 == (uint *)0x0) {
    puVar10 = param_2 + 0x1a;
    puVar16 = param_2 + 0x38;
    puVar9 = (uint *)*puVar10;
    puVar14 = (uint *)param_2[0x1b];
    if (puVar9 != (uint *)&DAT_00000005 || puVar14 != (uint *)0x0) {
      do {
        if (0x1f < param_2[0x34]) {
          iVar4 = *(int *)*param_3;
          iVar7 = ((int *)*param_3)[1];
          param_2[0x34] = 0;
          (**(code **)(iVar4 + 8))(iVar7);
LAB_00d8bafc:
          if (param_2[0x39] == 0) goto LAB_00d8bef0;
          goto LAB_00d8b87c;
        }
        puVar8 = (uint *)param_2[0x1e];
        unaff_r7 = (uint *)param_2[0x1f];
        param_2[0x34] = param_2[0x34] + 1;
        uVar2 = *(undefined3 *)((int)param_2 + 0x71);
        *puVar10 = 4;
        param_2[0x1b] = 0;
        local_1fc = puVar8;
        if (((uint)puVar9 & 7) == 4) {
          *puVar10 = 5;
          param_2[0x1b] = 0;
          unaff_r5 = (uint **)&SUB_00000004;
          unaff_r7 = puVar16;
          unaff_r8 = (uint *)(uint)*(byte *)((int)param_2 + 0x73);
          break;
        }
        if (puVar9 == (uint *)&DAT_00000005) goto LAB_00d8bafc;
        bVar1 = (byte)param_2[0x1c];
        local_1f4 = (uint *)(uint)bVar1;
        puVar13 = (uint *)param_2[0x1d];
        FUN_01bed4e2(&local_158,param_2 + 0x20,0x50);
        if (puVar9 != (uint *)&DAT_00000003 || puVar14 != (uint *)0x0) {
          uVar3 = param_2[0x39];
          local_1f8 = unaff_r7;
          if (uVar3 == 0) {
            FUN_01bed4e2(auStack_1a8,param_2 + 0x20,0x50);
            unaff_r5 = (uint **)CONCAT31(uVar2,bVar1);
            goto LAB_00d8bc88;
          }
          if (*param_2 != 3 || param_2[1] != 0) {
            FUN_005f6588(param_2);
            uVar3 = param_2[0x39];
          }
          *(byte *)(param_2 + 2) = bVar1;
          param_2[3] = (uint)puVar13;
          param_2[5] = (uint)unaff_r7;
          *(char *)((int)param_2 + 0xb) = (char)((uint3)uVar2 >> 0x10);
          *(short *)((int)param_2 + 9) = (short)uVar2;
          *param_2 = (uint)puVar9;
          param_2[4] = (uint)puVar8;
          param_2[1] = (uint)puVar14;
          FUN_01bed4e2(param_2 + 6,&local_158,0x50);
          FUN_01283fd8(&local_f0,puVar16,uVar3);
          puVar9 = local_e4;
          if (((uint)local_e4 & 1) == 0) goto LAB_00d8b8a0;
          local_bc = (undefined1 *)((int)local_ec + ((uint)local_e4 >> 5));
          local_c0 = (int)local_f0 - ((uint)local_e4 >> 5);
          local_c4 = (undefined1 *)((int)local_e8 + ((uint)local_e4 >> 5));
          FUN_01283524(&local_1f0,&local_c4);
          local_b8 = (uint)puVar9 >> 5;
          if (local_1e8 < (uint *)((uint)puVar9 >> 5)) {
            local_88 = &local_b4;
            local_b4 = local_1e8;
            local_84 = (uint *)&LAB_01a6a304;
            local_8c = (uint *)&LAB_01a6a304;
            local_90 = &local_b8;
                    /* WARNING: Subroutine does not return */
            FUN_012fb100(&DAT_005ac267,&local_90,&DAT_01d2e534);
          }
          goto LAB_00d8bab0;
        }
        uVar11 = param_2[0x39];
        puVar8 = (uint *)param_2[0x36];
        uVar15 = param_2[0x37];
        uVar3 = uVar11;
        if (param_2[0x3a] - uVar11 < 5) {
          FUN_01283c9c(puVar16,5);
          uVar3 = param_2[0x39];
          if (param_2[0x3a] - uVar3 < 5) {
            local_1f0 = (uint *)0x5;
            local_1ec = (uint *)(param_2[0x3a] - uVar3);
                    /* WARNING: Subroutine does not return */
            FUN_01284540(&local_1f0);
          }
        }
        uVar6 = uVar3 + 5;
        puVar12 = (uint *)(0x7ffffffa - uVar3);
        param_2[0x39] = uVar6;
        uVar3 = (uint)local_1f4 & 1;
        if (puVar12 < (uint *)(uVar3 << 1)) {
          local_1f0 = (uint *)(uVar3 << 1);
          local_1ec = puVar12;
                    /* WARNING: Subroutine does not return */
          FUN_013073dc(&DAT_003efa56,0x27,&local_1f0,&DAT_01c15d9c,&DAT_01c15fbc);
        }
        if ((bVar1 & 1) != 0) {
          FUN_00efe13c(1,uVar3,puVar16);
          uVar6 = param_2[0x39];
        }
        if (uVar6 < uVar11) {
                    /* WARNING: Subroutine does not return */
          FUN_012faff4(uVar11,uVar6,uVar6,&DAT_01c15f4c);
        }
        FUN_01a745b4(&local_90,puVar8,uVar15,*puVar16 + uVar11,uVar6 - uVar11);
        unaff_r7 = local_7c;
        unaff_r8 = local_80;
        puVar13 = local_84;
        unaff_r5 = local_88;
        puVar14 = local_8c;
        puVar9 = local_90;
        if (local_90 != (uint *)&DAT_00000003 || local_8c != (uint *)0x0) {
          FUN_01bed4e2(auStack_1a8,&local_78,0x50);
          goto LAB_00d8bc84;
        }
        if (local_1f8 <= (uint *)param_2[0x39]) {
          FUN_01283fd8(&local_f0,puVar16);
          puVar9 = local_e4;
          if (((uint)local_e4 & 1) != 0) {
            local_bc = (undefined1 *)((int)local_ec + ((uint)local_e4 >> 5));
            local_c0 = (int)local_f0 - ((uint)local_e4 >> 5);
            local_c4 = (undefined1 *)((int)local_e8 + ((uint)local_e4 >> 5));
            FUN_01283524(&local_1f0,&local_c4);
            local_b8 = (uint)puVar9 >> 5;
            if (local_1e8 < (uint *)((uint)puVar9 >> 5)) {
              local_88 = &local_b4;
              local_b4 = local_1e8;
              local_84 = (uint *)&LAB_01a6a304;
              local_8c = (uint *)&LAB_01a6a304;
              local_90 = &local_b8;
                    /* WARNING: Subroutine does not return */
              FUN_012fb100(&DAT_005ac267,&local_90,&DAT_01d2e534);
            }
            goto LAB_00d8bab0;
          }
          unaff_r5 = (uint **)&DAT_01d2e520;
          puVar13 = local_f0;
          unaff_r7 = local_e4;
          puVar8 = local_ec;
          goto LAB_00d8bac4;
        }
        puVar9 = (uint *)*puVar10;
        puVar14 = (uint *)param_2[0x1b];
        unaff_r5 = (uint **)param_2;
        unaff_r7 = puVar12;
        unaff_r8 = puVar8;
      } while (puVar9 != (uint *)&DAT_00000005 || puVar14 != (uint *)0x0);
    }
    if (param_2[0x39] == 0) {
      puVar14 = (uint *)0x0;
      puVar9 = (uint *)&SUB_00000004;
      puVar13 = puVar16;
LAB_00d8bc84:
      puVar8 = unaff_r8;
    }
    else {
LAB_00d8b87c:
      FUN_01283fd8(&local_f0,puVar16);
      puVar9 = local_e4;
      if (((uint)local_e4 & 1) == 0) {
LAB_00d8b8a0:
        puVar13 = local_f0;
        unaff_r5 = (uint **)&DAT_01d2e520;
        unaff_r7 = local_e4;
        puVar8 = local_ec;
      }
      else {
        local_bc = (undefined1 *)((int)local_ec + ((uint)local_e4 >> 5));
        local_c0 = (int)local_f0 - ((uint)local_e4 >> 5);
        local_c4 = (undefined1 *)((int)local_e8 + ((uint)local_e4 >> 5));
        FUN_01283524(&local_1f0,&local_c4);
        local_b8 = (uint)puVar9 >> 5;
        if (local_1e8 < (uint *)((uint)puVar9 >> 5)) {
          local_88 = &local_b4;
          local_b4 = local_1e8;
          local_84 = (uint *)&LAB_01a6a304;
          local_8c = (uint *)&LAB_01a6a304;
          local_90 = &local_b8;
                    /* WARNING: Subroutine does not return */
          FUN_012fb100(&DAT_005ac267,&local_90,&DAT_01d2e534);
        }
LAB_00d8bab0:
        puVar13 = (uint *)((int)local_1ec + local_b8);
        unaff_r5 = (uint **)local_1f0;
        unaff_r7 = local_1e4;
        puVar8 = (uint *)((int)local_1e8 - local_b8);
      }
LAB_00d8bac4:
      puVar14 = (uint *)0x0;
      puVar9 = (uint *)&DAT_00000003;
    }
LAB_00d8bc88:
    if (puVar9 == (uint *)&SUB_00000004 && puVar14 == (uint *)0x0) {
      puVar16 = (uint *)0xd8bcc8;
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
        local_1fc = local_80;
        local_1f4 = (uint *)local_88;
        local_1f8 = local_84;
        local_158 = local_70;
        local_154 = puStack_6c;
        local_150 = puStack_68;
        local_14c = puStack_64;
        local_148 = puStack_60;
        local_144 = local_5c;
        local_140 = puStack_58;
        local_13c = puStack_54;
        uStack_138 = uStack_50;
        uStack_134 = uStack_4c;
        puVar8 = local_7c;
        param_2 = local_78;
        puVar16 = local_74;
      }
      local_1f0 = local_158;
      local_1ec = local_154;
      local_1e8 = local_150;
      local_1e4 = local_14c;
      puStack_1e0 = local_148;
      local_1dc = local_144;
      puStack_1d8 = local_140;
      puStack_1d4 = local_13c;
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
      puVar9 = local_90;
      puVar13 = puVar8;
      puVar14 = local_8c;
LAB_00d8becc:
      puVar8 = param_2;
      if (puVar9 != (uint *)&DAT_00000003 || puVar14 != (uint *)0x0) {
        if (puVar9 != (uint *)&SUB_00000004 || puVar14 != (uint *)0x0) {
          if (puVar9 != (uint *)&DAT_00000005 || puVar14 != (uint *)0x0) {
            FUN_01bed4e2(&local_70,&local_1f0,0x48);
            local_84 = local_1f8;
            local_88 = (uint **)local_1f4;
            local_80 = local_1fc;
            local_90 = puVar9;
            local_8c = puVar14;
            local_7c = puVar13;
            local_78 = puVar8;
            local_74 = puVar16;
            uVar5 = FUN_01a65494(&local_90);
            FUN_01a7467c(param_1,uVar5,&DAT_01d2cc7c);
            return;
          }
          goto LAB_00d8bef0;
        }
        uVar5 = 4;
        goto LAB_00d8bf04;
      }
    }
    else {
      if (puVar9 != (uint *)&DAT_00000003 || puVar14 != (uint *)0x0) {
        local_158 = puVar9;
        local_154 = puVar14;
        local_150 = (uint *)unaff_r5;
        local_14c = puVar13;
        local_148 = puVar8;
        local_144 = unaff_r7;
        FUN_01bed4e2(&local_140,auStack_1a8,0x50);
        puVar16 = local_13c;
        puVar10 = local_140;
        if ((char)param_2[0x5c] == '\x01') {
          *(undefined1 *)((int)param_2 + 0x171) = 1;
          FUN_01a738c0(&local_90,&local_158);
          local_1f4 = (uint *)local_88;
          local_1f8 = local_84;
          local_1fc = local_80;
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
          puVar16 = local_74;
          puVar9 = local_90;
          puVar13 = local_7c;
          param_2 = local_78;
          puVar14 = local_8c;
        }
        else {
          local_1f4 = local_150;
          local_1f8 = local_14c;
          FUN_01bed4e2(&local_1f0,auStack_1a0,0x48);
          puVar13 = unaff_r7;
          param_2 = puVar10;
          local_1fc = puVar8;
        }
        goto LAB_00d8becc;
      }
      local_1f8 = (uint *)0x0;
      local_1f4 = (uint *)&DAT_00000003;
      local_1fc = (uint *)unaff_r5;
      puVar16 = unaff_r7;
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
    param_1[2] = local_1f4;
    param_1[3] = local_1f8;
    param_1[4] = local_1fc;
    param_1[5] = puVar13;
    param_1[6] = puVar8;
    param_1[7] = puVar16;
  }
  else {
    unaff_r5 = (uint **)param_2[2];
    puVar13 = (uint *)param_2[3];
    puVar8 = (uint *)param_2[4];
    unaff_r7 = (uint *)param_2[5];
    FUN_01bed4e2(auStack_1a8,param_2 + 6,0x50);
    if (puVar9 != (uint *)&DAT_00000005 || puVar14 != (uint *)0x0) goto LAB_00d8bc88;
LAB_00d8bef0:
    uVar5 = 5;
LAB_00d8bf04:
    *param_1 = uVar5;
    param_1[1] = 0;
  }
  return;
}

