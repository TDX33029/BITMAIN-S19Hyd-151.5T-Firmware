// FUN_01676dec @ 01676dec size=412 calls_out=6 calls_in=1
// strings: schemeEcdsaSignerEd2 | authority

void FUN_01676dec(int param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 *local_70;
  undefined1 local_6c;
  undefined1 local_6b;
  undefined8 local_68;
  undefined4 local_60;
  undefined4 uStack_5c;
  int iStack_58;
  undefined4 uStack_54;
  undefined4 local_50;
  undefined8 local_48;
  undefined8 local_40;
  undefined8 local_38;
  int iStack_30;
  undefined4 uStack_2c;
  undefined4 local_28;
  
  local_6c = (**(code **)(param_2[1] + 0xc))(*param_2,"Uri",3);
  uVar1 = *(undefined4 *)(param_1 + 4);
  uVar2 = *(undefined4 *)(param_1 + 8);
  local_6b = 0;
  local_70 = param_2;
  local_68 = FUN_013437d0(uVar1,uVar2,0,*(undefined4 *)(param_1 + 0x14));
  FUN_01302c38(&local_70,"schemeEcdsaSignerEd2",6,&local_68,&LAB_01674ec4);
  local_60 = uVar1;
  uStack_5c = uVar2;
  iStack_58 = param_1 + 0xc;
  FUN_0134392c(&local_38,&local_60);
  if ((char)local_28 == '\x04') {
    local_50 = CONCAT31(local_50._1_3_,4);
  }
  else {
    local_60 = (undefined4)local_38;
    uStack_5c = local_38._4_4_;
    iStack_58 = iStack_30;
    uStack_54 = uStack_2c;
    local_50 = local_28;
  }
  FUN_01302c38(&local_70,"authority",9,&local_60,&DAT_01676fac);
  local_48 = FUN_013437d0(uVar1,uVar2,*(undefined4 *)(param_1 + 0xc),*(undefined4 *)(param_1 + 0x10)
                         );
  FUN_01302c38(&local_70,&DAT_0056ef14,4,&local_48,&LAB_01674ec4);
  local_38._0_4_ = uVar1;
  local_38._4_4_ = uVar2;
  iStack_30 = param_1 + 0xc;
  local_40 = FUN_013438b8(&local_38);
  FUN_01302c38(&local_70,&DAT_0050c2f4,5,&local_40,FUN_013d7df0);
  local_38 = FUN_01675d34(param_1);
  FUN_01302c38(&local_70,&DAT_005708d8,8,&local_38,FUN_013d7df0);
  FUN_01302e1c();
  return;
}

