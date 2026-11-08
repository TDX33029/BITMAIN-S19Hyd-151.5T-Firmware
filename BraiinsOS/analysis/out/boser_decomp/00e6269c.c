// FUN_00e6269c @ 00e6269c size=504 calls_out=7 calls_in=0
// strings: MapAccess::next_value called before next_keymap with a single keystring or mapstruct Assets with 4 elementsstruct Assets with 1 elementstruct Assets with 16 elementsstruct Assets with 19 elements

void FUN_00e6269c(int *param_1,uint *param_2)

{
  int iVar1;
  int iVar2;
  uint *puVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  int iVar10;
  undefined8 uVar11;
  int local_88;
  uint local_84;
  uint local_80;
  uint local_7c;
  uint local_78;
  uint local_74;
  uint local_70;
  int iStack_6c;
  undefined4 uStack_68;
  undefined4 uStack_64;
  uint local_60;
  int local_5c;
  undefined4 local_58;
  undefined4 local_54;
  int local_50;
  uint uStack_4c;
  int local_48;
  uint local_44;
  uint uStack_40;
  uint local_3c;
  int local_38;
  uint local_34;
  int local_30;
  uint uStack_2c;
  uint uStack_28;
  
  uVar4 = param_2[9];
  uVar9 = param_2[10];
  local_88 = 2;
  local_70 = *param_2;
  local_78 = param_2[0xb];
  uVar7 = param_2[0xc];
  uVar8 = param_2[0xd];
  *param_2 = 2;
  if (uVar4 == 0x80000000) {
    local_88 = 8;
  }
  param_2[9] = 0x80000000;
  local_84 = uVar7;
  local_80 = uVar4;
  local_7c = uVar9;
  local_74 = uVar8;
  if (local_70 == 2) {
                    /* WARNING: Subroutine does not return */
    FUN_0130739c("MapAccess::next_value called before next_keymap with a single keystring or mapstruct Assets with 4 elementsstruct Assets with 1 elementstruct Assets with 16 elementsstruct Assets with 19 elements"
                 ,0x2c,&DAT_01c18664);
  }
  uVar5 = param_2[2];
  uVar6 = param_2[3];
  puVar3 = (uint *)((uint)&local_70 | 4);
  *puVar3 = param_2[1];
  puVar3[1] = uVar5;
  puVar3[2] = uVar6;
  if (uVar4 == 0x80000000) {
    local_30 = -0x80000000;
    local_38 = local_88;
    uStack_2c = uVar9;
    uStack_28 = local_78;
  }
  else {
    FUN_006666fc(&local_30,uVar9);
    local_38 = 2;
  }
  uVar5 = uStack_2c;
  iVar2 = local_30;
  iVar1 = local_38;
  uVar11 = CONCAT44(uStack_64,uStack_68);
  local_60 = local_70;
  local_5c = iStack_6c;
  local_58 = uStack_68;
  local_54 = uStack_64;
  local_50 = local_38;
  local_48 = local_30;
  local_44 = uStack_2c;
  uStack_40 = uStack_28;
  uStack_4c = uVar7;
  local_3c = uVar8;
  local_34 = uVar7;
  if ((local_70 & 1) == 0) {
    if (iStack_6c != -0x80000000) {
      iVar10 = iStack_6c;
      goto LAB_00e62810;
    }
    FUN_012c1060(&local_38,uStack_68,uStack_64);
    uVar11 = CONCAT44(local_30,local_34);
    iVar10 = local_38;
    if (local_38 != -0x80000000) goto LAB_00e62810;
    FUN_0196bf0c(uVar8,&local_50);
  }
  else {
    uVar11 = FUN_00eadcd8();
    FUN_010bd3d8(&local_60);
  }
  FUN_0196bf0c(uVar8,&local_50);
  iVar10 = -0x80000000;
LAB_00e62810:
  if (iVar1 == 4 || iVar1 == 2) {
    FUN_019bb7e0(iVar2,uVar5);
  }
  if (iVar10 == -0x80000000) {
    iVar10 = -0x80000000;
    FUN_0196bf0c(uVar8,&local_88);
  }
  if (uVar4 != 0x80000000) {
    FUN_019bb7e0(uVar4,uVar9);
  }
  if (iVar10 == -0x80000000) {
    FUN_0196bf0c(uVar8,uVar7);
    *param_1 = -0x80000000;
  }
  else {
    *param_1 = iVar10;
  }
  *(undefined8 *)(param_1 + 1) = uVar11;
  return;
}

