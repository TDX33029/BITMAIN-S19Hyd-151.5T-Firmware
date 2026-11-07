// FUN_00d67f80 @ 00d67f80 size=2176 calls_out=17 calls_in=0
// strings: 

void FUN_00d67f80(undefined4 *param_1,int ****param_2,int *param_3)

{
  int ***pppiVar1;
  int iVar2;
  undefined4 uVar3;
  int ****ppppiVar4;
  int iVar5;
  int ****ppppiVar6;
  int ***pppiVar7;
  int ****ppppiVar8;
  int ***pppiVar9;
  int ****unaff_r6;
  int ****ppppiVar10;
  int ****ppppiVar11;
  int ****ppppiVar12;
  int ****unaff_r9;
  int ****ppppiVar13;
  int ****unaff_r10;
  int ****unaff_r11;
  int ****local_208;
  int ****local_200;
  int ****local_1fc;
  int ****local_1f8;
  int ****local_1f4;
  int ****local_1f0;
  int ****local_1ec;
  int ****ppppiStack_1e8;
  int ****local_1e4;
  int ****ppppiStack_1e0;
  int ****ppppiStack_1dc;
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
  int ****local_160;
  int ****local_15c;
  int ****local_158;
  int ****local_154;
  int ****local_150;
  int ****local_14c;
  int ****local_148;
  int ****local_144;
  undefined4 uStack_140;
  undefined4 uStack_13c;
  int ****local_f8;
  int ****local_f4;
  int ****local_f0;
  int ****local_ec;
  int ****ppppiStack_e8;
  int ****local_e4;
  int ****ppppiStack_e0;
  int ****ppppiStack_dc;
  undefined4 uStack_d8;
  undefined4 uStack_d4;
  int ****local_d0;
  int ****local_cc;
  int ****local_c8;
  int ****local_c4;
  int ****local_c0;
  undefined1 *local_bc;
  int **local_b8;
  int ****local_b4;
  undefined4 local_b0;
  undefined4 uStack_ac;
  undefined4 uStack_a8;
  undefined4 uStack_a4;
  undefined4 local_a0;
  undefined4 uStack_9c;
  undefined4 uStack_98;
  undefined4 uStack_94;
  int ****local_90;
  int ****local_8c;
  int ****local_88;
  int ****local_84;
  int ****local_80;
  int ****local_7c;
  int ****local_78;
  int ****local_74;
  int ****local_70;
  int ****ppppiStack_6c;
  int ****ppppiStack_68;
  int ****ppppiStack_64;
  int ****ppppiStack_60;
  int ****local_5c;
  int ****ppppiStack_58;
  int ****ppppiStack_54;
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
  
  ppppiVar6 = (int ****)*param_2;
  ppppiVar8 = (int ****)param_2[1];
  ppppiVar4 = (int ****)param_2[0x41];
  *param_2 = (int ***)0x3;
  param_2[1] = (int ***)0x0;
  if (ppppiVar6 == (int ****)&DAT_00000003 && ppppiVar8 == (int ****)0x0) {
    unaff_r10 = param_2 + 0x1a;
    ppppiVar12 = param_2 + 0x38;
    ppppiVar6 = (int ****)*unaff_r10;
    ppppiVar8 = (int ****)param_2[0x1b];
    local_1fc = unaff_r11;
    if (ppppiVar6 != (int ****)&DAT_00000005 || ppppiVar8 != (int ****)0x0) {
      local_208 = param_2 + 0x1c;
      ppppiVar10 = unaff_r6;
      ppppiVar13 = unaff_r9;
      do {
        local_200 = ppppiVar12;
        if ((int ***)0x1f < param_2[0x34]) {
          iVar2 = *(int *)*param_3;
          iVar5 = ((int *)*param_3)[1];
          param_2[0x34] = (int ***)0x0;
          (**(code **)(iVar2 + 8))(iVar5);
LAB_00d68334:
          if (param_2[0x39] == (int ***)0x0) goto LAB_00d6868c;
          goto LAB_00d67fdc;
        }
        *unaff_r10 = (int ***)0x4;
        param_2[0x1b] = (int ***)0x0;
        param_2[0x34] = (int ***)((int)param_2[0x34] + 1);
        local_90 = ppppiVar6;
        local_8c = ppppiVar8;
        FUN_01bed4e2(&local_88,local_208,0x60);
        unaff_r6 = local_7c;
        ppppiVar11 = local_80;
        unaff_r9 = local_84;
        local_1fc = local_88;
        if (ppppiVar6 == (int ****)&SUB_00000004 && ppppiVar8 == (int ****)0x0) {
          FUN_00d66570(unaff_r10);
          *unaff_r10 = (int ***)0x5;
          param_2[0x1b] = (int ***)0x0;
          unaff_r6 = ppppiVar10;
          unaff_r9 = ppppiVar13;
          local_1fc = unaff_r11;
          break;
        }
        FUN_01bed4e2(&local_160,param_2 + 0x20,0x50);
        if (((uint)ppppiVar6 & 7) != 3) {
          if (ppppiVar6 == (int ****)&DAT_00000005) goto LAB_00d68334;
          unaff_r10 = (int ****)param_2[0x39];
          if (unaff_r10 == (int ****)0x0) {
            ppppiVar12 = (int ****)&local_160;
LAB_00d6842c:
            FUN_01bed4e2(auStack_1b0,ppppiVar12,0x50);
            goto LAB_00d68434;
          }
          if (*param_2 != (int ***)0x3 || param_2[1] != (int ***)0x0) {
            FUN_005f6588(param_2);
            unaff_r10 = (int ****)param_2[0x39];
          }
          *param_2 = (int ***)ppppiVar6;
          param_2[1] = (int ***)ppppiVar8;
          param_2[2] = (int ***)local_1fc;
          param_2[3] = (int ***)unaff_r9;
          param_2[4] = (int ***)ppppiVar11;
          param_2[5] = (int ***)unaff_r6;
          FUN_01bed4e2(param_2 + 6,&local_160,0x50);
          FUN_01283fd8(&local_f8,ppppiVar12,unaff_r10);
          ppppiVar6 = local_ec;
          if (((uint)local_ec & 1) == 0) goto LAB_00d67ffc;
          local_bc = (undefined1 *)((int)local_f4 + ((uint)local_ec >> 5));
          local_c0 = (int ****)((int)local_f8 - ((uint)local_ec >> 5));
          local_c4 = (int ****)((int)local_f0 + ((uint)local_ec >> 5));
          FUN_01283524(&local_1f8,&local_c4);
          local_b8 = (int **)((uint)ppppiVar6 >> 5);
          if (local_1f0 < (int ****)((uint)ppppiVar6 >> 5)) {
            local_88 = (int ****)&local_b4;
            local_b4 = local_1f0;
            local_84 = (int ****)&LAB_01a6a304;
            local_8c = (int ****)&LAB_01a6a304;
            local_90 = (int ****)&local_b8;
                    /* WARNING: Subroutine does not return */
            FUN_012fb100(&DAT_005ac267,&local_90,&DAT_01d2e534);
          }
          goto LAB_00d681f0;
        }
        pppiVar7 = param_2[0x39];
        unaff_r6 = (int ****)param_2[0x36];
        pppiVar9 = param_2[0x37];
        pppiVar1 = pppiVar7;
        if ((uint)((int)param_2[0x3a] - (int)pppiVar7) < 5) {
          FUN_01283c9c(ppppiVar12,5);
          pppiVar1 = param_2[0x39];
          if ((uint)((int)param_2[0x3a] - (int)pppiVar1) < 5) {
            local_c8 = ppppiVar11;
            local_cc = unaff_r9;
            local_d0 = local_1fc;
            local_1f8 = (int ****)0x5;
            local_1f4 = (int ****)((int)param_2[0x3a] - (int)pppiVar1);
                    /* WARNING: Subroutine does not return */
            FUN_01284540(&local_1f8);
          }
        }
        param_2[0x39] = (int ***)((int)pppiVar1 + 5);
        local_f0 = ppppiVar11;
        local_f4 = unaff_r9;
        local_f8 = local_1fc;
        FUN_00effc88(&local_1f8,unaff_r9,ppppiVar11,ppppiVar12);
        if (local_1f8 == (int ****)&DAT_00000001) {
          local_c0 = local_1f0;
          local_c4 = local_1f4;
                    /* WARNING: Subroutine does not return */
          FUN_013073dc(&DAT_003efa56,0x27,&local_c4,&DAT_01c15d9c,&DAT_01c15fbc);
        }
        FUN_00d66698(&local_f8);
        pppiVar1 = param_2[0x39];
        if (pppiVar1 < pppiVar7) {
                    /* WARNING: Subroutine does not return */
          FUN_012faff4(pppiVar7,pppiVar1,pppiVar1,&DAT_01c15f4c);
        }
        FUN_01a745b4(&local_90,unaff_r6,pppiVar9,(int)*ppppiVar12 + (int)pppiVar7,
                     (int)pppiVar1 - (int)pppiVar7);
        if (local_90 != (int ****)&DAT_00000003 || local_8c != (int ****)0x0) {
          ppppiVar12 = (int ****)&local_78;
          ppppiVar6 = local_90;
          ppppiVar8 = local_8c;
          unaff_r6 = local_7c;
          ppppiVar11 = local_80;
          unaff_r9 = local_84;
          local_1fc = local_88;
          goto LAB_00d6842c;
        }
        if (ppppiVar4 <= param_2[0x39]) {
          FUN_01283fd8(&local_f8,ppppiVar12);
          ppppiVar6 = local_ec;
          if (((uint)local_ec & 1) == 0) goto LAB_00d67ffc;
          local_bc = (undefined1 *)((int)local_f4 + ((uint)local_ec >> 5));
          local_c0 = (int ****)((int)local_f8 - ((uint)local_ec >> 5));
          local_c4 = (int ****)((int)local_f0 + ((uint)local_ec >> 5));
          FUN_01283524(&local_1f8,&local_c4);
          local_b8 = (int **)((uint)ppppiVar6 >> 5);
          if (local_1f0 < (int ****)((uint)ppppiVar6 >> 5)) {
            local_88 = (int ****)&local_b4;
            local_b4 = local_1f0;
            local_84 = (int ****)&LAB_01a6a304;
            local_8c = (int ****)&LAB_01a6a304;
            local_90 = (int ****)&local_b8;
                    /* WARNING: Subroutine does not return */
            FUN_012fb100(&DAT_005ac267,&local_90,&DAT_01d2e534);
          }
          goto LAB_00d681f0;
        }
        ppppiVar6 = (int ****)*unaff_r10;
        ppppiVar8 = (int ****)param_2[0x1b];
        ppppiVar10 = unaff_r6;
        ppppiVar13 = unaff_r9;
        unaff_r11 = local_1fc;
      } while (ppppiVar6 != (int ****)&DAT_00000005 || ppppiVar8 != (int ****)0x0);
    }
    if (param_2[0x39] == (int ***)0x0) {
      ppppiVar8 = (int ****)0x0;
      ppppiVar6 = (int ****)&SUB_00000004;
      ppppiVar11 = ppppiVar12;
    }
    else {
LAB_00d67fdc:
      FUN_01283fd8(&local_f8,ppppiVar12);
      ppppiVar6 = local_ec;
      if (((uint)local_ec & 1) == 0) {
LAB_00d67ffc:
        local_1fc = (int ****)&DAT_01d2e520;
        unaff_r6 = local_ec;
        ppppiVar11 = local_f4;
        unaff_r9 = local_f8;
      }
      else {
        local_bc = (undefined1 *)((int)local_f4 + ((uint)local_ec >> 5));
        local_c0 = (int ****)((int)local_f8 - ((uint)local_ec >> 5));
        local_c4 = (int ****)((int)local_f0 + ((uint)local_ec >> 5));
        FUN_01283524(&local_1f8,&local_c4);
        local_b8 = (int **)((uint)ppppiVar6 >> 5);
        if (local_1f0 < (int ****)((uint)ppppiVar6 >> 5)) {
          local_88 = (int ****)&local_b4;
          local_b4 = local_1f0;
          local_84 = (int ****)&LAB_01a6a304;
          local_8c = (int ****)&LAB_01a6a304;
          local_90 = (int ****)&local_b8;
                    /* WARNING: Subroutine does not return */
          FUN_012fb100(&DAT_005ac267,&local_90,&DAT_01d2e534);
        }
LAB_00d681f0:
        ppppiVar11 = (int ****)((int)local_1f0 - (int)local_b8);
        unaff_r9 = (int ****)((int)local_1f4 + (int)local_b8);
        unaff_r6 = local_1ec;
        local_1fc = local_1f8;
      }
      ppppiVar8 = (int ****)0x0;
      ppppiVar6 = (int ****)&DAT_00000003;
    }
LAB_00d68434:
    if (ppppiVar6 == (int ****)&SUB_00000004 && ppppiVar8 == (int ****)0x0) {
      FUN_01a737fc(&local_90,param_2 + 0x42);
      ppppiVar12 = param_2;
      local_1fc = ppppiVar4;
      if (local_90 != (int ****)&SUB_00000004 || local_8c != (int ****)0x0) {
        if (local_90 != (int ****)&DAT_00000003 || local_8c != (int ****)0x0) {
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
        local_208 = local_78;
        local_200 = local_88;
        local_160 = local_70;
        local_15c = ppppiStack_6c;
        local_158 = ppppiStack_68;
        local_154 = ppppiStack_64;
        local_150 = ppppiStack_60;
        local_14c = local_5c;
        local_148 = ppppiStack_58;
        local_144 = ppppiStack_54;
        uStack_140 = uStack_50;
        uStack_13c = uStack_4c;
        ppppiVar12 = local_84;
        unaff_r9 = local_74;
        unaff_r10 = local_7c;
      }
      local_1f8 = local_160;
      local_1f4 = local_15c;
      local_1f0 = local_158;
      local_1ec = local_154;
      ppppiStack_1e8 = local_150;
      local_1e4 = local_14c;
      ppppiStack_1e0 = local_148;
      ppppiStack_1dc = local_144;
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
      ppppiVar6 = local_90;
      ppppiVar8 = local_8c;
LAB_00d68664:
      if (ppppiVar6 != (int ****)&DAT_00000003 || ppppiVar8 != (int ****)0x0) {
        if (ppppiVar6 != (int ****)&SUB_00000004 || ppppiVar8 != (int ****)0x0) {
          if (ppppiVar6 != (int ****)&DAT_00000005 || ppppiVar8 != (int ****)0x0) {
            FUN_01bed4e2(&local_70,&local_1f8,0x48);
            local_88 = local_200;
            local_78 = local_208;
            local_80 = local_1fc;
            local_90 = ppppiVar6;
            local_8c = ppppiVar8;
            local_84 = ppppiVar12;
            local_7c = unaff_r10;
            local_74 = unaff_r9;
            uVar3 = FUN_01a65494(&local_90);
            FUN_01a7467c(param_1,uVar3,&DAT_01d2cc7c);
            return;
          }
          goto LAB_00d6868c;
        }
        uVar3 = 4;
        goto LAB_00d686a0;
      }
    }
    else {
      if (ppppiVar6 != (int ****)&DAT_00000003 || ppppiVar8 != (int ****)0x0) {
        local_160 = ppppiVar6;
        local_15c = ppppiVar8;
        local_158 = local_1fc;
        local_154 = unaff_r9;
        local_150 = ppppiVar11;
        local_14c = unaff_r6;
        FUN_01bed4e2(&local_148,auStack_1b0,0x50);
        unaff_r9 = local_144;
        ppppiVar12 = local_154;
        if (*(char *)(param_2 + 0x5c) == '\x01') {
          *(undefined1 *)((int)param_2 + 0x171) = 1;
          FUN_01a738c0(&local_90,&local_160);
          ppppiVar8 = local_8c;
          ppppiVar6 = local_90;
          local_200 = local_88;
          local_208 = local_78;
          local_1fc = local_80;
          local_f8 = local_70;
          local_f4 = ppppiStack_6c;
          local_f0 = ppppiStack_68;
          local_ec = ppppiStack_64;
          ppppiStack_e8 = ppppiStack_60;
          local_e4 = local_5c;
          ppppiStack_e0 = ppppiStack_58;
          ppppiStack_dc = ppppiStack_54;
          uStack_d8 = uStack_50;
          uStack_d4 = uStack_4c;
          if (local_90 == (int ****)&DAT_00000003 && local_8c == (int ****)0x0) {
            local_1f8 = local_70;
            local_1f4 = ppppiStack_6c;
            local_1f0 = ppppiStack_68;
            local_1ec = ppppiStack_64;
            ppppiStack_1e8 = ppppiStack_60;
            local_1e4 = local_5c;
            ppppiStack_1e0 = ppppiStack_58;
            ppppiStack_1dc = ppppiStack_54;
            uStack_1d8 = uStack_50;
            uStack_1d4 = uStack_4c;
            FUN_005f6588(&local_160);
            ppppiVar8 = (int ****)0x0;
            ppppiVar6 = (int ****)&DAT_00000003;
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
            local_1f4 = ppppiStack_6c;
            local_1f0 = ppppiStack_68;
            local_1ec = ppppiStack_64;
            ppppiStack_1e8 = ppppiStack_60;
            local_1e4 = local_5c;
            ppppiStack_1e0 = ppppiStack_58;
            ppppiStack_1dc = ppppiStack_54;
            uStack_1d8 = uStack_50;
            uStack_1d4 = uStack_4c;
            FUN_005f6588(&local_160);
          }
          unaff_r9 = local_74;
          ppppiVar12 = local_84;
          unaff_r10 = local_7c;
        }
        else {
          local_208 = local_148;
          local_200 = local_158;
          FUN_01bed4e2(&local_1f8,auStack_1a8,0x48);
          unaff_r10 = unaff_r6;
          local_1fc = ppppiVar11;
        }
        goto LAB_00d68664;
      }
      ppppiVar12 = (int ****)0x0;
      local_200 = (int ****)&DAT_00000003;
      unaff_r10 = unaff_r9;
      unaff_r9 = unaff_r6;
      local_208 = ppppiVar11;
    }
    param_1[8] = local_1f8;
    param_1[9] = local_1f4;
    param_1[10] = local_1f0;
    param_1[0xb] = local_1ec;
    param_1[0xc] = ppppiStack_1e8;
    param_1[0xd] = local_1e4;
    param_1[0xe] = ppppiStack_1e0;
    param_1[0xf] = ppppiStack_1dc;
    param_1[0x10] = uStack_1d8;
    param_1[0x11] = uStack_1d4;
    *param_1 = 3;
    param_1[1] = 0;
    param_1[2] = local_200;
    param_1[3] = ppppiVar12;
    param_1[4] = local_1fc;
    param_1[5] = unaff_r10;
    param_1[6] = local_208;
    param_1[7] = unaff_r9;
  }
  else {
    local_1fc = (int ****)param_2[2];
    unaff_r9 = (int ****)param_2[3];
    ppppiVar11 = (int ****)param_2[4];
    unaff_r6 = (int ****)param_2[5];
    FUN_01bed4e2(auStack_1b0,param_2 + 6,0x50);
    if (ppppiVar6 != (int ****)&DAT_00000005 || ppppiVar8 != (int ****)0x0) goto LAB_00d68434;
LAB_00d6868c:
    uVar3 = 5;
LAB_00d686a0:
    *param_1 = uVar3;
    param_1[1] = 0;
  }
  return;
}

