// FUN_005b85f0 @ 005b85f0 size=960 calls_out=8 calls_in=6
// strings: 

int FUN_005b85f0(int param_1,undefined4 param_2,undefined4 param_3)

{
  byte bVar1;
  undefined1 uVar2;
  uint uVar3;
  undefined4 uVar4;
  int *piVar5;
  int iVar6;
  byte *pbVar7;
  int iVar8;
  int local_60;
  int iStack_5c;
  int local_58;
  int local_50;
  int local_4c;
  int local_48;
  int local_3c;
  int local_38;
  undefined4 local_34;
  undefined4 local_30;
  int local_2c;
  undefined4 local_28;
  
  piVar5 = &local_60;
  if (*(char *)(param_1 + 0x2c) != '\x01') {
    pbVar7 = *(byte **)(param_1 + 0x18);
    if (*(int *)(param_1 + 0x1c) != 0) {
      *(int *)(param_1 + 0x1c) = *(int *)(param_1 + 0x1c) + -1;
      bVar1 = *pbVar7;
      uVar3 = (uint)bVar1;
      iVar6 = *(int *)(param_1 + 0x24) + 1;
      *(byte **)(param_1 + 0x18) = pbVar7 + 1;
      if (uVar3 == 10) {
        *(int *)(param_1 + 0x28) = iVar6 + *(int *)(param_1 + 0x28);
        *(int *)(param_1 + 0x20) = *(int *)(param_1 + 0x20) + 1;
        iVar6 = 0;
      }
      *(byte *)(param_1 + 0x2d) = bVar1;
      *(undefined1 *)(param_1 + 0x2c) = 1;
      *(int *)(param_1 + 0x24) = iVar6;
      goto joined_r0x005b8780;
    }
    *(byte **)(param_1 + 0x18) = pbVar7;
LAB_005b8804:
    local_30 = 10;
    uVar4 = FUN_0157c50c(&local_30,*(undefined4 *)(param_1 + 0x20),*(undefined4 *)(param_1 + 0x24));
    goto LAB_005b8820;
  }
  uVar3 = (uint)*(byte *)(param_1 + 0x2d);
joined_r0x005b8780:
  if (0x20 < uVar3 - 0x5b) {
    iVar6 = param_1 + 0xc;
    if (uVar3 != 0x22) {
      if (uVar3 != 0x2d) goto switchD_005b862c_caseD_5c;
      uVar2 = *(undefined1 *)(param_1 + 0x2d);
      *(undefined1 *)(param_1 + 0x2c) = 0;
      if (*(int *)(param_1 + 0xc) != -0x80000000) {
        iVar8 = *(int *)(param_1 + 0x14);
        if (iVar8 == *(int *)(param_1 + 0xc)) {
          FUN_006029c0(iVar6);
        }
        *(undefined1 *)(*(int *)(param_1 + 0x10) + iVar8) = uVar2;
        *(int *)(param_1 + 0x14) = iVar8 + 1;
      }
      FUN_005b6d34(&local_60,param_1,0);
      if (local_60 == 3 && iStack_5c == 0) {
        return local_58;
      }
      goto LAB_005b89e4;
    }
    uVar2 = *(undefined1 *)(param_1 + 0x2d);
    *(undefined1 *)(param_1 + 0x2c) = 0;
    if (*(int *)(param_1 + 0xc) != -0x80000000) {
      iVar8 = *(int *)(param_1 + 0x14);
      if (iVar8 == *(int *)(param_1 + 0xc)) {
        FUN_006029c0(iVar6);
      }
      *(undefined1 *)(*(int *)(param_1 + 0x10) + iVar8) = uVar2;
      *(int *)(param_1 + 0x14) = iVar8 + 1;
    }
    *(undefined4 *)(param_1 + 8) = 0;
    FUN_00ef8e3c(&local_3c,iVar6,param_1);
    if (local_3c == 2) {
      return local_38;
    }
    local_2c = local_38;
    uVar2 = 5;
    local_28 = local_34;
    goto LAB_005b89bc;
  }
  iVar6 = param_1 + 0xc;
  switch(uVar3) {
  case 0x5b:
    uVar2 = 10;
    break;
  default:
switchD_005b862c_caseD_5c:
    if (9 < uVar3 - 0x30) goto LAB_005b8804;
    FUN_005b6d34(&local_50,param_1,1);
    if (local_50 == 3 && local_4c == 0) {
      return local_48;
    }
    piVar5 = &local_50;
LAB_005b89e4:
    uVar4 = FUN_0157b7ec(piVar5,param_2,param_3);
    goto LAB_005b8820;
  case 0x66:
    uVar2 = *(undefined1 *)(param_1 + 0x2d);
    *(undefined1 *)(param_1 + 0x2c) = 0;
    if (*(int *)(param_1 + 0xc) != -0x80000000) {
      iVar8 = *(int *)(param_1 + 0x14);
      if (iVar8 == *(int *)(param_1 + 0xc)) {
        FUN_006029c0(iVar6);
      }
      *(undefined1 *)(*(int *)(param_1 + 0x10) + iVar8) = uVar2;
      *(int *)(param_1 + 0x14) = iVar8 + 1;
    }
    iVar6 = FUN_005b6090(param_1,&DAT_00568edc,4);
    if (iVar6 != 0) {
      return iVar6;
    }
    local_30 = (uint)local_30._2_2_ << 0x10;
    goto LAB_005b89c0;
  case 0x6e:
    uVar2 = *(undefined1 *)(param_1 + 0x2d);
    *(undefined1 *)(param_1 + 0x2c) = 0;
    if (*(int *)(param_1 + 0xc) != -0x80000000) {
      iVar8 = *(int *)(param_1 + 0x14);
      if (iVar8 == *(int *)(param_1 + 0xc)) {
        FUN_006029c0(iVar6);
      }
      *(undefined1 *)(*(int *)(param_1 + 0x10) + iVar8) = uVar2;
      *(int *)(param_1 + 0x14) = iVar8 + 1;
    }
    iVar6 = FUN_005b6090(param_1,&DAT_003b6412,3);
    if (iVar6 != 0) {
      return iVar6;
    }
    uVar2 = 7;
    break;
  case 0x74:
    uVar2 = *(undefined1 *)(param_1 + 0x2d);
    *(undefined1 *)(param_1 + 0x2c) = 0;
    if (*(int *)(param_1 + 0xc) != -0x80000000) {
      iVar8 = *(int *)(param_1 + 0x14);
      if (iVar8 == *(int *)(param_1 + 0xc)) {
        FUN_006029c0(iVar6);
      }
      *(undefined1 *)(*(int *)(param_1 + 0x10) + iVar8) = uVar2;
      *(int *)(param_1 + 0x14) = iVar8 + 1;
    }
    iVar6 = FUN_005b6090(param_1,&DAT_0038bd26,3);
    if (iVar6 != 0) {
      return iVar6;
    }
    local_30 = CONCAT22(local_30._2_2_,0x100);
    goto LAB_005b89c0;
  case 0x7b:
    uVar2 = 0xb;
  }
LAB_005b89bc:
  local_30 = CONCAT31(local_30._1_3_,uVar2);
LAB_005b89c0:
  uVar4 = FUN_0157cc00(&local_30,param_2,param_3);
LAB_005b8820:
  iVar6 = FUN_011da120(uVar4,*(undefined4 *)(param_1 + 0x20),*(undefined4 *)(param_1 + 0x24));
  return iVar6;
}

