// FUN_01633ea4 @ 01633ea4 size=668 calls_out=10 calls_in=1
// strings: netlink_packet_route::link::sriov::vf_port | netlink_packet_route::link::sriov::vf_port

/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_01633ea4(undefined4 *param_1,undefined4 param_2,undefined4 param_3)

{
  code *pcVar1;
  char *pcVar2;
  short sVar3;
  undefined2 uVar4;
  undefined4 *puVar5;
  undefined4 uVar6;
  int iVar7;
  undefined8 uVar8;
  int local_90;
  int local_88;
  int local_84;
  int local_80;
  undefined4 local_78;
  undefined4 local_74;
  undefined4 local_70;
  int local_6c [3];
  undefined8 local_60;
  code *local_58;
  char *pcStack_54;
  undefined4 uStack_50;
  char *local_48;
  code *local_44;
  char *local_40;
  undefined4 local_3c;
  undefined *local_38;
  char *local_30;
  code *local_2c;
  char *local_28;
  
  local_84 = 4;
  local_90 = 4;
  local_88 = 0;
  local_80 = 0;
  local_70 = 0;
  iVar7 = 0;
  local_78 = param_2;
  local_74 = param_3;
LAB_01633f00:
  FUN_0162385c(local_6c,&local_78);
  if (local_6c[0] == -0x7fffffff) {
    param_1[1] = local_88;
    param_1[2] = local_84;
    param_1[3] = local_80;
    *param_1 = 0;
    return;
  }
  uVar8 = FUN_01623bf0(param_2,param_3);
  local_2c = (code *)&LAB_0141634c;
  local_30 = (char *)&local_60;
  local_60 = uVar8;
  FUN_00664898(&local_48,&DAT_0058ced2,&local_30);
  local_30 = local_48;
  local_2c = local_44;
  local_28 = local_40;
  FUN_0160f56c(&local_48,local_6c,&local_30);
  pcVar2 = local_40;
  pcVar1 = local_44;
  if (local_48 == &DAT_80000000) {
    sVar3 = FUN_01623bc0(local_44,local_40);
    if (sVar3 != 1) {
      if (1 < DAT_01d51b00) {
        uVar4 = FUN_01623bc0(pcVar1,pcVar2);
        local_60._0_4_ = CONCAT22(local_60._2_2_,uVar4);
        local_2c = FUN_012fcf18;
        local_30 = (char *)&local_60;
        local_3c = 0x2a;
        local_38 = &DAT_01d06278;
        local_44 = (code *)0x2a;
        local_40 = "netlink_packet_route::link::sriov::vf_port";
        local_48 = "netlink_packet_route::link::sriov::vf_port";
        FUN_0161d588(&DAT_005abf47,&local_30,2,&local_48);
      }
      goto LAB_01633f00;
    }
    uVar8 = FUN_01623bf0(pcVar1,pcVar2);
    uVar6 = (undefined4)((ulonglong)uVar8 >> 0x20);
    FUN_016238f4(&local_30,(int)uVar8,uVar6);
    if (local_30 != &DAT_80000000) {
      *param_1 = 1;
      param_1[1] = local_30;
      param_1[2] = local_2c;
      param_1[3] = local_28;
      goto LAB_01634130;
    }
    FUN_01633be4(&local_48,(int)uVar8,uVar6);
    local_58 = local_44;
    pcStack_54 = local_40;
    uStack_50 = local_3c;
    if (local_48 != &DAT_00000001) {
      if (iVar7 == local_88) {
        FUN_018c4418(&local_88);
        local_90 = local_84;
      }
      local_80 = iVar7 + 1;
      puVar5 = (undefined4 *)(local_90 + iVar7 * 0xc);
      *puVar5 = local_58;
      puVar5[1] = pcStack_54;
      puVar5[2] = uStack_50;
      iVar7 = local_80;
      goto LAB_01633f00;
    }
    param_1[1] = local_44;
    param_1[2] = local_40;
    param_1[3] = local_3c;
    *param_1 = 1;
  }
  else {
    param_1[1] = local_48;
    param_1[2] = local_44;
    *param_1 = 1;
    param_1[3] = local_40;
  }
LAB_01634130:
  FUN_01631138(&local_88);
  return;
}

