// FUN_014a5b04 @ 014a5b04 size=296 calls_out=2 calls_in=2
// strings: 

void FUN_014a5b04(undefined4 *param_1,int *param_2)

{
  undefined4 uVar1;
  int local_5c;
  int local_58;
  int local_54;
  int iStack_50;
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  int *local_28;
  code *local_24;
  int *local_20;
  undefined1 *local_1c;
  
  if (*param_2 == 0) {
    local_5c = param_2[1];
    local_20 = &local_58;
    local_58 = param_2[2];
    local_54 = param_2[3];
    iStack_50 = param_2[4];
    local_28 = &local_5c;
    local_1c = &LAB_00632348;
    local_24 = FUN_012fce60;
    FUN_00664898(&local_38,&DAT_005bd000,&local_28);
    local_48 = local_38;
    uStack_44 = uStack_34;
    uStack_40 = uStack_30;
    FUN_019bb7e0(local_58,local_54);
    uVar1 = 0x31;
  }
  else {
    local_5c = param_2[1];
    local_20 = &local_58;
    local_58 = param_2[2];
    local_54 = param_2[3];
    iStack_50 = param_2[4];
    local_28 = &local_5c;
    local_1c = &LAB_00632348;
    local_24 = FUN_012fce60;
    FUN_00664898(&local_38,&DAT_005ac8e5,&local_28);
    local_48 = local_38;
    uStack_44 = uStack_34;
    uStack_40 = uStack_30;
    FUN_019bb7e0(local_58,local_54);
    uVar1 = 0x32;
  }
  *param_1 = 0;
  param_1[1] = uVar1;
  *(undefined1 *)(param_1 + 5) = 1;
  param_1[2] = local_48;
  param_1[3] = uStack_44;
  param_1[4] = uStack_40;
  return;
}

