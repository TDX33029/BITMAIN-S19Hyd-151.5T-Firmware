// FUN_016dae30 @ 016dae30 size=856 calls_out=9 calls_in=1
// strings: 

void FUN_016dae30(int *param_1,int *param_2)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  undefined4 *puVar5;
  undefined *puVar6;
  bool bVar7;
  uint uVar8;
  ulonglong uVar9;
  int local_118;
  int local_114;
  uint local_110;
  int local_10c;
  int local_108;
  int iStack_104;
  int local_100;
  undefined4 uStack_fc;
  undefined4 uStack_f8;
  int local_f0;
  int iStack_ec;
  int iStack_e8;
  int iStack_e4;
  int iStack_e0;
  int iStack_dc;
  undefined1 local_d8;
  int local_d0;
  int iStack_cc;
  int iStack_c8;
  int iStack_c4;
  int iStack_c0;
  int iStack_bc;
  undefined4 local_b8;
  undefined4 uStack_b4;
  undefined4 uStack_b0;
  undefined4 uStack_ac;
  undefined4 uStack_a8;
  undefined4 uStack_a4;
  undefined1 local_a0;
  int local_98;
  undefined4 uStack_94;
  undefined4 uStack_90;
  int local_8c;
  undefined4 uStack_88;
  undefined4 uStack_84;
  int local_80;
  undefined4 local_7c;
  int iStack_78;
  int iStack_74;
  int iStack_70;
  int local_6c;
  int iStack_68;
  int iStack_64;
  int iStack_60;
  int iStack_5c;
  int local_58;
  int iStack_54;
  int iStack_50;
  int iStack_4c;
  int iStack_48;
  int iStack_44;
  undefined4 local_40;
  undefined4 local_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  
  iVar1 = *param_2;
  piVar2 = (int *)(iVar1 + 0x50);
  local_100 = *piVar2;
  uStack_fc = *(undefined4 *)(iVar1 + 0x54);
  uStack_f8 = *(undefined4 *)(iVar1 + 0x58);
  local_10c = *piVar2;
  local_108 = *(int *)(iVar1 + 0x54);
  iStack_104 = *(int *)(iVar1 + 0x58);
  bVar7 = false;
  local_110 = 0;
  local_114 = 4;
  local_118 = 0;
  do {
    iVar3 = FUN_016d4a28(param_2);
    if ((iVar3 == 0x3a) || (iVar3 = FUN_016d4a28(param_2), iVar3 == 0x29)) {
      if (!bVar7) {
        iVar3 = *piVar2;
        iVar4 = *(int *)(iVar1 + 0x54);
        iVar1 = *(int *)(iVar1 + 0x58);
        param_1[1] = local_118;
        param_1[2] = local_114;
        param_1[3] = local_110;
        param_1[4] = local_10c;
        param_1[5] = local_108;
        param_1[6] = iStack_104;
        param_1[7] = iVar3;
        param_1[8] = iVar4;
        param_1[9] = iVar1;
        *param_1 = 0x22;
        return;
      }
      local_40 = 0xc;
      FUN_016d4540(&local_80,param_2[1],param_2[2],&local_d0,&local_40);
      goto LAB_016db134;
    }
    iVar3 = FUN_016d4a28(param_2);
    if (iVar3 == 0x2d) {
      FUN_016d4f3c(&local_80,param_2);
      local_d0 = local_80;
      iStack_cc = local_7c;
      iStack_c8 = iStack_78;
      iStack_c4 = iStack_74;
      iStack_c0 = iStack_70;
      iStack_bc = local_6c;
      FUN_016d4f3c(&local_80,param_2);
      local_f0 = local_80;
      iStack_ec = local_7c;
      iStack_e8 = iStack_78;
      iStack_e4 = iStack_74;
      iStack_e0 = iStack_70;
      iStack_dc = local_6c;
      local_d8 = 7;
      uVar9 = FUN_016ec5dc(&local_118);
      uVar8 = (uint)(uVar9 >> 0x20);
      if ((uVar9 & 1) != 0) {
        FUN_016d4f3c(&local_98,param_2);
        if (local_110 <= uVar8) {
          puVar6 = &DAT_01d09d28;
LAB_016db180:
                    /* WARNING: Subroutine does not return */
          FUN_012fb12c(uVar8,local_110,puVar6);
        }
        puVar5 = (undefined4 *)(local_114 + uVar8 * 0x1c);
        local_3c = *puVar5;
        uStack_38 = puVar5[1];
        uStack_34 = puVar5[2];
        uStack_30 = puVar5[3];
        uStack_2c = puVar5[4];
        uStack_28 = puVar5[5];
        local_40 = 0xe;
        FUN_016d4540(&local_80,param_2[1],param_2[2],&local_98,&local_40);
        goto LAB_016db134;
      }
    }
    else {
      FUN_016d4f3c(&local_40,param_2);
      FUN_016db7b0(&local_80,param_2);
      if (local_80 != 0x22) {
        FUN_01bed4e2((int)param_1 + 5,(int)&local_7c + 1,0x3b);
        *(undefined1 *)(param_1 + 1) = (undefined1)local_7c;
        *param_1 = local_80;
        goto LAB_016db150;
      }
      local_b8 = local_40;
      uStack_b4 = local_3c;
      uStack_b0 = uStack_38;
      uStack_ac = uStack_34;
      uStack_a8 = uStack_30;
      uStack_a4 = uStack_2c;
      local_a0 = (undefined1)local_7c;
      uVar9 = FUN_016ec5dc(&local_118);
      uVar8 = (uint)(uVar9 >> 0x20);
      if ((uVar9 & 1) != 0) {
        FUN_016d4f3c(&local_98,param_2);
        if (local_110 <= uVar8) {
          puVar6 = &DAT_01d09d38;
          goto LAB_016db180;
        }
        puVar5 = (undefined4 *)(local_114 + uVar8 * 0x1c);
        local_3c = *puVar5;
        uStack_38 = puVar5[1];
        uStack_34 = puVar5[2];
        uStack_30 = puVar5[3];
        uStack_2c = puVar5[4];
        uStack_28 = puVar5[5];
        local_40 = 0xd;
        FUN_016d4540(&local_80,param_2[1],param_2[2],&local_98,&local_40);
        goto LAB_016db134;
      }
    }
    iVar4 = FUN_016d4fe8(param_2);
    bVar7 = iVar3 == 0x2d;
  } while (iVar4 != 0);
  local_8c = *piVar2;
  uStack_88 = *(undefined4 *)(iVar1 + 0x54);
  uStack_84 = *(undefined4 *)(iVar1 + 0x58);
  local_98 = *piVar2;
  uStack_94 = *(undefined4 *)(iVar1 + 0x54);
  uStack_90 = *(undefined4 *)(iVar1 + 0x58);
  local_40 = 0xf;
  FUN_016d4540(&local_80,param_2[1],param_2[2],&local_98,&local_40);
LAB_016db134:
  *param_1 = local_80;
  param_1[1] = local_7c;
  param_1[2] = iStack_78;
  param_1[3] = iStack_74;
  param_1[4] = iStack_70;
  param_1[5] = local_6c;
  param_1[6] = iStack_68;
  param_1[7] = iStack_64;
  param_1[8] = iStack_60;
  param_1[9] = iStack_5c;
  param_1[10] = local_58;
  param_1[0xb] = iStack_54;
  param_1[0xc] = iStack_50;
  param_1[0xd] = iStack_4c;
  param_1[0xe] = iStack_48;
  param_1[0xf] = iStack_44;
LAB_016db150:
  FUN_0134aee0(local_118,local_114,4,0x1c);
  return;
}

