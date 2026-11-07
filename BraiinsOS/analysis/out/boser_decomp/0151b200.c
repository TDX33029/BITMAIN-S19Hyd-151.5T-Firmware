// FUN_0151b200 @ 0151b200 size=1320 calls_out=8 calls_in=1
// strings: else | else | else

/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_0151b200(undefined4 *param_1,undefined4 param_2,undefined4 *param_3,undefined4 param_4)

{
  undefined1 uVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  int *piVar5;
  int *piVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  int iVar9;
  int iVar10;
  int local_148;
  undefined **ppuStack_144;
  int iStack_140;
  int iStack_13c;
  int iStack_138;
  int local_134;
  undefined **local_130;
  int local_12c;
  int iStack_128;
  int iStack_124;
  int local_120;
  undefined **local_11c;
  int local_118;
  int iStack_114;
  int iStack_110;
  int local_108;
  undefined **local_104;
  int local_100;
  int iStack_fc;
  int iStack_f8;
  int local_f0;
  int iStack_ec;
  int iStack_e8;
  int local_e0;
  undefined **local_dc;
  int local_d8;
  int iStack_d4;
  int iStack_d0;
  undefined1 auStack_c8 [136];
  undefined1 local_40;
  int local_38;
  undefined **local_34;
  int local_30;
  int iStack_2c;
  int iStack_28;
  
  uVar8 = *param_3;
  uVar7 = param_3[1];
  iVar2 = FUN_0196b3a8(uVar8,uVar7,&DAT_0056c9d0,4);
  iVar3 = FUN_0196b3a8(uVar8,uVar7,"else",4);
  if (iVar2 == 0) {
    if (iVar3 == 0) {
      uVar7 = 0;
      goto LAB_0151b6f8;
    }
    FUN_01526248(auStack_c8,param_2,"if",2);
    uVar1 = FUN_016731b0(local_40,param_4);
    FUN_0156aca8(&local_38,auStack_c8,param_4,uVar1);
    if (local_38 == 0) goto LAB_0151b678;
    local_d8 = local_30;
    iStack_d4 = iStack_2c;
    iStack_d0 = iStack_28;
    local_e0 = local_38;
    local_dc = local_34;
    FUN_014ff9e0(auStack_c8);
    FUN_01526248(auStack_c8,param_2,"else",4);
    uVar1 = FUN_016731b0(local_40,iVar3);
    FUN_0156aca8(&local_38,auStack_c8,iVar3,uVar1);
    if (local_38 != 0) {
      local_108 = local_30;
      local_104 = (undefined **)iStack_2c;
      local_100 = iStack_28;
      FUN_014ff9e0(auStack_c8);
      local_148 = local_e0;
      ppuStack_144 = local_dc;
      iStack_140 = local_d8;
      iStack_13c = iStack_d4;
      iStack_138 = iStack_d0;
      local_130 = local_34;
      local_134 = local_38;
      local_12c = local_108;
      iStack_128 = (int)local_104;
      iStack_124 = local_100;
      piVar5 = (int *)thunk_FUN_01be5118(0x28);
      if (piVar5 == (int *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_0066439c(4,0x28);
      }
      local_34 = &PTR_FUN_01cfadf0;
      goto LAB_0151b660;
    }
    FUN_014ff9e0(auStack_c8);
LAB_0151b6e0:
    piVar5 = &local_e0;
LAB_0151b6e4:
    FUN_014fdb74(piVar5);
LAB_0151b6e8:
    piVar4 = (int *)0x0;
  }
  else if (iVar3 == 0) {
    FUN_01526248(auStack_c8,param_2,"if",2);
    uVar1 = FUN_016731b0(local_40,param_4);
    FUN_0156aca8(&local_38,auStack_c8,param_4,uVar1);
    if (local_38 == 0) {
      FUN_014ff9e0(auStack_c8);
      goto LAB_0151b6e8;
    }
    local_d8 = local_30;
    iStack_d4 = iStack_2c;
    iStack_d0 = iStack_28;
    local_e0 = local_38;
    local_dc = local_34;
    FUN_014ff9e0(auStack_c8);
    FUN_01526248(auStack_c8,param_2,&DAT_0056c9d0,4);
    uVar1 = FUN_016731b0(local_40,iVar2);
    FUN_0156aca8(&local_38,auStack_c8,iVar2,uVar1);
    if (local_38 == 0) {
      FUN_014ff9e0(auStack_c8);
      goto LAB_0151b6e0;
    }
    local_108 = local_30;
    local_104 = (undefined **)iStack_2c;
    local_100 = iStack_28;
    FUN_014ff9e0(auStack_c8);
    local_148 = local_e0;
    ppuStack_144 = local_dc;
    iStack_140 = local_d8;
    iStack_13c = iStack_d4;
    iStack_138 = iStack_d0;
    local_130 = local_34;
    local_134 = local_38;
    local_12c = local_108;
    iStack_128 = (int)local_104;
    iStack_124 = local_100;
    piVar5 = (int *)thunk_FUN_01be5118(0x28);
    if (piVar5 == (int *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_0066439c(4,0x28);
    }
    local_34 = &PTR_FUN_01cfae10;
LAB_0151b660:
    piVar6 = &local_148;
    piVar4 = piVar5;
LAB_0151b664:
    iVar2 = piVar6[1];
    iVar3 = piVar6[2];
    iVar9 = piVar6[3];
    iVar10 = piVar6[4];
    *piVar5 = *piVar6;
    piVar5[1] = iVar2;
    piVar5[2] = iVar3;
    piVar5[3] = iVar9;
    piVar5[4] = iVar10;
    iVar2 = piVar6[6];
    iVar3 = piVar6[7];
    iVar9 = piVar6[8];
    iVar10 = piVar6[9];
    piVar5[5] = piVar6[5];
    piVar5[6] = iVar2;
    piVar5[7] = iVar3;
    piVar5[8] = iVar9;
    piVar5[9] = iVar10;
  }
  else {
    FUN_01526248(auStack_c8,param_2,"if",2);
    uVar1 = FUN_016731b0(local_40,param_4);
    FUN_0156aca8(&local_38,auStack_c8,param_4,uVar1);
    if (local_38 == 0) {
LAB_0151b678:
      FUN_014ff9e0(auStack_c8);
    }
    else {
      local_100 = local_30;
      iStack_fc = iStack_2c;
      iStack_f8 = iStack_28;
      local_108 = local_38;
      local_104 = local_34;
      FUN_014ff9e0(auStack_c8);
      FUN_01526248(auStack_c8,param_2,&DAT_0056c9d0,4);
      uVar1 = FUN_016731b0(local_40,iVar2);
      FUN_0156aca8(&local_38,auStack_c8,iVar2,uVar1);
      if (local_38 == 0) {
        FUN_014ff9e0(auStack_c8);
        piVar5 = &local_108;
        goto LAB_0151b6e4;
      }
      local_d8 = local_30;
      iStack_d4 = iStack_2c;
      iStack_d0 = iStack_28;
      local_dc = local_34;
      local_e0 = local_38;
      FUN_014ff9e0(auStack_c8);
      FUN_01526248(auStack_c8,param_2,"else",4);
      uVar1 = FUN_016731b0(local_40,iVar3);
      FUN_0156aca8(&local_38,auStack_c8,iVar3,uVar1);
      if (local_38 != 0) {
        local_f0 = local_30;
        iStack_ec = iStack_2c;
        iStack_e8 = iStack_28;
        FUN_014ff9e0(auStack_c8);
        local_148 = local_108;
        ppuStack_144 = local_104;
        iStack_140 = local_100;
        iStack_13c = iStack_fc;
        iStack_138 = iStack_f8;
        local_134 = local_e0;
        local_130 = local_dc;
        local_12c = local_d8;
        iStack_128 = iStack_d4;
        iStack_124 = iStack_d0;
        local_11c = local_34;
        local_120 = local_38;
        local_118 = local_f0;
        iStack_114 = iStack_ec;
        iStack_110 = iStack_e8;
        piVar4 = (int *)thunk_FUN_01be5118(0x3c);
        if (piVar4 == (int *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_0066439c(4,0x3c);
        }
        piVar6 = &local_134;
        local_34 = (undefined **)&DAT_01cfae30;
        *piVar4 = local_148;
        piVar4[1] = (int)ppuStack_144;
        piVar4[2] = iStack_140;
        piVar4[3] = iStack_13c;
        piVar4[4] = iStack_138;
        piVar5 = piVar4 + 5;
        goto LAB_0151b664;
      }
      FUN_014ff9e0(auStack_c8);
      FUN_014fdb74(&local_e0);
      FUN_014fdb74(&local_108);
    }
    piVar4 = (int *)0x0;
  }
  uVar7 = 1;
  param_1[1] = piVar4;
  param_1[2] = local_34;
LAB_0151b6f8:
  *param_1 = uVar7;
  return;
}

