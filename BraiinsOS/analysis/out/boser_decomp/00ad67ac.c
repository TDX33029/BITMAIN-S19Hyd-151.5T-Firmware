// FUN_00ad67ac @ 00ad67ac size=132 calls_out=3 calls_in=2
// strings: terahash_per_second

void FUN_00ad67ac(undefined1 *param_1)

{
  int iVar1;
  undefined4 local_58;
  undefined4 local_54;
  undefined4 uStack_50;
  undefined4 local_4c;
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  
  local_48 = 0x80000000;
  local_4c = 0;
  local_54 = 0;
  local_58 = 0;
  iVar1 = FUN_014a7bf4(&local_58,"terahash_per_second",0x13);
  if (iVar1 == 0) {
    local_38 = local_58;
    uStack_34 = local_54;
    uStack_30 = uStack_50;
    uStack_2c = local_4c;
    uStack_28 = local_48;
    uStack_24 = uStack_44;
    uStack_20 = uStack_40;
    uStack_1c = uStack_3c;
    FUN_0196ac88(param_1);
  }
  else {
    *(int *)(param_1 + 4) = iVar1;
    *param_1 = 6;
    FUN_0127464c(&local_58);
  }
  return;
}

