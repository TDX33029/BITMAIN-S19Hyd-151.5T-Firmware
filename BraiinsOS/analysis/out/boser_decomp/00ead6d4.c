// FUN_00ead6d4 @ 00ead6d4 size=128 calls_out=2 calls_in=3
// strings: 

undefined4 FUN_00ead6d4(int param_1,undefined4 param_2,undefined4 param_3)

{
  undefined4 uVar1;
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 local_38;
  undefined4 local_34;
  undefined4 uStack_30;
  int local_2c;
  undefined4 *local_28;
  undefined1 *local_24;
  
  uVar1 = 0;
  if (param_1 != 0) {
    local_24 = &LAB_019ba78c;
    local_38 = param_2;
    local_34 = param_3;
    local_28 = &local_38;
    FUN_00664898(&local_48,&DAT_005af22a,&local_28);
    local_38 = local_48;
    local_34 = uStack_44;
    uStack_30 = uStack_40;
    local_28 = (undefined4 *)0x3;
    local_2c = param_1;
    uVar1 = FUN_00ead570(&local_38,&local_28);
  }
  return uVar1;
}

