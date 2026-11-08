// FUN_012672ac @ 012672ac size=220 calls_out=2 calls_in=10
// strings: 

undefined1
FUN_012672ac(uint param_1,uint param_2,int param_3,undefined4 param_4,undefined4 param_5,
            undefined4 param_6,uint param_7,uint param_8)

{
  uint uVar1;
  uint uVar2;
  uint local_58;
  uint local_54;
  uint *local_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  int local_44;
  uint local_40;
  undefined4 uStack_3c;
  uint *local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  int local_2c;
  
  if ((param_3 != 0) && (FUN_01ab9f1c(&local_58,param_3,param_5,param_6), local_44 != 0)) {
    local_40 = local_58;
    uStack_3c = local_54;
    local_38 = local_50;
    uStack_34 = uStack_4c;
    uStack_30 = uStack_48;
    local_2c = local_44;
    if ((*local_50 & param_1) == 0 && (local_50[1] & param_2) == 0) {
      uVar1 = *local_50;
      uVar2 = local_50[1];
      local_58 = param_1;
      local_54 = param_2;
      FUN_01ab4580();
      return (uVar1 & param_7) == 0 && (uVar2 & param_8) == 0;
    }
    FUN_01ab4580();
  }
  return 2;
}

