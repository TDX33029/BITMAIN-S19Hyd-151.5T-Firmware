// FUN_014e7094 @ 014e7094 size=84 calls_out=2 calls_in=1
// strings: 

void FUN_014e7094(undefined4 *param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined1 local_30 [4];
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined1 uStack_19;
  
  uVar2 = param_2[1];
  uStack_28 = param_2[2];
  local_30[0] = 6;
  uStack_2c = uVar2;
  uVar1 = FUN_01967538(local_30,&uStack_19,&DAT_01cfa1e4);
  *param_1 = 0;
  param_1[1] = uVar1;
  FUN_019bb7e0(*param_2,uVar2);
  return;
}

