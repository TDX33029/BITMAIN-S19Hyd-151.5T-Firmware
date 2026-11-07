// FUN_009d3ee8 @ 009d3ee8 size=284 calls_out=4 calls_in=2
// strings: 

void FUN_009d3ee8(undefined4 param_1,undefined4 *param_2)

{
  undefined4 local_88;
  undefined4 local_84;
  undefined4 local_78;
  undefined4 local_74;
  undefined4 local_70;
  undefined4 local_6c;
  undefined4 local_68;
  undefined1 local_64;
  undefined4 local_60;
  undefined1 local_5c;
  undefined4 local_58;
  undefined1 local_54;
  undefined4 local_50;
  undefined1 local_4c;
  undefined4 local_48;
  undefined1 local_44;
  undefined4 local_40;
  undefined4 local_3c;
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 local_28;
  undefined4 local_24;
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 local_18;
  undefined4 local_14;
  
  local_84 = 0;
  local_88 = 0;
  local_44 = 0;
  local_48 = 0;
  local_4c = 0;
  local_50 = 0;
  local_54 = 0;
  local_58 = 0;
  local_5c = 0;
  local_60 = 0;
  local_74 = 4;
  local_78 = 0;
  local_3c = 0;
  local_40 = 0;
  local_70 = 0;
  local_6c = 0;
  local_68 = 0;
  local_64 = 0;
  FUN_009a0ecc(&local_28,param_2[0x13],param_2[0x14]);
  local_6c = local_20;
  local_38 = local_28;
  uStack_34 = local_24;
  uStack_30 = local_20;
  local_78 = local_28;
  local_74 = local_24;
  local_70 = local_20;
  local_20 = *param_2;
  local_1c = param_2[1];
  ClearExclusiveLocal();
  if (*(char *)(param_2 + 0x15) == '\0') {
    local_24 = 0;
    local_28 = 1;
    local_14 = 0;
    local_18 = 0;
    FUN_01296db8(&local_88,&local_28);
  }
  else {
    local_24 = 0;
    local_28 = 1;
    local_14 = 0;
    local_18 = 0;
    FUN_0129714c(&local_88,&local_28);
  }
  FUN_016dd1aa(param_1,&local_88,0x50);
  return;
}

