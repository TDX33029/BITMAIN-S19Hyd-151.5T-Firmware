// FUN_00e9d780 @ 00e9d780 size=1216 calls_out=10 calls_in=2
// strings: Failed to retrieve current network configuration

void FUN_00e9d780(int *param_1,undefined4 *param_2,undefined4 param_3)

{
  int **ppiVar1;
  undefined4 **ppuVar2;
  int **ppiVar3;
  int **ppiVar4;
  undefined1 uVar5;
  int iVar6;
  int **ppiVar7;
  undefined4 uVar8;
  undefined *puVar9;
  int **ppiVar10;
  int **ppiVar11;
  undefined4 ***pppuVar12;
  undefined4 ***pppuVar13;
  undefined4 ***pppuVar14;
  int **ppiVar15;
  undefined4 **local_12c;
  int local_128;
  undefined4 **local_124;
  undefined4 **local_120;
  int local_118;
  undefined4 **local_114;
  int **local_110;
  int **local_10c;
  int **local_108;
  undefined4 ***local_104;
  int **local_100;
  undefined4 ***local_fc;
  int **local_f8;
  undefined4 **local_f4;
  undefined4 **local_f0;
  undefined4 **local_ec;
  int local_e8;
  int **local_e4;
  undefined4 ***local_e0;
  undefined *puStack_dc;
  int iStack_d8;
  int local_d4;
  int iStack_d0;
  int iStack_cc;
  int iStack_c8;
  int local_c4;
  int iStack_c0;
  int iStack_bc;
  int iStack_b8;
  int iStack_b4;
  undefined4 ***local_b0;
  undefined4 **local_ac;
  undefined4 **local_a8;
  int **local_a4;
  int **ppiStack_a0;
  undefined4 ***local_9c;
  int **ppiStack_98;
  undefined4 **ppuStack_94;
  undefined4 **ppuStack_90;
  undefined4 **local_88;
  undefined4 **ppuStack_84;
  int **ppiStack_80;
  int **ppiStack_7c;
  undefined4 ***local_78;
  int **ppiStack_74;
  undefined4 **ppuStack_70;
  undefined4 **ppuStack_6c;
  undefined4 ***local_68;
  undefined *puStack_64;
  int iStack_60;
  int local_58;
  int iStack_54;
  int iStack_50;
  int iStack_4c;
  int local_48;
  int iStack_44;
  int iStack_40;
  int iStack_3c;
  int iStack_38;
  int **local_34;
  int **local_30;
  undefined4 ***local_2c;
  undefined1 uStack_25;
  
  pppuVar12 = &local_10c;
  pppuVar13 = &local_114;
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
  switch(*(undefined1 *)(param_2 + 3)) {
  case 0:
    uVar8 = FUN_00b7b8e0(*(int *)*param_2 + 8);
    puVar9 = &DAT_01c13630;
    param_2[1] = uVar8;
    param_2[2] = &DAT_01c13630;
    break;
  case 1:
                    /* WARNING: Subroutine does not return */
    FUN_013079f0(&DAT_01c181bc);
  case 2:
                    /* WARNING: Subroutine does not return */
    FUN_01307a10(&DAT_01c181bc);
  case 3:
    uVar8 = param_2[1];
    puVar9 = (undefined *)param_2[2];
  }
  (**(code **)(puVar9 + 0xc))(&local_b0,uVar8,param_3);
  if (local_b0 == (undefined4 ***)0x80000002) {
    *param_1 = 4;
    param_1[1] = 0;
    uVar5 = 3;
    goto LAB_00e9dba8;
  }
  local_88 = local_ac;
  ppuStack_84 = local_a8;
  ppiStack_80 = local_a4;
  ppiStack_7c = ppiStack_a0;
  local_78 = local_9c;
  ppiStack_74 = ppiStack_98;
  ppuStack_70 = ppuStack_94;
  ppuStack_6c = ppuStack_90;
  FUN_01139b38(param_2[1],param_2[2]);
  if (local_b0 == (undefined4 ***)0x80000001) {
    FUN_01a71aac(&local_118,0xd,"Failed to retrieve current network configuration",0x30);
    if (local_118 == 3 && local_114 == (undefined4 **)0x0) {
      pppuVar14 = (undefined4 ***)local_110;
      goto LAB_00e9d8a8;
    }
    local_120 = local_10c;
    local_12c = local_f0;
    local_124 = local_ec;
    local_128 = local_e8;
    local_68 = local_e0;
    puStack_64 = puStack_dc;
    iStack_60 = iStack_d8;
    local_58 = local_d4;
    iStack_54 = iStack_d0;
    iStack_50 = iStack_cc;
    iStack_4c = iStack_c8;
    local_48 = local_c4;
    iStack_44 = iStack_c0;
    iStack_40 = iStack_bc;
    iStack_3c = iStack_b8;
    iStack_38 = iStack_b4;
  }
  else {
    local_10c = local_88;
    local_108 = ppuStack_84;
    local_104 = (undefined4 ***)ppiStack_80;
    local_100 = ppiStack_7c;
    local_fc = local_78;
    local_f8 = ppiStack_74;
    local_f4 = ppuStack_70;
    local_f0 = ppuStack_6c;
    pppuVar14 = local_b0;
LAB_00e9d8a8:
    ppiVar4 = local_108;
    ppiVar3 = local_10c;
    local_120 = local_f4;
    ppiVar1 = local_f8;
    ppuVar2 = local_f0;
    if (local_f8 == (int **)0x80000000) {
      local_120 = (undefined4 **)0x1;
      ppiVar1 = (int **)0x0;
      ppuVar2 = (undefined4 **)0x0;
    }
    if (pppuVar14 == (undefined4 ***)0x80000000) {
      ppiVar10 = (int **)0x80000000;
      ppiVar15 = (int **)0x80000000;
      ppiVar7 = local_f8;
      ppiVar11 = local_120;
    }
    else {
      local_10c = (int **)local_104;
      local_2c = (undefined4 ***)0x0;
      local_34 = (int **)0x0;
      local_a4 = (int **)0x0;
      local_114 = ppiVar3;
      local_110 = local_108;
      local_a8 = (undefined4 **)0x60000020;
      local_104 = local_fc;
      local_108 = local_100;
      local_ac = (undefined4 **)&DAT_01c18084;
      local_30 = (int **)0x1;
      local_b0 = &local_34;
      iVar6 = FUN_013095bc(pppuVar12,&local_b0);
      pppuVar12 = local_2c;
      ppiVar7 = local_30;
      ppiVar10 = local_34;
      if (iVar6 != 0) {
                    /* WARNING: Subroutine does not return */
        FUN_013073dc(&DAT_00533383,0x37,&uStack_25,&DAT_01c180dc,&DAT_01d30334);
      }
      local_2c = (undefined4 ***)0x0;
      local_34 = (int **)0x0;
      local_a4 = (int **)0x0;
      local_30 = (undefined4 **)0x1;
      local_a8 = (undefined4 **)0x60000020;
      local_ac = (undefined4 **)&DAT_01c18084;
      local_b0 = &local_34;
      iVar6 = FUN_013095bc(&local_108,&local_b0);
      local_12c = local_2c;
      ppiVar11 = local_30;
      ppiVar15 = local_34;
      if (iVar6 != 0) {
                    /* WARNING: Subroutine does not return */
        FUN_013073dc(&DAT_00533383,0x37,&uStack_25,&DAT_01c180dc,&DAT_01d30334);
      }
      local_2c = (undefined4 ***)0x0;
      local_34 = (undefined4 **)0x0;
      local_a4 = (int **)0x0;
      local_30 = (int **)0x1;
      local_a8 = (undefined4 **)0x60000020;
      local_ac = (undefined4 **)&DAT_01c18084;
      local_b0 = &local_34;
      iVar6 = FUN_013095bc(&local_104,&local_b0);
      pppuVar13 = local_2c;
      if (iVar6 != 0) {
                    /* WARNING: Subroutine does not return */
        FUN_013073dc(&DAT_00533383,0x37,&uStack_25,&DAT_01c180dc,&DAT_01d30334);
      }
      local_124 = local_34;
      local_128 = (int)local_30;
      FUN_00745308(&local_b0,ppiVar3,ppiVar3 + (int)ppiVar4);
      local_68 = local_b0;
      puStack_64 = (undefined *)local_ac;
      iStack_60 = (int)local_a8;
      FUN_0134aee0(pppuVar14,ppiVar3,1,4);
    }
    local_114 = (undefined4 **)0x0;
    local_118 = 3;
    local_100 = ppiVar7;
    local_110 = ppiVar1;
    local_108 = ppuVar2;
    local_104 = (undefined4 ***)ppiVar10;
    local_f4 = ppiVar11;
    local_fc = pppuVar12;
    local_e4 = (int **)pppuVar13;
    local_f8 = ppiVar15;
  }
  param_1[6] = (int)local_100;
  param_1[0xb] = (int)local_124;
  param_1[3] = (int)local_120;
  param_1[0xc] = local_128;
  param_1[10] = (int)local_12c;
  param_1[9] = (int)local_f4;
  param_1[5] = (int)local_104;
  param_1[8] = (int)local_f8;
  param_1[0xd] = (int)local_e4;
  *param_1 = local_118;
  param_1[1] = (int)local_114;
  param_1[2] = (int)local_110;
  param_1[4] = (int)local_108;
  param_1[7] = (int)local_fc;
  param_1[0xe] = (int)local_68;
  param_1[0xf] = (int)puStack_64;
  param_1[0x10] = iStack_60;
  param_1[0x11] = local_58;
  param_1[0x12] = iStack_54;
  param_1[0x13] = iStack_50;
  param_1[0x14] = iStack_4c;
  param_1[0x15] = local_48;
  param_1[0x16] = iStack_44;
  param_1[0x17] = iStack_40;
  param_1[0x18] = iStack_3c;
  param_1[0x19] = iStack_38;
  uVar5 = 1;
LAB_00e9dba8:
  *(undefined1 *)(param_2 + 3) = uVar5;
  return;
}

