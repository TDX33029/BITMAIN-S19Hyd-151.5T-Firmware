// FUN_00a57e10 @ 00a57e10 size=88 calls_out=2 calls_in=1
// strings: 

undefined4 FUN_00a57e10(undefined4 param_1,uint *param_2)

{
  undefined4 uVar1;
  undefined4 uStack_20;
  undefined1 *puStack_1c;
  uint *puStack_18;
  undefined1 *local_14;
  
  puStack_1c = &LAB_00632348;
  local_14 = &LAB_0131994c;
  uStack_20 = param_1;
  puStack_18 = param_2;
  uVar1 = FUN_00a57a98(&DAT_005817e5,&uStack_20);
  if (3 < *param_2) {
    FUN_019bb7e0(param_2[1],param_2[2]);
  }
  return uVar1;
}

