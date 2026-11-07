// FUN_0161d058 @ 0161d058 size=432 calls_out=7 calls_in=3
// strings: netlink_packet_route::link::buffer_tool | netlink_packet_route::link::buffer_tool

void FUN_0161d058(uint *param_1,undefined4 param_2,uint param_3,uint param_4,undefined4 param_5,
                 undefined4 param_6)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  uint local_6c;
  undefined4 local_68;
  undefined4 local_64;
  uint local_60;
  uint local_5c;
  uint local_58;
  uint local_50;
  undefined4 *local_4c;
  undefined1 *local_48;
  uint *local_44;
  code *local_40;
  uint *local_3c;
  code *local_38;
  char *local_34;
  undefined4 local_30;
  char *local_2c;
  undefined4 local_28;
  undefined *local_24;
  
  local_64 = param_6;
  local_68 = param_5;
  local_6c = param_4;
  if (param_3 == 0) {
    uVar3 = 0;
    uVar1 = 1;
  }
  else {
    uVar1 = FUN_01298504(param_3,1);
    uVar3 = param_3;
    if (uVar1 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_00664620(1,param_3);
    }
  }
  local_60 = uVar3;
  local_5c = uVar1;
  FUN_01bed4e2(uVar1,param_2,param_3);
  local_58 = param_3;
  if (param_4 < param_3) {
    if (1 < DAT_01d51b00) {
      local_48 = &LAB_018a13b8;
      local_4c = &local_68;
      local_3c = &local_50;
      local_44 = &local_6c;
      local_38 = FUN_012fd02c;
      local_40 = FUN_012fd02c;
      local_24 = &DAT_01d05fe0;
      local_28 = 0x27;
      local_2c = "netlink_packet_route::link::buffer_tool";
      local_30 = 0x27;
      local_34 = "netlink_packet_route::link::buffer_tool";
      local_50 = param_3;
      FUN_0161d588(&DAT_0059d17b,&local_4c,2,&local_34);
    }
  }
  else if (param_4 != param_3) {
    param_4 = param_4 - param_3;
    iVar2 = FUN_012985ec(param_4,1);
    if (iVar2 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_00664620(1,param_4);
    }
    if (uVar3 - param_3 < param_4) {
      FUN_006520b4(&local_60,param_3,param_4,1,1);
      uVar1 = local_5c;
      param_3 = local_58;
    }
    FUN_01bed4e2(uVar1 + param_3,iVar2,param_4);
    local_58 = param_3 + param_4;
    FUN_0134bd64(param_4,iVar2);
  }
  *param_1 = local_60;
  param_1[1] = local_5c;
  param_1[2] = local_58;
  return;
}

