// FUN_01642210 @ 01642210 size=1160 calls_out=14 calls_in=3
// strings: Missing TCA_ACT_KIND | Duplicate TCA_ACT_KIND

void FUN_01642210(undefined4 *param_1,undefined4 param_2,undefined4 param_3)

{
  undefined4 **ppuVar1;
  undefined4 **ppuVar2;
  undefined4 **ppuVar3;
  undefined2 uVar4;
  int iVar5;
  int *piVar6;
  int *piVar7;
  undefined8 uVar8;
  undefined4 **local_e4;
  int *local_e0;
  undefined4 **local_d8;
  int *piStack_d4;
  undefined4 **ppuStack_d0;
  undefined4 **local_c8;
  int *local_c4;
  undefined4 **local_c0;
  undefined4 **local_b8;
  int *piStack_b4;
  undefined4 **ppuStack_b0;
  undefined4 **local_a8;
  int *local_a4;
  undefined4 **local_a0;
  undefined4 **local_98;
  int *local_94;
  undefined4 **local_90;
  undefined8 local_88;
  undefined4 **ppuStack_80;
  undefined4 ***local_7c;
  undefined4 ***local_78;
  undefined4 **local_70;
  int *local_6c;
  undefined4 **local_68;
  int local_60;
  int iStack_5c;
  int iStack_58;
  int iStack_54;
  undefined8 local_50;
  undefined4 **local_48;
  undefined4 ***pppuStack_44;
  undefined4 ***pppuStack_40;
  int local_38;
  int iStack_34;
  int iStack_30;
  int iStack_2c;
  
  local_88 = FUN_01623bf0(param_2,param_3);
  local_7c = &local_b8;
  local_b8 = (undefined4 **)&DAT_80000000;
  ppuStack_80 = (undefined4 **)0x0;
  FUN_0162e998(&local_50,&local_88);
  if ((undefined1 *)local_50 == &DAT_80000000) {
    local_a0 = (undefined4 **)0x0;
    local_a4 = (int *)&SUB_00000004;
    local_a8 = (undefined4 **)0x0;
  }
  else {
    piVar6 = (int *)thunk_FUN_01be5118(0x30);
    if (piVar6 == (int *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_00664620(4,0x30);
    }
    *piVar6 = (int)(undefined1 *)local_50;
    piVar6[1] = (int)local_50._4_4_;
    piVar6[2] = (int)local_48;
    local_90 = (undefined4 **)&DAT_00000001;
    local_98 = (undefined4 **)&SUB_00000004;
    local_48 = ppuStack_80;
    pppuStack_44 = local_7c;
    iVar5 = 0;
    local_94 = piVar6;
    local_50 = local_88;
    while( true ) {
      ppuVar1 = local_90;
      FUN_0162e998(&local_70,&local_50);
      ppuVar3 = local_68;
      piVar7 = local_6c;
      ppuVar2 = local_70;
      if (local_70 == (undefined4 **)&DAT_80000000) break;
      if (ppuVar1 == local_98) {
        FUN_006520b4(&local_98,ppuVar1,1,4,0xc);
        piVar6 = local_94;
      }
      local_90 = (undefined4 **)((int)ppuVar1 + 1);
      *(undefined4 ***)((int)piVar6 + iVar5 + 0xc) = ppuVar2;
      *(int **)((int)piVar6 + iVar5 + 0x10) = piVar7;
      *(undefined4 ***)((int)piVar6 + iVar5 + 0x14) = ppuVar3;
      iVar5 = iVar5 + 0xc;
    }
    local_a8 = local_98;
    local_a4 = local_94;
    local_a0 = local_90;
  }
  if (local_b8 == (undefined4 **)&DAT_80000000) {
    local_c8 = local_a8;
    local_c4 = local_a4;
    local_c0 = local_a0;
    if (local_a0 != (undefined4 **)&DAT_00000001) {
      if (local_a0 == (undefined4 **)0x0) {
        FUN_0160f520(&local_50,"Missing TCA_ACT_KIND",0x14);
      }
      else {
        FUN_0160f520(&local_50,"Duplicate TCA_ACT_KIND",0x16);
      }
      *(undefined8 *)(param_1 + 1) = local_50;
      param_1[3] = local_48;
      *param_1 = 0x80000000;
      FUN_006a41c0(&local_c8);
      return;
    }
    FUN_006666fc(&local_e4,local_a4[1],local_a4[2]);
    FUN_006a41c0(&local_c8);
    uVar8 = FUN_01623bf0(param_2,param_3);
    local_a8 = (undefined4 **)&DAT_80000000;
    ppuStack_80 = (undefined4 **)0x0;
    local_7c = &local_e4;
    local_78 = &local_a8;
    local_88 = uVar8;
    FUN_0162d728(&local_60,&local_88);
    if (local_60 == -0x7ffffffa) {
      local_90 = (undefined4 **)0x0;
      local_94 = (int *)&SUB_00000004;
      local_98 = (undefined4 **)0x0;
    }
    else {
      piVar6 = (int *)thunk_FUN_01be5118(0x40);
      if (piVar6 == (int *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_00664620(4,0x40);
      }
      *piVar6 = local_60;
      piVar6[1] = iStack_5c;
      piVar6[2] = iStack_58;
      piVar6[3] = iStack_54;
      local_70 = (undefined4 **)&SUB_00000004;
      local_68 = (undefined4 **)&DAT_00000001;
      local_48 = ppuStack_80;
      pppuStack_44 = local_7c;
      pppuStack_40 = local_78;
      local_6c = piVar6;
      local_50 = local_88;
      while( true ) {
        ppuVar1 = local_68;
        FUN_0162d728(&local_38,&local_50);
        if (local_38 == -0x7ffffffa) break;
        if (ppuVar1 == local_70) {
          FUN_006520b4(&local_70,ppuVar1,1,4,0x10);
          piVar6 = local_6c;
        }
        piVar7 = piVar6 + (int)ppuVar1 * 4;
        local_68 = (undefined4 **)((int)ppuVar1 + 1);
        *piVar7 = local_38;
        piVar7[1] = iStack_34;
        piVar7[2] = iStack_30;
        piVar7[3] = iStack_2c;
      }
      local_98 = local_70;
      local_94 = local_6c;
      local_90 = local_68;
    }
    if (local_a8 == (undefined4 **)&DAT_80000000) {
      local_b8 = local_98;
      piStack_b4 = local_94;
      ppuStack_b0 = local_90;
      local_c8 = local_98;
      local_c4 = local_94;
      local_c0 = local_90;
      local_d8 = local_98;
      piStack_d4 = local_94;
      ppuStack_d0 = local_90;
      uVar4 = FUN_01623bc0(param_2,param_3);
      *param_1 = local_d8;
      param_1[1] = piStack_d4;
      param_1[2] = ppuStack_d0;
      *(undefined2 *)(param_1 + 3) = uVar4;
      goto LAB_01642430;
    }
    local_b8 = local_a8;
    piStack_b4 = local_a4;
    ppuStack_b0 = local_a0;
    FUN_0162ed54(&local_98);
    local_c8 = local_b8;
    local_c4 = piStack_b4;
    local_c0 = ppuStack_b0;
    param_1[1] = local_b8;
    param_1[2] = piStack_b4;
    param_1[3] = ppuStack_b0;
  }
  else {
    local_c8 = local_b8;
    local_c4 = piStack_b4;
    local_c0 = ppuStack_b0;
    FUN_006a41c0(&local_a8);
    local_88._0_4_ = local_c8;
    local_88._4_4_ = local_c4;
    ppuStack_80 = local_c0;
    local_48 = (undefined4 **)0x0;
    local_50._4_4_ = &DAT_00000001;
    local_50._0_4_ = (undefined1 *)0x0;
    local_6c = (int *)&LAB_00632348;
    local_70 = (undefined4 **)&local_88;
    iVar5 = FUN_012fa178(&local_50,&DAT_01d06418,&DAT_00590e5f,&local_70);
    if (iVar5 != 0) {
                    /* WARNING: Subroutine does not return */
      FUN_013073dc(&DAT_00533383,0x37,&local_70,&DAT_01d06430,&DAT_01d30334);
    }
    param_1[1] = (undefined1 *)local_50;
    param_1[2] = local_50._4_4_;
    param_1[3] = local_48;
    local_e4 = (undefined4 **)local_88;
    local_e0 = local_88._4_4_;
  }
  *param_1 = 0x80000000;
LAB_01642430:
  FUN_0134bd64(local_e4,local_e0);
  return;
}

