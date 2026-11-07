// FUN_01312dd0 @ 01312dd0 size=316 calls_out=2 calls_in=1
// strings: Days of Month | Days of Month

void FUN_01312dd0(undefined4 *param_1,uint param_2)

{
  uint local_4c;
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  int local_38;
  char *local_34;
  undefined4 local_30;
  undefined4 local_2c;
  int *local_28;
  undefined1 *local_24;
  undefined4 *local_20;
  code *local_1c;
  uint *local_18;
  code *local_14;
  
  if (param_2 == 0) {
    local_14 = FUN_012fd02c;
    local_1c = FUN_012fd02c;
    local_20 = &local_2c;
    local_34 = "Days of Month";
    local_28 = &local_38;
    local_4c = 0;
    local_38 = -0x80000000;
    local_30 = 0xd;
    local_2c = 1;
    local_18 = &local_4c;
    local_24 = &LAB_012b97d8;
    FUN_00664898(&local_48,&DAT_0058940d,&local_28);
  }
  else {
    if (param_2 < 0x20) {
      *param_1 = 0x80000000;
      param_1[1] = param_2;
      return;
    }
    local_14 = FUN_012fd02c;
    local_1c = FUN_012fd02c;
    local_20 = &local_2c;
    local_30 = 0xd;
    local_28 = &local_38;
    local_38 = -0x80000000;
    local_34 = "Days of Month";
    local_2c = 0x1f;
    local_18 = &local_4c;
    local_24 = &LAB_012b97d8;
    local_4c = param_2;
    FUN_00664898(&local_48,&DAT_0059387b,&local_28);
  }
  if (local_38 != -0x80000000) {
    FUN_0134bd64(local_38,local_34);
  }
  *param_1 = local_48;
  param_1[1] = uStack_44;
  param_1[2] = uStack_40;
  return;
}

