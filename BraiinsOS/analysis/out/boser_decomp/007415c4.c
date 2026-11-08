// FUN_007415c4 @ 007415c4 size=296 calls_out=3 calls_in=0
// strings: 

void FUN_007415c4(undefined1 *param_1,int param_2)

{
  undefined1 uVar1;
  undefined1 uVar2;
  undefined1 uVar3;
  undefined1 uVar4;
  undefined1 uVar5;
  char *pcVar6;
  char *pcVar7;
  int iVar8;
  undefined1 uVar9;
  bool bVar10;
  undefined4 local_98;
  undefined1 local_94;
  int local_90;
  undefined4 uStack_8c;
  undefined4 uStack_88;
  undefined4 uStack_84;
  undefined4 local_80;
  undefined4 uStack_7c;
  undefined4 uStack_78;
  int local_74;
  int local_70;
  undefined4 uStack_6c;
  undefined4 uStack_68;
  undefined4 local_64;
  undefined4 local_60;
  int local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  int iStack_3c;
  int local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  uint uStack_2c;
  undefined4 uStack_28;
  
  FUN_00797908(&local_58,*(undefined4 *)(param_2 + 4),*(undefined4 *)(param_2 + 8));
  if (local_58 == -0x80000000) {
    FUN_00797a34(&local_90);
  }
  else {
    local_90 = local_58;
    uStack_8c = uStack_54;
    uStack_88 = uStack_50;
    uStack_84 = uStack_4c;
    local_80 = local_48;
    uStack_7c = uStack_44;
    uStack_78 = uStack_40;
    local_74 = iStack_3c;
    local_70 = local_38;
    uStack_6c = uStack_34;
    uStack_68 = uStack_30;
    local_64 = uStack_2c;
    local_60 = uStack_28;
  }
  if (local_90 == -0x80000000) {
    *param_1 = 0;
    param_1[7] = 2;
  }
  else {
    uVar5 = local_60._2_1_;
    uVar4 = local_60._1_1_;
    iVar8 = local_70 * 0x12;
    uVar3 = (undefined1)local_60;
    uVar2 = local_64._3_1_;
    uVar1 = local_64._2_1_;
    pcVar7 = (char *)(local_74 + -0x12);
    do {
      pcVar6 = pcVar7;
      if (iVar8 == 0) {
        uVar9 = 2;
        goto LAB_00741698;
      }
      pcVar7 = pcVar6 + 0x12;
      iVar8 = iVar8 + -0x12;
    } while (*pcVar7 != '\0');
    local_98 = *(undefined4 *)(pcVar6 + 0x13);
    uVar9 = 0;
LAB_00741698:
    bVar10 = (local_64 & 1) != 0;
    if (bVar10) {
      local_94 = (char)(local_64 >> 8);
    }
    FUN_007390c4(&local_90);
    *(undefined4 *)(param_1 + 8) = local_98;
    param_1[7] = uVar9;
    param_1[6] = uVar5;
    param_1[5] = uVar4;
    param_1[4] = uVar3;
    param_1[3] = uVar2;
    param_1[2] = uVar1;
    param_1[1] = local_94;
    *param_1 = bVar10;
  }
  return;
}

