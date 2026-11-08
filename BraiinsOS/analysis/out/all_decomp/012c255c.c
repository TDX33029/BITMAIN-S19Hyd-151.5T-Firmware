// FUN_012c255c @ 012c255c size=644 calls_out=8 calls_in=0
// strings: 

void FUN_012c255c(undefined4 *param_1,int param_2)

{
  char cVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  undefined4 uVar7;
  int iVar8;
  int local_d4;
  int local_c4;
  int local_a8;
  undefined4 local_a0;
  undefined4 local_9c;
  undefined4 local_90;
  undefined4 local_8c;
  undefined4 local_88;
  undefined4 local_84;
  undefined4 local_80;
  undefined1 local_7c;
  undefined4 local_78;
  undefined1 local_74;
  undefined4 local_70;
  undefined1 local_6c;
  undefined4 local_68;
  undefined1 local_64;
  undefined4 local_60;
  undefined1 local_5c;
  undefined4 local_58;
  undefined4 local_54;
  undefined4 local_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined4 local_40;
  undefined4 local_3c;
  undefined8 local_38;
  undefined4 local_30;
  undefined4 local_2c;
  
  piVar2 = (int *)thunk_FUN_016d4a50(0x3c);
  if (piVar2 == (int *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_00600874(4,0x3c);
  }
  iVar6 = *(int *)(param_2 + 0x28);
  uVar7 = *(undefined4 *)(param_2 + 0x24);
  iVar5 = 1;
  iVar4 = 1;
  if (iVar6 != 0) {
    iVar4 = thunk_FUN_016d4a50(iVar6);
    iVar8 = iVar6;
    if (iVar4 == 0) goto LAB_012c27d8;
  }
  FUN_016dd1aa(iVar4,uVar7,iVar6);
  uVar7 = *(undefined4 *)(param_2 + 0x30);
  iVar8 = *(int *)(param_2 + 0x34);
  local_d4 = CONCAT31((int3)((uint)local_d4 >> 8),1);
  if ((iVar8 == 0) || (iVar5 = thunk_FUN_016d4a50(iVar8), iVar5 != 0)) {
    FUN_016dd1aa(iVar5,uVar7,iVar8);
    local_a8 = CONCAT31(local_a8._1_3_,*(undefined1 *)(param_2 + 0x5c));
    local_c4 = CONCAT31((int3)((uint)local_c4 >> 8),1);
    iVar3 = thunk_FUN_016d4a50(0x50);
    if (iVar3 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_00600874(8,0x50);
    }
    local_9c = 0;
    local_a0 = 0;
    local_5c = 0;
    local_60 = 0;
    local_64 = 0;
    local_68 = 0;
    local_6c = 0;
    local_70 = 0;
    local_74 = 0;
    local_78 = 0;
    local_8c = 4;
    local_90 = 0;
    local_54 = 0;
    local_58 = 0;
    local_88 = 0;
    local_84 = 0;
    local_80 = 0;
    local_7c = 0;
    FUN_012b7bd8(&local_40,*(undefined4 *)(param_2 + 0x54),*(undefined4 *)(param_2 + 0x58));
    local_84 = (undefined4)local_38;
    local_50 = local_40;
    uStack_4c = local_3c;
    uStack_48 = (undefined4)local_38;
    local_90 = local_40;
    local_8c = local_3c;
    local_88 = (undefined4)local_38;
    cVar1 = *(char *)(param_2 + 0x5c);
    local_38 = FUN_01845d5c(*(undefined4 *)(param_2 + 8),*(undefined4 *)(param_2 + 0xc));
    ClearExclusiveLocal();
    if (cVar1 == '\0') {
      local_3c = 0;
      local_40 = 1;
      local_2c = 0;
      local_30 = 0;
      FUN_01296db8(&local_a0,&local_40);
    }
    else {
      local_3c = 0;
      local_40 = 1;
      local_2c = 0;
      local_30 = 0;
      FUN_0129714c(&local_a0,&local_40);
    }
    FUN_016dd1aa(iVar3,&local_a0,0x50);
    *piVar2 = iVar6;
    piVar2[1] = iVar4;
    piVar2[2] = iVar6;
    piVar2[3] = local_d4;
    piVar2[4] = iVar8;
    piVar2[5] = iVar5;
    piVar2[6] = iVar8;
    piVar2[7] = local_c4;
    piVar2[8] = 1;
    piVar2[9] = iVar3;
    piVar2[10] = 1;
    piVar2[0xb] = 1;
    piVar2[0xc] = 0;
    piVar2[0xd] = 0;
    piVar2[0xe] = local_a8;
    *param_1 = 1;
    param_1[1] = piVar2;
    param_1[2] = 1;
    return;
  }
LAB_012c27d8:
                    /* WARNING: Subroutine does not return */
  FUN_00600af4(1,iVar8);
}

