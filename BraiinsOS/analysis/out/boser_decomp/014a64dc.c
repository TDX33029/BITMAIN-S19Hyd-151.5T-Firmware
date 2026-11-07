// FUN_014a64dc @ 014a64dc size=508 calls_out=7 calls_in=0
// strings: BUG: response serialization failedAPI

/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_014a64dc(undefined4 *param_1,undefined4 param_2,undefined4 *param_3,int *param_4)

{
  undefined1 uVar1;
  int iVar2;
  int *piVar3;
  undefined1 *puVar4;
  undefined4 uVar5;
  int iVar6;
  undefined4 uVar7;
  int unaff_r8;
  int iVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  int in_r12;
  int unaff_lr;
  int local_74;
  int local_60;
  int iStack_5c;
  int iStack_58;
  undefined4 uStack_54;
  int local_50;
  int local_4c;
  int local_48;
  undefined4 local_40;
  int local_3c;
  int iStack_38;
  undefined4 uStack_34;
  
  iVar10 = *param_4;
  if (iVar10 == -0x80000000) {
    local_74 = -0x80000000;
LAB_014a6660:
    uVar5 = param_3[1];
    uVar7 = param_3[2];
    param_1[0xc] = *param_3;
    param_1[0xd] = uVar5;
    param_1[0xe] = uVar7;
    *(undefined1 *)(param_1 + 6) = 4;
    *param_1 = 0;
    param_1[1] = param_2;
    param_1[2] = local_74;
    param_1[3] = in_r12;
    param_1[4] = unaff_lr;
    *(undefined1 *)(param_1 + 0xf) = 2;
    param_1[7] = unaff_r8;
    param_1[8] = local_60;
    param_1[9] = iStack_5c;
    param_1[10] = iStack_58;
    param_1[0xb] = uStack_54;
    return;
  }
  unaff_lr = param_4[4];
  iVar6 = param_4[1];
  if (unaff_lr < 0) {
    uVar5 = 0;
LAB_014a6518:
                    /* WARNING: Subroutine does not return */
    FUN_00664620(uVar5,unaff_lr);
  }
  iVar8 = param_4[3];
  if (unaff_lr == 0) {
    in_r12 = 1;
    local_74 = 0;
  }
  else {
    uVar5 = 1;
    in_r12 = FUN_01298504(unaff_lr,1);
    if (in_r12 == 0) goto LAB_014a6518;
    local_74 = unaff_lr;
  }
  FUN_01bed4e2(in_r12,iVar8,unaff_lr);
  iVar9 = param_4[2];
  FUN_0196aa8c(&local_40,iVar9);
  unaff_r8 = local_3c;
  iVar8 = local_40;
  if (local_40 == -0x80000000) {
    FUN_019bb7e0(iVar10,iVar6);
  }
  else {
    local_50 = local_40;
    local_4c = local_3c;
    local_48 = iStack_38;
    piVar3 = (int *)((uint)&local_50 | 4);
    for (iVar11 = 0; iVar2 = local_48, unaff_r8 = local_50, iVar9 != iVar11; iVar11 = iVar11 + 1) {
      uVar1 = *(undefined1 *)(iVar6 + iVar11);
      local_40._0_2_ = CONCAT11(uVar1,1);
      if (local_48 == local_50) {
        FUN_01969b6c(&local_50);
      }
      puVar4 = (undefined1 *)(local_4c + iVar2 * 0x18);
      *puVar4 = 1;
      puVar4[1] = uVar1;
      local_48 = iVar2 + 1;
    }
    local_40 = *piVar3;
    local_3c = piVar3[1];
    FUN_019bb7e0(iVar10,iVar6);
    if (iVar8 != -0x80000000) {
      local_60 = local_40;
      iStack_5c = local_3c;
      iStack_58 = iStack_38;
      uStack_54 = uStack_34;
      goto LAB_014a6660;
    }
  }
  local_50 = unaff_r8;
                    /* WARNING: Subroutine does not return */
  FUN_013073dc("BUG: response serialization failedAPI",0x22,&local_50,&DAT_01cf9524,&DAT_01cf9514);
}

