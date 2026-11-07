// FUN_00d6b3f4 @ 00d6b3f4 size=2112 calls_out=15 calls_in=0
// strings: 

void FUN_00d6b3f4(undefined4 *param_1,uint *param_2,int *param_3)

{
  double dVar1;
  uint uVar2;
  int iVar3;
  undefined4 uVar4;
  uint uVar5;
  int iVar6;
  uint *puVar7;
  uint uVar8;
  uint *puVar9;
  uint *puVar10;
  uint *unaff_r7;
  uint *unaff_r8;
  uint **ppuVar11;
  undefined1 *puVar12;
  uint uVar13;
  uint **ppuVar14;
  uint *puVar15;
  double unaff_d8;
  double unaff_d9;
  uint *local_204;
  uint *local_200;
  uint *local_1fc;
  uint *local_1f8;
  uint *local_1f4;
  undefined4 uStack_1f0;
  undefined4 local_1ec;
  undefined4 uStack_1e8;
  undefined4 uStack_1e4;
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
  uint *local_168;
  uint local_164;
  uint *local_160;
  uint *local_15c;
  undefined8 local_158;
  undefined4 local_150;
  undefined4 uStack_14c;
  undefined4 uStack_148;
  undefined4 uStack_144;
  uint *local_100;
  uint local_fc;
  uint *local_f8;
  uint *local_f4;
  undefined4 uStack_f0;
  undefined4 local_ec;
  undefined4 uStack_e8;
  undefined4 uStack_e4;
  undefined4 uStack_e0;
  undefined4 uStack_dc;
  undefined1 *local_d4;
  int local_d0;
  int local_cc;
  uint local_c8;
  uint *local_c4;
  undefined4 local_c0;
  undefined4 uStack_bc;
  undefined4 uStack_b8;
  undefined4 uStack_b4;
  undefined4 local_b0;
  undefined4 uStack_ac;
  undefined4 uStack_a8;
  undefined4 uStack_a4;
  uint *local_a0;
  undefined1 *local_9c;
  uint **local_98;
  uint *local_94;
  uint *local_90;
  uint *puStack_8c;
  double local_88;
  uint *local_80;
  uint uStack_7c;
  uint *puStack_78;
  uint *puStack_74;
  undefined4 uStack_70;
  undefined4 local_6c;
  undefined4 uStack_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  
  puVar7 = (uint *)*param_2;
  puVar12 = (undefined1 *)param_2[1];
  local_204 = (uint *)param_2[0x41];
  *param_2 = 3;
  param_2[1] = 0;
  if (puVar7 == (uint *)&DAT_00000003 && puVar12 == (undefined1 *)0x0) {
    puVar15 = param_2 + 0x1a;
    puVar9 = param_2 + 0x38;
    puVar7 = (uint *)*puVar15;
    puVar12 = (undefined1 *)param_2[0x1b];
    if (puVar7 != (uint *)&DAT_00000005 || puVar12 != (undefined1 *)0x0) {
      do {
        if (0x1f < param_2[0x34]) {
          iVar3 = *(int *)*param_3;
          iVar6 = ((int *)*param_3)[1];
          param_2[0x34] = 0;
          (**(code **)(iVar3 + 8))(iVar6);
LAB_00d6b6ac:
          if (param_2[0x39] == 0) goto LAB_00d6ba24;
          goto LAB_00d6b45c;
        }
        param_2[0x34] = param_2[0x34] + 1;
        *puVar15 = 4;
        unaff_r8 = (uint *)param_2[0x1c];
        unaff_r7 = (uint *)param_2[0x1d];
        param_2[0x1b] = 0;
        if (((uint)puVar7 & 7) == 4) {
          *puVar15 = 5;
          param_2[0x1b] = 0;
          break;
        }
        if (puVar7 == (uint *)&DAT_00000005) goto LAB_00d6b6ac;
        unaff_d8 = *(double *)(param_2 + 0x1e);
        FUN_01bed4e2(&local_168,param_2 + 0x20,0x50);
        if (puVar7 != (uint *)&DAT_00000003 || puVar12 != (undefined1 *)0x0) {
          uVar2 = param_2[0x39];
          if (uVar2 == 0) {
            FUN_01bed4e2(auStack_1b8,param_2 + 0x20,0x50);
            puVar10 = unaff_r7;
            ppuVar11 = (uint **)unaff_r8;
            goto LAB_00d6b7e4;
          }
          if (*param_2 != 3 || param_2[1] != 0) {
            FUN_005f6588(param_2);
            uVar2 = param_2[0x39];
          }
          *(double *)(param_2 + 4) = unaff_d8;
          *param_2 = (uint)puVar7;
          param_2[1] = (uint)puVar12;
          param_2[2] = (uint)unaff_r8;
          param_2[3] = (uint)unaff_r7;
          FUN_01bed4e2(param_2 + 6,&local_168,0x50);
          FUN_01283fd8(&local_100,puVar9,uVar2);
          puVar7 = local_f4;
          if (((uint)local_f4 & 1) == 0) goto LAB_00d6b480;
          local_cc = local_fc + ((uint)local_f4 >> 5);
          local_d0 = (int)local_100 - ((uint)local_f4 >> 5);
          local_d4 = (undefined1 *)((int)local_f8 + ((uint)local_f4 >> 5));
          FUN_01283524(&local_200,&local_d4);
          local_c8 = (uint)puVar7 >> 5;
          if (local_1f8 < (uint *)((uint)puVar7 >> 5)) {
            local_98 = &local_c4;
            local_c4 = local_1f8;
            local_94 = (uint *)&LAB_01a6a304;
            local_9c = &LAB_01a6a304;
            local_a0 = &local_c8;
                    /* WARNING: Subroutine does not return */
            FUN_012fb100(&DAT_005ac267,&local_a0,&DAT_01d2e534);
          }
          goto LAB_00d6b65c;
        }
        uVar8 = param_2[0x39];
        unaff_r7 = (uint *)param_2[0x36];
        uVar13 = param_2[0x37];
        uVar2 = uVar8;
        if (param_2[0x3a] - uVar8 < 5) {
          FUN_01283c9c(puVar9,5);
          uVar2 = param_2[0x39];
          if (param_2[0x3a] - uVar2 < 5) {
            local_200 = (uint *)0x5;
            local_1fc = (uint *)(param_2[0x3a] - uVar2);
                    /* WARNING: Subroutine does not return */
            FUN_01284540(&local_200);
          }
        }
        puVar7 = (uint *)0x2;
        uVar5 = uVar2 + 5;
        param_2[0x39] = uVar5;
        if (unaff_d8 != 0.0) {
          puVar7 = (uint *)0xb;
        }
        puVar10 = (uint *)0x0;
        if (((uint)unaff_r8 & 1) != 0) {
          puVar10 = puVar7;
        }
        if ((uint *)(0x7ffffffa - uVar2) < puVar10) {
          local_200 = puVar10;
          local_1fc = (uint *)(0x7ffffffa - uVar2);
                    /* WARNING: Subroutine does not return */
          FUN_013073dc(&DAT_003efa56,0x27,&local_200,&DAT_01c15d9c,&DAT_01c15fbc);
        }
        if (((uint)unaff_r8 & 1) != 0) {
          FUN_00efe1c0(SUB84(unaff_d8,0),1,puVar9);
          uVar5 = param_2[0x39];
        }
        if (uVar5 < uVar8) {
                    /* WARNING: Subroutine does not return */
          FUN_012faff4(uVar8,uVar5,uVar5,&DAT_01c15f4c);
        }
        FUN_01a745b4(&local_a0,unaff_r7,uVar13,*puVar9 + uVar8,uVar5 - uVar8);
        puVar10 = local_94;
        ppuVar11 = local_98;
        puVar12 = local_9c;
        puVar7 = local_a0;
        if (local_a0 != (uint *)&DAT_00000003 || local_9c != (undefined1 *)0x0) {
          unaff_d8 = (double)CONCAT44(puStack_8c,local_90);
          FUN_01bed4e2(auStack_1b8,&local_88,0x50);
          goto LAB_00d6b7e4;
        }
        if (local_204 <= (uint *)param_2[0x39]) {
          FUN_01283fd8(&local_100,puVar9);
          puVar7 = local_f4;
          if (((uint)local_f4 & 1) != 0) {
            local_cc = local_fc + ((uint)local_f4 >> 5);
            local_d0 = (int)local_100 - ((uint)local_f4 >> 5);
            local_d4 = (undefined1 *)((int)local_f8 + ((uint)local_f4 >> 5));
            FUN_01283524(&local_200,&local_d4);
            local_c8 = (uint)puVar7 >> 5;
            if (local_1f8 < (uint *)((uint)puVar7 >> 5)) {
              local_98 = &local_c4;
              local_c4 = local_1f8;
              local_94 = (uint *)&LAB_01a6a304;
              local_9c = &LAB_01a6a304;
              local_a0 = &local_c8;
                    /* WARNING: Subroutine does not return */
              FUN_012fb100(&DAT_005ac267,&local_a0,&DAT_01d2e534);
            }
            goto LAB_00d6b65c;
          }
          ppuVar11 = (uint **)&DAT_01d2e520;
          uVar2 = local_fc;
          puVar10 = local_100;
          goto LAB_00d6b670;
        }
        puVar7 = (uint *)*puVar15;
        puVar12 = (undefined1 *)param_2[0x1b];
      } while (puVar7 != (uint *)&DAT_00000005 || puVar12 != (undefined1 *)0x0);
    }
    if (param_2[0x39] == 0) {
      puVar12 = (undefined1 *)0x0;
      puVar7 = (uint *)&SUB_00000004;
      puVar10 = unaff_r7;
      ppuVar11 = (uint **)unaff_r8;
    }
    else {
LAB_00d6b45c:
      FUN_01283fd8(&local_100,puVar9);
      puVar7 = local_f4;
      if (((uint)local_f4 & 1) == 0) {
LAB_00d6b480:
        uVar2 = local_fc;
        puVar7 = local_f4;
        puVar10 = local_100;
        ppuVar11 = (uint **)&DAT_01d2e520;
      }
      else {
        local_cc = local_fc + ((uint)local_f4 >> 5);
        local_d0 = (int)local_100 - ((uint)local_f4 >> 5);
        local_d4 = (undefined1 *)((int)local_f8 + ((uint)local_f4 >> 5));
        FUN_01283524(&local_200,&local_d4);
        local_c8 = (uint)puVar7 >> 5;
        if (local_1f8 < (uint *)((uint)puVar7 >> 5)) {
          local_98 = &local_c4;
          local_c4 = local_1f8;
          local_94 = (uint *)&LAB_01a6a304;
          local_9c = &LAB_01a6a304;
          local_a0 = &local_c8;
                    /* WARNING: Subroutine does not return */
          FUN_012fb100(&DAT_005ac267,&local_a0,&DAT_01d2e534);
        }
LAB_00d6b65c:
        uVar2 = (int)local_1f8 - local_c8;
        puVar7 = local_1f4;
        puVar10 = (uint *)((int)local_1fc + local_c8);
        ppuVar11 = (uint **)local_200;
      }
LAB_00d6b670:
      unaff_d8 = (double)CONCAT44(puVar7,uVar2);
      puVar12 = (undefined1 *)0x0;
      puVar7 = (uint *)&DAT_00000003;
    }
LAB_00d6b7e4:
    if (puVar7 == (uint *)&SUB_00000004 && puVar12 == (undefined1 *)0x0) {
      puVar10 = (uint *)0xd6b820;
      FUN_01a737fc(&local_a0,param_2 + 0x42);
      ppuVar14 = (uint **)param_2;
      unaff_d8 = unaff_d9;
      if (local_a0 != (uint *)&SUB_00000004 || local_9c != (undefined1 *)0x0) {
        if (local_a0 != (uint *)&DAT_00000003 || local_9c != (undefined1 *)0x0) {
          local_c0 = local_58;
          uStack_bc = uStack_54;
          uStack_b8 = uStack_50;
          uStack_b4 = uStack_4c;
          local_b0 = local_48;
          uStack_ac = uStack_44;
          uStack_a8 = uStack_40;
          uStack_a4 = uStack_3c;
        }
        local_204 = local_94;
        local_168 = local_80;
        local_164 = uStack_7c;
        local_160 = puStack_78;
        local_15c = puStack_74;
        local_158 = (double)CONCAT44(local_6c,uStack_70);
        local_150 = uStack_68;
        uStack_14c = uStack_64;
        uStack_148 = uStack_60;
        uStack_144 = uStack_5c;
        ppuVar11 = (uint **)local_90;
        ppuVar14 = local_98;
        puVar10 = puStack_8c;
        unaff_d8 = local_88;
      }
      local_200 = local_168;
      local_1fc = (uint *)local_164;
      local_1f8 = local_160;
      local_1f4 = local_15c;
      uStack_1f0 = (undefined4)local_158;
      local_1ec = local_158._4_4_;
      uStack_1e8 = local_150;
      uStack_1e4 = uStack_14c;
      uStack_1e0 = uStack_148;
      uStack_1dc = uStack_144;
      local_1d8 = local_c0;
      uStack_1d4 = uStack_bc;
      uStack_1d0 = uStack_b8;
      uStack_1cc = uStack_b4;
      local_1c8 = local_b0;
      uStack_1c4 = uStack_ac;
      uStack_1c0 = uStack_a8;
      uStack_1bc = uStack_a4;
      puVar7 = local_a0;
      puVar12 = local_9c;
LAB_00d6ba00:
      if (puVar7 != (uint *)&DAT_00000003 || puVar12 != (undefined1 *)0x0) {
        if (puVar7 != (uint *)&SUB_00000004 || puVar12 != (undefined1 *)0x0) {
          if (puVar7 != (uint *)&DAT_00000005 || puVar12 != (undefined1 *)0x0) {
            FUN_01bed4e2(&local_80,&local_200,0x48);
            local_94 = local_204;
            local_a0 = puVar7;
            local_9c = puVar12;
            local_98 = ppuVar14;
            local_90 = (uint *)ppuVar11;
            puStack_8c = puVar10;
            uVar4 = FUN_01a65494(&local_a0);
            FUN_01a7467c(param_1,uVar4,&DAT_01d2cc7c);
            return;
          }
          goto LAB_00d6ba24;
        }
        uVar4 = 4;
        goto LAB_00d6ba38;
      }
    }
    else {
      if (puVar7 != (uint *)&DAT_00000003 || puVar12 != (undefined1 *)0x0) {
        local_168 = puVar7;
        local_164 = (uint)puVar12;
        local_160 = (uint *)ppuVar11;
        local_15c = puVar10;
        local_158 = unaff_d8;
        FUN_01bed4e2(&local_150,auStack_1b8,0x50);
        ppuVar14 = (uint **)local_160;
        if ((char)param_2[0x5c] == '\x01') {
          *(undefined1 *)((int)param_2 + 0x171) = 1;
          FUN_01a738c0(&local_a0,&local_168);
          local_204 = local_94;
          local_100 = local_80;
          local_fc = uStack_7c;
          local_f8 = puStack_78;
          local_f4 = puStack_74;
          uStack_f0 = uStack_70;
          local_ec = local_6c;
          uStack_e8 = uStack_68;
          uStack_e4 = uStack_64;
          uStack_e0 = uStack_60;
          uStack_dc = uStack_5c;
          if (local_a0 == (uint *)&DAT_00000003 && local_9c == (undefined1 *)0x0) {
            local_200 = local_80;
            local_1fc = (uint *)uStack_7c;
            local_1f8 = puStack_78;
            local_1f4 = puStack_74;
            uStack_1f0 = uStack_70;
            local_1ec = local_6c;
            uStack_1e8 = uStack_68;
            uStack_1e4 = uStack_64;
            uStack_1e0 = uStack_60;
            uStack_1dc = uStack_5c;
            FUN_005f6588(&local_168);
            local_9c = (undefined1 *)0x0;
            local_a0 = (uint *)&DAT_00000003;
          }
          else {
            local_1d8 = local_58;
            uStack_1d4 = uStack_54;
            uStack_1d0 = uStack_50;
            uStack_1cc = uStack_4c;
            local_1c8 = local_48;
            uStack_1c4 = uStack_44;
            uStack_1c0 = uStack_40;
            uStack_1bc = uStack_3c;
            local_200 = local_80;
            local_1fc = (uint *)uStack_7c;
            local_1f8 = puStack_78;
            local_1f4 = puStack_74;
            uStack_1f0 = uStack_70;
            local_1ec = local_6c;
            uStack_1e8 = uStack_68;
            uStack_1e4 = uStack_64;
            uStack_1e0 = uStack_60;
            uStack_1dc = uStack_5c;
            FUN_005f6588(&local_168);
          }
          puVar7 = local_a0;
          puVar10 = puStack_8c;
          ppuVar11 = (uint **)local_90;
          puVar12 = local_9c;
          ppuVar14 = local_98;
          unaff_d8 = local_88;
        }
        else {
          dVar1 = (double)CONCAT44(uStack_14c,local_150);
          local_204 = local_15c;
          FUN_01bed4e2(&local_200,auStack_1b0,0x48);
          puVar10 = (uint *)((ulonglong)unaff_d8 >> 0x20);
          ppuVar11 = SUB84(unaff_d8,0);
          unaff_d8 = dVar1;
        }
        goto LAB_00d6ba00;
      }
      local_204 = (uint *)0x0;
      ppuVar14 = (uint **)&DAT_00000003;
    }
    param_1[8] = local_200;
    param_1[9] = local_1fc;
    param_1[10] = local_1f8;
    param_1[0xb] = local_1f4;
    param_1[0xc] = uStack_1f0;
    param_1[0xd] = local_1ec;
    param_1[0xe] = uStack_1e8;
    param_1[0xf] = uStack_1e4;
    param_1[0x10] = uStack_1e0;
    param_1[0x11] = uStack_1dc;
    param_1[1] = 0;
    param_1[2] = ppuVar14;
    *(double *)(param_1 + 6) = unaff_d8;
    *param_1 = 3;
    param_1[3] = local_204;
    param_1[4] = ppuVar11;
    param_1[5] = puVar10;
  }
  else {
    unaff_d8 = *(double *)(param_2 + 4);
    ppuVar11 = (uint **)param_2[2];
    puVar10 = (uint *)param_2[3];
    FUN_01bed4e2(auStack_1b8,param_2 + 6,0x50);
    if (puVar7 != (uint *)&DAT_00000005 || puVar12 != (undefined1 *)0x0) goto LAB_00d6b7e4;
LAB_00d6ba24:
    uVar4 = 5;
LAB_00d6ba38:
    *param_1 = uVar4;
    param_1[1] = 0;
  }
  return;
}

