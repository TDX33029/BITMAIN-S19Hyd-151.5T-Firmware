// FUN_010f4fd4 @ 010f4fd4 size=172 calls_out=2 calls_in=4
// strings: a Display implementation returned an error unexpectedly

void FUN_010f4fd4(undefined4 *param_1,undefined4 *param_2)

{
  int iVar1;
  undefined4 *local_34;
  undefined4 local_30;
  undefined4 local_2c;
  undefined4 local_28;
  undefined4 *local_24;
  undefined *local_20;
  undefined1 *local_1c;
  undefined4 local_18;
  undefined1 uStack_11;
  
  local_20 = &DAT_01886314;
  local_24 = &local_30;
  local_28 = 0;
  local_30 = 0;
  local_18 = 0;
  local_2c = 1;
  local_1c = &DAT_60000020;
  local_34 = param_2;
  iVar1 = FUN_00604528(&local_34,&local_24);
  if (iVar1 != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_00fb74f8("a Display implementation returned an error unexpectedly",0x37,&uStack_11,
                 &DAT_0188632c,&DAT_018af130);
  }
  *param_1 = local_30;
  param_1[1] = local_2c;
  param_1[2] = local_28;
  (**(code **)*param_2)(param_2);
  return;
}

