// FUN_0107aacc @ 0107aacc size=536 calls_out=4 calls_in=0
// strings: 

void FUN_0107aacc(undefined4 *param_1,int param_2)

{
  undefined1 uVar1;
  undefined2 uVar2;
  short sVar3;
  int iVar4;
  undefined4 uVar5;
  undefined2 uVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int local_a4;
  int local_9c;
  undefined2 local_98;
  undefined2 local_96;
  int local_94;
  int local_90;
  int local_8c;
  undefined4 local_88;
  undefined4 uStack_84;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  undefined4 uStack_78;
  undefined2 local_74;
  undefined2 local_72;
  int local_70;
  int local_6c;
  int local_68;
  undefined4 local_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined1 local_58;
  undefined4 local_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined2 local_3a;
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined2 local_26;
  
  uVar2 = *(undefined2 *)(param_2 + 0x50);
  uVar1 = *(undefined1 *)(param_2 + 0x4c);
  if (*(short *)(param_2 + 0xc) == 1) {
    iVar7 = *(int *)(param_2 + 0x18);
    if (iVar7 < 0) {
                    /* WARNING: Subroutine does not return */
      FUN_00600af4(0,iVar7);
    }
    uVar5 = *(undefined4 *)(param_2 + 0x14);
    uVar6 = 1;
    if (iVar7 == 0) {
      local_9c = 0;
      iVar4 = 1;
    }
    else {
      iVar4 = thunk_FUN_016d4a50(iVar7);
      local_9c = iVar7;
      if (iVar4 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_00600af4(1,iVar7);
      }
    }
    FUN_016dd1aa(iVar4,uVar5,iVar7);
    sVar3 = *(short *)(param_2 + 0x30);
  }
  else {
    local_3a = *(undefined2 *)(param_2 + 0xe);
    local_9c = *(int *)(param_2 + 0x10);
    iVar4 = *(int *)(param_2 + 0x14);
    iVar7 = *(int *)(param_2 + 0x18);
    local_50 = *(undefined4 *)(param_2 + 0x1c);
    uStack_4c = *(undefined4 *)(param_2 + 0x20);
    uStack_48 = *(undefined4 *)(param_2 + 0x24);
    uStack_44 = *(undefined4 *)(param_2 + 0x28);
    uStack_40 = *(undefined4 *)(param_2 + 0x2c);
    uVar6 = 0;
    sVar3 = *(short *)(param_2 + 0x30);
  }
  if (sVar3 == 1) {
    iVar9 = *(int *)(param_2 + 0x3c);
    local_a4 = 0;
    if (iVar9 < 0) {
LAB_0107ab58:
                    /* WARNING: Subroutine does not return */
      FUN_00600af4(local_a4,iVar9);
    }
    uVar5 = *(undefined4 *)(param_2 + 0x38);
    if (iVar9 == 0) {
      iVar8 = 1;
    }
    else {
      iVar8 = thunk_FUN_016d4a50(iVar9);
      local_a4 = iVar9;
      if (iVar8 == 0) {
        local_a4 = 1;
        goto LAB_0107ab58;
      }
    }
    FUN_016dd1aa(iVar8,uVar5,iVar9);
    local_74 = 1;
  }
  else {
    local_a4 = *(int *)(param_2 + 0x34);
    local_74 = 0;
    iVar8 = *(int *)(param_2 + 0x38);
    iVar9 = *(int *)(param_2 + 0x3c);
    local_38 = *(undefined4 *)(param_2 + 0x40);
    uStack_34 = *(undefined4 *)(param_2 + 0x44);
    uStack_30 = *(undefined4 *)(param_2 + 0x48);
    local_26 = *(undefined2 *)(param_2 + 0x32);
  }
  local_96 = local_3a;
  local_88 = local_50;
  uStack_84 = uStack_4c;
  uStack_80 = uStack_48;
  uStack_7c = uStack_44;
  uStack_78 = uStack_40;
  local_72 = local_26;
  local_64 = local_38;
  uStack_60 = uStack_34;
  uStack_5c = uStack_30;
  local_70 = local_a4;
  local_98 = uVar6;
  local_94 = local_9c;
  local_90 = iVar4;
  local_8c = iVar7;
  local_6c = iVar8;
  local_68 = iVar9;
  local_58 = uVar1;
  FUN_007b6508(&local_50,*(undefined4 *)(param_2 + 4),*(undefined4 *)(param_2 + 8));
  *(undefined2 *)(param_1 + 0x14) = uVar2;
  FUN_016dd1aa(param_1 + 3,&local_98,0x44);
  *param_1 = local_50;
  param_1[1] = uStack_4c;
  param_1[2] = uStack_48;
  return;
}

